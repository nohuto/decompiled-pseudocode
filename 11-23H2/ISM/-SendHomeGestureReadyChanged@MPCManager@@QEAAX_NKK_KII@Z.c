/*
 * XREFs of ?SendHomeGestureReadyChanged@MPCManager@@QEAAX_NKK_KII@Z @ 0x1800B17E0
 * Callers:
 *     _lambda_152589ecad8ae636cc0bdcee60e887b4_::operator() @ 0x1800BE2F4 (_lambda_152589ecad8ae636cc0bdcee60e887b4_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A6FE0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     ??$MPCManager_SendHomeGestureReadyChanged@AEA_NAEAKAEAKAEA_KAEAIAEAI@ISMTracing@@SAXAEA_NAEAK1AEA_KAEAI3@Z @ 0x1800ADD90 (--$MPCManager_SendHomeGestureReadyChanged@AEA_NAEAKAEAKAEA_KAEAIAEAI@ISMTracing@@SAXAEA_NAEAK1AE.c)
 */

void __fastcall MPCManager::SendHomeGestureReadyChanged(
        MPCManager *this,
        _BOOL8 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v8; // r14d
  unsigned int v10; // r15d
  bool v11; // si
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v16; // [rsp+80h] [rbp+40h] BYREF
  bool v17; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v18; // [rsp+90h] [rbp+50h] BYREF
  unsigned int v19; // [rsp+98h] [rbp+58h] BYREF

  v19 = a4;
  v18 = a3;
  v17 = a2;
  v8 = a7;
  v10 = a6;
  v11 = a2;
  v12 = a5;
  v13 = **((_QWORD **)this + 9);
  v16 = v13;
  while ( !*(_BYTE *)(v13 + 25) )
  {
    LOBYTE(a2) = v11;
    v14 = (*(__int64 (__fastcall **)(_QWORD, _BOOL8, _QWORD, _QWORD, unsigned __int64, unsigned int, unsigned int))(**(_QWORD **)(v13 + 40) + 72LL))(
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
        153LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v14);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v16);
    v13 = v16;
  }
  ISMTracing::MPCManager_SendHomeGestureReadyChanged<bool &,unsigned long &,unsigned long &,unsigned __int64 &,unsigned int &,unsigned int &>(
    &v17,
    &v19,
    &v18,
    &a5,
    &a6,
    &a7);
}
