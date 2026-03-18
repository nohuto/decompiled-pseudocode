/*
 * XREFs of ??_GCWarpLockSubresource@@MEAAPEAXI@Z @ 0x1800292B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWarpLockSubresource@@MEAA@XZ @ 0x180029608 (--1CWarpLockSubresource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CWarpLockSubresource *__fastcall CWarpLockSubresource::`scalar deleting destructor'(
        CWarpLockSubresource *this,
        char a2)
{
  CWarpLockSubresource::~CWarpLockSubresource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x38uLL);
  return this;
}
