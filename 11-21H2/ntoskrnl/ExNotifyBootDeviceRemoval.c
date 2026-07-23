/*
 * XREFs of ExNotifyBootDeviceRemoval @ 0x14063A040
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

char __fastcall ExNotifyBootDeviceRemoval(__int64 a1)
{
  if ( *(_DWORD *)a1 != 1347306562 )
    return 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 4)) == 1 && _InterlockedIncrement(&dword_140C157D8) == 1 )
    KeSetEvent(&stru_140C15820, 0, 0);
  return 1;
}
