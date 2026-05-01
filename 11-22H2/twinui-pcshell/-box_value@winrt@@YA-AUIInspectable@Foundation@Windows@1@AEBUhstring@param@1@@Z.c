/*
 * XREFs of ?box_value@winrt@@YA?AUIInspectable@Foundation@Windows@1@AEBUhstring@param@1@@Z @ 0x18065CAA0
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x18065988C (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??0?$IReference@Uhstring@winrt@@@Foundation@Windows@winrt@@QEAA@AEBUhstring@3@@Z @ 0x1806588D4 (--0-$IReference@Uhstring@winrt@@@Foundation@Windows@winrt@@QEAA@AEBUhstring@3@@Z.c)
 */

struct IInspectable __fastcall winrt::box_value(winrt *this, const struct winrt::param::hstring *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  bool v5; // zf
  void (__fastcall **v7)(_QWORD, __int64 *, __int64 *); // [rsp+40h] [rbp+8h] BYREF

  v7 = (void (__fastcall **)(_QWORD, __int64 *, __int64 *))this;
  v3 = (__int64 *)winrt::Windows::Foundation::IReference<winrt::hstring>::IReference<winrt::hstring>(&v7, a2);
  v4 = *v3;
  *v3 = 0LL;
  v5 = v7 == 0LL;
  *(_QWORD *)this = v4;
  if ( !v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  return (struct IInspectable)this;
}
