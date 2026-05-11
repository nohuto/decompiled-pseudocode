/*
 * XREFs of USBMidiOutChangePowerState @ 0x1C0037490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall USBMidiOutChangePowerState(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r10
  __int64 v4; // r11
  unsigned int i; // edx
  __int64 v6; // r9
  __int64 v7; // r8

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(v2 + 144);
  if ( a2 == 1 )
  {
    v4 = *(_QWORD *)(v3 + 200);
    for ( i = 0; i < *(_DWORD *)(v4 + 32); ++i )
    {
      v6 = *(_QWORD *)(v4 + 40);
      v7 = 168LL * i;
      if ( *(_BYTE *)(*(_QWORD *)(v3 + 168) + 2LL) == *(_BYTE *)(v7 + v6 + 2) )
      {
        *(_QWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = *(_QWORD *)(v7 + v6 + 8);
        return 0LL;
      }
    }
  }
  return 0LL;
}
