/*
 * XREFs of ?AddActivatableEntity@ActivationWatcherBamoPrincipal@@QEAAJ_KU_LUID@@0IIW4ACTIVATION_OBJECT_STATE@@@Z @ 0x18001D24C
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x18001D11C (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 * Callees:
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_ActivatableEntityPrincipal_Stub@2345@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoActivatableEntityPrincipal@@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IPEAVBamoActivatableEntityPrincipal@@@Z @ 0x18001D580 (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamo.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180023290 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z @ 0x1800B7174 (-HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall ActivationWatcherBamoPrincipal::AddActivatableEntity(
        ActivationWatcherBamoPrincipal *a1,
        __int64 a2,
        struct _LUID a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  char v10; // r13
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  char *v15; // r14
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r12
  __int64 v19; // r12
  __int64 v20; // rbx
  __int64 v21; // r14
  char v22; // r15
  int v23; // eax
  const char *v24; // r9
  int inserted; // r12d
  __int64 v26; // rbx
  int v27; // eax
  signed __int32 v28; // edx
  bool v29; // sf
  signed __int32 v30; // edx
  _QWORD *v32; // [rsp+20h] [rbp-30h]
  struct _LUID v33; // [rsp+30h] [rbp-20h] BYREF
  __int64 v34; // [rsp+38h] [rbp-18h]
  __int16 v35; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  struct _LUID v38; // [rsp+A0h] [rbp+50h] BYREF

  v38 = a3;
  v10 = 0;
  v11 = operator new(0x60uLL);
  v12 = v11;
  v33 = (struct _LUID)v11;
  v13 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 32LL);
  if ( *(int *)(v13 + 8) <= 0 )
    v14 = 0LL;
  else
    v14 = *(_QWORD *)(v13 + 16);
  *v11 = &BamoActivatableEntityPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v15 = (char *)(v11 + 1);
  v11[1] = &BamoActivatableEntityPrincipal::`vftable'{for `IActivatableEntityPrincipal'};
  v16 = v11 + 2;
  *((_DWORD *)v11 + 6) = 1;
  v11[2] = &Microsoft::BamoImpl::BamoPrincipalImpl::`vftable';
  v17 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL))(v14) + 96);
  v12[4] = v17;
  if ( v17 )
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
  *((_DWORD *)v12 + 10) = 0;
  v12[6] = 0LL;
  *v16 = &BamoImpl::BamoActivatableEntityPrincipalImpl::`vftable';
  v12[7] = 0LL;
  v12[8] = 0LL;
  v12[9] = 0LL;
  v12[10] = 0LL;
  *v12 = &ActivatableEntityBamoPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *(_QWORD *)v15 = &BamoActivatableEntityPrincipal::`vftable'{for `IActivatableEntityPrincipal'};
  v12[11] = a4;
  BamoActivatableEntityPrincipal::SetWindowId((BamoActivatableEntityPrincipal *)(v12 + 1), a2);
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*(_QWORD *)v15 + 80LL))(v12 + 1, a5);
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*(_QWORD *)v15 + 96LL))(v12 + 1, a6);
  (*(void (__fastcall **)(_QWORD *, struct _LUID *))(*(_QWORD *)v15 + 64LL))(v12 + 1, &v38);
  v32 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)a1 + 1) + 32LL))((_QWORD *)a1 + 1);
  v18 = *(_QWORD *)(v32[4] + 32LL);
  if ( *(int *)(v18 + 8) <= 0 )
    v19 = 0LL;
  else
    v19 = *(_QWORD *)(v18 + 16);
  v34 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 56LL))(v19);
  v21 = *(_QWORD *)(v20 + 96);
  v34 = v21;
  if ( v21 )
    _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
  if ( *(_DWORD *)(v20 + 184) == GetCurrentThreadId() )
  {
    v10 = 1;
    v35 = 1;
    v22 = 0;
  }
  else
  {
    v35 = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v20 + 16) + 24LL))(*(_QWORD *)(v20 + 16));
    *(_DWORD *)(v20 + 184) = GetCurrentThreadId();
    v22 = 0;
    if ( *(_QWORD *)(v20 + 64) )
    {
      v23 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v20 + 56) + 96LL))(*(_QWORD *)(v20 + 56));
      if ( v23 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x9A1,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v23,
          (int)v32);
      v22 = 1;
    }
    HIBYTE(v35) = v22;
  }
  ++*(_DWORD *)(v20 + 188);
  inserted = Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub,wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>,BamoActivatableEntityPrincipal *>::InsertWorker(
               v32,
               v19,
               (__int64)(v32[8] - v32[7]) >> 3,
               v12);
  v26 = *(_QWORD *)(v21 + 32);
  --*(_DWORD *)(v26 + 188);
  if ( !v10 )
  {
    if ( v22 )
    {
      v27 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v26 + 56) + 104LL))(*(_QWORD *)(v26 + 56));
      if ( v27 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x9B2,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v27,
          (int)v32);
    }
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock((Microsoft::BamoImpl::BaseBamoConnectionImpl *)v26);
  }
  v28 = _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 8), 0xFFFFFFFF);
  v29 = v28 - 1 < 0;
  v30 = v28 - 1;
  if ( v29 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
      v24);
  if ( !v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 24LL))(v21);
  if ( inserted < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\activationwatcherbamoprincipal.cpp",
      (const char *)(unsigned int)inserted,
      (int)v32);
  if ( (a7 & 4) != 0 )
  {
    v33 = 0LL;
    ActivationWatcherBamoPrincipal::HandleActivationChange(a1, &v38, &v33);
  }
  (*(void (__fastcall **)(_QWORD *))(*v12 + 8LL))(v12);
  return 0LL;
}
