/*
 * XREFs of sub_140721D00 @ 0x140721D00
 * Callers:
 *     sub_140677DC0 @ 0x140677DC0 (sub_140677DC0.c)
 *     sub_140721BF0 @ 0x140721BF0 (sub_140721BF0.c)
 * Callees:
 *     sub_140721F88 @ 0x140721F88 (sub_140721F88.c)
 *     sub_140721FD0 @ 0x140721FD0 (sub_140721FD0.c)
 */

__int64 __fastcall sub_140721D00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 88);
  if ( !a2 )
    return *(_QWORD *)(a1 + 88);
  v7 = a1 + 208;
  v12 = 0LL;
  v8 = sub_140721F88(a1 + 208, &v12, a3, a4);
  if ( !v8 )
    return v4;
  while ( !(unsigned __int8)sub_140721FD0(*(_QWORD *)(v8 + 56), a2, v9) || *(_DWORD *)(v8 + 68) != 9 )
  {
    v8 = sub_140721F88(v7, &v12, v10, v11);
    if ( !v8 )
      return v4;
  }
  return *(_QWORD *)(v8 + 88);
}
