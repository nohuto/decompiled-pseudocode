/*
 * XREFs of sub_1405CD100 @ 0x1405CD100
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     IoAcquireRemoveLockEx @ 0x1403553A0 (IoAcquireRemoveLockEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405CD100(__int64 a1)
{
  int v2; // edi

  v2 = -1073741822;
  if ( *(_QWORD *)(a1 + 152) )
  {
    v2 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 240), 0LL, &File, 1u, 0x20u);
    if ( v2 >= 0 )
    {
      v2 = sub_14042A5E0(*(_QWORD *)(a1 + 192), qword_1400415B0);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 244), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(a1 + 248), 0, 0);
    }
  }
  return (unsigned int)v2;
}
