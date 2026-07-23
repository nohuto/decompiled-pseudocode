/*
 * XREFs of sub_140A9CBF8 @ 0x140A9CBF8
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405FE024 @ 0x1405FE024 (sub_1405FE024.c)
 *     sub_140603390 @ 0x140603390 (sub_140603390.c)
 *     sub_140603974 @ 0x140603974 (sub_140603974.c)
 *     sub_140604884 @ 0x140604884 (sub_140604884.c)
 *     sub_140604D28 @ 0x140604D28 (sub_140604D28.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A82240 @ 0x140A82240 (sub_140A82240.c)
 *     sub_140A82298 @ 0x140A82298 (sub_140A82298.c)
 */

__int64 __fastcall sub_140A9CBF8(__int128 *a1, int a2)
{
  __int64 v2; // r9
  int v3; // r10d
  char v4; // r8
  __int64 *v6; // rdx
  __int64 v7; // r11
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned __int8 v11; // al
  int v12; // ebx
  __int128 v13; // [rsp+20h] [rbp-28h]

  v2 = 0LL;
  v3 = 0;
  v4 = 0;
  if ( a2 != 16 )
    return 3221225476LL;
  if ( (_DWORD)InitSafeBootMode )
    return 3221228554LL;
  if ( (_DWORD)qword_140D01450 )
    return 3221228669LL;
  v6 = qword_140041CC0;
  v7 = 9LL;
  do
  {
    v8 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 < 0x40u )
    {
      v2 = v8 >> 5;
      v3 = 1 << (v8 & 0x1F);
    }
    *((_DWORD *)&qword_140C1AD30 + v2) |= v3;
    v6 = (__int64 *)((char *)v6 + 4);
    --v7;
  }
  while ( v7 );
  v13 = *a1;
  v9 = 0LL;
  v10 = 2LL;
  do
  {
    if ( (*(_DWORD *)((_BYTE *)&v13 + v9) & *(_DWORD *)((_BYTE *)&qword_140C1AD30 + v9)) != 0 )
      v4 = 1;
    v9 += 4LL;
    --v10;
  }
  while ( v10 );
  if ( !v4 )
    return 3221228670LL;
  v11 = sub_140A82298();
  dword_140C1AD3C = v11;
  if ( !v11 )
  {
    v12 = -1073738632;
LABEL_22:
    qword_140C1AD30 = 0LL;
    qword_140D01450 = 0LL;
    dword_140C29FC0 = 0;
    if ( dword_140C1AD3C )
    {
      sub_140A82240();
      dword_140C1AD3C = 0;
    }
    byte_140C1AD98 = 0;
    sub_140604D28(0);
    if ( qword_140C1ACB0 )
    {
      ExFreePoolWithTag(qword_140C1ACB0, 0x6D4D7644u);
      qword_140C1ACB0 = 0LL;
    }
    sub_140603390();
    return (unsigned int)v12;
  }
  qword_140C1ACB0 = (PVOID)ExAllocatePool2(64LL, 24LL * (unsigned int)dword_140C1ACB8, 0x6D4D7644u);
  if ( !qword_140C1ACB0 )
  {
    v12 = -1073741801;
    goto LABEL_22;
  }
  qword_140D01450 = v13;
  sub_1405FE024();
  dword_140C1ACA0 = HIDWORD(v13);
  dword_140C1AA7C = DWORD2(v13);
  dword_140C29FC0 = qword_140D01450;
  byte_140C1AD98 = 1;
  sub_140604D28(1);
  sub_140603974();
  v12 = sub_140604884();
  if ( v12 < 0 )
    goto LABEL_22;
  return (unsigned int)v12;
}
