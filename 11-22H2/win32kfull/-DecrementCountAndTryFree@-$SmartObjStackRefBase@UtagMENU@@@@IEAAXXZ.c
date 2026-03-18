/*
 * XREFs of ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C0108994
 * Callers:
 *     _DestroyMenu @ 0x1C0061170 (_DestroyMenu.c)
 *     xxxMNCanClose @ 0x1C00632C4 (xxxMNCanClose.c)
 *     xxxGetSysMenuPtr @ 0x1C006347C (xxxGetSysMenuPtr.c)
 *     xxxInsertMenuItem @ 0x1C00638F0 (xxxInsertMenuItem.c)
 *     MNLookUpItem @ 0x1C006482C (MNLookUpItem.c)
 *     NtUserCreateWindowEx @ 0x1C0091DF0 (NtUserCreateWindowEx.c)
 *     xxxCalcClientRect @ 0x1C010ACC0 (xxxCalcClientRect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 != gSmartObjNullRef )
  {
    --*(_DWORD *)(*a1 + 8);
    result = *a1;
    if ( !*(_DWORD *)(*a1 + 8) )
    {
      result = *a1;
      if ( *(_BYTE *)(*a1 + 12) )
        return Win32FreeToPagedLookasideList(gpStackRefLookAside, *a1);
    }
  }
  return result;
}
