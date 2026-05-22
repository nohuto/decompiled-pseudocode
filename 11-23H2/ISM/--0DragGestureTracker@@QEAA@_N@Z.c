/*
 * XREFs of ??0DragGestureTracker@@QEAA@_N@Z @ 0x1801BB858
 * Callers:
 *     ??$make_unique@VDragGestureTracker@@_N$0A@@std@@YA?AV?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@0@$$QEA_N@Z @ 0x18015BF9C (--$make_unique@VDragGestureTracker@@_N$0A@@std@@YA-AV-$unique_ptr@VDragGestureTracker@@U-$defaul.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetAndInitializeInteractionContext@DragGestureTracker@@QEAAJXZ @ 0x1801BB8FC (-ResetAndInitializeInteractionContext@DragGestureTracker@@QEAAJXZ.c)
 */

DragGestureTracker *__fastcall DragGestureTracker::DragGestureTracker(DragGestureTracker *this, char a2)
{
  int InteractionContext; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  if ( a2 )
  {
    InteractionContext = CreateInteractionContext();
    if ( InteractionContext < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xD,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\pointermanipulationtracker\\draggesturetracker.cpp",
        (const char *)(unsigned int)InteractionContext,
        v5);
    DragGestureTracker::ResetAndInitializeInteractionContext(this);
  }
  return this;
}
