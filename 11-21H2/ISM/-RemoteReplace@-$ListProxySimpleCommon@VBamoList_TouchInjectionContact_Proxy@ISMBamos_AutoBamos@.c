/*
 * XREFs of ?RemoteReplace@?$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UTouchInjectionContact@Input@Internal@UI@Windows@@AEBU6789Windows@@@Bamo@Microsoft@@MEAAJIAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z @ 0x180197FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18008D4B8 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x18008D604 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy,Windows::UI::Internal::Input::TouchInjectionContact,Windows::UI::Internal::Input::TouchInjectionContact const &>::RemoteReplace(
        _QWORD *a1,
        unsigned int a2,
        _OWORD *a3)
{
  __int64 v4; // r14
  __int64 v6; // rdi
  char v8; // si
  __int128 v9; // xmm6
  __int64 v10; // rdx
  struct Microsoft::Bamo::BaseBamoConnection *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  const char *v14; // r9
  const char *v15; // r9
  int v16; // eax
  int v17[4]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = a2;
  v6 = a2;
  if ( a2 < (unsigned __int64)((__int64)(a1[7] - a1[6]) >> 4) )
  {
    v8 = *(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1) + 28);
    v9 = 0LL;
    try
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
      if ( *(int *)(v10 + 8) <= 0 )
        v11 = 0LL;
      else
        v11 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v10 + 16);
      Microsoft::Bamo::Lock::Lock((Microsoft::BamoImpl::BamoImplObject **)v17, v11);
      if ( v8 )
        v9 = *(_OWORD *)(a1[6] + 16 * v4);
      else
        v6 = v4;
      *(_OWORD *)(a1[6] + 16 * v6) = *a3;
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v17, v12, v13, v14);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x4EC,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v15);
    }
    if ( v8 )
    {
      *(_OWORD *)v17 = v9;
      v16 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, int *))(*a1 + 160LL))(a1, (unsigned int)v4, v17);
      if ( v16 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4F0,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v16,
          v17[0]);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4DB,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      (const char *)0x87B2080CLL);
    return 2276591628LL;
  }
}
