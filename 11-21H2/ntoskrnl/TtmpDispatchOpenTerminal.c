/*
 * XREFs of TtmpDispatchOpenTerminal @ 0x1409A6AB0
 * Callers:
 *     TtmDispatchApi @ 0x1409A6270 (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     TtmiOpenDefaultTerminal @ 0x1409A325C (TtmiOpenDefaultTerminal.c)
 *     TtmiAcquireCurrentSession @ 0x1409A4B90 (TtmiAcquireCurrentSession.c)
 *     TtmiLogError @ 0x1409A8628 (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchOpenTerminal(__int64 a1, HANDLE *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  HANDLE *v7; // r9
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v4 = TtmiAcquireCurrentSession((__int64)&v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = a2;
    v6 = v9;
    v5 = TtmiOpenDefaultTerminal(v9, *(_DWORD *)(a1 + 8), KeGetCurrentThread()->PreviousMode, v7);
  }
  else
  {
    TtmiLogError("TtmpDispatchOpenTerminal", 154LL, (unsigned int)v4, (unsigned int)v4);
    v6 = v9;
  }
  if ( v6 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  return v5;
}
