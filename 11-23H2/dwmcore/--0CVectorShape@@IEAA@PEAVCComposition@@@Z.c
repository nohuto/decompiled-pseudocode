/*
 * XREFs of ??0CVectorShape@@IEAA@PEAVCComposition@@@Z @ 0x1800A511C
 * Callers:
 *     ??0CSpriteVectorShape@@QEAA@PEAVCComposition@@@Z @ 0x1800A4A94 (--0CSpriteVectorShape@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CContainerVectorShape@@QEAA@PEAVCComposition@@@Z @ 0x1800A4CE4 (--0CContainerVectorShape@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800A5278 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CVectorShape *__fastcall CVectorShape::CVectorShape(CVectorShape *this, struct CComposition *a2)
{
  __int64 v2; // r9

  CContent::CContent(this, a2);
  *(_BYTE *)(v2 + 96) = 1;
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_QWORD *)(v2 + 88) = 0LL;
  return (CVectorShape *)v2;
}
