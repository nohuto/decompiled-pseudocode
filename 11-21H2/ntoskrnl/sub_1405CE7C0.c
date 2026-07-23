/*
 * XREFs of sub_1405CE7C0 @ 0x1405CE7C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     IoAcquireRemoveLockEx @ 0x1403553A0 (IoAcquireRemoveLockEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405CE7C0(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // ebx

  if ( *a3 )
  {
    v4 = -1073741822;
    if ( *(_QWORD *)(a1 + 152) )
    {
      v4 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 240), 0LL, &File, 1u, 0x20u);
      if ( v4 >= 0 )
      {
        v4 = sub_14042A5E0(*(_QWORD *)(a1 + 192), qword_1400415C0);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 244), 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(a1 + 248), 0, 0);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v4;
}
