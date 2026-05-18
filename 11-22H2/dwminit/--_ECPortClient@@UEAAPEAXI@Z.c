/*
 * XREFs of ??_ECPortClient@@UEAAPEAXI@Z @ 0x180009D30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800021F8 (--3@YAXPEAX_K@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x180009CE4 (--1CPortClient@@UEAA@XZ.c)
 */

HANDLE *__fastcall CPortClient::`vector deleting destructor'(HANDLE *this, char a2)
{
  CPortClient::~CPortClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
