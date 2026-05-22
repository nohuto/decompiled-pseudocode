/*
 * XREFs of ?Complete@AlpcMessage@@QEAAJPEAX@Z @ 0x180127454
 * Callers:
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1801283D0 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x1800A6504 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall AlpcMessage::Complete(AlpcMessage *this, void *a2)
{
  int v2; // eax
  __int64 v4; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  *((_WORD *)this + 2) &= ~0x2000u;
  v2 = NtAlpcSendWaitReceivePort(a2, 0LL, this, (char *)this + 336, 0LL, 0LL, 0LL, &v4);
  if ( v2 >= 0 )
    return 0LL;
  else
    return wil::details::NtStatusToHr((wil::details *)(unsigned int)v2);
}
