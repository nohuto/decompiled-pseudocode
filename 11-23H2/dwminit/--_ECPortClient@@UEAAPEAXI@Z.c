/*
 * XREFs of ??_ECPortClient@@UEAAPEAXI@Z @ 0x18000E520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002248 (--3@YAXPEAX_K@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x18000E4AC (--1CPortClient@@UEAA@XZ.c)
 */

CPortClient *__fastcall CPortClient::`vector deleting destructor'(CPortClient *this, char a2)
{
  CPortClient::~CPortClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
