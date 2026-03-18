/*
 * XREFs of ??0CPathLengthOperation@@QEAA@XZ @ 0x180015D48
 * Callers:
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x1800158EC (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     ??0?$CBezierFlattener@MVCMilPoint2F@@@@QEAA@M@Z @ 0x180015E08 (--0-$CBezierFlattener@MVCMilPoint2F@@@@QEAA@M@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A00E4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

CPathLengthOperation *__fastcall CPathLengthOperation::CPathLengthOperation(CPathLengthOperation *this)
{
  CBezierFlattener<float,CMilPoint2F>::CBezierFlattener<float,CMilPoint2F>();
  `vector constructor iterator'((char *)this + 92, 8uLL, 0x10uLL, (void *(*)(void *))CMilPoint2F::CMilPoint2F);
  return this;
}
