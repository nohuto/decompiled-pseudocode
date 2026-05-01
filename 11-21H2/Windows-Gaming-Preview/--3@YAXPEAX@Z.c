/*
 * XREFs of ??3@YAXPEAX@Z @ 0x18004B574
 * Callers:
 *     ??_ECQueryKnownGameList@@UEAAPEAXI@Z @ 0x180045310 (--_ECQueryKnownGameList@@UEAAPEAXI@Z.c)
 *     ??_ECGameEntry@@UEAAPEAXI@Z @ 0x180047B50 (--_ECGameEntry@@UEAAPEAXI@Z.c)
 *     ??_ECEnumerateEntries@@UEAAPEAXI@Z @ 0x1800487D0 (--_ECEnumerateEntries@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIEnumerateEntries@KnownGameList@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180049020 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIEnumerateEntries@KnownGameList@@@WR.c)
 *     ??$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKnownGameList@@AEAPEBG@Z @ 0x18004904C (--$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKno.c)
 *     ??$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJPEAPEAUIGameEntry@KnownGameList@@$$QEAPEAU34@@Z @ 0x18004911C (--$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJP.c)
 *     ??1?$MakeAllocator@VCGameEntry@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800491EC (--1-$MakeAllocator@VCGameEntry@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004AC78 (--3@YAXPEAX_K@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x18004AC90 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004ACD4 (--_V@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004AD48 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
