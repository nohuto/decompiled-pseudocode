/*
 * XREFs of LdrpTableDispatchUserCallTargetXFG @ 0x18008F600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LdrpTableDispatchUserCallTargetXFG()
{
  unsigned __int64 v0; // rax
  unsigned __int64 v1; // r10
  __int64 v2; // r11
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // rax
  __int64 v5; // r11
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // r10
  _QWORD *v9; // r10
  unsigned __int64 v10; // rax
  __int64 v11; // r11

  if ( (v0 & 0xF) == 0 && (v0 & 0xFFF) != 0 )
  {
    v2 = *(_QWORD *)(v0 - 8) ^ 1LL | 2;
    if ( *(_QWORD *)v1 == v2 )
      goto LABEL_22;
    while ( 1 )
    {
      v1 += 8LL;
      if ( (*(_QWORD *)v1 & 2LL) == 0 )
        break;
      if ( *(_QWORD *)v1 == v2 )
        goto LABEL_22;
    }
    if ( *(_QWORD *)v1 == (v2 ^ 2) )
      goto LABEL_22;
  }
  v3 = v0;
  v4 = v0 << 8;
  LOBYTE(v4) = v1;
  v5 = *(_QWORD *)(LdrSystemDllInitBlock.CfgBitMap + 8 * (v3 >> 9));
  v6 = __ROR8__(__ROR8__(v4, 8), 3);
  LOBYTE(v1) = v6;
  v7 = __ROL8__(v6, 3);
  if ( (v7 & 0xF) != 0 )
  {
    v8 = v1 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( _bittest64(&v5, v8) && _bittest64(&v5, v8 | 1) )
      goto LABEL_11;
    goto LABEL_14;
  }
  if ( _bittest64(&v5, v1) )
  {
LABEL_11:
    ((void (*)(void))(v7 & 0xFFFFFFFFFFFFFFLL))();
    return;
  }
  v9 = (_QWORD *)(v1 | 1);
  if ( !_bittest64(&v5, (unsigned __int64)v9) )
    goto LABEL_14;
  v10 = __ROL8__(v7, 8);
  LOBYTE(v9) = v10;
  v0 = v10 >> 8;
  v11 = *(_QWORD *)(v0 - 8) ^ 1LL | 2;
  if ( (*v9 & 2LL) != 0 )
  {
    if ( *v9 == v11 )
      goto LABEL_22;
    do
    {
      if ( (*++v9 & 2LL) == 0 )
        break;
    }
    while ( *v9 != v11 );
  }
  if ( *v9 != (v11 ^ 2) )
  {
LABEL_14:
    LdrpHandleInvalidUserCallTarget();
    return;
  }
LABEL_22:
  ((void (*)(void))v0)();
}
