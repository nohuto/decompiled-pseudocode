/*
 * XREFs of ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C001F890
 * Callers:
 *     HmgAlloc @ 0x1C001E6F0 (HmgAlloc.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0028DD0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C0022C00 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 */

struct HOBJ__ *__fastcall ENTRYOBJ::hSetup(struct OBJECT *a1, char a2, unsigned __int16 a3, unsigned int a4)
{
  GdiHandleManager *v5; // rbx
  unsigned int v8; // esi
  unsigned int v9; // eax
  struct _ENTRY *Entry; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdi
  int v13; // eax
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v15; // ax
  unsigned __int64 v16; // rdi
  GdiHandleManager *v17; // rbx
  unsigned int v18; // eax
  GdiHandleEntryDirectory *v19; // rcx
  signed __int32 v21[8]; // [rsp+0h] [rbp-58h] BYREF
  struct GdiHandleEntryTable *v22; // [rsp+60h] [rbp+8h] BYREF
  __int16 v23; // [rsp+68h] [rbp+10h]
  unsigned int v24; // [rsp+70h] [rbp+18h] BYREF

  v5 = gpHandleManager;
  v8 = a3;
  v9 = GdiHandleManager::DecodeIndex(gpHandleManager, a4);
  Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v5 + 2), v9, 1);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread || (v8 & 0x10) != 0 )
    v12 = 0LL;
  else
    v12 = *(_QWORD *)(ThreadWin32Thread + 72);
  v13 = *((_DWORD *)Entry + 2) & 1;
  *((_BYTE *)Entry + 14) = a2;
  *((_BYTE *)Entry + 15) = 0;
  *((_QWORD *)Entry + 2) = 0LL;
  if ( (v8 & 8) == 0 )
  {
    if ( v12 )
      v13 |= *(_DWORD *)(v12 + 8) & 0xFFFFFFFE;
    else
      v13 |= (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  }
  if ( (v8 & 1) != 0 )
  {
    if ( v12 )
      CurrentThread = *(struct _KTHREAD **)v12;
    else
      CurrentThread = KeGetCurrentThread();
    *((_QWORD *)a1 + 2) = CurrentThread;
  }
  *((_WORD *)a1 + 6) = v8 & 1;
  LOBYTE(v23) = a2;
  *((_DWORD *)a1 + 2) = (v8 >> 1) & 1;
  *((_DWORD *)Entry + 2) = v13;
  HIBYTE(v23) = BYTE2(a4);
  v15 = v23;
  *((_WORD *)Entry + 6) = v23;
  *((_QWORD *)Entry + 2) = 0LL;
  if ( (v8 & 0x40) != 0 )
    *((_WORD *)Entry + 6) = v15 | 0x80;
  if ( (v8 & 0x80u) != 0 )
    *((_BYTE *)Entry + 15) |= 1u;
  *(_QWORD *)Entry = a4 | 0xFFFFFFFFFF000000uLL;
  v16 = (unsigned __int16)a4 | (unsigned __int64)(*((unsigned __int16 *)Entry + 6) << 16);
  *(_QWORD *)a1 = v16;
  _InterlockedOr(v21, 0);
  v17 = gpHandleManager;
  v18 = GdiHandleManager::DecodeIndex(gpHandleManager, a4);
  v19 = (GdiHandleEntryDirectory *)*((_QWORD *)v17 + 2);
  v22 = 0LL;
  v24 = 0;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v19, v18, &v22, &v24) && v24 < *((_DWORD *)v22 + 5) )
    *(_QWORD *)(*(_QWORD *)(**((_QWORD **)v22 + 3) + 8 * ((unsigned __int64)v24 >> 8)) + 16LL * (unsigned __int8)v24 + 8) = a1;
  return (struct HOBJ__ *)v16;
}
