/*
 * XREFs of sub_1402EF304 @ 0x1402EF304
 * Callers:
 *     ntoskrnl_36 @ 0x1402EEBC0 (ntoskrnl_36.c)
 *     sub_1402EEE7C @ 0x1402EEE7C (sub_1402EEE7C.c)
 *     sub_1402EF060 @ 0x1402EF060 (sub_1402EF060.c)
 *     sub_14063F338 @ 0x14063F338 (sub_14063F338.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402EF304(unsigned int a1)
{
  if ( a1 >= 7 )
    return a1 - 32;
  else
    return (unsigned int)dword_140016028[a1];
}
