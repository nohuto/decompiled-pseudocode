/*
 * XREFs of HmgFree @ 0x1C0087080
 * Callers:
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C0086F68 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C016B4F4 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C001F9F0 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0022AE0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0022D20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     FreeObject @ 0x1C0027670 (FreeObject.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C016B444 (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
 */

void __fastcall HmgFree(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  struct _SLIST_ENTRY *v4; // rdi
  unsigned __int8 v5; // si
  _DWORD *v6; // rbx
  struct OBJECT *EntryObject; // rax
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // r8d
  _DWORD *v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-20h]
  struct _SLIST_ENTRY *v13; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1;
  v4 = 0LL;
  v5 = 0;
  GreAcquireHmgrSemaphore(a1, a2, a3);
  v11 = 0LL;
  v12 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v11, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000, 0LL, 0, 0);
  if ( v12 )
  {
    v6 = v11;
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *v11 & 0xFFFFFF);
    v5 = *((_BYTE *)v6 + 14);
    v4 = (struct _SLIST_ENTRY *)EntryObject;
    HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v11);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v11);
  GreReleaseHmgrSemaphore(v9, v8, v10);
  if ( v4 )
  {
    if ( v5 == 8 )
    {
      v13 = v4;
      XEPALOBJ::FreePaletteMemory((XEPALOBJ *)&v13);
    }
    else
    {
      FreeObject(v4, v5);
    }
  }
}
