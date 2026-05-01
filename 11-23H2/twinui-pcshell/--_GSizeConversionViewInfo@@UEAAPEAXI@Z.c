/*
 * XREFs of ??_GSizeConversionViewInfo@@UEAAPEAXI@Z @ 0x180068990
 * Callers:
 *     <none>
 * Callees:
 *     ??1SizeConversionViewInfo@@UEAA@XZ @ 0x1800689CC (--1SizeConversionViewInfo@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

SizeConversionViewInfo *__fastcall SizeConversionViewInfo::`scalar deleting destructor'(
        SizeConversionViewInfo *this,
        char a2)
{
  SizeConversionViewInfo::~SizeConversionViewInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x30uLL);
  return this;
}
