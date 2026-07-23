/*
 * XREFs of BgLibraryInitialize @ 0x140AEE57C
 * Callers:
 *     PopRestoreHiberContext @ 0x140AA437C (PopRestoreHiberContext.c)
 *     PopInvokeSystemStateHandler @ 0x140AA840C (PopInvokeSystemStateHandler.c)
 *     BgkInitialize @ 0x140B9D198 (BgkInitialize.c)
 * Callees:
 *     BgpFwLibraryInitialize @ 0x140AEDC78 (BgpFwLibraryInitialize.c)
 */

__int64 __fastcall BgLibraryInitialize(__int64 a1, unsigned int a2)
{
  if ( a2 == -1 || KeGetCurrentIrql() <= 2u )
    return BgpFwLibraryInitialize(a1, a2);
  else
    return 3221225473LL;
}
