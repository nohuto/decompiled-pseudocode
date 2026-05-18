/*
 * XREFs of sub_18008EE7C @ 0x18008EE7C
 * Callers:
 *     sub_18008F04C @ 0x18008F04C (sub_18008F04C.c)
 * Callees:
 *     sub_18001E580 @ 0x18001E580 (sub_18001E580.c)
 *     sub_18001E5CC @ 0x18001E5CC (sub_18001E5CC.c)
 *     sub_18001E804 @ 0x18001E804 (sub_18001E804.c)
 *     sub_18001EFA8 @ 0x18001EFA8 (sub_18001EFA8.c)
 *     sub_180051254 @ 0x180051254 (sub_180051254.c)
 *     sub_180051F3C @ 0x180051F3C (sub_180051F3C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008EE7C(__int64 a1, void **a2)
{
  unsigned int v4; // ebp
  char v5; // r15
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rax
  int i; // eax
  __int64 v11; // r8
  char v12; // si
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  _BYTE v17[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v18[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  v5 = 0;
  sub_180051254((__int64)v17, a1, 0);
  if ( v17[8] )
  {
    v6 = std::ios_base::getloc(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v18);
    v7 = sub_18001EFA8(v6);
    sub_18001E5CC((__int64)v18);
    sub_180051F3C(a2);
    v8 = 0x7FFFFFFFFFFFFFFFLL;
    if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) > 0
      && (unsigned __int64)std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) < 0x7FFFFFFFFFFFFFFFLL )
    {
      v8 = std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL)));
    }
    v9 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    for ( i = std::streambuf::sgetc(v9); ; i = std::streambuf::snextc(v14) )
    {
      v12 = i;
      if ( !v8 )
        break;
      if ( i == -1 )
      {
        v4 = 1;
        break;
      }
      LOBYTE(v11) = i;
      if ( (unsigned __int8)std::ctype<char>::is(v7, 72LL, v11) )
        break;
      LOBYTE(v13) = v12;
      sub_18001E804(a2, v13);
      v5 = 1;
      --v8;
      v14 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    }
  }
  std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL)), 0LL);
  v15 = v4 | 2;
  if ( v5 )
    v15 = v4;
  std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v15, 0LL);
  sub_18001E580((__int64)v17);
  return a1;
}
