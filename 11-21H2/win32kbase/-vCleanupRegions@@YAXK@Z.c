/*
 * XREFs of ?vCleanupRegions@@YAXK@Z @ 0x1C0018268
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0017B90 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgNextOwned @ 0x1C001B0D0 (HmgNextOwned.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0021CD0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     HmgLockEx @ 0x1C00226A0 (HmgLockEx.c)
 *     bDeleteRegion @ 0x1C008E1A0 (bDeleteRegion.c)
 */

void __fastcall vCleanupRegions(unsigned int a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdx
  HRGN v4; // rdi
  struct OBJECT *v5; // rax
  struct OBJECT *v6; // rbx
  struct _ENTRY *EntryFromObject; // rax
  HRGN v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  v2 = 0;
  while ( 1 )
  {
    v2 = HmgNextOwned(v2, a1, &v8);
    if ( !v2 )
      break;
    v4 = v8;
    if ( (BYTE2(v8) & 0x1F) == 4 )
    {
      LOBYTE(v3) = 4;
      v5 = (struct OBJECT *)HmgLockEx(v8, v3, 0LL);
      v6 = v5;
      if ( v5 )
      {
        EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, v5);
        if ( EntryFromObject )
          *((_QWORD *)EntryFromObject + 2) = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)v6 + 3);
        v4 = v8;
      }
      bDeleteRegion(v4);
    }
  }
}
