/*
 * XREFs of sub_180011DFC @ 0x180011DFC
 * Callers:
 *     sub_18000E9EC @ 0x18000E9EC (sub_18000E9EC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_180011BC4 @ 0x180011BC4 (sub_180011BC4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180011DFC(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  int v4; // ebx
  _BOOL8 v8; // rbp
  unsigned int v9; // edi
  FARPROC RtlQueryFeatureConfiguration; // rax
  HMODULE v11; // rax
  int v12; // edx
  int v13; // eax
  unsigned int v14; // ecx
  _BYTE v16[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h] BYREF
  int v18; // [rsp+40h] [rbp-38h]

  v4 = 0;
  v8 = a3 == 0;
  v9 = 0;
  v17 = 0LL;
  v18 = 0;
  RtlQueryFeatureConfiguration = (FARPROC)qword_1800328F0;
  if ( !qword_1800328F0 )
  {
    v11 = sub_180011BC4();
    RtlQueryFeatureConfiguration = GetProcAddress(v11, "RtlQueryFeatureConfiguration");
    qword_1800328F0 = (__int64)RtlQueryFeatureConfiguration;
    if ( !RtlQueryFeatureConfiguration )
    {
      v12 = -1073741511;
      goto LABEL_9;
    }
  }
  v13 = ((__int64 (__fastcall *)(_QWORD, _BOOL8, _BYTE *, __int64 *))RtlQueryFeatureConfiguration)(a2, v8, v16, &v17);
  v12 = v13;
  if ( v13 )
  {
    if ( v13 != 279 )
      goto LABEL_9;
    v14 = HIDWORD(v17);
    v9 = 1;
  }
  else
  {
    v14 = HIDWORD(v17);
    v9 = 1;
    *(_DWORD *)a1 = (HIDWORD(v17) >> 4) & 3;
    *(_BYTE *)(a1 + 4) = BYTE1(v14) & 0x3F;
    *(_DWORD *)(a1 + 12) = v18;
    *(_DWORD *)(a1 + 8) = (unsigned __int16)v14 >> 14;
    *(_DWORD *)(a1 + 20) = (v14 >> 6) & 1;
  }
  *(_DWORD *)(a1 + 16) = (v14 >> 7) & 1;
LABEL_9:
  if ( a4 )
  {
    LOBYTE(v4) = v12 != -2147483614;
    *a4 = v4;
  }
  return v9;
}
