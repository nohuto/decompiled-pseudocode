/*
 * XREFs of sub_140A9C5F0 @ 0x140A9C5F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140240470 (ExAllocatePoolWithTagPriority.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

PVOID __fastcall sub_140A9C5F0(POOL_TYPE a1, SIZE_T a2, ULONG a3, EX_POOL_PRIORITY a4)
{
  if ( (qword_140D01450 & 0x400000) == 0 || (dword_140C29FC0 & 1) != 0 )
    return (PVOID)sub_14042A5E0(a1 | 0x80u, 0LL);
  else
    return ExAllocatePoolWithTagPriority(a1, a2, a3, a4);
}
