/*
 * XREFs of ??1CPortClient@@UEAA@XZ @ 0x180009CE4
 * Callers:
 *     ??_ECPortClientRefCounted@@MEAAPEAXI@Z @ 0x1800095B0 (--_ECPortClientRefCounted@@MEAAPEAXI@Z.c)
 *     ??_ECPortClient@@UEAAPEAXI@Z @ 0x180009D30 (--_ECPortClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Disconnect@CPortClient@@QEAAXXZ @ 0x180009EDC (-Disconnect@CPortClient@@QEAAXXZ.c)
 */

void __fastcall CPortClient::~CPortClient(HANDLE *this)
{
  HANDLE v2; // r8

  *this = &CPortClient::`vftable';
  CPortClient::Disconnect((CPortClient *)this);
  v2 = this[5];
  if ( v2 )
  {
    HeapFree(this[6], 0, v2);
    this[5] = 0LL;
  }
}
