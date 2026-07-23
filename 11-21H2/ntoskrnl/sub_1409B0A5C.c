/*
 * XREFs of sub_1409B0A5C @ 0x1409B0A5C
 * Callers:
 *     sub_1409B0C74 @ 0x1409B0C74 (sub_1409B0C74.c)
 * Callees:
 *     sub_140678B4C @ 0x140678B4C (sub_140678B4C.c)
 *     sub_140678B98 @ 0x140678B98 (sub_140678B98.c)
 *     sub_1406FF880 @ 0x1406FF880 (sub_1406FF880.c)
 *     sub_1409B037C @ 0x1409B037C (sub_1409B037C.c)
 *     sub_1409B062C @ 0x1409B062C (sub_1409B062C.c)
 */

__int64 __fastcall sub_1409B0A5C(_QWORD *Object, __int64 a2, char a3)
{
  int v3; // r15d
  int v4; // eax
  unsigned int v5; // edi
  PVOID *v6; // rsi
  int v7; // r15d
  PVOID *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rcx
  __int64 v13[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+50h] [rbp-10h]

  v3 = *((_DWORD *)Object + 378);
  v15 = 0LL;
  v4 = v3 & 0x4000000;
  v5 = 0;
  v6 = 0LL;
  v7 = v3 & 0x2000000;
  *(_OWORD *)v13 = 0LL;
  v14 = 0LL;
  if ( (a3 & 1) == 0 )
  {
    if ( v4 )
    {
      sub_1409B062C((__int64)Object);
      return v5;
    }
    v5 = -1073741811;
    goto LABEL_13;
  }
  if ( !v4 )
  {
    if ( v7 )
    {
      v5 = -1073741637;
      goto LABEL_13;
    }
    v9 = (PVOID *)sub_140678B98(0LL);
    v6 = v9;
    if ( !v9 )
    {
      v5 = -1073741801;
      goto LABEL_13;
    }
    Object[188] = v9;
    _InterlockedOr((volatile signed __int32 *)Object + 378, 0x4000000u);
    sub_1409B037C((__int64)Object, 0x2000000u, 1);
  }
  LODWORD(v15) = 0;
  *((_QWORD *)&v14 + 1) = Object;
  BYTE4(v15) = 1;
  v5 = sub_1406FF880(Object, (int)sub_1409B0F50, 0, (int)sub_1409B0F90, (__int64)v13, 5);
  if ( (v5 & 0x80000000) == 0 )
    return v5;
  if ( v6 )
    sub_140678B4C(v6, 0);
LABEL_13:
  Object[188] = 0LL;
  _InterlockedAnd((volatile signed __int32 *)Object + 378, 0xFBFFFFFF);
  if ( !v7 )
  {
    sub_1409B037C((__int64)Object, 0x2000000u, 0);
    v13[0] &= v10;
    v13[1] &= v10;
    LODWORD(v15) = v10 & v15;
    v14 = 0LL;
    BYTE4(v15) = v10;
    sub_1406FF880(v11, (int)sub_1409B0F50, v10, (int)sub_1409B0F90, (__int64)v13, 5);
  }
  return v5;
}
