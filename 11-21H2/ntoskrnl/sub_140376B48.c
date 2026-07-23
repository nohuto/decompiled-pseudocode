/*
 * XREFs of sub_140376B48 @ 0x140376B48
 * Callers:
 *     sub_140376A50 @ 0x140376A50 (sub_140376A50.c)
 *     sub_1409D42F8 @ 0x1409D42F8 (sub_1409D42F8.c)
 *     sub_1409D43FC @ 0x1409D43FC (sub_1409D43FC.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_14035F464 @ 0x14035F464 (sub_14035F464.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_140376BB8 @ 0x140376BB8 (sub_140376BB8.c)
 */

__int64 __fastcall sub_140376B48(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5)
{
  __int16 v7; // di
  ULONG_PTR v9; // rax
  int v10; // ecx
  int v11; // ebx
  struct _EX_RUNDOWN_REF *v13; // rax

  v7 = a2;
  v9 = sub_14035F464(a1, a2);
  if ( v9 )
  {
    v11 = sub_140376BB8(v10, v9, a3, a4, a5);
    if ( v11 < 0 )
    {
      v13 = (struct _EX_RUNDOWN_REF *)sub_14035F5E8(a1, v7 & 0x3FF);
      sub_1402AD030(v13 + 1);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v11;
}
