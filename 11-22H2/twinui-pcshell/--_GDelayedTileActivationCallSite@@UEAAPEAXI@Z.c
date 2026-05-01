/*
 * XREFs of ??_GDelayedTileActivationCallSite@@UEAAPEAXI@Z @ 0x18059F810
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CopyToViewValueSetBase@@QEAA@XZ @ 0x1802E5CBE (--1CopyToViewValueSetBase@@QEAA@XZ.c)
 */

DelayedTileActivationCallSite *__fastcall DelayedTileActivationCallSite::`scalar deleting destructor'(
        DelayedTileActivationCallSite *this,
        char a2)
{
  *((_DWORD *)this + 27) = -1073741823;
  CopyToViewValueSetBase::~CopyToViewValueSetBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
