/*
 * XREFs of ?SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ @ 0x18007A73C
 * Callers:
 *     ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x180079C24 (-PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWra.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UIJsonObjectStatics@Json@Data@Windows@@@wil@@YA?AV?$com_ptr_t@UIJsonObjectStatics@Json@Data@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180074988 (--$GetActivationFactory@UIJsonObjectStatics@Json@Data@Windows@@@wil@@YA-AV-$com_ptr_t@UIJsonObje.c)
 *     ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180079058 (-GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA-AV-$com_ptr_t@UIUserActivityPay.c)
 *     ?WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBG@Z @ 0x18007B540 (-WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@DU-$char_tr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall MobilityExperience::ActivityWrapper::SetActivityComplete(
        MobilityExperience::ActivityWrapper *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 v4; // rdx
  unsigned int v5; // r8d
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, PVOID, __int64 *); // rdi
  unsigned int v8; // r8d
  HSTRING_HEADER *v9; // rax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, HSTRING *); // rdi
  int v14; // eax
  PCWSTR StringRawBuffer; // rax
  void **v16; // rdx
  int v17; // eax
  HSTRING string; // [rsp+28h] [rbp-19h] BYREF
  __int64 v19; // [rsp+30h] [rbp-11h] BYREF
  __int64 v20; // [rsp+38h] [rbp-9h] BYREF
  __int64 v21; // [rsp+40h] [rbp-1h] BYREF
  const WCHAR *v22; // [rsp+48h] [rbp+7h] BYREF
  void *v23[3]; // [rsp+50h] [rbp+Fh] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp+27h]
  HSTRING_HEADER v25; // [rsp+70h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v22 = L"{ \"complete\": true }";
  MobilityExperience::ActivityWrapper::GetUserActivityPayload((__int64)this, (const WCHAR *)&v20, a3);
  wil::GetActivationFactory<Windows::Data::Json::IJsonObjectStatics>((const WCHAR *)&v21, v4, v5);
  v19 = 0LL;
  v6 = v21;
  v7 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v21 + 48LL);
  v19 = 0LL;
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, &v22, v8);
  v10 = v7(v6, v9[1].Reserved.Reserved1, &v19);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      639LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v10,
      (int)string);
  v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 232LL))(v20, v19);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      641LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v11,
      (int)string);
  string = 0LL;
  v12 = v20;
  v13 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v20 + 256LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v14 = v13(v12, &string);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      644LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v14,
      (int)string);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  CreativeFramework::CommonHelper::StringUtils::WStringToUtf8String(v23, StringRawBuffer);
  v16 = v23;
  if ( v24 >= 0x10 )
    v16 = (void **)v23[0];
  v17 = (*(__int64 (__fastcall **)(_QWORD, void **))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1), v16);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      646LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v17,
      (int)string);
  if ( v24 >= 0x10 )
    operator delete(v23[0]);
  v24 = 15LL;
  v23[2] = 0LL;
  LOBYTE(v23[0]) = 0;
  WindowsDeleteString(string);
  string = 0LL;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
}
