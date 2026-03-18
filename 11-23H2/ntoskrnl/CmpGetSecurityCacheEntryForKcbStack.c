/*
 * XREFs of CmpGetSecurityCacheEntryForKcbStack @ 0x1406D5680
 * Callers:
 *     CmpGetSecurityDescriptorForKcbStackEx @ 0x14067F19C (CmpGetSecurityDescriptorForKcbStackEx.c)
 *     CmpCheckKeyOwnerForPca @ 0x14069E2E4 (CmpCheckKeyOwnerForPca.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x1406C0730 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpCreateChild @ 0x1406D0F70 (CmpCreateChild.c)
 *     CmpQueryKeySecurity @ 0x1406D5BA0 (CmpQueryKeySecurity.c)
 *     CmpCheckNotifyAccess @ 0x140766A84 (CmpCheckNotifyAccess.c)
 *     CmRenameKey @ 0x140A143AC (CmRenameKey.c)
 *     CmpCheckKcbStackAccess @ 0x140A1AFF0 (CmpCheckKcbStackAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140A1B0E8 (CmpCheckKeyBodyAccess.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140A1B6D8 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x140A1BA08 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140A1BD00 (CmpSnapshotKcbStackSecurity.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1406D57A0 (CmpGetKcbAtLayerHeight.c)
 *     CmGetKCBCacheSecurity @ 0x1406D57C0 (CmGetKCBCacheSecurity.c)
 *     CmRmIsKCBVisible @ 0x1407B39E0 (CmRmIsKCBVisible.c)
 */

__int64 __fastcall CmpGetSecurityCacheEntryForKcbStack(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // rbp
  __int16 v4; // bx
  __int64 KcbAtLayerHeight; // rax
  __int64 v9; // rdi
  __int16 v10; // ax

  v3 = 0LL;
  v4 = *(_WORD *)(a1 + 2);
  if ( v4 >= 0 )
  {
    do
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
      v9 = KcbAtLayerHeight;
      if ( *(_WORD *)(KcbAtLayerHeight + 66) )
      {
        if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
          break;
      }
      if ( *(_DWORD *)(KcbAtLayerHeight + 40) == -1 || !(unsigned __int8)CmRmIsKCBVisible(KcbAtLayerHeight, a2) )
      {
        v10 = v4;
      }
      else
      {
        v3 = v9;
        if ( *(_WORD *)(v9 + 66) && *(_BYTE *)(v9 + 65) )
          break;
        v10 = v4;
      }
      v4 = v10 - 1;
    }
    while ( (__int16)(v10 - 1) >= 0 );
  }
  if ( a3 )
    *a3 = *(_WORD *)(v3 + 66);
  return CmGetKCBCacheSecurity(v3, a2);
}
