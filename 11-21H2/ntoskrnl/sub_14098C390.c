/*
 * XREFs of sub_14098C390 @ 0x14098C390
 * Callers:
 *     sub_14098C0DC @ 0x14098C0DC (sub_14098C0DC.c)
 * Callees:
 *     sub_1402A1770 @ 0x1402A1770 (sub_1402A1770.c)
 *     sub_140300B40 @ 0x140300B40 (sub_140300B40.c)
 *     sub_1407FE938 @ 0x1407FE938 (sub_1407FE938.c)
 *     sub_140807718 @ 0x140807718 (sub_140807718.c)
 */

__int64 __fastcall sub_14098C390(char a1, __int64 a2)
{
  char v2; // di
  __int64 result; // rax
  void *i; // rcx
  __int64 v5; // rdx
  void *v6; // rbx
  __int128 v7; // [rsp+20h] [rbp-10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+20h] BYREF

  v2 = a2;
  if ( a1 )
  {
    for ( i = 0LL; ; i = v6 )
    {
      result = sub_1402A1770(i);
      v6 = (void *)result;
      if ( !result )
        break;
      v8 = 0LL;
      LODWORD(v8) = sub_140300B40(result);
      BYTE4(v8) = v2;
      *(_WORD *)((char *)&v8 + 5) = 1;
      sub_140807718((unsigned int *)&v8, v5);
    }
  }
  else
  {
    v8 = 0LL;
    BYTE4(v8) = a2;
    sub_140807718((unsigned int *)&v8, a2);
    v7 = 0LL;
    if ( v2 )
    {
      *(_QWORD *)&v7 = 0x400000000LL;
      WORD6(v7) = 256;
    }
    else
    {
      *(_QWORD *)&v7 = 0x1200000003LL;
      WORD6(v7) = 1;
      sub_1407FE938(&v7);
      DWORD1(v7) = 7;
    }
    return sub_1407FE938(&v7);
  }
  return result;
}
