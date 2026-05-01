/*
 * XREFs of ??_GSnapServiceProvider@@UEAAPEAXI@Z @ 0x18066E8B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1SnapServiceProvider@@UEAA@XZ @ 0x18066E86C (--1SnapServiceProvider@@UEAA@XZ.c)
 */

SnapServiceProvider *__fastcall SnapServiceProvider::`scalar deleting destructor'(SnapServiceProvider *this, char a2)
{
  SnapServiceProvider::~SnapServiceProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
