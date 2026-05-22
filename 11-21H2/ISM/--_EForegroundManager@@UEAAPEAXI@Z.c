/*
 * XREFs of ??_EForegroundManager@@UEAAPEAXI@Z @ 0x18008A2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1ForegroundManager@@UEAA@XZ @ 0x18008A030 (--1ForegroundManager@@UEAA@XZ.c)
 */

ForegroundManager *__fastcall ForegroundManager::`vector deleting destructor'(ForegroundManager *this, char a2)
{
  ForegroundManager::~ForegroundManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
