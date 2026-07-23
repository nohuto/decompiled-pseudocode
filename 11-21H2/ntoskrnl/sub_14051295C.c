/*
 * XREFs of sub_14051295C @ 0x14051295C
 * Callers:
 *     sub_1405127BC @ 0x1405127BC (sub_1405127BC.c)
 * Callees:
 *     IoFreeMapRegisters @ 0x140456A30 (IoFreeMapRegisters.c)
 *     sub_140519E90 @ 0x140519E90 (sub_140519E90.c)
 */

void __fastcall sub_14051295C(__int64 a1)
{
  ULONG v1; // r8d

  v1 = *(_DWORD *)(a1 + 240);
  if ( v1 )
  {
    IoFreeMapRegisters((PDMA_ADAPTER)a1, *(PVOID *)(a1 + 232), v1);
    *(_DWORD *)(a1 + 240) = 0;
  }
  if ( !*(_BYTE *)(a1 + 433) )
  {
    if ( *(_DWORD *)(a1 + 384) )
      sub_140519E90(a1);
  }
}
