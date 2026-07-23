/*
 * XREFs of sub_1406FF880 @ 0x1406FF880
 * Callers:
 *     sub_140678C4C @ 0x140678C4C (sub_140678C4C.c)
 *     sub_140679034 @ 0x140679034 (sub_140679034.c)
 *     sub_140679480 @ 0x140679480 (sub_140679480.c)
 *     sub_1406822EC @ 0x1406822EC (sub_1406822EC.c)
 *     sub_140685304 @ 0x140685304 (sub_140685304.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_140687654 @ 0x140687654 (sub_140687654.c)
 *     sub_1406954C8 @ 0x1406954C8 (sub_1406954C8.c)
 *     sub_1406D4A68 @ 0x1406D4A68 (sub_1406D4A68.c)
 *     sub_1406D4C5C @ 0x1406D4C5C (sub_1406D4C5C.c)
 *     sub_1406D4CBC @ 0x1406D4CBC (sub_1406D4CBC.c)
 *     sub_1406D78E0 @ 0x1406D78E0 (sub_1406D78E0.c)
 *     sub_1406E0138 @ 0x1406E0138 (sub_1406E0138.c)
 *     sub_1406E6570 @ 0x1406E6570 (sub_1406E6570.c)
 *     sub_1407B67A0 @ 0x1407B67A0 (sub_1407B67A0.c)
 *     sub_1409ACBA0 @ 0x1409ACBA0 (sub_1409ACBA0.c)
 *     sub_1409B0400 @ 0x1409B0400 (sub_1409B0400.c)
 *     sub_1409B062C @ 0x1409B062C (sub_1409B062C.c)
 *     sub_1409B06C4 @ 0x1409B06C4 (sub_1409B06C4.c)
 *     sub_1409B0A5C @ 0x1409B0A5C (sub_1409B0A5C.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     sub_1406FF7C4 @ 0x1406FF7C4 (sub_1406FF7C4.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_1406FFEFC @ 0x1406FFEFC (sub_1406FFEFC.c)
 *     sub_1406FFF24 @ 0x1406FFF24 (sub_1406FFF24.c)
 */

__int64 __fastcall sub_1406FF880(_QWORD *Object, int a2, int a3, int a4, __int64 a5, int a6)
{
  int v6; // edi
  int v8; // eax
  unsigned int v9; // r13d
  _QWORD *v10; // rbx
  int v11; // r15d
  _QWORD *v12; // rsi
  _QWORD *v13; // r14
  __int64 v14; // r14
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp+8h]
  int v17; // [rsp+88h] [rbp+10h]
  int v18; // [rsp+90h] [rbp+18h]
  int v19; // [rsp+98h] [rbp+20h]
  int v20; // [rsp+A8h] [rbp+30h]

  v19 = a4;
  v18 = a3;
  v17 = a2;
  v6 = a6;
  v8 = a6 | 1;
  v9 = a6 & 0xFFFFFFFE;
  v10 = Object;
  if ( (a6 & 8) != 0 )
    v9 = a6 | 1;
  v11 = 0;
  v20 = v9;
  if ( (v6 & 8) != 0 )
    v6 = v8;
  while ( 1 )
  {
    if ( (v6 & 2) == 0 )
    {
      v11 = sub_1406FFF24((_DWORD)v10, a2, a3, a4, a5, v6);
      if ( v11 < 0 )
        goto LABEL_25;
      v6 = v9;
    }
    CurrentThread = KeGetCurrentThread();
    v12 = 0LL;
    sub_1406FFEFC(v10, CurrentThread);
    v13 = (_QWORD *)v10[156];
    if ( v13 != v10 + 156 )
    {
      while ( !ObReferenceObjectSafeWithTag((__int64)(v13 - 154)) )
      {
        v13 = (_QWORD *)*v13;
        if ( v13 == v10 + 156 )
          goto LABEL_20;
      }
      v12 = v13 - 154;
LABEL_20:
      v9 = v20;
    }
    sub_1406FFE90(v10, CurrentThread);
    if ( !v12 )
    {
      v14 = v10[158];
      if ( v10 != Object )
        break;
    }
LABEL_13:
    v10 = v12;
    if ( !v12 )
    {
      if ( (v6 & 2) != 0 )
        return (unsigned int)sub_1406FFF24((_DWORD)Object, v17, v18, v19, a5, v6);
      return (unsigned int)v11;
    }
    a4 = v19;
    a3 = v18;
    a2 = v17;
  }
  while ( 1 )
  {
    if ( (v6 & 2) != 0 )
    {
      v11 = sub_1406FFF24((_DWORD)v10, v17, v18, v19, a5, v9);
      if ( v11 < 0 )
        break;
    }
    v12 = sub_1406FF7C4(v14, v10);
    if ( !v12 )
    {
      v10 = (_QWORD *)v14;
      v14 = *(_QWORD *)(v14 + 1264);
      if ( v10 != Object )
        continue;
    }
    goto LABEL_13;
  }
LABEL_25:
  if ( v10 )
  {
    while ( v10 != Object )
    {
      ObfDereferenceObjectWithTag(v10, 0x6E457350u);
      v10 = (_QWORD *)v10[158];
    }
  }
  return (unsigned int)v11;
}
