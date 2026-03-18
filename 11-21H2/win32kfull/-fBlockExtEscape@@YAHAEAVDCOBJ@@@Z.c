/*
 * XREFs of ?fBlockExtEscape@@YAHAEAVDCOBJ@@@Z @ 0x1C013DBEC
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C013D690 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0279E28 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fBlockExtEscape(struct DCOBJ *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_QWORD *)a1
    || (*(_DWORD *)(*(_QWORD *)a1 + 76LL) & 0x400) == 0
    || !(unsigned int)UserIsRemoteAndNotDisconnectConnection() )
  {
    return *(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000;
  }
  return v1;
}
