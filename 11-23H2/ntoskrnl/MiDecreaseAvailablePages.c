/*
 * XREFs of MiDecreaseAvailablePages @ 0x1402E88B0
 * Callers:
 *     MiReplenishPageSlist @ 0x1402E7D60 (MiReplenishPageSlist.c)
 *     MiReplaceTransitionPage @ 0x140330900 (MiReplaceTransitionPage.c)
 *     MiUnlinkStandbyPage @ 0x14046D7FA (MiUnlinkStandbyPage.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     MiPageAvailableEx @ 0x1402E8894 (MiPageAvailableEx.c)
 *     MiUpdateAvailableEvents @ 0x1403AE900 (MiUpdateAvailableEvents.c)
 *     MiObtainFreePages @ 0x14063547C (MiObtainFreePages.c)
 */

__int64 __fastcall MiDecreaseAvailablePages(__int64 a1, __int64 a2, unsigned __int64 a3, __int16 a4)
{
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned int v11; // esi
  __int64 v13; // rax

  if ( a2 == 1 )
  {
    v9 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 17216));
    if ( v9 == *(_QWORD *)(a1 + 16152) || v9 == *(_QWORD *)(a1 + 16160) )
      MiUpdateAvailableEvents(a1, 1LL, a3);
    v7 = v9 + 1;
  }
  else
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17216), -a2);
    v8 = *(_QWORD *)(a1 + 16160);
    v9 = v7 - a2;
    if ( v7 - a2 <= v8 && v7 > v8 || (v10 = *(_QWORD *)(a1 + 16152), v9 <= v10) && v7 > v10 )
      MiUpdateAvailableEvents(a1, a2, a3);
  }
  v11 = 0;
  if ( v9 <= 0x420 )
  {
    v13 = *(_QWORD *)(a1 + 16920);
    if ( !v13 || !*(_BYTE *)(v13 + 52) )
      MiObtainFreePages(a1, a2, a3);
    if ( v9 < 0xA0 && v7 >= 0xA0 && *(_DWORD *)(a1 + 1192) )
      KeSetEvent((PRKEVENT)(a1 + 1048), 0, 0);
  }
  if ( a3 == -1LL )
    return (unsigned int)MiPageAvailableEx(a1, v9, a4);
  else
    LOBYTE(v11) = v9 >= a3;
  return v11;
}
