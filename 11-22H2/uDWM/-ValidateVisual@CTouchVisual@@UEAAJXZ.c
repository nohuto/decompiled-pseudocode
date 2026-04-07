/*
 * XREFs of ?ValidateVisual@CTouchVisual@@UEAAJXZ @ 0x18006EC20
 * Callers:
 *     ?ValidateVisual@CTouchDragVisual@@UEAAJXZ @ 0x18006E470 (-ValidateVisual@CTouchDragVisual@@UEAAJXZ.c)
 * Callees:
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18001C1C0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTouchVisual::ValidateVisual(CTouchVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*((_DWORD *)this + 22) & 0x4000) != 0 )
  {
    (*(void (__fastcall **)(CTouchVisual *))(*(_QWORD *)this + 240LL))(this);
    *((_DWORD *)this + 22) &= ~0x4000u;
  }
  v2 = CRenderDataVisual::ValidateVisual(this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x22,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\touchvisual.cpp",
    (const char *)(unsigned int)v2,
    v5);
  return v3;
}
