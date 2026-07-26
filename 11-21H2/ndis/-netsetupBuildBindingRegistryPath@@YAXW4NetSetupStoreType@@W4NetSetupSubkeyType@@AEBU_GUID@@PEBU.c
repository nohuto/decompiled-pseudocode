/*
 * XREFs of ?netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU3@33PEA_W@Z @ 0x1C01384E8
 * Callers:
 *     ndisIsLwfBindingEnabled @ 0x1C0130D84 (ndisIsLwfBindingEnabled.c)
 *     ndisIsLwfBindingEnabled_0 @ 0x1C0130E28 (ndisIsLwfBindingEnabled_0.c)
 *     ndisIsProtocolBindingEnabled @ 0x1C0130EB8 (ndisIsProtocolBindingEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ??$swprintf_s@$0CI@@@YAHAEAY0CI@_WPEB_WZZ @ 0x1C00CD9A4 (--$swprintf_s@$0CI@@@YAHAEAY0CI@_WPEB_WZZ.c)
 */

void __fastcall netsetupBuildBindingRegistryPath(
        int a1,
        __int64 a2,
        unsigned int *a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned int *a6,
        wchar_t *a7)
{
  _DWORD *v8; // rdx
  const wchar_t *v9; // rcx
  unsigned int v10; // r14d
  unsigned int v11; // ecx
  unsigned int v12; // r9d
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // r11d
  __int64 v16; // [rsp+20h] [rbp-130h]
  __int64 v17; // [rsp+28h] [rbp-128h]
  __int64 v18; // [rsp+30h] [rbp-120h]
  __int64 v19; // [rsp+38h] [rbp-118h]
  __int64 v20; // [rsp+40h] [rbp-110h]
  __int64 v21; // [rsp+48h] [rbp-108h]
  __int64 v22; // [rsp+50h] [rbp-100h]
  __int64 v23; // [rsp+58h] [rbp-F8h]
  __int64 v24; // [rsp+60h] [rbp-F0h]
  unsigned int v25; // [rsp+80h] [rbp-D0h]
  unsigned int v26; // [rsp+88h] [rbp-C8h]
  unsigned int v27; // [rsp+90h] [rbp-C0h]
  unsigned int v28; // [rsp+98h] [rbp-B8h]
  unsigned int v29; // [rsp+A0h] [rbp-B0h]
  unsigned int v30; // [rsp+A8h] [rbp-A8h]
  unsigned __int16 v31; // [rsp+10Ch] [rbp-44h]
  int v32; // [rsp+110h] [rbp-40h]
  unsigned __int8 v33; // [rsp+114h] [rbp-3Ch]
  wchar_t Src[40]; // [rsp+120h] [rbp-30h] BYREF

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v8 = a4;
      if ( !a4 )
        v8 = a5;
      v9 = L"Protocols";
      if ( !a4 )
        v9 = L"Filters";
      v25 = *((unsigned __int16 *)v8 + 2);
      v26 = *((unsigned __int16 *)v8 + 3);
      v27 = *((unsigned __int8 *)v8 + 8);
      v28 = *((unsigned __int8 *)v8 + 9);
      v29 = *((unsigned __int8 *)v8 + 10);
      v30 = *((unsigned __int8 *)v8 + 11);
      swprintf_s(
        a7,
        0x100uLL,
        L"\\Registry\\Machine\\DEVICES\\Networking\\NetAdapters\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\Bindi"
         "ngs\\%ws\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        *a3,
        *((unsigned __int16 *)a3 + 2),
        *((unsigned __int16 *)a3 + 3),
        *((unsigned __int8 *)a3 + 8),
        *((unsigned __int8 *)a3 + 9),
        *((unsigned __int8 *)a3 + 10),
        *((unsigned __int8 *)a3 + 11),
        *((unsigned __int8 *)a3 + 12),
        *((unsigned __int8 *)a3 + 13),
        *((unsigned __int8 *)a3 + 14),
        *((unsigned __int8 *)a3 + 15),
        v9,
        *v8,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        *((unsigned __int8 *)v8 + 12),
        *((unsigned __int8 *)v8 + 13),
        *((unsigned __int8 *)v8 + 14),
        *((unsigned __int8 *)v8 + 15),
        __PAIR64__(v29, v30),
        __PAIR64__(v27, v28),
        __PAIR64__(v25, v26));
      if ( a6 )
      {
        LODWORD(v24) = *((unsigned __int8 *)a6 + 15);
        LODWORD(v23) = *((unsigned __int8 *)a6 + 14);
        LODWORD(v22) = *((unsigned __int8 *)a6 + 13);
        LODWORD(v21) = *((unsigned __int8 *)a6 + 12);
        LODWORD(v20) = *((unsigned __int8 *)a6 + 11);
        LODWORD(v19) = *((unsigned __int8 *)a6 + 10);
        LODWORD(v18) = *((unsigned __int8 *)a6 + 9);
        LODWORD(v17) = *((unsigned __int8 *)a6 + 8);
        LODWORD(v16) = *((unsigned __int16 *)a6 + 3);
        swprintf_s<40>(
          Src,
          L"-{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
          *a6,
          *((unsigned __int16 *)a6 + 2),
          v16,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
        wcscat_s(a7, 0x100uLL, Src);
      }
    }
  }
  else
  {
    v10 = *a3;
    v11 = *a3 ^ a3[3];
    v12 = a3[1];
    v13 = v11;
    v14 = a3[2];
    v15 = v12;
    v31 = v12;
    v32 = v14;
    v33 = v11;
    if ( a4 )
    {
      v10 = v12 ^ *a4;
      v12 = v14 ^ a4[1];
      v14 = v11 ^ a4[2];
      v31 = v12;
      v15 = v12;
      v11 = v10 ^ a4[3];
      v32 = v14;
      v33 = v11;
      v13 = v11;
    }
    if ( a5 )
    {
      v12 = v14 ^ a5[1];
      v10 = v15 ^ *a5;
      v14 = v13 ^ a5[2];
      v11 = v10 ^ a5[3];
      v31 = v12;
      v33 = v11;
      v13 = v11;
      v32 = v14;
      v15 = v12;
    }
    if ( a6 )
    {
      v12 = v14 ^ a6[1];
      v10 = v15 ^ *a6;
      v11 = v10 ^ a6[3];
      v31 = v12;
      v33 = v11;
      v32 = v13 ^ a6[2];
    }
    swprintf_s(
      a7,
      0x100uLL,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\BindPaths\\{%08x-%04x-%04x-%02x%02x-%02x%0"
       "2x%02x%02x%02x%02x}\\Properties",
      v10,
      v31,
      HIWORD(v12),
      v32 & 0x1F | 0xC0,
      BYTE1(v32),
      BYTE2(v32),
      HIBYTE(v32),
      v33,
      BYTE1(v11),
      BYTE2(v11),
      HIBYTE(v11));
  }
}
