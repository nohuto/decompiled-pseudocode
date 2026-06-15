/*
 * XREFs of ??_GCSid@ATL@@UEAAPEAXI@Z @ 0x18003E290
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x18003DE98 (--1CSid@ATL@@UEAA@XZ.c)
 */

ATL::CSid *__fastcall ATL::CSid::`scalar deleting destructor'(ATL::CSid *this, char a2)
{
  ATL::CSid::~CSid(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
