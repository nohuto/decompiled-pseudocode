/*
 * XREFs of LdrpTableDispatchUserCallTargetXFG @ 0x180093EB0
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

  if ( (v0 & 0xF) == 0 && (v0 & 0xFFF) != 0 )
  {
    v2 = *(_QWORD *)(v0 - 8) ^ 1LL | 2;
    if ( *(_QWORD *)v1 == v2 )
      goto LABEL_8;
    while ( 1 )
    {
      v1 += 8LL;
      if ( (*(_QWORD *)v1 & 2LL) == 0 )
        break;
      if ( *(_QWORD *)v1 == v2 )
        goto LABEL_8;
    }
    if ( *(_QWORD *)v1 == (v2 ^ 2) )
    {
LABEL_8:
      ((void (*)(void))v0)();
      return;
    }
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
  }
  else if ( _bittest64(&v5, v1) )
  {
LABEL_11:
    ((void (*)(void))(v7 & 0xFFFFFFFFFFFFFFLL))();
    return;
  }
  LdrpHandleInvalidUserCallTarget();
}
