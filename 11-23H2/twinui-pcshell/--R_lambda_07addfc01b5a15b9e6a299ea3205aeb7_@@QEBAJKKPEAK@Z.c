/*
 * XREFs of ??R_lambda_07addfc01b5a15b9e6a299ea3205aeb7_@@QEBAJKKPEAK@Z @ 0x18062A7B0
 * Callers:
 *     ?DropDataOnWin32EndPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAAKAEBV?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@9@PEAUHWND__@@AEBUtagPOINT@@_N@Z @ 0x18062AC68 (-DropDataOnWin32EndPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Inter.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _lambda_07addfc01b5a15b9e6a299ea3205aeb7_::operator()(_QWORD *a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v6; // rbx
  __int64 v8; // rdi
  __int64 (__fastcall *v11)(__int64, _QWORD, _QWORD, _QWORD, int, int, _QWORD, __int64, DWORD, __int64, __int64); // r12
  DWORD CurrentThreadId; // eax

  v4 = *a1;
  v6 = a1[1];
  v8 = a1[3];
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, int, _QWORD, __int64, DWORD, __int64, __int64))(*(_QWORD *)*a1 + 24LL);
  CurrentThreadId = GetCurrentThreadId();
  return v11(v4, 0LL, a1[1], 0LL, a2, a3, a1[2], a4, CurrentThreadId, v8, v6);
}
