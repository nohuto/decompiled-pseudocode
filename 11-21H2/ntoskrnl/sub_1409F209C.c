/*
 * XREFs of sub_1409F209C @ 0x1409F209C
 * Callers:
 *     sub_1409EF190 @ 0x1409EF190 (sub_1409EF190.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_14088394C @ 0x14088394C (sub_14088394C.c)
 *     sub_1409EF3C8 @ 0x1409EF3C8 (sub_1409EF3C8.c)
 *     sub_1409EF4C4 @ 0x1409EF4C4 (sub_1409EF4C4.c)
 *     sub_1409F226C @ 0x1409F226C (sub_1409F226C.c)
 */

void __fastcall sub_1409F209C(__int64 a1, _DWORD *a2)
{
  int v4; // ebp
  _DWORD *v5; // rsi
  int v6; // r15d
  ULONG_PTR v7; // rdi
  int v8; // ecx
  __int64 v9; // r9
  int v10; // ecx
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+18h] BYREF

  BugCheckParameter2 = 0LL;
  if ( (int)sub_14088394C(&BugCheckParameter2) < 0 || (v4 = 0, v5 = a2 + 18, v6 = 0, (int)a2[14] <= 0) )
  {
    v7 = BugCheckParameter2;
  }
  else
  {
    v7 = BugCheckParameter2;
    do
    {
      if ( v4 + 16 > a2[16] )
        break;
      v8 = v5[1];
      v9 = HIWORD(v8) & 0x7FFF;
      if ( *v5 != v4
        || (unsigned __int16)v8 < (unsigned int)(8 * v9)
        || (unsigned int)(unsigned __int16)v8 + *v5 > a2[15] )
      {
        break;
      }
      if ( v8 >= 0 )
      {
        if ( !(unsigned int)sub_1409F226C(a1, (unsigned __int16)v8, v5 + 2, v9) )
        {
          v7 = BugCheckParameter2;
          sub_1409EF3C8(
            BugCheckParameter2,
            *((_QWORD *)KeGetCurrentThread() + 23),
            (_QWORD *)v5 + 1,
            *((_WORD *)v5 + 3) & 0x7FFF);
        }
      }
      else
      {
        sub_1409EF4C4(v7, (__int64)(v5 + 2), v9);
      }
      v10 = v5[1];
      ++v6;
      v4 += (unsigned __int16)v10;
      v5 = (_DWORD *)((char *)v5 + (unsigned __int16)v10);
    }
    while ( v6 < a2[14] );
  }
  if ( v7 )
  {
    sub_1402AD030(&stru_140C15D80);
    KeLeaveCriticalRegion();
  }
}
