/*
 * XREFs of BiCleanupLoadedStores @ 0x140807EB4
 * Callers:
 *     BcdOpenStore @ 0x140803368 (BcdOpenStore.c)
 *     BiOpenSystemStore @ 0x140803794 (BiOpenSystemStore.c)
 * Callees:
 *     _wcsnicmp @ 0x1403D9D70 (_wcsnicmp.c)
 *     wcstoul @ 0x1403DC0D0 (wcstoul.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     BiIsSystemStore @ 0x140803220 (BiIsSystemStore.c)
 *     BiIsWinPEBoot @ 0x1408032E4 (BiIsWinPEBoot.c)
 *     BiEnumerateSubKeys @ 0x140803DDC (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x1408053A0 (BiOpenKey.c)
 *     BiCloseKey @ 0x14080552C (BiCloseKey.c)
 *     BiOpenKeyNonBcd @ 0x140807DE4 (BiOpenKeyNonBcd.c)
 *     BcdForciblyUnloadStore @ 0x140A5C540 (BcdForciblyUnloadStore.c)
 *     BiUnloadHiveByHandle @ 0x140A5D7B4 (BiUnloadHiveByHandle.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall BiCleanupLoadedStores(char a1)
{
  bool IsWinPEBoot; // r13
  const wchar_t **v3; // rdi
  __int64 v4; // r15
  bool IsSystemStore; // al
  PVOID P[2]; // [rsp+20h] [rbp-10h] BYREF
  ULONG v7; // [rsp+68h] [rbp+38h] BYREF
  HANDLE BcdStoreHandle; // [rsp+70h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+48h] BYREF

  BcdStoreHandle = 0LL;
  v7 = 0;
  P[0] = 0LL;
  Handle = 0LL;
  IsWinPEBoot = BiIsWinPEBoot();
  if ( (int)BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 0xF003Fu, &Handle) >= 0 )
  {
    if ( (int)BiEnumerateSubKeys(Handle, P, &v7) >= 0 && v7 )
    {
      v3 = (const wchar_t **)P[0];
      v4 = v7;
      do
      {
        if ( !wcsnicmp(*v3, L"BCD", 3uLL)
          && wcstoul(*v3 + 3, 0LL, 10) != -1
          && (int)BiOpenKey((__int64)Handle, *v3, 0x20019u, &BcdStoreHandle) >= 0 )
        {
          IsSystemStore = BiIsSystemStore((__int64)BcdStoreHandle);
          if ( (a1 & 0x10) != 0 && IsSystemStore )
          {
            BcdForciblyUnloadStore(BcdStoreHandle);
          }
          else if ( (a1 & 8) != 0 || IsWinPEBoot || !IsSystemStore )
          {
            BiUnloadHiveByHandle(BcdStoreHandle, 0LL);
          }
          else
          {
            BiCloseKey(BcdStoreHandle);
          }
        }
        ++v3;
        --v4;
      }
      while ( v4 );
    }
    if ( P[0] )
      ExFreePoolWithTag(P[0], 0x4B444342u);
  }
  if ( Handle )
    ZwClose(Handle);
}
