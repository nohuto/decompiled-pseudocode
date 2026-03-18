/*
 * XREFs of ??0CTrimPathOperation@@QEAA@XZ @ 0x1800FB8A0
 * Callers:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z @ 0x180119584 (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z.c)
 *     ?GetTrimmedShapeData_Old@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x1801196F4 (-GetTrimmedShapeData_Old@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ??0?$CBezierFlattener@MVCMilPoint2F@@@@QEAA@M@Z @ 0x180015E08 (--0-$CBezierFlattener@MVCMilPoint2F@@@@QEAA@M@Z.c)
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x18001FAC0 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A00E4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

CTrimPathOperation *__fastcall CTrimPathOperation::CTrimPathOperation(CTrimPathOperation *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  Path::Segment::Segment((_BYTE *)this + 48, 0);
  Path::Segment::Segment((_BYTE *)this + 64, 2);
  Path::Segment::Segment((_BYTE *)this + 80, 5);
  CBezierFlattener<float,CMilPoint2F>::CBezierFlattener<float,CMilPoint2F>((float *)this + 28, 0.25);
  `vector constructor iterator'((char *)this + 204, 8LL, 16LL, (void (__fastcall *)(char *))CMilPoint2F::CMilPoint2F);
  return this;
}
