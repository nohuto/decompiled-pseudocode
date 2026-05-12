/*
 * XREFs of sub_1C0019CFC @ 0x1C0019CFC
 * Callers:
 *     sub_1C00127A8 @ 0x1C00127A8 (sub_1C00127A8.c)
 *     sub_1C001F308 @ 0x1C001F308 (sub_1C001F308.c)
 *     sub_1C0020470 @ 0x1C0020470 (sub_1C0020470.c)
 *     sub_1C003576C @ 0x1C003576C (sub_1C003576C.c)
 *     sub_1C0037EE0 @ 0x1C0037EE0 (sub_1C0037EE0.c)
 *     sub_1C0038FB0 @ 0x1C0038FB0 (sub_1C0038FB0.c)
 *     StorPortCompleteRequest @ 0x1C0045F40 (StorPortCompleteRequest.c)
 *     StorPortPause @ 0x1C0046980 (StorPortPause.c)
 *     sub_1C005FDF0 @ 0x1C005FDF0 (sub_1C005FDF0.c)
 *     sub_1C00A82EC @ 0x1C00A82EC (sub_1C00A82EC.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 * Callees:
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 */

__int64 __fastcall sub_1C0019CFC(__int64 a1)
{
  unsigned __int32 v1; // ebx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 924));
  if ( (qword_1C0093468 & 0x200) != 0 )
    sub_1C0019E4C(a1, 6, (_DWORD)retaddr, v1, a1, *(unsigned int *)(a1 + 56), 0LL);
  return v1;
}
