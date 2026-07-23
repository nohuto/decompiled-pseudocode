/*
 * XREFs of sub_140367DEC @ 0x140367DEC
 * Callers:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_140367A64 @ 0x140367A64 (sub_140367A64.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsReturnPoolQuota @ 0x140367E30 (PsReturnPoolQuota.c)
 */

void __fastcall sub_140367DEC(struct _KPROCESS *Object, ULONG_PTR Amount, char a3, ULONG a4)
{
  PsReturnPoolQuota(Object, (POOL_TYPE)(a3 & 1), Amount);
  ObDereferenceObjectDeferDeleteWithTag(Object, a4);
}
