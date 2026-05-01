/*
 * XREFs of ?GetGraphicsCaptureItemForAllDisplays@ScreenClippingBrokerImpl@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805F7D90
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::CreateGraphicsCaptureItem @ 0x1805F7BB0 (_anonymous_namespace_--CreateGraphicsCaptureItem.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ScreenClippingBrokerImpl::GetGraphicsCaptureItemForAllDisplays(
        ScreenClippingBrokerImpl *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v5; // ebx
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v9)(_QWORD, const struct _GUID *, void **); // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  try
  {
    anonymous_namespace_::CreateGraphicsCaptureItem(
      &v9,
      (__int64)a2,
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a3);
    v5 = (**v9)(v9, a2, a3);
    if ( v9 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
    result = v5;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2F,
                           (int)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
                           v6);
  }
  return result;
}
