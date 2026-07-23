/*
 * XREFs of sub_140260BE0 @ 0x140260BE0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_1406ECC60 @ 0x1406ECC60 (sub_1406ECC60.c)
 */

__int64 __fastcall sub_140260BE0(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  v2 = *(_DWORD *)(a1 + 64);
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  v3 = sub_14035F5E8(v1, v2);
  return sub_1406ECC60(v4, *(unsigned int *)(*(_QWORD *)v3 + 6016LL), 0LL);
}
