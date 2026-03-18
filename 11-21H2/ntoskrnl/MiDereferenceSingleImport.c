/*
 * XREFs of MiDereferenceSingleImport @ 0x1407623BC
 * Callers:
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MiResolveImageReferences @ 0x140757FFC (MiResolveImageReferences.c)
 * Callees:
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MiUnloadApproved @ 0x1407623F0 (MiUnloadApproved.c)
 */

__int64 __fastcall MiDereferenceSingleImport(ULONG_PTR BugCheckParameter2)
{
  if ( (unsigned int)MiUnloadApproved(BugCheckParameter2) == 1 )
    MiUnloadSystemImage(BugCheckParameter2, -1);
  return 1LL;
}
