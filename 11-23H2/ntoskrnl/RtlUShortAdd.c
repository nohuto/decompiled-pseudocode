/*
 * XREFs of RtlUShortAdd @ 0x140322854
 * Callers:
 *     FsRtlValidateReparsePointBuffer @ 0x140322600 (FsRtlValidateReparsePointBuffer.c)
 *     VrpBuildKeyPath @ 0x14068DE10 (VrpBuildKeyPath.c)
 *     IopAllocateUnicodeString @ 0x140793EC8 (IopAllocateUnicodeString.c)
 *     RtlpCreateServerAcl @ 0x140793F40 (RtlpCreateServerAcl.c)
 *     SepAddTokenOriginClaim @ 0x1407E3924 (SepAddTokenOriginClaim.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AD98C (PspSiloInitializeSystemRootSymlink.c)
 *     RtlAddResourceAttributeAce @ 0x1409BB3C0 (RtlAddResourceAttributeAce.c)
 *     AslPathWildcardFindFirst @ 0x140A55804 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140A56898 (AslpPathWildcardAllocMatchNode.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A66C (_SysCtxRegOpenCurrentUserKey.c)
 *     VfSuspectDriversAllocateEntry @ 0x140ADA3B4 (VfSuspectDriversAllocateEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUShortAdd(USHORT usAugend, USHORT usAddend, USHORT *pusResult)
{
  bool v3; // cf
  USHORT v4; // dx

  v3 = (unsigned __int16)(usAddend + usAugend) < usAugend;
  if ( (unsigned __int16)(usAddend + usAugend) < usAugend )
    v4 = -1;
  else
    v4 = usAddend + usAugend;
  *pusResult = v4;
  return v3 ? 0xC0000095 : 0;
}
