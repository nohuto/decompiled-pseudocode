/*
 * XREFs of GridLayoutFactory::_ForEachGridItem__lambda_d8d38b7ecc183cf7a075ba43fd3ea28a___ @ 0x1804D0984
 * Callers:
 *     ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x1804D1838 (-_CalculateRowSize@GridLayoutFactory@@AEAA-AUCSize@Geometry@@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_d8d38b7ecc183cf7a075ba43fd3ea28a_::operator() @ 0x180237552 (_lambda_d8d38b7ecc183cf7a075ba43fd3ea28a_--operator().c)
 */

__int64 __fastcall GridLayoutFactory::_ForEachGridItem__lambda_d8d38b7ecc183cf7a075ba43fd3ea28a___(
        __int64 a1,
        __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v7; // esi
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 536) + 24LL))(*(_QWORD *)(a1 + 536), &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x100,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v7 = 0;
  if ( v13 )
  {
    while ( 1 )
    {
      v14 = 0LL;
      v8 = *(_QWORD *)(a1 + 536);
      v9 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
      v10 = v9(v8, v7, &GUID_dda13508_825c_43f9_bcd8_7d0dc0e5d932, &v14);
      v5 = v10;
      if ( v10 < 0 )
        break;
      v10 = lambda_d8d38b7ecc183cf7a075ba43fd3ea28a_::operator()(a2, v14);
      v5 = v10;
      if ( v10 < 0 )
      {
        v11 = 262LL;
        goto LABEL_11;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
      if ( ++v7 >= v13 )
        return 0LL;
    }
    v11 = 261LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
      (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    return v5;
  }
  return 0LL;
}
