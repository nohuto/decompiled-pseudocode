/*
 * XREFs of ?Release@CAnimationBuilder@DirectComposition@@UEAAKXZ @ 0x180063E70
 * Callers:
 *     ?CreateAnimation@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionAnimation@@@Z @ 0x180063F30 (-CreateAnimation@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionAnimation@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CAnimationBuilder@DirectComposition@@QEAA@XZ @ 0x180063EB4 (--1CAnimationBuilder@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CAnimationBuilder::Release(DirectComposition::CAnimationBuilder *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    DirectComposition::CAnimationBuilder::~CAnimationBuilder(this);
    operator delete(this);
  }
  return v2;
}
