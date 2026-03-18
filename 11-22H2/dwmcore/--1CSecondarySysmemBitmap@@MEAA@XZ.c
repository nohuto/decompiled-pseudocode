/*
 * XREFs of ??1CSecondarySysmemBitmap@@MEAA@XZ @ 0x180100CFC
 * Callers:
 *     ??_ECSecondarySysmemBitmap@@MEAAPEAXI@Z @ 0x180100CC0 (--_ECSecondarySysmemBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 */

void __fastcall CSecondarySysmemBitmap::~CSecondarySysmemBitmap(CSecondarySysmemBitmap *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 18);
  if ( v2 )
    operator delete(v2);
  FastRegion::CRegion::FreeMemory((void **)this + 6);
}
