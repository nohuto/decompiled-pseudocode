/*
 * XREFs of ?EnsureValidState@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJXZ @ 0x1801A1CC0
 * Callers:
 *     ?First@Api@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAVVisual@Composition@UI@Windows@@@Collections@Foundation@5@@Z @ 0x1801A1D40 (-First@Api@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJPEAPEAU-$IIterator@PEAVVisual@.c)
 *     ?RemoveAll@Api@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJXZ @ 0x1801A1E30 (-RemoveAll@Api@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?get_Count@Api@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJPEAH@Z @ 0x1801A1F10 (-get_Count@Api@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureValidState@CompositionObject@Composition@UI@Windows@@UEAAJXZ @ 0x180073030 (-EnsureValidState@CompositionObject@Composition@UI@Windows@@UEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualUnorderedCollection::EnsureValidState(
        Windows::UI::Composition::VisualUnorderedCollection *this)
{
  int valid; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  valid = Windows::UI::Composition::CompositionObject::EnsureValidState(this);
  if ( valid < 0 )
  {
    v3 = 159LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualunorderedcollection.cpp",
      (const char *)(unsigned int)valid);
    return (unsigned int)valid;
  }
  valid = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 16LL))(*((_QWORD *)this + 20));
  if ( valid < 0 )
  {
    v3 = 162LL;
    goto LABEL_3;
  }
  return 0LL;
}
