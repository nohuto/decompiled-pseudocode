/*
 * XREFs of LdrpValidateUserCallTargetXFG @ 0x18008EB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LdrpValidateUserCallTargetXFG(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r11
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx

  v2 = *(_QWORD *)(LdrSystemDllInitBlock.CfgBitMap + 8 * (a1 >> 9));
  v3 = a1 >> 3;
  if ( (a1 & 0xF) == 0 )
  {
    if ( _bittest64(&v2, v3) )
      return;
    if ( _bittest64(&v2, v3 | 1) )
    {
      v5 = a1;
      v6 = a2 | 1;
      if ( v6 == *(_QWORD *)(a1 - 8) )
        return;
      while ( _bittest64((const signed __int64 *)(v5 - 8), 1u) )
      {
        v7 = v6 | 2;
        if ( v7 != *(_QWORD *)(v5 - 8) )
        {
          v5 -= 8LL;
          v6 = 4 * (v7 >> 2);
          if ( v6 != *(_QWORD *)(v5 - 8) )
            continue;
        }
        return;
      }
    }
LABEL_13:
    LdrpHandleInvalidUserCallTarget();
    return;
  }
  v4 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !_bittest64(&v2, v4) || !_bittest64(&v2, v4 | 1) )
    goto LABEL_13;
}
