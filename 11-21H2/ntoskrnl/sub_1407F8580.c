/*
 * XREFs of sub_1407F8580 @ 0x1407F8580
 * Callers:
 *     <none>
 * Callees:
 *     sub_140376DC4 @ 0x140376DC4 (sub_140376DC4.c)
 *     sub_1403AAE80 @ 0x1403AAE80 (sub_1403AAE80.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140524894 @ 0x140524894 (sub_140524894.c)
 *     sub_140524990 @ 0x140524990 (sub_140524990.c)
 *     sub_140524A8C @ 0x140524A8C (sub_140524A8C.c)
 *     sub_14090A644 @ 0x14090A644 (sub_14090A644.c)
 */

__int64 __fastcall sub_1407F8580(int a1, __int64 a2, __int64 *a3)
{
  int v4; // ebx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  v4 = a2;
  switch ( a1 )
  {
    case 0:
      if ( (_DWORD)a2 == 8 )
        return sub_140376DC4(*(unsigned int *)a3, (__int64)a3 + 4);
      return 3221225476LL;
    case 1:
      if ( (_DWORD)a2 != 8 )
        return 3221225476LL;
      if ( (dword_140C4C44C & 1) != 0 )
        return sub_140524990(*a3);
      else
        return 3221225473LL;
    case 10:
      if ( (_DWORD)a2 != 8 )
        return 3221225476LL;
      return sub_140524A8C(*a3);
    case 19:
      if ( !sub_1403AAE80(0LL, 0LL, 0LL, &v6) || v6 != 2 )
        return 3221225659LL;
      if ( v4 != 8 )
        return 3221225476LL;
      if ( (dword_140C4C44C & 0x41) == 0x41 )
        return sub_140524894(*a3);
      else
        return 3221225659LL;
    case 20:
      if ( (unsigned int)(a2 - 288) > 0x1F6 )
        return 3221225476LL;
      return sub_14042A5E0(a3, 0LL);
    case 21:
      if ( (_DWORD)a2 == 272 )
        return sub_14042A5E0(a3, a2);
      return 3221225476LL;
    default:
      return sub_14090A644();
  }
}
