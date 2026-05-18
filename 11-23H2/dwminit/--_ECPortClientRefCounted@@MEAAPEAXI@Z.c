/*
 * XREFs of ??_ECPortClientRefCounted@@MEAAPEAXI@Z @ 0x18000D430
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002248 (--3@YAXPEAX_K@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x18000E4AC (--1CPortClient@@UEAA@XZ.c)
 */

CPortClientRefCounted *__fastcall CPortClientRefCounted::`vector deleting destructor'(
        CPortClientRefCounted *this,
        char a2)
{
  *(_QWORD *)this = &CPortClientRefCounted::`vftable';
  CPortClient::~CPortClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
