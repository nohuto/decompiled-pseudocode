/*
 * XREFs of ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x180025FCC
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180021540 (AudioServerIsFormatSupported.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002C050 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsSPDIFFormat(const struct tWAVEFORMATEX *a1)
{
  unsigned int v1; // edx
  BOOL v2; // edi
  unsigned int v4; // r9d
  WORD wFormatTag; // r10
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  DWORD v10; // ebx
  HRESULT v11; // eax
  __int64 v12; // rax
  DWORD cchName; // [rsp+68h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+70h] [rbp+18h] BYREF

  v1 = g_cCompressedPassThruFormats;
  v2 = 0;
  hKey = 0LL;
  if ( !g_cCompressedPassThruFormats )
  {
    if ( RegOpenKeyExW(
           HKEY_LOCAL_MACHINE,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\MMDevices\\SPDIF_Formats",
           0,
           8u,
           &hKey) )
    {
      goto LABEL_13;
    }
    v10 = 0;
    while ( 1 )
    {
      cchName = 260;
      if ( RegEnumKeyExW(hKey, v10, sz, &cchName, 0LL, 0LL, 0LL, 0LL) )
        break;
      v11 = CLSIDFromString(sz, &g_rgCompressedPassThruFormats + v10);
      v1 = g_cCompressedPassThruFormats;
      if ( v11 >= 0 )
        v1 = ++g_cCompressedPassThruFormats;
      if ( ++v10 >= 0x20 )
        goto LABEL_2;
    }
    v1 = g_cCompressedPassThruFormats;
  }
LABEL_2:
  if ( a1 )
  {
    v4 = 0;
    if ( v1 )
    {
      wFormatTag = a1->wFormatTag;
      do
      {
        v6 = 16LL * v4;
        if ( wFormatTag == 0xFFFE )
        {
          v12 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
              - *(_QWORD *)((char *)&g_rgCompressedPassThruFormats.Data1 + v6);
          if ( !v12 )
            v12 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)&g_rgCompressedPassThruFormats.Data4[v6];
          v2 = v12 == 0;
          if ( !v12 )
            break;
        }
        else
        {
          v7 = *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2)
             - *(_QWORD *)((char *)&g_rgCompressedPassThruFormats.Data1 + v6 + 2);
          if ( *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2) == *(_QWORD *)((char *)&g_rgCompressedPassThruFormats.Data1 + v6 + 2) )
          {
            v8 = *(unsigned int *)&g_rgCompressedPassThruFormats.Data4[v6 + 2];
            v7 = *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] - v8;
            if ( *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] == v8 )
              v7 = *(unsigned __int16 *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[6]
                 - (unsigned __int64)*(unsigned __int16 *)&g_rgCompressedPassThruFormats.Data4[v6 + 6];
          }
          if ( !v7 )
          {
            if ( *(_WORD *)((char *)&g_rgCompressedPassThruFormats.Data1 + v6) == wFormatTag )
            {
              v2 = 1;
              break;
            }
            v2 = 0;
          }
        }
        ++v4;
      }
      while ( v4 < v1 );
    }
  }
LABEL_13:
  if ( hKey )
    RegCloseKey(hKey);
  return v2;
}
