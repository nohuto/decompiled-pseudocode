/*
 * XREFs of ??_GCStreamInstanceProxy@@UEAAPEAXI@Z @ 0x180014890
 * Callers:
 *     <none>
 * Callees:
 *     ??1CStreamInstanceProxy@@UEAA@XZ @ 0x180016930 (--1CStreamInstanceProxy@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

CStreamInstanceProxy *__fastcall CStreamInstanceProxy::`scalar deleting destructor'(
        CStreamInstanceProxy *this,
        char a2)
{
  CStreamInstanceProxy::~CStreamInstanceProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x38uLL);
  return this;
}
