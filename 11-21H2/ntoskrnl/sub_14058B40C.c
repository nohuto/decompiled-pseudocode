/*
 * XREFs of sub_14058B40C @ 0x14058B40C
 * Callers:
 *     sub_14058A6D4 @ 0x14058A6D4 (sub_14058A6D4.c)
 * Callees:
 *     sub_1402738F0 @ 0x1402738F0 (sub_1402738F0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_140337B00 @ 0x140337B00 (sub_140337B00.c)
 */

__int64 __fastcall sub_14058B40C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  ULONG_PTR v5; // rbx
  ULONG_PTR v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rsi
  char v9; // al
  char v10; // al
  unsigned __int8 v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( !*(_DWORD *)(a1 + 104) )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = v5 + 8LL * *(unsigned int *)(a1 + 44);
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 32LL) )
    return 0LL;
  v12 = 17;
  v7 = 0LL;
  if ( v5 >= v6 )
    return v4;
  while ( (v5 & 0xFFF) == 0 || v12 == 17 )
  {
    LOBYTE(a2) = v12;
    if ( v12 != 17 )
      sub_140334790(v7, a2, a3, a4);
    v7 = sub_140337B00(v5, &v12);
    if ( v7 )
      break;
    v5 = (v5 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_15:
    if ( v5 >= v6 )
      goto LABEL_20;
  }
  v8 = sub_1402738F0((unsigned __int64 *)v5, 0LL);
  if ( !v8 )
  {
LABEL_14:
    v5 += 8LL;
    goto LABEL_15;
  }
  if ( (sub_140317A10(v5) & 1) == 0 )
  {
    if ( *(_WORD *)(v8 + 32) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v4 = 2;
      goto LABEL_20;
    }
    v9 = *(_BYTE *)(v8 + 34);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v9 & 0x18) != 0 )
    {
      v4 = 1;
      goto LABEL_20;
    }
    goto LABEL_14;
  }
  v10 = *(_BYTE *)(v8 + 34);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v4 = 2 - ((v10 & 0x18) != 0);
LABEL_20:
  LOBYTE(a2) = v12;
  if ( v12 != 17 )
    sub_140334790(v7, a2, a3, a4);
  return v4;
}
