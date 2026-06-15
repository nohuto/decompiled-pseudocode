/*
 * XREFs of ?Release@CSharedHandle@@AEAAXXZ @ 0x14000DC50
 * Callers:
 *     ??4CConnectionNode@@QEAAXAEAV0@@Z @ 0x14000DAEC (--4CConnectionNode@@QEAAXAEAV0@@Z.c)
 *     ??1CConnectionNode@@UEAA@XZ @ 0x1400101BC (--1CConnectionNode@@UEAA@XZ.c)
 *     ??1CSharedHandle@@QEAA@XZ @ 0x140070B44 (--1CSharedHandle@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CSharedHandle::Release(CSharedHandle *this)
{
  __int64 v1; // rbx

  v1 = _InterlockedExchange64((volatile __int64 *)this, 0LL);
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 8), 0xFFFFFFFF) == 1 )
    {
      CloseHandle(*(HANDLE *)v1);
      operator delete((void *)v1);
    }
  }
}
