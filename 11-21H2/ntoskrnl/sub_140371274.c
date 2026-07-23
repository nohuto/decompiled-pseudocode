/*
 * XREFs of sub_140371274 @ 0x140371274
 * Callers:
 *     sub_1403700FC @ 0x1403700FC (sub_1403700FC.c)
 *     sub_140370C40 @ 0x140370C40 (sub_140370C40.c)
 * Callees:
 *     sub_14034FED0 @ 0x14034FED0 (sub_14034FED0.c)
 *     sub_140371378 @ 0x140371378 (sub_140371378.c)
 *     sub_140371398 @ 0x140371398 (sub_140371398.c)
 *     sub_1403713DC @ 0x1403713DC (sub_1403713DC.c)
 */

__int64 __fastcall sub_140371274(unsigned __int64 a1, unsigned __int64 a2, int a3, __int128 *a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // r14
  _QWORD *v10; // r9
  char v11; // r8
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v14 = *a4;
  v7 = sub_140371398(&v14);
  v8 = 0LL;
  v9 = (_QWORD *)v7;
  *(_QWORD *)&v14 = *v10;
  v11 = BYTE1(v14);
  BYTE3(v14) = 0;
  *((_QWORD *)&v14 + 1) = 0LL;
  if ( BYTE1(v14) >= 3u )
    v11 = 3;
  BYTE1(v14) = v11;
  if ( (int)sub_140371378(v7, &v14) >= 0 )
  {
    if ( a3 )
      return sub_14034FED0(
               *v9 + 320LL + (*(unsigned int *)(*v9 + 336LL) < a1 ? 0xC0 : 0),
               a1,
               a1,
               a2,
               a2 < a1 ? 83886080 : 0x1000000);
    else
      return sub_1403713DC(*v9, a1);
  }
  return v8;
}
