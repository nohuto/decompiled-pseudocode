/*
 * XREFs of ?ValidateOnOwningThread@CompositionBatch@Composition@UI@Windows@@AEAAJXZ @ 0x1801979CC
 * Callers:
 *     ?Resume@CompositionBatch@Composition@UI@Windows@@QEAAJXZ @ 0x1800B804E (-Resume@CompositionBatch@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?Suspend@CompositionBatch@Composition@UI@Windows@@QEAAJXZ @ 0x1800B80E2 (-Suspend@CompositionBatch@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?remove_Completed@CompositionBatch@Composition@UI@Windows@@QEAAJUEventRegistrationToken@@@Z @ 0x180197A1C (-remove_Completed@CompositionBatch@Composition@UI@Windows@@QEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionBatch::ValidateOnOwningThread(
        Windows::UI::Composition::CompositionBatch *this)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 34) == GetCurrentThreadId() )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x57,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionbatch.cpp",
    (const char *)0x8000000ELL);
  return 2147483662LL;
}
