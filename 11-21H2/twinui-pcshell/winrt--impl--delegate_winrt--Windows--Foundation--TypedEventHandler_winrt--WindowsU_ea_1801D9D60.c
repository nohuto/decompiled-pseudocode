/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_66881fa05591413bac4099d171e5aec0___::Invoke @ 0x1801D9D60
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_66881fa05591413bac4099d171e5aec0_::operator() @ 0x1801D7F34 (_lambda_66881fa05591413bac4099d171e5aec0_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_66881fa05591413bac4099d171e5aec0___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v6 = a2;
  v3 = a1 + 8;
  try
  {
    lambda_66881fa05591413bac4099d171e5aec0_::operator()(v3, &v5, (__int64)&v6, (__int64)&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v5);
  }
  return result;
}
