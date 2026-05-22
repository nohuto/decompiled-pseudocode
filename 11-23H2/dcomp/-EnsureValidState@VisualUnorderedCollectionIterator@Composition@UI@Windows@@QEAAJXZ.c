/*
 * XREFs of ?EnsureValidState@VisualUnorderedCollectionIterator@Composition@UI@Windows@@QEAAJXZ @ 0x1801A3888
 * Callers:
 *     ?GetMany@Api@VisualUnorderedCollectionIterator@Composition@UI@Windows@@UEAAJIPEAPEAUIVisual@345@PEAI@Z @ 0x1801A3930 (-GetMany@Api@VisualUnorderedCollectionIterator@Composition@UI@Windows@@UEAAJIPEAPEAUIVisual@345@.c)
 *     ?MoveNext@Api@VisualUnorderedCollectionIterator@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x1801A3A50 (-MoveNext@Api@VisualUnorderedCollectionIterator@Composition@UI@Windows@@UEAAJPEAE@Z.c)
 *     ?get_Current@Api@VisualUnorderedCollectionIterator@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z @ 0x1801A3BE0 (-get_Current@Api@VisualUnorderedCollectionIterator@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@3.c)
 *     ?get_HasCurrent@Api@VisualUnorderedCollectionIterator@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x1801A3CC0 (-get_HasCurrent@Api@VisualUnorderedCollectionIterator@Composition@UI@Windows@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualUnorderedCollectionIterator::EnsureValidState(
        Windows::UI::Composition::VisualUnorderedCollectionIterator *this)
{
  int v2; // eax
  unsigned int v3; // edi
  const char *v5; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 16LL))(*((_QWORD *)this + 8));
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( *((_DWORD *)this + 18) == *(_DWORD *)(*((_QWORD *)this + 7) + 32LL) )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x112,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualunorderedcollectioniterator.cpp",
        (const char *)0x8000000CLL,
        (int)"The underlying collection was changed after this iterator was created.",
        v5);
      return 2147483660LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10D,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualunorderedcollectioniterator.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
