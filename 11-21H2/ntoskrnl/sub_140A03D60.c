/*
 * XREFs of sub_140A03D60 @ 0x140A03D60
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A0318C @ 0x140A0318C (sub_140A0318C.c)
 */

__int64 __fastcall sub_140A03D60(__int64 a1, __int64 a2)
{
  if ( sub_140A0318C(a1, *(_DWORD *)(a2 + 48), a2 + 16, a2 + 32) == 1 )
    memset(
      (void *)(*(_QWORD *)(a1 + 128) + *(unsigned int *)(*(_QWORD *)(a1 + 128) + 32LL)),
      0,
      *(unsigned int *)(*(_QWORD *)(a1 + 128) + 28LL));
  return 0LL;
}
