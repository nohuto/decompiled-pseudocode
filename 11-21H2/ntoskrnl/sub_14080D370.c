/*
 * XREFs of sub_14080D370 @ 0x14080D370
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcscat_s @ 0x1403E7610 (wcscat_s.c)
 *     wcscpy_s @ 0x1403E76C0 (wcscpy_s.c)
 *     wcsncat_s @ 0x1403E7750 (wcsncat_s.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     sub_14041D9C0 @ 0x14041D9C0 (sub_14041D9C0.c)
 *     sub_14080D780 @ 0x14080D780 (sub_14080D780.c)
 */

NTSTATUS __fastcall sub_14080D370(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  __int16 v4; // r8
  unsigned __int64 i; // rdx
  __int16 v6; // cx
  __int64 j; // r8
  unsigned int v8; // r9d
  unsigned int v9; // r10d
  unsigned int v10; // esi
  int v11; // r14d
  unsigned __int64 v12; // r11
  __int64 v13; // rcx
  NTSTATUS result; // eax
  int v15; // edi
  ULONG v16; // r14d
  NTSTATUS k; // eax
  NTSTATUS v18; // esi
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  int v21; // esi
  char v22[4]; // [rsp+30h] [rbp-908h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-904h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-900h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-8F8h] BYREF
  OBJECT_ATTRIBUTES v26; // [rsp+48h] [rbp-8F0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-8C0h] BYREF
  UNICODE_STRING v28; // [rsp+88h] [rbp-8B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-8A0h] BYREF
  WCHAR SourceString[8]; // [rsp+C8h] [rbp-870h] BYREF
  __int128 v31; // [rsp+D8h] [rbp-860h]
  __int128 v32; // [rsp+E8h] [rbp-850h]
  __int64 v33; // [rsp+F8h] [rbp-840h]
  int v34; // [rsp+100h] [rbp-838h]
  _BYTE KeyInformation[12]; // [rsp+110h] [rbp-828h] BYREF
  unsigned int v36; // [rsp+11Ch] [rbp-81Ch]
  wchar_t Src[504]; // [rsp+120h] [rbp-818h] BYREF
  wchar_t Dst[512]; // [rsp+510h] [rbp-428h] BYREF

  DestinationString = 0LL;
  v3 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  *(_OWORD *)SourceString = xmmword_140024E40;
  v31 = xmmword_140024E50;
  v32 = xmmword_140024E60;
  v33 = 0x2C7EFB57828734DALL;
  v34 = 593434642;
  v4 = -21647;
  for ( i = 0LL; i < 0x1E; ++i )
  {
    v6 = SourceString[i] ^ (v4 + SourceString[i]);
    v4 = v6;
  }
  if ( v6 != -18097 )
    return -1073741823;
  for ( j = 52LL; j >= 0; --j )
  {
    v8 = *(_DWORD *)((char *)SourceString + j);
    v9 = *(_DWORD *)((char *)&SourceString[2] + j);
    v10 = -957401312;
    v11 = 32;
    v12 = 3337565984LL;
    do
    {
      v9 -= (v10 + *(_DWORD *)&byte_140010240[4 * ((v12 >> 11) & 3)]) ^ (v8 + ((16 * v8) ^ (v8 >> 5)));
      v10 += 1640531527;
      v12 = v10;
      v8 -= (v10 + *(_DWORD *)&byte_140010240[4 * (v10 & 3)]) ^ (v9 + ((16 * v9) ^ (v9 >> 5)));
      --v11;
    }
    while ( v11 );
    *(_DWORD *)((char *)SourceString + j) = v8;
    *(_DWORD *)((char *)&SourceString[2] + j) = v9;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( *((_BYTE *)KeGetCurrentThread() + 562) )
  {
    if ( a2 )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a2;
      *(_DWORD *)v13 = *(_DWORD *)v13;
      *a2 = InitSafeBootMode;
    }
  }
  else if ( a2 )
  {
    *a2 = InitSafeBootMode;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v15 = result;
  if ( result >= 0 )
  {
    v16 = 0;
    for ( k = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, KeyInformation, 0x400u, &ResultLength);
          ;
          k = ZwEnumerateKey(KeyHandle, v16, KeyBasicInformation, KeyInformation, 0x400u, &ResultLength) )
    {
      v18 = k;
      if ( k == -2147483622 )
        break;
      v28 = 0LL;
      memset(&v26, 0, 44);
      Handle = 0LL;
      if ( k < 0 )
      {
        v15 = k;
        break;
      }
      if ( v36 + 64 > 0x400 )
      {
        v15 = -1073741801;
      }
      else
      {
        wcscpy_s(Dst, 0x200uLL, SourceString);
        wcsncat_s(Dst, 0x200uLL, Src, (unsigned __int64)v36 >> 1);
        wcscat_s(Dst, 0x200uLL, asc_140865B20);
        RtlInitUnicodeString(&v28, Dst);
        v26.Length = 48;
        v26.RootDirectory = 0LL;
        v26.Attributes = 576;
        v26.ObjectName = &v28;
        *(_OWORD *)&v26.SecurityDescriptor = 0LL;
        v19 = ZwOpenKey(&Handle, 0x20019u, &v26);
        if ( v19 < 0 )
        {
          v15 = v19;
        }
        else
        {
          v22[0] = 0;
          v21 = sub_14080D780(Handle, v22);
          if ( v21 >= 0 && !v22[0] )
            v21 = sub_14041D9C0((__int64)Handle, v20);
          ZwClose(Handle);
          if ( v21 >= 0 )
            v21 = v15;
          v15 = v21;
        }
        ++v16;
      }
    }
    ZwClose(KeyHandle);
    if ( v18 != -2147483622 )
      return v15;
    return v3;
  }
  return result;
}
