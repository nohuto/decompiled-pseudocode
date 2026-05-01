/*
 * XREFs of ?GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE1PEAW4CoreKeyboardModality@45678@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@@Z @ 0x18014A6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18014A6FC (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?IsHardwareKeyboardAvailable@TabTipAdapterPolicy@KeyboardHosting@@AEBA_NXZ @ 0x18014AB08 (-IsHardwareKeyboardAvailable@TabTipAdapterPolicy@KeyboardHosting@@AEBA_NXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetShellState(
        KeyboardHosting::TabTipAdapterPolicy *this,
        __int64 a2,
        _BYTE *a3,
        _BYTE *a4,
        _DWORD *a5)
{
  int PositionAndSizeOptions; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = *((_BYTE *)this + 600);
  *a4 = KeyboardHosting::TabTipAdapterPolicy::IsHardwareKeyboardAvailable(this);
  *a5 = *((_DWORD *)this + 157);
  PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(this);
  v7 = PositionAndSizeOptions;
  if ( PositionAndSizeOptions >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x357,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
    (const char *)(unsigned int)PositionAndSizeOptions);
  return v7;
}
