/*
 * XREFs of PmLayoutHasIds @ 0x1C001C8BC
 * Callers:
 *     ?PmUpdateLayoutEx@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1C0002D88 (-PmUpdateLayoutEx@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall PmLayoutHasIds(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
      return 1;
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 4) )
    {
      if ( !*(_DWORD *)(a1 + 8) )
        return v1;
      return 1;
    }
    if ( *(_QWORD *)(a1 + 56) || *(__int64 *)(a1 + 64) <= 0 )
      return 1;
  }
  return v1;
}
