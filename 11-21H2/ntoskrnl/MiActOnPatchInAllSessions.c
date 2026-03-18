/*
 * XREFs of MiActOnPatchInAllSessions @ 0x140970E00
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140971068 (MiApplyDriverHotPatch.c)
 * Callees:
 *     MiDetachSessionGlobal @ 0x14021803C (MiDetachSessionGlobal.c)
 *     MiAttachSessionGlobal @ 0x140238D0C (MiAttachSessionGlobal.c)
 *     MiSessionLookupImage @ 0x1402DBF3C (MiSessionLookupImage.c)
 *     MiDereferenceSessionGlobal @ 0x1405994CC (MiDereferenceSessionGlobal.c)
 *     MiGetNextSessionGlobal @ 0x1405994E4 (MiGetNextSessionGlobal.c)
 *     MiFreeLoadedImportList @ 0x1406EB3D4 (MiFreeLoadedImportList.c)
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MiInvokePatchCallback @ 0x140973F50 (MiInvokePatchCallback.c)
 *     MiLogHotPatchOperationStatus @ 0x140974FBC (MiLogHotPatchOperationStatus.c)
 *     MiMapAndApplyPatchInSession @ 0x140975FF0 (MiMapAndApplyPatchInSession.c)
 *     MiFindEntryInImportList @ 0x1409782F8 (MiFindEntryInImportList.c)
 *     MiRemoveEntryFromImportList @ 0x14097833C (MiRemoveEntryFromImportList.c)
 */

__int64 __fastcall MiActOnPatchInAllSessions(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned __int64 v8; // r12
  int v9; // ebx
  __int64 *v10; // rdi
  __int64 *NextSessionGlobal; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  void *v14; // rbp
  __int64 v15; // rax

  v4 = a1;
  v8 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
  MiDetachSessionGlobal((__int64)&qword_140C533D8);
  v9 = 0;
  v10 = 0LL;
  while ( 1 )
  {
    NextSessionGlobal = MiGetNextSessionGlobal(v10);
    v10 = NextSessionGlobal;
    if ( !NextSessionGlobal )
      break;
    if ( NextSessionGlobal != (__int64 *)v8 )
    {
      MiAttachSessionGlobal((unsigned __int64)NextSessionGlobal, qword_140C533D8);
      v12 = MiSessionLookupImage(*(_QWORD *)(v4 + 48));
      v13 = v12;
      if ( v12 )
      {
        if ( a3 )
        {
          v14 = (void *)v12[11];
          if ( a3 == 3 )
          {
            v9 = MiInvokePatchCallback(a2, a4);
          }
          else if ( (unsigned int)MiFindEntryInImportList(v12[11], a2) )
          {
            v15 = MiRemoveEntryFromImportList(v14, a2);
            if ( (void *)v15 != v14 )
            {
              v13[11] = v15;
              MiFreeLoadedImportList(v14);
            }
            if ( *(_QWORD *)(a4 + 48) )
            {
              *(_DWORD *)(a4 + 56) = 2;
              MiInvokePatchCallback(a2, a4 + 48);
            }
            MiUnloadSystemImage(a2, -1);
          }
          v4 = a1;
        }
        else
        {
          v9 = MiMapAndApplyPatchInSession(a2, v12, a4);
          MiLogHotPatchOperationStatus(*(_DWORD *)(v4 + 120), *(_DWORD *)(v4 + 156), a2 + 72, v9, 3);
        }
      }
      MiDetachSessionGlobal((__int64)&qword_140C533D8);
    }
    if ( v9 < 0 )
    {
      MiDereferenceSessionGlobal(v10);
      break;
    }
  }
  MiAttachSessionGlobal(v8, qword_140C533D8);
  return (unsigned int)v9;
}
