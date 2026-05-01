/*
 * XREFs of ??0CShrinkButtonElement@@QEAA@XZ @ 0x1802E2230
 * Callers:
 *     ??0SwitchItemThumbnailElement@@QEAA@XZ @ 0x180572830 (--0SwitchItemThumbnailElement@@QEAA@XZ.c)
 * Callees:
 *     ??0CMultitaskingViewElementBase@@QEAA@XZ @ 0x1802E14A8 (--0CMultitaskingViewElementBase@@QEAA@XZ.c)
 */

CShrinkButtonElement *__fastcall CShrinkButtonElement::CShrinkButtonElement(CShrinkButtonElement *this)
{
  CShrinkButtonElement *v1; // rcx

  CMultitaskingViewElementBase::CMultitaskingViewElementBase(this);
  *(_QWORD *)v1 = &CShrinkButtonElement::`vftable';
  *((_QWORD *)v1 + 30) = 0LL;
  *((_QWORD *)v1 + 31) = 0LL;
  *((_QWORD *)v1 + 32) = 0LL;
  *((_QWORD *)v1 + 33) = 0LL;
  return v1;
}
