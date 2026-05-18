/*
 * XREFs of ??_ECPortClient@@UEAAPEAXI@Z @ 0x180008220
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002BAC (--3@YAXPEAX_K@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x1800081CC (--1CPortClient@@UEAA@XZ.c)
 */

HANDLE *__fastcall CPortClient::`vector deleting destructor'(HANDLE *this, char a2)
{
  CPortClient::~CPortClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
