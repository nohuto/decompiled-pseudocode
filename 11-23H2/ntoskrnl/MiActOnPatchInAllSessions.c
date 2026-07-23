/*
 * XREFs of MiActOnPatchInAllSessions @ 0x140A348C0
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140A34B28 (MiApplyDriverHotPatch.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14020AB68 (MiSessionLookupImage.c)
 *     MiAttachSessionGlobal @ 0x14033DD2C (MiAttachSessionGlobal.c)
 *     MiDetachSessionGlobal @ 0x14033F24C (MiDetachSessionGlobal.c)
 *     MiDereferenceSessionGlobal @ 0x140637A5C (MiDereferenceSessionGlobal.c)
 *     MiGetNextSessionGlobal @ 0x140637A74 (MiGetNextSessionGlobal.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiFreeLoadedImportList @ 0x140696D20 (MiFreeLoadedImportList.c)
 *     MiFindEntryInImportList @ 0x140A2B2E0 (MiFindEntryInImportList.c)
 *     MiRemoveEntryFromImportList @ 0x140A2B328 (MiRemoveEntryFromImportList.c)
 *     MiInvokePatchCallback @ 0x140A38140 (MiInvokePatchCallback.c)
 *     MiLogHotPatchOperationStatus @ 0x140A39208 (MiLogHotPatchOperationStatus.c)
 *     MiMapAndApplyPatchInSession @ 0x140A3A264 (MiMapAndApplyPatchInSession.c)
 */

__int64 __fastcall MiActOnPatchInAllSessions(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v8; // r12
  int v9; // ebx
  __int64 *v10; // rdi
  __int64 *NextSessionGlobal; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  _QWORD *v14; // rbp
  __int64 v15; // rax

  v4 = a1;
  v8 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
  MiDetachSessionGlobal((__int64)(&xmmword_140C69858 + 1));
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
      MiAttachSessionGlobal((__int64)NextSessionGlobal, *((unsigned int *)&xmmword_140C69858 + 2));
      v12 = MiSessionLookupImage(*(_QWORD *)(v4 + 48));
      v13 = v12;
      if ( v12 )
      {
        if ( a3 )
        {
          v14 = (_QWORD *)v12[11];
          if ( a3 == 3 )
          {
            v9 = MiInvokePatchCallback(a2, a4);
          }
          else if ( (unsigned int)MiFindEntryInImportList(v12[11], a2) )
          {
            v15 = MiRemoveEntryFromImportList(v14, a2);
            if ( (_QWORD *)v15 != v14 )
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
      MiDetachSessionGlobal((__int64)(&xmmword_140C69858 + 1));
    }
    if ( v9 < 0 )
    {
      MiDereferenceSessionGlobal(v10);
      break;
    }
  }
  MiAttachSessionGlobal(v8, *((unsigned int *)&xmmword_140C69858 + 2));
  return (unsigned int)v9;
}
