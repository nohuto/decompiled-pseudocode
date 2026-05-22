/*
 * XREFs of ?SendHomeGesture@MPCManager@@QEAAXKK_KII@Z @ 0x1800B1718
 * Callers:
 *     ?TriggerHomeGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@W4InputType@@I@Z @ 0x1800B27B0 (-TriggerHomeGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@W4InputType@@I@Z.c)
 *     _lambda_a8ea4032c7598feaa37b761b815ce0d1_::operator() @ 0x1800BE3FC (_lambda_a8ea4032c7598feaa37b761b815ce0d1_--operator().c)
 *     ?Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801DAEF0 (-Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801E0880 (-SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z @ 0x1801E5284 (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z.c)
 *     ?Process3DInput@MPCHomeGestureProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801E9E30 (-Process3DInput@MPCHomeGestureProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A6FE0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     ??$MPCManager_SendHomeGesture@AEAKAEAKAEA_KAEAIAEAI@ISMTracing@@SAXAEAK0AEA_KAEAI2@Z @ 0x1800ADC9C (--$MPCManager_SendHomeGesture@AEAKAEAKAEA_KAEAIAEAI@ISMTracing@@SAXAEAK0AEA_KAEAI2@Z.c)
 */

void __fastcall MPCManager::SendHomeGesture(
        MPCManager *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v7; // r14d
  unsigned int v9; // r15d
  __int64 v11; // rax
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  __int64 v14; // [rsp+80h] [rbp+38h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+40h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+48h] BYREF
  unsigned __int64 v17; // [rsp+98h] [rbp+50h] BYREF

  v17 = a4;
  v16 = a3;
  v15 = a2;
  v7 = a6;
  v9 = a5;
  v11 = **((_QWORD **)this + 9);
  v14 = v11;
  while ( !*(_BYTE *)(v11 + 25) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int64, unsigned int, unsigned int))(**(_QWORD **)(v11 + 40) + 64LL))(
            *(_QWORD *)(v11 + 40),
            a3,
            a2,
            a4,
            v9,
            v7);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        135LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v12);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v14);
    v11 = v14;
  }
  ISMTracing::MPCManager_SendHomeGesture<unsigned long &,unsigned long &,unsigned __int64 &,unsigned int &,unsigned int &>(
    &v16,
    &v15,
    &v17,
    &a5,
    &a6);
}
