/*
 * XREFs of ??4hstring@winrt@@QEAAAEAU01@QEBG@Z @ 0x18017EAE4
 * Callers:
 *     _anonymous_namespace_::GetScreenClippingAUMID @ 0x180066360 (_anonymous_namespace_--GetScreenClippingAUMID.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800F76BC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     WINRT_IMPL_HeapFree @ 0x1801892CC (WINRT_IMPL_HeapFree.c)
 *     WINRT_IMPL_GetProcessHeap @ 0x180189398 (WINRT_IMPL_GetProcessHeap.c)
 */

volatile signed __int32 **__fastcall winrt::hstring::operator=(
        volatile signed __int32 **a1,
        volatile signed __int32 *a2)
{
  winrt::hstring *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  volatile signed __int32 *v7; // rsi
  volatile signed __int32 *v8; // rdi
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  v3 = winrt::hstring::hstring((winrt::hstring *)&v11, L"MicrosoftWindows.Client.CBS_cw5n1h2txyewy!ScreenClipping");
  if ( a1 != (volatile signed __int32 **)v3 )
  {
    v7 = *(volatile signed __int32 **)v3;
    *(_QWORD *)v3 = 0LL;
    v8 = *a1;
    if ( *a1 && !(unsigned int)winrt::impl::atomic_ref_count::operator--(v8 + 6, v4, v5, v6) )
    {
      ProcessHeap = WINRT_IMPL_GetProcessHeap();
      WINRT_IMPL_HeapFree(ProcessHeap, 0, (LPVOID)v8);
    }
    *a1 = v7;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v11, v4, v5, v6);
  return a1;
}
