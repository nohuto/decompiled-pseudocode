/*
 * XREFs of ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01FA218
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01FB134 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01FA858 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C01FB8A0 (xxxFreeDdeConv.c)
 */

void __fastcall xxxCleanupDdeConv(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbx
  int v6; // edi
  struct tagFREELIST *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

LABEL_1:
  for ( i = GetProp((__int64)a1, (unsigned __int16)atomDDETrack, 1LL, a4); i; i = *(_QWORD *)(i + 24) )
  {
    if ( (*(_BYTE *)(i + 80) & 7) == 7 && (*(_DWORD *)(*(_QWORD *)(i + 32) + 80LL) & 2) != 0 )
    {
      v11 = 0LL;
      v12 = 0LL;
      if ( *(_QWORD *)(i + 72) )
      {
        v6 = 1;
        ThreadLockAlways(i, &v11);
        v7 = *(struct tagFREELIST **)(i + 72);
        *(_QWORD *)(i + 72) = 0LL;
        xxxFreeListFree(v7);
      }
      else
      {
        v6 = 0;
      }
      if ( (*(_BYTE *)(_HMPheFromObject(i) + 25) & 1) == 0 )
      {
        *(_QWORD *)(i + 32) = xxxFreeDdeConv(*(struct tagDDECONV **)(i + 32));
        xxxFreeDdeConv((struct tagDDECONV *)i);
      }
      if ( v6 )
        ThreadUnlock1(v9, v8, v10);
      goto LABEL_1;
    }
  }
}
