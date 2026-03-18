/*
 * XREFs of UpdateRawKeyState @ 0x1C00AD178
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00C90C0 (xxxProcessKeyEvent.c)
 *     ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x1C01ECDE4 (-ApplyKeyStateUpdate@@YAXE_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall UpdateRawKeyState(__int64 a1, __int64 a2, __int64 a3, __int64 a4))(void)
{
  char v4; // di
  unsigned int v5; // r15d
  int v6; // esi
  unsigned __int64 v7; // rbx
  unsigned int v8; // ebp
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // ebx
  __int64 (*result)(void); // rax

  v4 = a1;
  v5 = (unsigned __int8)a2;
  v6 = a1 & 3;
  v7 = (unsigned __int64)(unsigned __int8)a1 >> 2;
  v8 = 2 * v6;
  if ( (_BYTE)a2 )
  {
    v9 = SGDGetUserSessionState(a1, a2, a3, a4);
    v10 = *(unsigned __int8 *)(v9 + v7 + 14056) & ~(1 << v8);
  }
  else
  {
    v11 = SGDGetUserSessionState(a1, a2, a3, a4);
    v14 = v8;
    LOBYTE(v15) = *(_BYTE *)(v7 + v11 + 14056);
    if ( ((unsigned __int8)v15 & (unsigned __int8)(1 << v8)) == 0 )
    {
      v16 = SGDGetUserSessionState(v8, v15, v12, v13);
      v14 = (unsigned int)(2 * v6 + 1);
      v15 = *(unsigned __int8 *)(v16 + v7 + 14056);
      LODWORD(v15) = v15 ^ (1 << (2 * v6 + 1));
      *(_BYTE *)(v16 + v7 + 14056) = v15;
    }
    v9 = SGDGetUserSessionState(v14, v15, v12, v13);
    v10 = *(unsigned __int8 *)(v9 + v7 + 14056) | (1 << v8);
  }
  *(_BYTE *)(v9 + v7 + 14056) = v10;
  if ( (unsigned __int8)(v4 - 16) > 2u )
  {
    v17 = 8;
    if ( (unsigned __int8)(v4 - 91) > 1u )
      v17 = 0;
  }
  else
  {
    v17 = 4 >> (v4 - 16);
  }
  result = qword_1C0296720;
  if ( qword_1C0296720 )
  {
    result = (__int64 (*)(void))qword_1C0296720();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296728;
      if ( qword_1C0296728 )
        return (__int64 (*)(void))qword_1C0296728(v5, v17);
    }
  }
  return result;
}
