/*
 * XREFs of PopBatteryCheckTriggerAllBatteries @ 0x140995238
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1408706C0 (PopBatteryApplyCompositeState.c)
 *     PopBatteryCheckTrigger @ 0x140870970 (PopBatteryCheckTrigger.c)
 * Callees:
 *     <none>
 */

char __fastcall PopBatteryCheckTriggerAllBatteries(__int64 a1, int a2)
{
  __int64 v2; // r8
  char v4; // r9
  unsigned int v5; // r10d
  unsigned int v6; // ecx

  v2 = qword_140C3D070;
  v4 = 1;
  while ( (__int64 *)v2 != &qword_140C3D070 )
  {
    v5 = *(_DWORD *)(v2 + 64);
    if ( v5 - 1 <= 0xFFFFFFFD )
    {
      v6 = *(_DWORD *)(v2 + 68);
      if ( v6 <= *(_DWORD *)(a1 + 16) * v5 / 0x64 + v5 / 0xC8 )
        v6 = *(_DWORD *)(a1 + 16) * v5 / 0x64 + v5 / 0xC8;
      if ( *(_DWORD *)(v2 + 88) > a2 * v5 / 0x64 + v6 )
        return 0;
    }
    v2 = *(_QWORD *)v2;
  }
  return v4;
}
