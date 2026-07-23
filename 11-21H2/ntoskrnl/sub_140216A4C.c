/*
 * XREFs of sub_140216A4C @ 0x140216A4C
 * Callers:
 *     sub_140212E00 @ 0x140212E00 (sub_140212E00.c)
 *     sub_1406939A4 @ 0x1406939A4 (sub_1406939A4.c)
 * Callees:
 *     sub_140216928 @ 0x140216928 (sub_140216928.c)
 *     sub_140221790 @ 0x140221790 (sub_140221790.c)
 *     sub_140364128 @ 0x140364128 (sub_140364128.c)
 *     sub_140366C48 @ 0x140366C48 (sub_140366C48.c)
 *     sub_14062DEE4 @ 0x14062DEE4 (sub_14062DEE4.c)
 */

__int64 __fastcall sub_140216A4C(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 v4; // rax
  int v5; // r10d
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // r11d
  __int64 v9; // r8
  __int64 v10; // rax
  int v12; // r9d
  __int64 v13; // r9

  if ( dword_140D05128 == 1819242320 )
    __debugbreak();
  v4 = DWORD1(xmmword_140D06900);
  if ( (BYTE4(xmmword_140D06900) & 0x41) != 0 )
    v4 = sub_14062DEE4(3618, 512, 1819242320, BugCheckParameter3, a2);
  LODWORD(v4) = HIDWORD(KeGetPcr()[1].LockArray);
  v5 = qword_140C157A0;
  v6 = qword_140C157A0 & 0x40DEDA5;
  v7 = (__int64)*(&qword_140C117A0 + v4);
  v8 = qword_140C157A0 & 0x40DEDA5;
  do
  {
    while ( 1 )
    {
      v9 = v7 + 80 * v6;
      if ( *(_DWORD *)v9 == 1819242320 )
      {
        sub_140216928(1, a2, v9);
        goto LABEL_8;
      }
      if ( *(_DWORD *)v9 )
        break;
      v12 = *(_DWORD *)(qword_140C157D0 + 80 * v6);
      if ( !v12 )
        break;
      *(_DWORD *)v9 = v12;
      v13 = *(_QWORD *)(qword_140C157D0 + 80 * v6 + 72);
      if ( v13 )
        *(_QWORD *)(v9 + 72) = v13;
    }
    v6 = v5 & (unsigned int)(v6 + 1);
  }
  while ( (_DWORD)v6 != v8 );
  sub_140221790(1819242320LL, a2, 512LL);
LABEL_8:
  v10 = sub_140366C48(BugCheckParameter3);
  return sub_140364128(v10, BugCheckParameter3, 0LL, 0LL, 0LL);
}
