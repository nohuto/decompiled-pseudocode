/*
 * XREFs of ?v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ @ 0x180605380
 * Callers:
 *     <none>
 * Callees:
 *     ?complete@?$tip_test@U_tip_TaskViewShowTest@@@tip@@QEAAXXZ @ 0x180016F30 (-complete@-$tip_test@U_tip_TaskViewShowTest@@@tip@@QEAAXXZ.c)
 *     ?is_running@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18004764C (-is_running@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x180063B30 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall XamlSnapAssistViewHost::v_DismissView(XamlSnapAssistViewHost *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 600);
  v3 = *((_QWORD *)this + 75);
  if ( v3 && tip::details::test_common_data<0>::is_running(v3 + 8) )
    tip::tip_test<_tip_TaskViewShowTest>::complete(v1);
  __abi_winrt_ptr_assign((__int64 *)this + 24, 0LL);
  v4 = 0LL;
  winrt::Windows::Foundation::IUnknown::operator=(
    (XamlSnapAssistViewHost *)((char *)this + 256),
    (winrt::Windows::Foundation::IUnknown *)&v4);
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
  *((_BYTE *)this + 272) = 0;
}
