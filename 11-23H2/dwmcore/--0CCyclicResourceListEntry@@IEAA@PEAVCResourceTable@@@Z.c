/*
 * XREFs of ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x18000C18C
 * Callers:
 *     ??0CCombinedGeometry@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18000C084 (--0CCombinedGeometry@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ??0CTransformGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18000C104 (--0CTransformGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ??0CGeometry2DGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x1801C0788 (--0CGeometry2DGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ??0CGeometryGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x1801C080C (--0CGeometryGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ??0CTransform3DGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x1801C1004 (--0CTransform3DGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

CCyclicResourceListEntry *__fastcall CCyclicResourceListEntry::CCyclicResourceListEntry(
        CCyclicResourceListEntry *this,
        struct CResourceTable *a2)
{
  char *v2; // rdx
  _QWORD *v3; // r9
  __int64 v4; // rax
  CCyclicResourceListEntry *result; // rax

  *(_QWORD *)this = &CCyclicResourceListEntry::`vftable';
  v2 = (char *)a2 + 64;
  v3 = (_QWORD *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  *((_QWORD *)this + 1) = v3;
  *((_QWORD *)this + 2) = v3;
  v4 = *(_QWORD *)v2;
  if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 )
    __fastfail(3u);
  *v3 = v4;
  *(_QWORD *)((((unsigned __int64)this + 8) & -(__int64)(this != 0LL)) + 8) = v2;
  *(_QWORD *)(v4 + 8) = v3;
  result = this;
  *(_QWORD *)v2 = v3;
  return result;
}
