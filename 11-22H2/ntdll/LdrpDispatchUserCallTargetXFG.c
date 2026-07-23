/*
 * XREFs of LdrpDispatchUserCallTargetXFG @ 0x18008ECF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LdrpDispatchUserCallTargetXFG()
{
  unsigned __int64 v0; // rax
  __int64 v1; // r10
  unsigned __int64 v2; // r10
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // rax
  __int64 v5; // r11
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r10
  __int64 v13; // r11
  unsigned __int64 v14; // rax

  v2 = v1 | 1;
  if ( (v0 & 0xF) == 0 && (v0 & 0xFFF) != 0 && v2 == *(_QWORD *)(v0 - 8) )
    goto LABEL_16;
  v3 = v0;
  v4 = v0 << 8;
  LOBYTE(v4) = v2;
  v5 = *(_QWORD *)(LdrSystemDllInitBlock.CfgBitMap + 8 * (v3 >> 9));
  v6 = __ROR8__(__ROR8__(v4, 8), 3);
  LOBYTE(v2) = v6;
  v7 = __ROL8__(v6, 3);
  if ( (v7 & 0xF) != 0 )
  {
    v8 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( _bittest64(&v5, v8) && _bittest64(&v5, v8 | 1) )
      goto LABEL_7;
LABEL_17:
    LdrpHandleInvalidUserCallTarget();
    return;
  }
  if ( _bittest64(&v5, v2) )
  {
LABEL_7:
    ((void (*)(void))(v7 & 0xFFFFFFFFFFFFFFLL))();
    return;
  }
  v9 = v2 | 1;
  if ( !_bittest64(&v5, v9) )
    goto LABEL_17;
  v10 = __ROL8__(v7, 8);
  LOBYTE(v9) = v10;
  v0 = v10 >> 8;
  v11 = v0;
  if ( v9 == *(_QWORD *)(v0 - 8) )
  {
LABEL_16:
    ((void (*)(void))v0)();
    return;
  }
  while ( _bittest64((const signed __int64 *)(v11 - 8), 1u) )
  {
    v12 = v9 | 2;
    if ( v12 != *(_QWORD *)(v11 - 8) )
    {
      v11 -= 8LL;
      v9 = 4 * (v12 >> 2);
      if ( v9 != *(_QWORD *)(v11 - 8) )
        continue;
    }
    goto LABEL_16;
  }
  v13 = *(_QWORD *)(LdrSystemDllInitBlock.CfgBitMap + 8 * (v0 >> 9));
  v14 = __ROR8__(v0, 3);
  if ( !_bittest64(&v13, v14) )
    goto LABEL_17;
  ((void (*)(void))__ROL8__(v14, 3))();
}
