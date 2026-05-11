/*
 * XREFs of USBType1AsyncEndpointAbortFeedback @ 0x1C000A7F4
 * Callers:
 *     USBType1StateChangePin @ 0x1C0004AB0 (USBType1StateChangePin.c)
 *     USBType1HandleUrbError @ 0x1C0036B2C (USBType1HandleUrbError.c)
 * Callees:
 *     <none>
 */

void __fastcall USBType1AsyncEndpointAbortFeedback(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  KSPIN_LOCK *v3; // rsi
  KIRQL v4; // al
  KIRQL v5; // bp
  void *v6; // rbx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(v1 + 152);
  v3 = (KSPIN_LOCK *)(v1 + 112);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 112));
  v5 = v4;
  if ( *(_BYTE *)(v2 + 916) )
  {
    if ( *(_BYTE *)(v2 + 917) )
    {
      v6 = (void *)(v2 + 920);
      KeResetEvent((PRKEVENT)(v2 + 920));
      KeReleaseSpinLock(v3, v5);
      IoCancelIrp(*(PIRP *)(v2 + 872));
    }
    else
    {
      v6 = (void *)(v2 + 944);
      KeResetEvent((PRKEVENT)(v2 + 944));
      KeReleaseSpinLock(v3, v5);
    }
    KeWaitForSingleObject(v6, Executive, 0, 0, 0LL);
  }
  else
  {
    KeReleaseSpinLock(v3, v4);
  }
}
