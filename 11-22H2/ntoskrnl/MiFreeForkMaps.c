/*
 * XREFs of MiFreeForkMaps @ 0x140664800
 * Callers:
 *     MiCloneVads @ 0x1406632E8 (MiCloneVads.c)
 * Callees:
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     MiFinishLastForkPageTable @ 0x14066456C (MiFinishLastForkPageTable.c)
 */

void __fastcall MiFreeForkMaps(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 *v3; // rbx
  __int64 v4; // rdi

  v1 = *(_QWORD *)(a1 + 56);
  if ( v1 )
    MiReleasePtes((__int64)&qword_140C69A40, (__int64 *)(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), 1u);
  v3 = (__int64 *)(a1 + 8);
  v4 = 3LL;
  do
  {
    if ( *v3 != -1 )
      MiFinishLastForkPageTable(a1, *v3);
    ++v3;
    --v4;
  }
  while ( v4 );
}
