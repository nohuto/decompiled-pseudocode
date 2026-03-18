/*
 * XREFs of ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x1800FA830
 * Callers:
 *     ??0CDirtyRegionAnnotationAllocationSet@@QEAA@XZ @ 0x18006426C (--0CDirtyRegionAnnotationAllocationSet@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CDirtyRegionAnnotation *__fastcall CDirtyRegionAnnotation::CDirtyRegionAnnotation(CDirtyRegionAnnotation *this)
{
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
