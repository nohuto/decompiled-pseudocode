/*
 * XREFs of ?RemoteReplace@?$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UTouchInjectionContact@Input@Internal@UI@Windows@@AEBU6789Windows@@@Bamo@Microsoft@@MEAAJIAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z @ 0x1801C3800
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1800B6B74 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800B6C88 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x1801587E0 (-TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy,Windows::UI::Internal::Input::TouchInjectionContact,Windows::UI::Internal::Input::TouchInjectionContact const &>::RemoteReplace(
        _QWORD *a1,
        unsigned int a2,
        _OWORD *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  Microsoft::Bamo::BaseBamoConnection *v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  char v12; // si
  __int128 v13; // xmm6
  __int64 v14; // rdx
  struct Microsoft::Bamo::BaseBamoConnection *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  const char *v18; // r9
  const char *v19; // r9
  int v20; // eax
  int v21[4]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = a2;
  if ( a2 < (unsigned __int64)((__int64)(a1[7] - a1[6]) >> 4) )
  {
    v12 = *(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1) + 28);
    v13 = 0LL;
    try
    {
      v14 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
      if ( *(int *)(v14 + 8) <= 0 )
        v15 = 0LL;
      else
        v15 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v14 + 16);
      Microsoft::Bamo::Lock::Lock((Microsoft::BamoImpl::BamoImplObject **)v21, v15);
      if ( v12 )
        v13 = *(_OWORD *)(a1[6] + 16 * v6);
      *(_OWORD *)(a1[6] + 16 * v6) = *a3;
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v21, v16, v17, v18);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x4FC,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v19);
    }
    if ( v12 )
    {
      *(_OWORD *)v21 = v13;
      v20 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, int *))(*a1 + 160LL))(a1, a2, v21);
      if ( v20 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x500,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v20,
          v21[0]);
    }
    return 0LL;
  }
  else
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
    if ( *(int *)(v7 + 8) <= 0 )
      v8 = 0LL;
    else
      v8 = *(Microsoft::Bamo::BaseBamoConnection **)(v7 + 16);
    v9 = Microsoft::Bamo::BaseBamoConnection::TrackError(v8);
    v10 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4EB,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v9);
    return v10;
  }
}
