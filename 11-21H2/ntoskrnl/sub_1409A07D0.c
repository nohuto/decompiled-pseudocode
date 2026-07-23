/*
 * XREFs of sub_1409A07D0 @ 0x1409A07D0
 * Callers:
 *     sub_1409965B0 @ 0x1409965B0 (sub_1409965B0.c)
 * Callees:
 *     sub_1405CFDB8 @ 0x1405CFDB8 (sub_1405CFDB8.c)
 *     sub_1405D0DD0 @ 0x1405D0DD0 (sub_1405D0DD0.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 */

char __fastcall sub_1409A07D0(__int64 a1, char a2)
{
  unsigned __int8 v4; // si
  char result; // al
  __int64 v6; // r8

  v4 = sub_1405CFDB8((unsigned int)(10000 * *(_DWORD *)(a1 + 8)));
  result = sub_1405D0DD0(
             *(_DWORD *)(a1 + 4),
             *(_DWORD *)(a1 + 12),
             *(_DWORD *)(a1 + 8),
             *(_BYTE *)(a1 + 24) != 0,
             a2,
             v4);
  if ( !*(_BYTE *)(a1 + 24) || (a2 & 1) != 0 )
  {
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (a2 & 8) != 0 && *(_DWORD *)(a1 + 16) <= 0x64u )
      __debugbreak();
    v6 = 4LL;
    if ( (a2 & 4) != 0 )
    {
      if ( v4 )
        v6 = 5LL;
      return DbgkWerCaptureLiveKernelDump(L"DripsWatchdog", 351, v6, a1, *(unsigned int *)(a1 + 4), 0LL, 0LL, 0LL, 0);
    }
  }
  return result;
}
