/*
 * XREFs of ??1?$unique_ptr@UInputInfo@@P6AXPEAU1@@Z@std@@QEAA@XZ @ 0x1800B3820
 * Callers:
 *     ?InputReportCallback@GameControllerRawInputProvider@@CAJPEAX@Z @ 0x1800B3CA0 (-InputReportCallback@GameControllerRawInputProvider@@CAJPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::unique_ptr<InputInfo,void (*)(InputInfo *)>::~unique_ptr<InputInfo,void (*)(InputInfo *)>(
        __int64 a1)
{
  __int64 result; // rax

  result = a1;
  if ( *(_QWORD *)(a1 + 8) )
    return (*(__int64 (**)(void))a1)();
  return result;
}
