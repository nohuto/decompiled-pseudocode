/*
 * XREFs of PoSetThermalPassiveCooling @ 0x14098B3E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1405C9A5C @ 0x1405C9A5C (sub_1405C9A5C.c)
 *     sub_1407FD7A8 @ 0x1407FD7A8 (sub_1407FD7A8.c)
 *     PoGetThermalRequestSupport @ 0x140861E30 (PoGetThermalRequestSupport.c)
 *     sub_14099345C @ 0x14099345C (sub_14099345C.c)
 */

__int64 __fastcall PoSetThermalPassiveCooling(__int64 a1, unsigned __int8 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  unsigned __int8 v6; // dl

  v4 = 0;
  if ( PoGetThermalRequestSupport(a1, 0) )
  {
    if ( a2 <= 0x64u )
    {
      v5 = *(_QWORD *)(a1 + 32);
      sub_1402D66A8(v5 + 32);
      if ( *(_BYTE *)(a1 + 18) )
      {
        v6 = *(_BYTE *)(a1 + 16);
        if ( v6 != a2 )
        {
          sub_1407FD7A8(a1 + 40, v6);
          *(_BYTE *)(a1 + 16) = a2;
          sub_14099345C(a1);
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
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
