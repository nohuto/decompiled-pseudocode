/*
 * XREFs of ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UTouchInjectionContact@Input@Internal@UI@Windows@@AEBU6789Windows@@@Bamo@Microsoft@@MEAAJI@Z @ 0x1801B5F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18006592C (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1800A40D4 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800A41E8 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x18014A500 (-TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy,Windows::UI::Internal::Input::TouchInjectionContact,Windows::UI::Internal::Input::TouchInjectionContact const &>::RemoteRemove(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  Microsoft::Bamo::BaseBamoConnection *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  char v10; // di
  __int128 v11; // xmm6
  __int64 v12; // rdx
  struct Microsoft::Bamo::BaseBamoConnection *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  const char *v16; // r9
  const char *v17; // r9
  int v18; // eax
  int v19[4]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = a2;
  if ( a2 < (unsigned __int64)((__int64)(a1[7] - a1[6]) >> 4) )
  {
    v10 = *(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1) + 28);
    v11 = 0LL;
    try
    {
      v12 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
      if ( *(int *)(v12 + 8) <= 0 )
        v13 = 0LL;
      else
        v13 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v12 + 16);
      Microsoft::Bamo::Lock::Lock((Microsoft::BamoImpl::BamoImplObject **)v19, v13);
      if ( v10 )
        v11 = *(_OWORD *)(a1[6] + 16 * v4);
      memmove_0((void *)(16 * v4 + a1[6]), (const void *)(16 * v4 + a1[6] + 16), a1[7] - (16 * v4 + a1[6] + 16));
      a1[7] -= 16LL;
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v19, v14, v15, v16);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x4CD,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v17);
    }
    if ( v10 )
    {
      *(_OWORD *)v19 = v11;
      v18 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, int *))(*a1 + 152LL))(a1, a2, v19);
      if ( v18 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4D1,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v18,
          v19[0]);
    }
    return 0LL;
  }
  else
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
    if ( *(int *)(v5 + 8) <= 0 )
      v6 = 0LL;
    else
      v6 = *(Microsoft::Bamo::BaseBamoConnection **)(v5 + 16);
    v7 = Microsoft::Bamo::BaseBamoConnection::TrackError(v6);
    v8 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4BC,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v7);
    return v8;
  }
}
