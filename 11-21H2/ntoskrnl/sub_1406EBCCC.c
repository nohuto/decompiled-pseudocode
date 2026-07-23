/*
 * XREFs of sub_1406EBCCC @ 0x1406EBCCC
 * Callers:
 *     sub_14025F4D4 @ 0x14025F4D4 (sub_14025F4D4.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402EF060 @ 0x1402EF060 (sub_1402EF060.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     KeQueryPriorityThread @ 0x14035D5C0 (KeQueryPriorityThread.c)
 *     sub_1406EBE54 @ 0x1406EBE54 (sub_1406EBE54.c)
 */

__int64 __fastcall sub_1406EBCCC(PVOID Object)
{
  char *v2; // rax
  ULONG_PTR v3; // rbx
  __int64 v4; // rax
  int v5; // r8d

  v2 = (char *)sub_1402828F0(64, 0x48uLL, 0x73536D4Du);
  v3 = (ULONG_PTR)v2;
  if ( !v2 )
    return 3221225626LL;
  KeInitializeEvent((PRKEVENT)(v2 + 40), NotificationEvent, 0);
  *(_QWORD *)v3 = 0LL;
  *(_QWORD *)(v3 + 16) = sub_1406EBDB0;
  *(_QWORD *)(v3 + 24) = v3;
  ObfReferenceObjectWithTag(Object, 0x73576D4Du);
  *(_QWORD *)(v3 + 32) = Object;
  *(_DWORD *)(v3 + 64) = 2;
  KeQueryPriorityThread(KeGetCurrentThread());
  v4 = sub_14032A72C((__int64)Object);
  sub_1402EF060(v3, v5 + 32, 0xFFFFFFFF, *(_QWORD *)(v4 + 176));
  KeWaitForSingleObject((PVOID)(v3 + 40), WrKernel, 0, 0, (PLARGE_INTEGER)&stru_14000EEA8);
  sub_1406EBE54(v3);
  return 0LL;
}
