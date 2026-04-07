/*
 * XREFs of ??0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x18003D84C
 * Callers:
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18003D34C (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?ForceHighColor@@YAKXZ @ 0x18003DB84 (-ForceHighColor@@YAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RgbaSwapChains@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003DBCC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RgbaSwapChains@@@details@wil@@QEAAX_NW4Re.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

CDWMDisplay *__fastcall CDWMDisplay::CDWMDisplay(
        CDWMDisplay *this,
        char a2,
        struct CDWMDXGIAdapter *a3,
        const struct DXGIOutputInfo *a4)
{
  char v8; // al
  int v9; // ecx
  __int64 v10; // rax
  _WORD *v11; // rcx
  __int64 v12; // rdx
  __int16 v13; // r8
  _WORD *v14; // rax
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  int v18; // ecx
  CDWMDisplay *result; // rax
  int v20; // edx
  int v21; // r8d
  int v22; // r9d
  int v23; // ecx
  __int64 v24; // [rsp+20h] [rbp-89h] BYREF
  _BYTE v25[8]; // [rsp+28h] [rbp-81h] BYREF
  _BYTE v26[96]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v27; // [rsp+90h] [rbp-19h]

  v24 = 0LL;
  memset_0(v26, 0, 0x98uLL);
  *(_DWORD *)this = 1;
  *((_BYTE *)this + 164) = (*((_DWORD *)a4 + 55) & 2) != 0;
  *((_QWORD *)this + 21) = *((_QWORD *)a3 + 42);
  *((_DWORD *)this + 44) = *((_DWORD *)a4 + 32);
  *((_DWORD *)this + 46) = *((_DWORD *)a3 + 86);
  *((_QWORD *)this + 2) = *((_QWORD *)a4 + 13);
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 45) = *((_DWORD *)a4 + 31);
  *((_BYTE *)this + 252) = (*((_DWORD *)a4 + 55) & 4) != 0;
  *((_BYTE *)this + 253) = (*((_DWORD *)a4 + 55) & 8) != 0;
  if ( !a2
    || (*(int (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)a4 + 1) + 96LL))(*((_QWORD *)a4 + 1), v25) < 0
    || (v8 = 1, (v25[0] & 0x10) == 0) )
  {
    v8 = 0;
  }
  *((_BYTE *)this + 255) = v8;
  v9 = *((_DWORD *)a4 + 55) & 0x400;
  *((_BYTE *)this + 256) = v9 != 0;
  if ( (v9 & 0x400) != 0 )
  {
    *((_DWORD *)this + 57) = *((_DWORD *)a4 + 44);
    *((_QWORD *)this + 29) = *((_QWORD *)a4 + 20);
    v10 = *((_QWORD *)a4 + 21);
  }
  else
  {
    *((_DWORD *)this + 57) = 1;
    *((_QWORD *)this + 29) = *((_QWORD *)a4 + 19);
    v10 = *((_QWORD *)a4 + 19);
  }
  *((_QWORD *)this + 30) = v10;
  v11 = (_WORD *)((char *)this + 96);
  v12 = 32LL;
  *((_DWORD *)this + 62) = *((_DWORD *)a4 + 73);
  do
  {
    v13 = *(_WORD *)((char *)v11 + a4 - (CDWMDisplay *)((char *)this + 96) + 224);
    if ( !v13 )
      break;
    *v11++ = v13;
    --v12;
  }
  while ( v12 );
  v14 = v11 - 1;
  if ( v12 )
    v14 = v11;
  *v14 = 0;
  if ( ((*((_DWORD *)a4 + 45) - 2) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)this + 47) = *((_DWORD *)a4 + 35);
    v15 = *((_DWORD *)a4 + 36);
  }
  else
  {
    *((_DWORD *)this + 47) = *((_DWORD *)a4 + 36);
    v15 = *((_DWORD *)a4 + 35);
  }
  *((_DWORD *)this + 48) = v15;
  if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))a4)(
         *(_QWORD *)a4,
         &GUID_068346e8_aaec_4b84_add7_137f513f77a1,
         &v24) < 0
    || (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v24 + 216LL))(v24, v26) < 0 )
  {
    v27 = 8LL;
  }
  if ( v24 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    v24 = 0LL;
  }
  if ( ForceHighColor() )
    v27 = 0xC0000000ALL;
  v16 = ForceHighColor() - 1;
  if ( !v16 )
  {
    if ( *((_DWORD *)a3 + 74) != 32902 )
      goto LABEL_32;
    goto LABEL_34;
  }
  v17 = v16 - 1;
  if ( !v17 )
    goto LABEL_34;
  if ( v17 == 1 )
    goto LABEL_32;
  v18 = *((_DWORD *)a4 + 75);
  if ( v18 )
  {
    v23 = v18 - 1;
    if ( v23 )
    {
      if ( (unsigned int)(v23 - 1) > 1 )
        goto LABEL_22;
LABEL_32:
      *((_DWORD *)this + 51) = 10;
      *((_DWORD *)this + 55) = 1;
      goto LABEL_23;
    }
LABEL_34:
    *((_DWORD *)this + 51) = 24;
    *((_DWORD *)this + 55) = 12;
    goto LABEL_23;
  }
LABEL_22:
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RgbaSwapChains>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetImpl'::`2'::impl,
    0LL);
  *((_DWORD *)this + 51) = 87;
  *((_DWORD *)this + 55) = 0;
LABEL_23:
  *((_DWORD *)this + 49) = *((_DWORD *)a4 + 38);
  *((_DWORD *)this + 50) = *((_DWORD *)a4 + 39);
  *((_DWORD *)this + 54) = *((_DWORD *)a4 + 45);
  *((_DWORD *)this + 56) = *((_DWORD *)a4 + 72);
  *((_DWORD *)this + 52) = *((_DWORD *)a4 + 46);
  *((_DWORD *)this + 53) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = *((_DWORD *)a4 + 35);
  *((_DWORD *)this + 9) = *((_DWORD *)a4 + 36);
  result = this;
  v20 = *((_DWORD *)a4 + 52);
  v21 = *((_DWORD *)a4 + 53);
  v22 = *((_DWORD *)a4 + 54);
  *((_DWORD *)this + 14) = *((_DWORD *)a4 + 51);
  *((_DWORD *)this + 15) = v20;
  *((_DWORD *)this + 16) = v21;
  *((_DWORD *)this + 17) = v22;
  *((_DWORD *)this + 10) = *((_DWORD *)a4 + 47);
  *((_DWORD *)this + 11) = *((_DWORD *)a4 + 48);
  *((_DWORD *)this + 12) = *((_DWORD *)a4 + 49);
  *((_DWORD *)this + 13) = *((_DWORD *)a4 + 50);
  return result;
}
