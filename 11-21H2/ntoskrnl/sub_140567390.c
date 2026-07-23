/*
 * XREFs of sub_140567390 @ 0x140567390
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405671EC @ 0x1405671EC (sub_1405671EC.c)
 *     sub_140567D6C @ 0x140567D6C (sub_140567D6C.c)
 *     sub_14064E7FC @ 0x14064E7FC (sub_14064E7FC.c)
 */

__int64 __fastcall sub_140567390(unsigned int a1)
{
  bool v2; // di
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 *v5; // rcx
  __int128 v7; // [rsp+20h] [rbp-40h] BYREF
  __int128 v8; // [rsp+30h] [rbp-30h] BYREF
  char *v9; // [rsp+40h] [rbp-20h]
  char v10; // [rsp+48h] [rbp-18h] BYREF

  v8 = 0LL;
  v2 = dword_140C54D54 != 0;
  WORD5(v8) = 8;
  v9 = &v10;
  v7 = 0LL;
  sub_1403A7C40();
  if ( (dword_140C0DF90 & 2) != 0 )
  {
    LOBYTE(v3) = v2;
    sub_14064E7FC(a1, &v7, v3);
  }
  sub_1403A7BF0();
  if ( a1 )
  {
    sub_140567D6C(L"\r\x1B[0K\r", 14LL);
    if ( (_QWORD)v7 && *((_QWORD *)&v7 + 1) && (_QWORD)v8 )
    {
      sub_140567D6C(*(_QWORD *)(v7 + 8), *(unsigned __int16 *)v7);
      sub_140567D6C(&word_140438490, 4LL);
      sub_140567D6C(*(_QWORD *)(*((_QWORD *)&v7 + 1) + 8LL), (unsigned __int16)**((_WORD **)&v7 + 1));
      sub_140567D6C(v9, WORD4(v8));
      v4 = *(unsigned __int16 *)v8;
      v5 = *(__int64 **)(v8 + 8);
    }
    else
    {
      sub_1405671EC(a1, (__int64)&v8 + 8);
      sub_140567D6C(v9, WORD4(v8));
      v4 = 4LL;
      v5 = qword_1404384A0;
    }
    sub_140567D6C(v5, v4);
  }
  if ( a1 == 100 )
    sub_140567D6C(L"\r\n", 6LL);
  return 0LL;
}
