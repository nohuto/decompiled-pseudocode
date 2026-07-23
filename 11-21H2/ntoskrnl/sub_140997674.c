/*
 * XREFs of sub_140997674 @ 0x140997674
 * Callers:
 *     sub_1409974E8 @ 0x1409974E8 (sub_1409974E8.c)
 * Callees:
 *     sub_140A6CA38 @ 0x140A6CA38 (sub_140A6CA38.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

bool __fastcall sub_140997674(int a1, int a2, int a3, unsigned __int64 *a4, _QWORD *a5)
{
  unsigned __int64 v5; // r15
  PVOID v6; // rbx
  void *v7; // rsi
  int v8; // r10d
  bool v9; // r14
  unsigned __int64 v10; // rdi
  int v11; // r13d
  char v12; // al
  char v13; // al
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  void *v18; // [rsp+48h] [rbp-8h] BYREF
  int v20; // [rsp+A0h] [rbp+50h]

  v20 = a3;
  v5 = -1LL;
  v6 = 0LL;
  v17 = -1LL;
  v7 = 0LL;
  v15 = -1LL;
  v8 = a1;
  v18 = 0LL;
  *a5 = 0LL;
  v9 = 0;
  v10 = -1LL;
  P = 0LL;
  if ( qword_140C22880 && dword_140D050D4 )
  {
    v11 = qword_140C22880 + 10000000 * dword_140D050D4;
    if ( a2 )
    {
      LOBYTE(a3) = a2 == 2 && dword_140C22278 >= 0;
      v12 = sub_140A6CA38(a1, v11, a3, (unsigned int)&v17, (__int64)&v18);
      v5 = v17;
      v7 = v18;
      a3 = v20;
      v8 = a1;
      v9 = v12 != 0;
    }
    if ( a3
      && (a3 != 2 || dword_140C22278 < 0 ? (LOBYTE(a3) = 0) : (LOBYTE(a3) = 1),
          v13 = sub_140A6CA38(v8, v11, a3, (unsigned int)&v15, (__int64)&P),
          v10 = v15,
          v6 = P,
          v13) )
    {
      v9 = 1;
    }
    else if ( !v9 )
    {
      return v9;
    }
    if ( v5 > v10 )
    {
      if ( v7 )
        ExFreePoolWithTag(v7, 0x53577254u);
      *a5 = v6;
      *a4 = v10;
    }
    else
    {
      if ( v6 )
        ExFreePoolWithTag(v6, 0x53577254u);
      *a5 = v7;
      *a4 = v5;
    }
  }
  return v9;
}
