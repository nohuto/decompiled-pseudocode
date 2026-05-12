/*
 * XREFs of sub_1C00224D4 @ 0x1C00224D4
 * Callers:
 *     sub_1C001C0C0 @ 0x1C001C0C0 (sub_1C001C0C0.c)
 *     sub_1C00222EC @ 0x1C00222EC (sub_1C00222EC.c)
 *     sub_1C005E3A8 @ 0x1C005E3A8 (sub_1C005E3A8.c)
 *     sub_1C0067DA0 @ 0x1C0067DA0 (sub_1C0067DA0.c)
 *     sub_1C00A9738 @ 0x1C00A9738 (sub_1C00A9738.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C00224D4(void *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
  {
    qword_1C0093BF8 = 0LL;
    ExFreePoolWithTag(a1, 0x44506152u);
  }
}
