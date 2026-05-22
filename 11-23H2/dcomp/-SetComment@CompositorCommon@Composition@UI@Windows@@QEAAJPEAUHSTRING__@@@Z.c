/*
 * XREFs of ?SetComment@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z @ 0x180095110
 * Callers:
 *     ?put_Comment@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x1800950C0 (-put_Comment@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MarshalCompositorComment@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEBG@Z @ 0x18001D674 (-MarshalCompositorComment@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEBG@Z.c)
 *     ?GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingManager@234@_N@Z @ 0x180022008 (-GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingMan.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::SetComment(HSTRING *this, HSTRING string)
{
  HSTRING *v2; // rsi
  HRESULT v5; // ebx
  Windows::UI::Composition::AnimationLoggingManager *AnimationLoggingManager; // rbx
  const unsigned __int16 *StringRawBuffer; // rax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = this + 125;
  v5 = WindowsDeleteString(this[125]);
  if ( v5 < 0 )
  {
    v9 = 5313LL;
  }
  else
  {
    v5 = WindowsDuplicateString(string, v2);
    if ( v5 < 0 )
    {
      v9 = 5316LL;
    }
    else
    {
      if ( (*((_BYTE *)this + 452) & 0xC) == 0 )
        return 0LL;
      AnimationLoggingManager = Windows::UI::Composition::CompositorCommon::GetAnimationLoggingManager(
                                  (Windows::UI::Composition::CompositorCommon *)this,
                                  1);
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v5 = Windows::UI::Composition::AnimationLoggingManager::MarshalCompositorComment(
             AnimationLoggingManager,
             StringRawBuffer);
      if ( v5 >= 0 )
        return 0LL;
      v9 = 5322LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
