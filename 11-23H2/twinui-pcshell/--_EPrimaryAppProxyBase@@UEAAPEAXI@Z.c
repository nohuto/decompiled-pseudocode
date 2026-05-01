/*
 * XREFs of ??_EPrimaryAppProxyBase@@UEAAPEAXI@Z @ 0x1805A76C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

PrimaryAppProxyBase *__fastcall PrimaryAppProxyBase::`vector deleting destructor'(PrimaryAppProxyBase *this, char a2)
{
  *(_QWORD *)this = &PrimaryAppProxyBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
