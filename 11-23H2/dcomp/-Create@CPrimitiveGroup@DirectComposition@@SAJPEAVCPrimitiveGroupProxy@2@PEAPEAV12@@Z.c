/*
 * XREFs of ?Create@CPrimitiveGroup@DirectComposition@@SAJPEAVCPrimitiveGroupProxy@2@PEAPEAV12@@Z @ 0x180018078
 * Callers:
 *     ?CreatePrimitiveGroup@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionPrimitiveGroupPartner@@@Z @ 0x180017FA0 (-CreatePrimitiveGroup@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionPrimitiveGroupPartner@.c)
 * Callees:
 *     ??0CPrimitiveGroup@DirectComposition@@IEAA@PEAVCPrimitiveGroupProxy@1@@Z @ 0x1800180E0 (--0CPrimitiveGroup@DirectComposition@@IEAA@PEAVCPrimitiveGroupProxy@1@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveGroup::Create(
        struct DirectComposition::CPrimitiveGroupProxy *a1,
        struct DirectComposition::CPrimitiveGroup **a2)
{
  unsigned int v4; // ebx
  DirectComposition::CPrimitiveGroup *v5; // rax
  __int64 v6; // rax
  struct DirectComposition::CPrimitiveGroup *v7; // rdi

  v4 = 0;
  v5 = (DirectComposition::CPrimitiveGroup *)DefaultHeap::AllocClear(0x198uLL);
  if ( v5
    && (v6 = DirectComposition::CPrimitiveGroup::CPrimitiveGroup(v5, a1),
        (v7 = (struct DirectComposition::CPrimitiveGroup *)v6) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v6 + 16));
    *a2 = v7;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
