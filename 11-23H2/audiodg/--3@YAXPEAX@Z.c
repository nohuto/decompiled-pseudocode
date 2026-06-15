/*
 * XREFs of ??3@YAXPEAX@Z @ 0x140027DD8
 * Callers:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x1400284B0 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140028500 (--_V@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140028524 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x140029A40 (--_ECAudioMediaType@@MEAAPEAXI@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x140029A94 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14002A0B0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x1400397E0 (--_EHandleSendReceiveServer@@UEAAPEAXI@Z.c)
 *     ??_GCAtlStringMgr@ATL@@UEAAPEAXI@Z @ 0x14007A7A0 (--_GCAtlStringMgr@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECWin32Heap@ATL@@UEAAPEAXI@Z @ 0x14007A7D0 (--_ECWin32Heap@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
