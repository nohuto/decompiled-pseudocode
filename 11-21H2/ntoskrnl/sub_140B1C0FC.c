/*
 * XREFs of sub_140B1C0FC @ 0x140B1C0FC
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 *     sub_140B1BBE4 @ 0x140B1BBE4 (sub_140B1BBE4.c)
 * Callees:
 *     sub_1403CCC40 @ 0x1403CCC40 (sub_1403CCC40.c)
 *     sub_1403CCD08 @ 0x1403CCD08 (sub_1403CCD08.c)
 *     sub_1403CCE24 @ 0x1403CCE24 (sub_1403CCE24.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140B1BD88 @ 0x140B1BD88 (sub_140B1BD88.c)
 *     sub_140B1BE18 @ 0x140B1BE18 (sub_140B1BE18.c)
 *     sub_140B1BEA8 @ 0x140B1BEA8 (sub_140B1BEA8.c)
 *     sub_140B1BF9C @ 0x140B1BF9C (sub_140B1BF9C.c)
 *     sub_140B1C06C @ 0x140B1C06C (sub_140B1C06C.c)
 *     sub_140B1C22C @ 0x140B1C22C (sub_140B1C22C.c)
 *     sub_140B1C2F4 @ 0x140B1C2F4 (sub_140B1C2F4.c)
 *     sub_140B1C3C8 @ 0x140B1C3C8 (sub_140B1C3C8.c)
 *     sub_140B1C49C @ 0x140B1C49C (sub_140B1C49C.c)
 *     sub_140B1C78C @ 0x140B1C78C (sub_140B1C78C.c)
 *     sub_140B1CB28 @ 0x140B1CB28 (sub_140B1CB28.c)
 *     sub_140B1CC30 @ 0x140B1CC30 (sub_140B1CC30.c)
 */

void __fastcall sub_140B1C0FC(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  PVOID *v4; // rbx
  PVOID *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbx
  _QWORD *PoolWithTag; // rax

  if ( (__int64 *)qword_140D00130 == &qword_140D00130 )
  {
LABEL_11:
    if ( a1 == 2 )
    {
      sub_140B1C78C(1LL);
      sub_140B1C49C(1LL);
    }
    return;
  }
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      sub_140B1CC30();
      sub_140B1BF9C();
      sub_1403CCC40(v1);
      sub_140B1CB28();
      sub_1403CCD08(v2);
      sub_140B1C06C(v3);
      sub_1403CCE24();
      v4 = (PVOID *)qword_140D00138;
      v5 = (PVOID *)*((_QWORD *)qword_140D00138 + 1);
      if ( *(__int64 **)qword_140D00138 == &qword_140D00130 )
      {
        while ( *v5 == v4 )
        {
          qword_140D00138 = v5;
          *v5 = &qword_140D00130;
          if ( v4 == (PVOID *)&qword_140D00130 )
            return;
          ExFreePoolWithTag(v4[2], 0);
          ExFreePoolWithTag(v4, 0);
          v4 = (PVOID *)qword_140D00138;
          if ( *(__int64 **)qword_140D00138 != &qword_140D00130 )
            break;
          v5 = (PVOID *)*((_QWORD *)qword_140D00138 + 1);
        }
      }
      __fastfail(3u);
    }
    goto LABEL_11;
  }
  sub_140B1BEA8();
  sub_140B1C2F4();
  sub_140B1C3C8();
  sub_140B1C22C(0LL);
  sub_140B1C22C(1LL);
  sub_140B1C78C(0LL);
  sub_140B1C49C(0LL);
  sub_140B1BD88(v6);
  sub_140B1BE18(v7);
  v8 = *(_QWORD *)(*(_QWORD *)(qword_140D068D0 + 240) + 3696LL);
  if ( v8 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x64506142u);
    qword_140C15B80 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      *(_OWORD *)PoolWithTag = *(_OWORD *)v8;
      PoolWithTag[2] = *(_QWORD *)(v8 + 16);
    }
  }
}
