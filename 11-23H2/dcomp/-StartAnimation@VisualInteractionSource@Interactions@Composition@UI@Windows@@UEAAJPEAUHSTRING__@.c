/*
 * XREFs of ?StartAnimation@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation@345@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@345@@Z @ 0x18011E190
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180075F00 (-StartAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::StartAnimation(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v9; // rcx
  int started; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  const char *v14; // rax
  __int64 v15; // rdx
  const char *v16; // [rsp+28h] [rbp-30h]
  _BYTE v17[8]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v18[8]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v20; // [rsp+60h] [rbp+8h] BYREF

  v18[0] = 0;
  v18[1] = 0;
  v18[2] = -1;
  v18[3] = 2;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, char *, _DWORD *, _BYTE *))(*a1 + 200LL))(
          a1,
          a2,
          &v20,
          v18,
          v17)
    || (v20 & 2) == 0 )
  {
    v14 = "Property cannot be targeted for animation";
    v15 = 330LL;
    goto LABEL_13;
  }
  v9 = a1[31];
  if ( v18[0] != *(_DWORD *)(v9 + 128) )
  {
    v12 = a1[30];
    if ( v18[0] == *(_DWORD *)(v12 + 128) )
    {
      started = Windows::UI::Composition::ProxyObject::StartAnimation((__int64 *)v12, a2, a3, a4, a5);
      if ( started < 0 )
      {
        v11 = 348LL;
        goto LABEL_6;
      }
      return 0LL;
    }
    v14 = "Object handle for animated property owner was not recognized";
    v15 = 353LL;
LABEL_13:
    started = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v15,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
      (const char *)0x80070057LL,
      (int)v14,
      v16);
    return (unsigned int)started;
  }
  started = Windows::UI::Composition::ProxyObject::StartAnimation((__int64 *)v9, a2, a3, a4, a5);
  if ( started >= 0 )
    return 0LL;
  v11 = 340LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
    (const char *)(unsigned int)started);
  return (unsigned int)started;
}
