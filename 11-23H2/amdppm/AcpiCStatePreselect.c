/*
 * XREFs of AcpiCStatePreselect @ 0x1C0004BD0
 * Callers:
 *     AcpiCStateIdlePrepare @ 0x1C0004B20 (AcpiCStateIdlePrepare.c)
 * Callees:
 *     SelectPreferredIdleState @ 0x1C000946C (SelectPreferredIdleState.c)
 */

__int64 __fastcall AcpiCStatePreselect(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // r10
  unsigned int v5; // r8d
  __int64 v6; // rdx
  unsigned int v7; // r9d
  bool v8; // zf

  SelectPreferredIdleState();
  v4 = *(_BYTE *)(a2 + 46);
  v5 = -1;
  if ( v4 )
  {
    LODWORD(v6) = *(_DWORD *)(a1 + 16);
    v7 = *(_DWORD *)(a1 + 12);
    if ( (_DWORD)v6 )
    {
      do
      {
        if ( *(_BYTE *)(88LL * v7 + a1 + 146) <= v4 )
          break;
        v8 = (_DWORD)v6 == 1;
        v6 = (unsigned int)(v6 - 1);
        v7 = *(unsigned __int8 *)(v6 + a1 + 21);
      }
      while ( !v8 );
    }
    *(_DWORD *)(a1 + 12) = v7;
    *(_DWORD *)(a1 + 16) = v6;
  }
  if ( *(_DWORD *)(a1 + 16) + 1 != *(unsigned __int8 *)(a1 + 20) )
    return *(unsigned int *)(a1 + 12);
  return v5;
}
