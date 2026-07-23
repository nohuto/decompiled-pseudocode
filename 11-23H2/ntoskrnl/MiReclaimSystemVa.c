/*
 * XREFs of MiReclaimSystemVa @ 0x14036795C
 * Callers:
 *     MiObtainDynamicVa @ 0x140211044 (MiObtainDynamicVa.c)
 *     MiExtendDynamicBitMap @ 0x1403AAC40 (MiExtendDynamicBitMap.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 */

LONG __fastcall MiReclaimSystemVa(int a1)
{
  LONG result; // eax

  if ( a1 || (unsigned __int64)qword_140C66D08 <= 0x8000000 )
    return KeSetEvent(&stru_140C67090, 0, 0);
  return result;
}
