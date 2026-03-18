/*
 * XREFs of RealGetProp @ 0x1C00527B0
 * Callers:
 *     ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x1C0052744 (--$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RealGetProp(__int64 a1, __int16 a2, int a3)
{
  __int64 v6; // rcx
  int v7; // edx
  __int64 v8; // rax

  if ( !gbInDestroyHandleTableObjects
    && ExIsResourceAcquiredExclusiveLite(gpresUser) != 1
    && (!ExIsResourceAcquiredSharedLite(gpresUser) || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8)) )
  {
    __int2c();
  }
  if ( !*(_QWORD *)(a1 + 24) )
    return 0LL;
  if ( !gbInDestroyHandleTableObjects
    && ExIsResourceAcquiredExclusiveLite(gpresUser) != 1
    && (!ExIsResourceAcquiredSharedLite(gpresUser) || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8)) )
  {
    __int2c();
  }
  v6 = *(_QWORD *)(a1 + 24);
  if ( !v6 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v7 = *(_DWORD *)(v6 + 4);
  v8 = v6 + 8;
  if ( !v7 )
    return 0LL;
  while ( 1 )
  {
    if ( *(_WORD *)(v8 + 8) != a2 )
      goto LABEL_10;
    if ( !a3 )
      break;
    if ( (*(_BYTE *)(v8 + 10) & 1) != 0 )
      return *(_QWORD *)v8;
LABEL_10:
    v8 += 16LL;
    if ( !--v7 )
      return 0LL;
  }
  if ( (*(_BYTE *)(v8 + 10) & 1) != 0 )
    goto LABEL_10;
  return *(_QWORD *)v8;
}
