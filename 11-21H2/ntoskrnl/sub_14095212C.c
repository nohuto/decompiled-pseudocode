/*
 * XREFs of sub_14095212C @ 0x14095212C
 * Callers:
 *     sub_140950E30 @ 0x140950E30 (sub_140950E30.c)
 *     sub_140951C58 @ 0x140951C58 (sub_140951C58.c)
 * Callees:
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     MmFreeMappingAddress @ 0x1407FA560 (MmFreeMappingAddress.c)
 */

void __fastcall sub_14095212C(__int64 a1)
{
  struct _MDL *v2; // rcx
  void *v3; // rcx

  v2 = *(struct _MDL **)a1;
  if ( v2 )
  {
    IoFreeMdl(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    MmFreeMappingAddress(v3, 0x51706E50u);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_WORD *)(a1 + 16) = 0;
}
