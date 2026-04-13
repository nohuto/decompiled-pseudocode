/*
 * XREFs of ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180079058
 * Callers:
 *     ?GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAPEAUHSTRING__@@1@Z @ 0x180078DB0 (-GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@.c)
 *     ?SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ @ 0x18007A73C (-SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x1800486C4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ??$GetActivationFactory@UIUserActivityPayloadFactory@UserActivities@Internal@ApplicationModel@Windows@@@wil@@YA?AV?$com_ptr_t@UIUserActivityPayloadFactory@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180074B68 (--$GetActivationFactory@UIUserActivityPayloadFactory@UserActivities@Internal@ApplicationModel@Wi.c)
 *     ??0?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800760D8 (--0-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@2@@std.c)
 *     ??1?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@UEAA@XZ @ 0x1800765A0 (--1-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@2@@std.c)
 *     ?from_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBD0@Z @ 0x18007C2C4 (-from_bytes@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
const WCHAR *__fastcall MobilityExperience::ActivityWrapper::GetUserActivityPayload(
        __int64 a1,
        const WCHAR *a2,
        unsigned int a3)
{
  char *v5; // rax
  size_t v6; // r8
  HSTRING_HEADER *Reserved1; // r8
  unsigned int v8; // r8d
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, PVOID, const WCHAR *); // rdi
  const WCHAR *v11; // rcx
  HSTRING_HEADER *v12; // rax
  int v13; // eax
  __int64 v15; // [rsp+28h] [rbp-91h] BYREF
  const WCHAR *v16[2]; // [rsp+30h] [rbp-89h] BYREF
  HSTRING_HEADER v17; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-61h]
  void *v19[3]; // [rsp+60h] [rbp-59h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-41h]
  _BYTE v21[112]; // [rsp+80h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v16[1] = a2;
  wil::GetActivationFactory<Windows::ApplicationModel::Internal::UserActivities::IUserActivityPayloadFactory>(
    (const WCHAR *)&v15,
    (__int64)a2,
    a3);
  v5 = (char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 136LL))(*(_QWORD *)(a1 + 8));
  v18 = 15LL;
  *(_QWORD *)&v17.Reserved.Reserved2[16] = 0LL;
  v17.Reserved.Reserved2[0] = 0;
  if ( *v5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( v5[v6] );
  }
  else
  {
    v6 = 0LL;
  }
  std::string::assign(&v17, v5, v6);
  std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>((__int64)v21);
  Reserved1 = &v17;
  if ( v18 >= 0x10 )
    Reserved1 = (HSTRING_HEADER *)v17.Reserved.Reserved1;
  std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::from_bytes(
    v21,
    v19,
    Reserved1,
    (char *)Reserved1 + *(_QWORD *)&v17.Reserved.Reserved2[16],
    0);
  std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::~wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>((__int64)v21);
  if ( v18 >= 0x10 )
    operator delete(v17.Reserved.Reserved1);
  *(_QWORD *)a2 = 0LL;
  v9 = v15;
  v10 = *(__int64 (__fastcall **)(__int64, PVOID, const WCHAR *))(*(_QWORD *)v15 + 56LL);
  *(_QWORD *)a2 = 0LL;
  v11 = (const WCHAR *)v19;
  if ( v20 >= 8 )
    v11 = (const WCHAR *)v19[0];
  v16[0] = v11;
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, v16, v8);
  v13 = v10(v9, v12[1].Reserved.Reserved1, a2);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      663LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v13,
      29);
  if ( v20 >= 8 )
    operator delete(v19[0]);
  v20 = 7LL;
  v19[2] = 0LL;
  LOWORD(v19[0]) = 0;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return a2;
}
