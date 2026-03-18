/*
 * XREFs of ?GetPendingMouseMovePoint@QHelper@@YA?AUtagLOGICALPOINT@@AEBVCInputDest@@@Z @ 0x1C00CFE28
 * Callers:
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C0041BA4 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00341E0 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall QHelper::GetPendingMouseMovePoint(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 Queue; // rdi
  int v5; // eax
  int v7; // ecx

  Queue = CInputDest::GetQueue(a2, 2, a3);
  if ( Queue && qword_1C029CA48 && (unsigned int)qword_1C029CA48() )
  {
    v5 = *(_DWORD *)(Queue + 192);
    *(_QWORD *)a1 = *(_QWORD *)(Queue + 184);
    *(_DWORD *)(a1 + 8) = v5;
  }
  else
  {
    v7 = *((_DWORD *)gpsi + 1241);
    *(_DWORD *)a1 = *((_DWORD *)gpsi + 1240);
    *(_DWORD *)(a1 + 4) = v7;
    *(_DWORD *)(a1 + 8) = 18;
  }
  return a1;
}
