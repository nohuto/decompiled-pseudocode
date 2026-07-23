/*
 * XREFs of sub_1402365F4 @ 0x1402365F4
 * Callers:
 *     sub_14023659C @ 0x14023659C (sub_14023659C.c)
 *     sub_14030C870 @ 0x14030C870 (sub_14030C870.c)
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_14037D5E8 @ 0x14037D5E8 (sub_14037D5E8.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_140596B14 @ 0x140596B14 (sub_140596B14.c)
 *     sub_1405B5BA0 @ 0x1405B5BA0 (sub_1405B5BA0.c)
 *     sub_1405B5EB8 @ 0x1405B5EB8 (sub_1405B5EB8.c)
 *     sub_1409806C8 @ 0x1409806C8 (sub_1409806C8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402365F4(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 1838));
  result = 0LL;
  if ( *(_DWORD *)(v1 + 1176) )
  {
    if ( *(_QWORD *)(v1 + 1296) == a1 )
      return 1LL;
  }
  return result;
}
