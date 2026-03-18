/*
 * XREFs of ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z @ 0x1C013A68C
 * Callers:
 *     xxxSetClassData @ 0x1C00ADD68 (xxxSetClassData.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00A9354 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(_QWORD *a1, __int64 a2)
{
  SmartObjStackRefBase<tagCLS>::Init(a1, a2);
  return a1;
}
