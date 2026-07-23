/*
 * XREFs of ExDereferenceCallBackBlock @ 0x140214FB0
 * Callers:
 *     ExCallCallBack @ 0x1406AF914 (ExCallCallBack.c)
 *     PspCallProcessNotifyRoutines @ 0x1406AF984 (PspCallProcessNotifyRoutines.c)
 *     PsCallImageNotifyRoutines @ 0x1406AFC40 (PsCallImageNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1406AFDD0 (PspCallThreadNotifyRoutines.c)
 *     ExCallSessionCallBack @ 0x1407C5F60 (ExCallSessionCallBack.c)
 *     DbgkLkmdRegisterCallback @ 0x140842F90 (DbgkLkmdRegisterCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140843408 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x14093AE90 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x14093AF34 (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x140987040 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1409B5E10 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1409B5F00 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
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
