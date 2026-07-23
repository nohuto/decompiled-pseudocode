/*
 * XREFs of WmipFindGEByGuid @ 0x1406C6434
 * Callers:
 *     WmipOpenBlock @ 0x1406C555C (WmipOpenBlock.c)
 *     WmipDetermineInstanceBaseIndex @ 0x14086AA8C (WmipDetermineInstanceBaseIndex.c)
 *     WmipLinkDataSourceToList @ 0x14086AB54 (WmipLinkDataSourceToList.c)
 *     WmipEnableCollectionForNewGuid @ 0x14086AE2C (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x14086B050 (WmipProcessEvent.c)
 *     WmipMangleInstanceName @ 0x14086B194 (WmipMangleInstanceName.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140883654 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipIncludeStaticNames @ 0x1409E0B84 (WmipIncludeStaticNames.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402B0200 (KeReleaseMutex.c)
 *     WmipReferenceEntry @ 0x1406C68BC (WmipReferenceEntry.c)
 */

_QWORD *__fastcall WmipFindGEByGuid(_QWORD *a1, char a2)
{
  _QWORD *i; // rbx
  __int64 v5; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  for ( i = *(_QWORD **)WmipGEHeadPtr; ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)WmipGEHeadPtr )
    {
      KeReleaseMutex(&WmipSMMutex, 0);
      return 0LL;
    }
    v5 = *a1 - i[9];
    if ( *a1 == i[9] )
      v5 = a1[1] - i[10];
    if ( !v5 )
      break;
  }
  WmipReferenceEntry((ULONG_PTR)i);
  if ( a2 )
  {
    v7 = (_QWORD *)*i;
    if ( *(_QWORD **)(*i + 8LL) != i
      || (v8 = (_QWORD *)i[1], (_QWORD *)*v8 != i)
      || (*v8 = v7,
          v7[1] = v8,
          v9 = (_QWORD *)WmipGEHeadPtr,
          v10 = *(_QWORD *)WmipGEHeadPtr,
          *(_QWORD *)(*(_QWORD *)WmipGEHeadPtr + 8LL) != WmipGEHeadPtr) )
    {
      __fastfail(3u);
    }
    *i = v10;
    i[1] = v9;
    *(_QWORD *)(v10 + 8) = i;
    *v9 = i;
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  return i;
}
