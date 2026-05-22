/*
 * XREFs of ?Rebuild@CPrimitive@DirectComposition@@MEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x1800F92F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddPrimitiveInternal@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOccluder@2@1@Z @ 0x180032EB0 (-AddPrimitiveInternal@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOcclu.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CPrimitive::Rebuild(
        DirectComposition::CPrimitive *this,
        struct DirectComposition::CPrimitiveGroup *a2,
        struct DirectComposition::BatchedOccluder *a3,
        struct DirectComposition::BatchedOccluder *a4)
{
  unsigned int v8; // ebx

  v8 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CPrimitive *))(*(_QWORD *)this + 152LL))(this) )
    return (unsigned int)DirectComposition::CPrimitiveGroup::AddPrimitiveInternal(a2, this, 0xFFFFFFFF, a3, a4);
  return v8;
}
