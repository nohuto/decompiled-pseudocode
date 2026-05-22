/*
 * XREFs of ?UpdateCursorOwnerAndNotifyTargets@CursorProcessor@@AEAAXKK@Z @ 0x180159598
 * Callers:
 *     ?CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z @ 0x180158A9C (-CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CursorProcessorUpdateCursorOwner@Cursor@InputTraceLogging@@SAXUCursorId@@KK@Z @ 0x180158D70 (-CursorProcessorUpdateCursorOwner@Cursor@InputTraceLogging@@SAXUCursorId@@KK@Z.c)
 *     ?GenerateCursorOwnerMessage@CursorProcessor@@AEAAXKUCursorId@@_N@Z @ 0x180158F3C (-GenerateCursorOwnerMessage@CursorProcessor@@AEAAXKUCursorId@@_N@Z.c)
 */

void __fastcall CursorProcessor::UpdateCursorOwnerAndNotifyTargets(
        CursorProcessor *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  LOBYTE(a4) = 1;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 13) + 72LL))(
         *((_QWORD *)this + 13),
         a3,
         1LL,
         a4);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\cursor\\system\\lib\\cursorprocessor.cpp",
      (const char *)(unsigned int)v6,
      (int)&v11);
  v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 13) + 32LL))(
         *((_QWORD *)this + 13),
         &v11);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x80,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\cursor\\system\\lib\\cursorprocessor.cpp",
      (const char *)(unsigned int)v7,
      (int)&v11);
  CursorProcessor::GenerateCursorOwnerMessage(v8, *((_DWORD *)this + 29), v11, 0);
  CursorProcessor::GenerateCursorOwnerMessage(v9, a2, v11, 1);
  InputTraceLogging::Cursor::CursorProcessorUpdateCursorOwner(v11, *((_DWORD *)this + 29), a2);
}
