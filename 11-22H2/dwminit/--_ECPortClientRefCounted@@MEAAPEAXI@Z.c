/*
 * XREFs of ??_ECPortClientRefCounted@@MEAAPEAXI@Z @ 0x1800095B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800021F8 (--3@YAXPEAX_K@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x180009CE4 (--1CPortClient@@UEAA@XZ.c)
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
