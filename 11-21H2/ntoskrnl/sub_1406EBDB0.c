/*
 * XREFs of sub_1406EBDB0 @ 0x1406EBDB0
 * Callers:
 *     <none>
 * Callees:
 *     KeStackAttachProcess @ 0x140203630 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402037B0 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406EBE54 @ 0x1406EBE54 (sub_1406EBE54.c)
 *     sub_1406EBE78 @ 0x1406EBE78 (sub_1406EBE78.c)
 *     sub_1406EBF2C @ 0x1406EBF2C (sub_1406EBF2C.c)
 */

__int64 __fastcall sub_1406EBDB0(__int64 a1)
{
  struct _KPROCESS *v2; // rcx
  int v3; // edi
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(struct _KPROCESS **)(a1 + 32);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v2, &ApcState);
  v3 = sub_1406EBF2C(2LL);
  KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  if ( v3 < 0 )
    sub_1406EBE78(*(PEPROCESS *)(a1 + 32));
  KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x73576D4Du);
  return sub_1406EBE54(a1);
}
