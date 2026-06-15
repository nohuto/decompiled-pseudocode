/*
 * XREFs of ??3@YAXPEAX@Z @ 0x14002F558
 * Callers:
 *     ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x140028660 (--_EHandleSendReceiveServer@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x14002FC30 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x14002FC80 (--_V@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14002FCA4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x1400311C0 (--_ECAudioMediaType@@MEAAPEAXI@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x140031214 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x140031820 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ??_GCAtlStringMgr@ATL@@UEAAPEAXI@Z @ 0x14006DCD0 (--_GCAtlStringMgr@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECWin32Heap@ATL@@UEAAPEAXI@Z @ 0x14006DD00 (--_ECWin32Heap@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
