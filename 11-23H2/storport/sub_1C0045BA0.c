/*
 * XREFs of sub_1C0045BA0 @ 0x1C0045BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 */

char __fastcall sub_1C0045BA0(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 v2; // r10
  __int64 v3; // r11
  unsigned __int8 *v4; // r9

  v1 = sub_1C000E2EC(a1);
  if ( !v1 )
    return 0;
  if ( !*((_BYTE *)v1 + 4305) )
    return 0;
  v4 = (unsigned __int8 *)*((_QWORD *)v1 + 536);
  if ( (unsigned int)v3 >= *((_DWORD *)v4 + 1) )
    return 0;
  *(_DWORD *)v2 = v3;
  *(_DWORD *)(v2 + 4) = *(_DWORD *)&v4[48 * v3 + 32];
  *(_QWORD *)(v2 + 8) = *(_QWORD *)&v4[48 * v3 + 8];
  *(_DWORD *)(v2 + 16) = *(_DWORD *)&v4[48 * v3 + 36];
  *(_DWORD *)(v2 + 20) = *v4;
  *(_DWORD *)(v2 + 24) = *(_DWORD *)&v4[48 * v3 + 44];
  return 1;
}
