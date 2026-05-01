/*
 * XREFs of ??_GUwpPrimaryAppProxy@@UEAAPEAXI@Z @ 0x1804EF830
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1UwpPrimaryAppProxy@@UEAA@XZ @ 0x1804EF49C (--1UwpPrimaryAppProxy@@UEAA@XZ.c)
 */

UwpPrimaryAppProxy *__fastcall UwpPrimaryAppProxy::`scalar deleting destructor'(UwpPrimaryAppProxy *this, char a2)
{
  UwpPrimaryAppProxy::~UwpPrimaryAppProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
