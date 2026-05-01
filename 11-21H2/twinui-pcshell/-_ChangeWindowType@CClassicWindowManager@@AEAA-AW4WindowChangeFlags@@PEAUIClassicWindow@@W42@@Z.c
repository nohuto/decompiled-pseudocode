/*
 * XREFs of ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180105678
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x1801031C0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?HandleTaskListDeletedChange@CClassicWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x1801044F0 (-HandleTaskListDeletedChange@CClassicWindowManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?RefreshCollection@CClassicWindowManager@@UEAAJXZ @ 0x180105590 (-RefreshCollection@CClassicWindowManager@@UEAAJXZ.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1802F0FA8 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 * Callees:
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x1801051D8 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 *     CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___ @ 0x1801053C0 (CClassicWindowManager--ForEachWindow__lambda_9464cc021c09e3331999e98539241978___.c)
 *     ?RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180105498 (-RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x1801054EC (-AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     CClassicWindowManager::ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___ @ 0x180105B18 (CClassicWindowManager--ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1802F0BA0 (-RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::_ChangeWindowType(
        CClassicWindowManager *a1,
        struct IClassicWindow *a2,
        unsigned int a3)
{
  struct IClassicWindow **v6; // rax
  struct IClassicWindow *v7; // rbx
  unsigned int v8; // eax
  CClassicWindowManager *v9; // rcx
  unsigned int v10; // esi
  int v11; // r15d
  struct IClassicWindow ***v13; // rdx
  struct IClassicWindow **v14; // [rsp+20h] [rbp-20h] BYREF
  CClassicWindowManager *v15; // [rsp+28h] [rbp-18h]
  struct IClassicWindow **v16; // [rsp+30h] [rbp-10h] BYREF
  CClassicWindowManager *v17; // [rsp+38h] [rbp-8h]
  struct IClassicWindow *v18; // [rsp+78h] [rbp+38h] BYREF
  struct IClassicWindow *v19; // [rsp+88h] [rbp+48h] BYREF

  v6 = (struct IClassicWindow **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 96LL))(a2);
  v7 = *v6;
  if ( *v6 )
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 8LL))(*v6);
  v8 = (*(__int64 (__fastcall **)(struct IClassicWindow *, _QWORD))(*(_QWORD *)a2 + 112LL))(a2, a3);
  v10 = v8;
  v11 = v8 & 0x80;
  if ( (v8 & 0x80) != 0 )
  {
    CClassicWindowManager::AddApplicationView(v9, a2);
  }
  else if ( (v8 & 0x100) != 0 )
  {
    CClassicWindowManager::RemoveApplicationView((__int64)v9, (__int64)a2, 0);
  }
  if ( (v10 & 0x11) != 0 )
    CClassicWindowManager::RecomputeOwner(a1, a2);
  if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 120LL))(a2)
    && (v10 & 0xC) != 0
    && !v11 )
  {
    RaiseApplicationViewChangeNotification(a2, 16LL);
  }
  if ( (v10 & 0x800) != 0 )
  {
    if ( !v11 )
      RaiseApplicationViewChangeNotification(a2, 10LL);
    v14 = &v18;
    v15 = a1;
    v16 = &v19;
    v17 = (CClassicWindowManager *)&v14;
    v13 = &v16;
    goto LABEL_27;
  }
  if ( (v10 & 0x1000) != 0 )
  {
    if ( (v10 & 0x100) == 0 )
      RaiseApplicationViewChangeNotification(a2, 11LL);
    v18 = a2;
    v19 = a2;
    v14 = &v18;
    v16 = &v19;
    v17 = (CClassicWindowManager *)&v14;
    CClassicWindowManager::ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___(a1, &v16);
  }
  else if ( !(*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 128LL))(a2)
         && *(struct IClassicWindow **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 96LL))(a2) != v7 )
  {
    v16 = &v18;
    v17 = a1;
    v14 = &v19;
    v15 = (CClassicWindowManager *)&v16;
    v13 = &v14;
LABEL_27:
    v18 = a2;
    v19 = v7;
    CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___((__int64)a1, (__int64)v13);
  }
  if ( v7 )
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 16LL))(v7);
  return v10;
}
