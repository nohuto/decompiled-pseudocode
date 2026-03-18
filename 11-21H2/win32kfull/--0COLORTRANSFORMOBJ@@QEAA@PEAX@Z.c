/*
 * XREFs of ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C026ACF0
 * Callers:
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003BF70 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     XDCOBJ_vCleanupColorTransformWrap @ 0x1C00E8460 (XDCOBJ_vCleanupColorTransformWrap.c)
 *     BRUSHOBJ_hGetColorTransform @ 0x1C026AFE0 (BRUSHOBJ_hGetColorTransform.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02B4434 (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     ?GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z @ 0x1C02B4748 (-GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z.c)
 *     ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x1C02BE990 (-vCheckForICM@XLATE@@QEAAXPEAXK@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C015D33C (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

COLORTRANSFORMOBJ *__fastcall COLORTRANSFORMOBJ::COLORTRANSFORMOBJ(COLORTRANSFORMOBJ *this, void *a2)
{
  __int64 v4; // rdx

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(this);
  LOBYTE(v4) = 14;
  *((_QWORD *)this + 4) = HmgShareLockCheck(a2, v4);
  return this;
}
