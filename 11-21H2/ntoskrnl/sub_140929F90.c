/*
 * XREFs of sub_140929F90 @ 0x140929F90
 * Callers:
 *     sub_1407DBF04 @ 0x1407DBF04 (sub_1407DBF04.c)
 *     sub_14092A29C @ 0x14092A29C (sub_14092A29C.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140540210 @ 0x140540210 (sub_140540210.c)
 */

int __fastcall sub_140929F90(__int64 a1, ULONG_PTR a2, volatile signed __int32 *a3)
{
  _UNKNOWN **v3; // rax
  int v7; // r14d
  __int64 HostSilo; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v3 = &retaddr;
  if ( !_interlockedbittestandset(a3 + 1, 0) )
  {
    v7 = 0;
    --*(_WORD *)(a1 + 484);
    ExAcquirePushLockExclusiveEx(a2, 0LL);
    if ( *(volatile signed __int32 **)(a2 + 8) == a3 )
    {
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      v7 = 1;
      HostSilo = PsGetHostSilo();
      if ( (void *)a2 == (char *)sub_140204738(HostSilo) + 968 )
        _interlockedbittestandreset((volatile signed __int32 *)0xFFFFF780000002F0LL, 0);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a2);
    sub_1402AFC00(a2);
    LODWORD(v3) = (unsigned int)sub_1402AC800(a1);
    if ( v7 )
    {
      sub_140540210(a3);
      LODWORD(v3) = KeResetEvent(*(PRKEVENT *)(a2 + 24));
    }
  }
  return (int)v3;
}
