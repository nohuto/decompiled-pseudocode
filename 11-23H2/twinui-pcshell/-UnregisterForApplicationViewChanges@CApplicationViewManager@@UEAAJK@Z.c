/*
 * XREFs of ?UnregisterForApplicationViewChanges@CApplicationViewManager@@UEAAJK@Z @ 0x18014DF60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@AgileRegistrationList@@QEAAJK@Z @ 0x18014E014 (-Unregister@AgileRegistrationList@@QEAAJK@Z.c)
 */

__int64 __fastcall CApplicationViewManager::UnregisterForApplicationViewChanges(
        CApplicationViewManager *this,
        unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = AgileRegistrationList::Unregister((CApplicationViewManager *)((char *)this + 96), a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x206,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
