/*
 * XREFs of ?FindHapticsCollection@HapticInterface@@AEAA_NPEAU_HIDP_PREPARSED_DATA@@PEAG@Z @ 0x1801B7568
 * Callers:
 *     ?Initialize@HapticInterface@@QEAAJXZ @ 0x1801B7738 (-Initialize@HapticInterface@@QEAAJXZ.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x18001B9A0 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058470 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

char __fastcall HapticInterface::FindHapticsCollection(
        HapticInterface *this,
        struct _HIDP_PREPARSED_DATA *a2,
        unsigned __int16 *a3)
{
  size_t v5; // rax
  struct _HIDP_LINK_COLLECTION_NODE *v6; // rbx
  __int64 v7; // rcx
  ULONG LinkCollectionNodesLength; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]
  struct _HIDP_LINK_COLLECTION_NODE *v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = HIDWORD(this);
  LinkCollectionNodesLength = 0;
  HidP_GetLinkCollectionNodes(0LL, &LinkCollectionNodesLength, a2);
  v5 = 24LL * LinkCollectionNodesLength;
  if ( !is_mul_ok(LinkCollectionNodesLength, 0x18uLL) )
    v5 = -1LL;
  v11 = (struct _HIDP_LINK_COLLECTION_NODE *)operator new[](v5, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v11;
  HidP_GetLinkCollectionNodes(v11, &LinkCollectionNodesLength, a2);
  v7 = 0LL;
  if ( LinkCollectionNodesLength )
  {
    while ( *(_DWORD *)&v6[v7].LinkUsage != 917505 )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= LinkCollectionNodesLength )
        goto LABEL_6;
    }
    if ( a3 )
      *a3 = v7;
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v11);
    return 1;
  }
  else
  {
LABEL_6:
    if ( v6 )
      operator delete[](v6);
    return 0;
  }
}
