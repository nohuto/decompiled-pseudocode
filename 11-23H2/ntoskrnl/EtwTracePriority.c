/*
 * XREFs of EtwTracePriority @ 0x14046778E
 * Callers:
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     PsSetIoPriorityThread @ 0x140207824 (PsSetIoPriorityThread.c)
 *     KeSetPriorityThread @ 0x1402B05D0 (KeSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402B98F0 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1402BA030 (KeSetBasePriorityThread.c)
 *     IoApplyPriorityInfoThread @ 0x1402BAE50 (IoApplyPriorityInfoThread.c)
 *     PsSetPagePriorityThread @ 0x1402C19D8 (PsSetPagePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140350330 (KeSetPriorityAndQuantumProcess.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     EtwpPsProvTracePriority @ 0x1405FE6DC (EtwpPsProvTracePriority.c)
 */

__int64 __fastcall EtwTracePriority(__int64 a1, unsigned __int16 a2, int a3, int a4, _BYTE *a5)
{
  char v5; // di
  char v7; // bl
  int v9; // eax
  __int64 result; // rax
  int v11; // [rsp+30h] [rbp-48h] BYREF
  char v12; // [rsp+34h] [rbp-44h]
  char v13; // [rsp+35h] [rbp-43h]
  __int16 v14; // [rsp+36h] [rbp-42h]
  int *v15; // [rsp+38h] [rbp-40h] BYREF
  int v16; // [rsp+40h] [rbp-38h]
  int v17; // [rsp+44h] [rbp-34h]

  if ( a3 != a4 )
  {
    v5 = a4;
    v7 = a3;
    if ( EtwpHostSiloState != -4540 && (*(_DWORD *)(EtwpHostSiloState + 4544) & 0x2000) != 0 )
      EtwpPsProvTracePriority(a1, a2);
    v9 = *(_DWORD *)(a1 + 1232);
    v14 = 0;
    v11 = v9;
    v12 = v7;
    v13 = v5;
    if ( a5 )
      LOBYTE(v14) = *a5;
    v17 = 0;
    v15 = &v11;
    v16 = 8;
    return EtwTraceKernelEvent((int)&v15, 1, 0x20002000u, a2, 22026499);
  }
  return result;
}
