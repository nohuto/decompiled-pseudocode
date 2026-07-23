/*
 * XREFs of sub_14098FDE4 @ 0x14098FDE4
 * Callers:
 *     sub_14098FEF4 @ 0x14098FEF4 (sub_14098FEF4.c)
 * Callees:
 *     sub_1402A1770 @ 0x1402A1770 (sub_1402A1770.c)
 *     sub_140300B40 @ 0x140300B40 (sub_140300B40.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407FE82C @ 0x1407FE82C (sub_1407FE82C.c)
 *     sub_140807718 @ 0x140807718 (sub_140807718.c)
 *     sub_1409932A0 @ 0x1409932A0 (sub_1409932A0.c)
 */

__int64 __fastcall sub_14098FDE4(__int64 a1, __int64 a2)
{
  char v2; // si
  unsigned int v3; // ebx
  void *i; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *v10; // rdi
  __int64 v12; // [rsp+20h] [rbp-30h] BYREF
  int v13; // [rsp+28h] [rbp-28h] BYREF
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h]

  v12 = 0LL;
  LOBYTE(a2) = 1;
  v15 = 0LL;
  v2 = a1;
  v3 = 0;
  v14 = 0LL;
  sub_1409932A0(a1, a2);
  for ( i = 0LL; ; i = v10 )
  {
    v7 = sub_1402A1770(i);
    v10 = (void *)v7;
    if ( !v7 )
      break;
    v13 = sub_140300B40(v7);
    BYTE4(v12) = v2;
    *(_WORD *)((char *)&v12 + 5) = 1;
    LODWORD(v12) = v13;
    v3 = sub_140807718((unsigned int *)&v12, v5);
    if ( !v2 )
    {
      BYTE6(v12) = 1;
      v3 = sub_140807718((unsigned int *)&v12, v6);
    }
    if ( !v3 )
    {
      LOBYTE(v14) = 0;
      DWORD1(v14) = 2;
      HIDWORD(v14) = 0x80000000;
      v15 = 0x140000000ELL;
      DWORD2(v14) = v2 != 0 ? 5 : 1;
      v3 = sub_1407FE82C(&v14, (__int64)&v13);
    }
  }
  LOBYTE(v8) = 1;
  LOBYTE(v9) = v2;
  sub_1409932A0(v9, v8);
  return v3;
}
