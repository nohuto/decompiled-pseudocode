/*
 * XREFs of ?EnsureValidState@VisualCollection@Composition@UI@Windows@@UEAAJXZ @ 0x180072FD0
 * Callers:
 *     ?get_Count@Api@VisualCollection@Composition@UI@Windows@@UEAAJPEAH@Z @ 0x180072F30 (-get_Count@Api@VisualCollection@Composition@UI@Windows@@UEAAJPEAH@Z.c)
 *     ?InsertBelow@Api@VisualCollection@Composition@UI@Windows@@UEAAJPEAUIVisual@345@0@Z @ 0x1801965F0 (-InsertBelow@Api@VisualCollection@Composition@UI@Windows@@UEAAJPEAUIVisual@345@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureValidState@CompositionObject@Composition@UI@Windows@@UEAAJXZ @ 0x180073030 (-EnsureValidState@CompositionObject@Composition@UI@Windows@@UEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualCollection::EnsureValidState(
        Windows::UI::Composition::VisualCollection *this)
{
  int valid; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  valid = Windows::UI::Composition::CompositionObject::EnsureValidState(this);
  if ( valid < 0 )
  {
    v4 = 67LL;
  }
  else
  {
    valid = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 256LL))(*((_QWORD *)this + 19));
    if ( valid >= 0 )
      return 0LL;
    v4 = 69LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualcollection.cpp",
    (const char *)(unsigned int)valid);
  return (unsigned int)valid;
}
