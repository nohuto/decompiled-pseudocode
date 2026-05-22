/*
 * XREFs of ?StopAnimations@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234@@Z @ 0x180152800
 * Callers:
 *     ?StopAnimationGroup@ProxyObject@Composition@UI@Windows@@UEAAJPEAUICompositionAnimationBase@234@@Z @ 0x180147420 (-StopAnimationGroup@ProxyObject@Composition@UI@Windows@@UEAAJPEAUICompositionAnimationBase@234@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18005CCEC (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?GetTarget@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAPEAUHSTRING__@@@Z @ 0x18008AD4C (-GetTarget@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAPEAUHSTRING__@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimationGroup::StopAnimations(
        Windows::UI::Composition::CompositionAnimationGroup *this,
        struct Windows::UI::Composition::CompositionObject *a2)
{
  unsigned int v3; // ebx
  _QWORD *i; // rdi
  HSTRING *v6; // rbx
  HSTRING v7; // r8
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING string; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    for ( i = (_QWORD *)*((_QWORD *)this + 21); ; i = (_QWORD *)*i )
    {
      if ( !i )
        return 0LL;
      v6 = (HSTRING *)i[2];
      WindowsDeleteString(0LL);
      string = 0LL;
      Windows::UI::Composition::CompositionAnimation::GetTarget(v6, &string);
      if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                            (Microsoft::WRL::Wrappers::Details *)string,
                            0LL,
                            v7) )
        break;
      v8 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::CompositionObject *, HSTRING))(*(_QWORD *)a2 + 176LL))(
             a2,
             string);
      v3 = v8;
      if ( v8 < 0 )
      {
        v9 = (unsigned int)v8;
        v10 = 330LL;
        goto LABEL_12;
      }
      WindowsDeleteString(string);
    }
    v3 = -2147024809;
    v10 = 328LL;
    v9 = 2147942487LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionanimationgroup.cpp",
      (const char *)v9);
    WindowsDeleteString(string);
  }
  else
  {
    v3 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13A,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionanimationgroup.cpp",
      (const char *)0x80070057LL);
  }
  return v3;
}
