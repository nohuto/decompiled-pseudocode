/*
 * XREFs of StorExtGetMessageInterruptInformation @ 0x1C00455D0
 * Callers:
 *     <none>
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 */

char __fastcall StorExtGetMessageInterruptInformation(__int64 a1)
{
  _DWORD *Adapter; // rax
  __int64 v2; // r10
  __int64 v3; // r11
  unsigned __int8 *v4; // r9

  Adapter = RaidpPortGetAdapter(a1);
  if ( !Adapter )
    return 0;
  if ( !*((_BYTE *)Adapter + 4305) )
    return 0;
  v4 = (unsigned __int8 *)*((_QWORD *)Adapter + 536);
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
