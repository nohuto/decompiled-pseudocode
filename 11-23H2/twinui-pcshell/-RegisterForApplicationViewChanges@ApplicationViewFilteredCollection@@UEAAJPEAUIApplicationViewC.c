/*
 * XREFs of ?RegisterForApplicationViewChanges@ApplicationViewFilteredCollection@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x180689950
 * Callers:
 *     ?RegisterForApplicationViewChanges@ApplicationViewFilteredCollection@@WBI@EAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x1802ABD10 (-RegisterForApplicationViewChanges@ApplicationViewFilteredCollection@@WBI@EAAJPEAUIApplicationVi.c)
 * Callees:
 *     ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x18013136C (-Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ApplicationViewFilteredCollection::RegisterForApplicationViewChanges(
        RTL_SRWLOCK *this,
        struct IUnknown *a2,
        unsigned int *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0;
  v3 = CGITRegistrationList::Register(this + 16, a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8B,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\applicationviewfilteredcollection.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
