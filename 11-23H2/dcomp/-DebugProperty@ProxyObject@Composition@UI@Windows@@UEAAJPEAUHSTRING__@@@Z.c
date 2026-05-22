/*
 * XREFs of ?DebugProperty@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x180147070
 * Callers:
 *     ?DebugProperty@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x180138A80 (-DebugProperty@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingManager@234@_N@Z @ 0x180022008 (-GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingMan.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?DebugProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJII@Z @ 0x18016BAC0 (-DebugProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJII@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::DebugProperty(
        Windows::UI::Composition::CompositorCommon **this,
        HSTRING a2)
{
  Windows::UI::Composition::AnimationLoggingManager *AnimationLoggingManager; // rax
  int v5; // eax
  unsigned int v6; // ebx
  const char *StringRawBuffer; // rax
  unsigned int v9; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-14h]
  int v11; // [rsp+38h] [rbp-10h]
  int v12; // [rsp+3Ch] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0;
  v10 = 0;
  v11 = -1;
  v12 = 2;
  if ( (*((unsigned __int8 (__fastcall **)(Windows::UI::Composition::CompositorCommon **, HSTRING, char *, unsigned int *, int *))*this
        + 25))(
         this,
         a2,
         &v14,
         &v9,
         &v15)
    && (v14 & 2) != 0 )
  {
    (*((void (__fastcall **)(Windows::UI::Composition::CompositorCommon **, _QWORD))*this + 33))(this, v9);
    AnimationLoggingManager = Windows::UI::Composition::CompositorCommon::GetAnimationLoggingManager(this[3], 1);
    v5 = Windows::UI::Composition::AnimationLoggingManager::DebugProperty(AnimationLoggingManager, v9, v10);
    v6 = v5;
    if ( v5 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70A,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtproxyobject.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    StringRawBuffer = (const char *)WindowsGetStringRawBuffer(a2, 0LL);
    v6 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x703,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtproxyobject.cpp",
      (const char *)0x80070057LL,
      (int)"%ls is not a targetable property for animation.",
      StringRawBuffer);
  }
  return v6;
}
