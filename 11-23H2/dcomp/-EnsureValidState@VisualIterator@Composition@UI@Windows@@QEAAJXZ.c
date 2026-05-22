/*
 * XREFs of ?EnsureValidState@VisualIterator@Composition@UI@Windows@@QEAAJXZ @ 0x1801A2F98
 * Callers:
 *     ?GetMany@Api@VisualIterator@Composition@UI@Windows@@UEAAJIPEAPEAUIVisual@345@PEAI@Z @ 0x1801A2FF0 (-GetMany@Api@VisualIterator@Composition@UI@Windows@@UEAAJIPEAPEAUIVisual@345@PEAI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualIterator::EnsureValidState(
        Windows::UI::Composition::VisualIterator *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 256LL))(*((_QWORD *)this + 7));
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x48,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualiterator.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
