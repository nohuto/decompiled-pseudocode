/*
 * XREFs of ?ReleaseAllResources@CPrimitiveGroup@DirectComposition@@IEAAXXZ @ 0x18003BE34
 * Callers:
 *     ??1CPrimitiveGroup@DirectComposition@@MEAA@XZ @ 0x180003620 (--1CPrimitiveGroup@DirectComposition@@MEAA@XZ.c)
 *     ?RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ @ 0x180031010 (-RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ.c)
 *     ?AddPrimitiveInternal@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOccluder@2@1@Z @ 0x180032EB0 (-AddPrimitiveInternal@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOcclu.c)
 *     ?InvalidateRealization@CPrimitiveGroup@DirectComposition@@IEAAXXZ @ 0x18003BD40 (-InvalidateRealization@CPrimitiveGroup@DirectComposition@@IEAAXXZ.c)
 * Callees:
 *     ?PopFirst@?$CLinkTargetedDoubleLinkedList@VCPrimitive@DirectComposition@@$0BI@$0BI@@@QEAAPEAVCPrimitive@DirectComposition@@XZ @ 0x18003C180 (-PopFirst@-$CLinkTargetedDoubleLinkedList@VCPrimitive@DirectComposition@@$0BI@$0BI@@@QEAAPEAVCPr.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18007C16C (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall DirectComposition::CPrimitiveGroup::ReleaseAllResources(DirectComposition::CPrimitiveGroup *this)
{
  _QWORD *v2; // rcx
  DirectComposition::CPrimitiveGroup *v3; // rax
  __int64 v4; // rdx
  _DWORD *i; // r9

  while ( *((_DWORD *)this + 62) )
  {
    v2 = (_QWORD *)((char *)this + 256);
    v3 = (DirectComposition::CPrimitiveGroup *)*((_QWORD *)this + 32);
    if ( v3 != (DirectComposition::CPrimitiveGroup *)((char *)this + 256) )
    {
      if ( *((_QWORD **)v3 + 1) != v2
        || (v4 = *(_QWORD *)v3, *(DirectComposition::CPrimitiveGroup **)(*(_QWORD *)v3 + 8LL) != v3) )
      {
        __fastfail(3u);
      }
      *v2 = v4;
      *(_QWORD *)(v4 + 8) = v2;
      --*((_DWORD *)this + 62);
      *(_OWORD *)v3 = 0LL;
    }
  }
  for ( i = (_DWORD *)((char *)this + 272);
        *i;
        CLinkTargetedDoubleLinkedList<DirectComposition::CPrimitive,24,24>::PopFirst(i) )
  {
    ;
  }
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 28) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 88, 16LL);
  *((_DWORD *)this + 36) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 120, 8LL);
  *((_DWORD *)this + 44) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 152, 8LL);
  *((_DWORD *)this + 52) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 184, 80LL);
}
