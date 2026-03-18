/*
 * XREFs of ExDereferenceCallBackBlock @ 0x140214FD0
 * Callers:
 *     ExCallCallBack @ 0x1406AF8E4 (ExCallCallBack.c)
 *     PspCallProcessNotifyRoutines @ 0x1406AF954 (PspCallProcessNotifyRoutines.c)
 *     PsCallImageNotifyRoutines @ 0x1406AFC10 (PsCallImageNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1406AFDA0 (PspCallThreadNotifyRoutines.c)
 *     ExCallSessionCallBack @ 0x1407C6220 (ExCallSessionCallBack.c)
 *     DbgkLkmdRegisterCallback @ 0x140844A20 (DbgkLkmdRegisterCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140844E98 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x14093AD40 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x14093ADE4 (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x140986EF0 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1409B5CC0 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1409B5DB0 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 */

void __fastcall ExDereferenceCallBackBlock(signed __int64 *a1, struct _EX_RUNDOWN_REF *a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw(a1);
  v2 = *a1;
  if ( ((unsigned __int64)a2 ^ *a1) >= 0xF )
  {
LABEL_4:
    ExReleaseRundownProtection_0(a2);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64(a1, v2 + 1, v2);
      if ( v3 == v2 )
        break;
      if ( ((unsigned __int64)a2 ^ v2) >= 0xF )
        goto LABEL_4;
    }
  }
}
