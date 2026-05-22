/*
 * XREFs of ?FindHapticsCollection@HapticInterface@@AEAA_NPEAU_HIDP_PREPARSED_DATA@@PEAG@Z @ 0x18018B418
 * Callers:
 *     ?Initialize@HapticInterface@@QEAAJXZ @ 0x18018B5D8 (-Initialize@HapticInterface@@QEAAJXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B774 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

char __fastcall HapticInterface::FindHapticsCollection(
        HapticInterface *this,
        struct _HIDP_PREPARSED_DATA *a2,
        unsigned __int16 *a3)
{
  size_t v5; // rax
  struct _HIDP_LINK_COLLECTION_NODE *v6; // rbx
  __int64 v7; // rcx
  char v8; // di
  ULONG LinkCollectionNodesLength; // [rsp+30h] [rbp+8h] BYREF
  int v11; // [rsp+34h] [rbp+Ch]

  v11 = HIDWORD(this);
  LinkCollectionNodesLength = 0;
  HidP_GetLinkCollectionNodes(0LL, &LinkCollectionNodesLength, a2);
  v5 = 24LL * LinkCollectionNodesLength;
  if ( !is_mul_ok(LinkCollectionNodesLength, 0x18uLL) )
    v5 = -1LL;
  v6 = (struct _HIDP_LINK_COLLECTION_NODE *)operator new[](v5, (const struct std::nothrow_t *)&std::nothrow);
  HidP_GetLinkCollectionNodes(v6, &LinkCollectionNodesLength, a2);
  v7 = 0LL;
  if ( LinkCollectionNodesLength )
  {
    v8 = 1;
    while ( *(_DWORD *)&v6[v7].LinkUsage != 917505 )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= LinkCollectionNodesLength )
        goto LABEL_7;
    }
    if ( a3 )
      *a3 = v7;
  }
  else
  {
LABEL_7:
    v8 = 0;
  }
  if ( v6 )
    operator delete[](v6);
  return v8;
}
