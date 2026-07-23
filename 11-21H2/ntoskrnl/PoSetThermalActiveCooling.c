/*
 * XREFs of PoSetThermalActiveCooling @ 0x14098B330
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1405C9A5C @ 0x1405C9A5C (sub_1405C9A5C.c)
 *     sub_14081CEB4 @ 0x14081CEB4 (sub_14081CEB4.c)
 *     PoGetThermalRequestSupport @ 0x140861E30 (PoGetThermalRequestSupport.c)
 *     sub_140993398 @ 0x140993398 (sub_140993398.c)
 */

__int64 __fastcall PoSetThermalActiveCooling(__int64 a1, char a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  char v6; // bp
  __int64 v7; // rdx
  char v8; // al

  v4 = 0;
  if ( PoGetThermalRequestSupport(a1, 1) )
  {
    v5 = *(_QWORD *)(a1 + 32);
    v6 = a2 != 0;
    sub_1402D66A8(v5 + 32);
    if ( *(_BYTE *)(a1 + 18) )
    {
      v8 = *(_BYTE *)(a1 + 17);
      if ( v8 != v6 )
      {
        LOBYTE(v7) = v8 == 0;
        sub_14081CEB4(a1 + 40, v7);
        *(_BYTE *)(a1 + 17) = v6;
        sub_140993398(a1);
        sub_1405C9A5C(v5);
      }
    }
    else
    {
      v4 = -1073741431;
    }
    sub_1402935D0(v5 + 32);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
