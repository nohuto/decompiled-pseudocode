/*
 * XREFs of ??_ECExclusiveStreamGroupProxy@@MEAAPEAXI@Z @ 0x18010549C
 * Callers:
 *     ??_ECExclusiveStreamGroupProxy@@O7EAAPEAXI@Z @ 0x1800769F0 (--_ECExclusiveStreamGroupProxy@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1CExclusiveStreamGroupProxy@@MEAA@XZ @ 0x180104974 (--1CExclusiveStreamGroupProxy@@MEAA@XZ.c)
 */

CExclusiveStreamGroupProxy *__fastcall CExclusiveStreamGroupProxy::`vector deleting destructor'(
        CExclusiveStreamGroupProxy *this,
        char a2)
{
  CExclusiveStreamGroupProxy::~CExclusiveStreamGroupProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
