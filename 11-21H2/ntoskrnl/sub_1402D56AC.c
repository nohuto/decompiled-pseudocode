/*
 * XREFs of sub_1402D56AC @ 0x1402D56AC
 * Callers:
 *     sub_1402234C0 @ 0x1402234C0 (sub_1402234C0.c)
 *     sub_1402D3C34 @ 0x1402D3C34 (sub_1402D3C34.c)
 * Callees:
 *     IoFreeMiniCompletionPacket @ 0x14074F6E0 (IoFreeMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1402D56AC(_QWORD *P)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 2); i = (unsigned int)(i + 1) )
    IoFreeMiniCompletionPacket(P[3 * i + 8]);
  ExFreePoolWithTag(P, 0);
}
