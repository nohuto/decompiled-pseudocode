/*
 * XREFs of PspTimerDelayProcess @ 0x1405A5020
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     PspApplyTimerDelayProcess @ 0x1405A4718 (PspApplyTimerDelayProcess.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140733390 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall PspTimerDelayProcess(void *a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  __int64 v4; // r8
  int v5; // ebx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  Object = 0LL;
  result = ObReferenceObjectByHandleWithTag(a1, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0, 0x624A7350u, &Object, 0LL);
  if ( result >= 0 )
  {
    v5 = PspApplyTimerDelayProcess((__int64)Object, a2, v4);
    ObfDereferenceObjectWithTag(Object, 0x624A7350u);
    return v5;
  }
  return result;
}
