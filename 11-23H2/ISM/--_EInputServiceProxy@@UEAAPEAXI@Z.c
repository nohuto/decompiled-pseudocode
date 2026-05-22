/*
 * XREFs of ??_EInputServiceProxy@@UEAAPEAXI@Z @ 0x1801744E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1InputServiceProxy@@UEAA@XZ @ 0x1801744A4 (--1InputServiceProxy@@UEAA@XZ.c)
 */

InputServiceProxy *__fastcall InputServiceProxy::`vector deleting destructor'(InputServiceProxy *this, char a2)
{
  InputServiceProxy::~InputServiceProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
