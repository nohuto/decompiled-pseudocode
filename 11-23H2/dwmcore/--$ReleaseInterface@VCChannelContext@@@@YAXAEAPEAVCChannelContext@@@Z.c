/*
 * XREFs of ??$ReleaseInterface@VCChannelContext@@@@YAXAEAPEAVCChannelContext@@@Z @ 0x1800920E8
 * Callers:
 *     ??1CAsyncFlushResponse@@UEAA@XZ @ 0x180024044 (--1CAsyncFlushResponse@@UEAA@XZ.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x180091514 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x180091C4C (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x180092110 (-OpenChannel@CComposition@@IEAAJIK_K@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801B381C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D0654 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CChannelContext>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILRefCountBaseT<IMILRefCount>::InternalRelease(v2);
    *a1 = 0LL;
  }
  return result;
}
