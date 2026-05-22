/*
 * XREFs of ?SendHomeGestureReadyChanged@MPCManager@@QEAAX_NKK_KII@Z @ 0x1800C3954
 * Callers:
 *     _lambda_152589ecad8ae636cc0bdcee60e887b4_::operator() @ 0x1800CE9F0 (_lambda_152589ecad8ae636cc0bdcee60e887b4_--operator().c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18006A564 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MPCManager_SendHomeGestureReadyChanged_@ISMTracing@@QEAAX_NKK_KII@Z @ 0x1800C1C60 (-MPCManager_SendHomeGestureReadyChanged_@ISMTracing@@QEAAX_NKK_KII@Z.c)
 */

void __fastcall MPCManager::SendHomeGestureReadyChanged(
        MPCManager *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v8; // ebp
  unsigned int v10; // r14d
  char v11; // si
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  ISMTracing *v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v8 = a7;
  v10 = a6;
  v11 = a2;
  v12 = a5;
  v13 = **((_QWORD **)this + 9);
  v18 = v13;
  while ( !*(_BYTE *)(v13 + 25) )
  {
    LOBYTE(a2) = v11;
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, unsigned __int64, unsigned int, unsigned int))(**(_QWORD **)(v13 + 40) + 72LL))(
            *(_QWORD *)(v13 + 40),
            a2,
            a4,
            a3,
            v12,
            v10,
            v8);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x99,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v14);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v18);
    v13 = v18;
  }
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<ISMTracing>::get(v15, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCManager_SendHomeGestureReadyChanged_(v16, v11, a4, a3, v12, v10, v8);
  }
}
