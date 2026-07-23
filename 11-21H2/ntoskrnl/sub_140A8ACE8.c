/*
 * XREFs of sub_140A8ACE8 @ 0x140A8ACE8
 * Callers:
 *     IoAllocateIrpEx @ 0x14022CFA0 (IoAllocateIrpEx.c)
 *     sub_14084EA70 @ 0x14084EA70 (sub_14084EA70.c)
 *     sub_140A8D4A4 @ 0x140A8D4A4 (sub_140A8D4A4.c)
 *     sub_140A910FC @ 0x140A910FC (sub_140A910FC.c)
 *     sub_140A9466C @ 0x140A9466C (sub_140A9466C.c)
 *     sub_140A9D128 @ 0x140A9D128 (sub_140A9D128.c)
 * Callees:
 *     sub_140A8ABF8 @ 0x140A8ABF8 (sub_140A8ABF8.c)
 */

__int64 __fastcall sub_140A8ACE8(unsigned __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !dword_140C1ACBC && dword_140C1B200 )
    LOBYTE(v1) = sub_140A8ABF8(a1) != 0;
  return v1;
}
