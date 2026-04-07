/*
 * XREFs of ?SetDpi@CAcrylicSheet@@QEAAJH@Z @ 0x18009A9AC
 * Callers:
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031990 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800361F4 (--4-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z @ 0x180037704 (-CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180037B78 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall CAcrylicSheet::SetDpi(CAcrylicSheet *this, int a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall ***v3)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *); // rdx
  int v4; // eax
  unsigned int v5; // ebx
  std::_Ref_count_base *v7[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 == *((_DWORD *)this + 124) )
    return 0LL;
  v2 = *((_QWORD *)this + 40);
  *((_DWORD *)this + 124) = a2;
  if ( !v2 || a2 == *(_DWORD *)(v2 + 324) )
    return 0LL;
  *(_DWORD *)(v2 + 324) = a2;
  *(_OWORD *)v7 = 0LL;
  std::shared_ptr<CWindowBorder::CCachedBorderBrush>::operator=((_QWORD *)(v2 + 288), (__int64 *)v7);
  if ( v7[1] )
    std::_Ref_count_base::_Decref(v7[1]);
  v3 = *(__int64 (__fastcall ****)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *))(v2 + 280);
  if ( !v3 )
    return 0LL;
  v4 = CWindowBorder::CreateAndAttachBorderBrush((CWindowBorder *)v2, v3);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x24A,
    (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)(unsigned int)v4);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3EF,
    (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
    (const char *)v5);
  return v5;
}
