/*
 * XREFs of USBMidiOutCompleteCallback @ 0x1C0005860
 * Callers:
 *     <none>
 * Callees:
 *     KsGateTurnInputOn @ 0x1C0003F70 (KsGateTurnInputOn.c)
 *     USBMidiOutFreeRequest @ 0x1C0005930 (USBMidiOutFreeRequest.c)
 */

__int64 __fastcall USBMidiOutCompleteCallback(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KSSTREAM_POINTER *v3; // rcx
  NTSTATUS v5; // edx
  struct _KSPIN *Pin; // rbp
  KSPIN_LOCK *Context; // rbx
  KIRQL v8; // si
  struct _KSGATE *v10; // rax

  v3 = (struct _KSSTREAM_POINTER *)a3[5];
  v5 = *(_DWORD *)(a2 + 48);
  Pin = v3->Pin;
  Context = (KSPIN_LOCK *)Pin->Context;
  if ( *(int *)(a3[3] + 4LL) < 0 )
  {
    v5 = -1073741668;
  }
  else if ( v5 >= 0 )
  {
    goto LABEL_3;
  }
  KsStreamPointerSetStatusCode(v3, v5);
LABEL_3:
  USBMidiOutFreeRequest(a3);
  v8 = KeAcquireSpinLockRaiseToDpc(Context + 14);
  if ( *((_DWORD *)Context + 14) == 20 )
  {
    v10 = KsPinGetAndGate(Pin);
    KsGateTurnInputOn(v10);
    KsPinAttemptProcessing(Pin, 1u);
    *((_BYTE *)Context + 44) = 0;
  }
  --*((_DWORD *)Context + 14);
  KeReleaseSpinLock(Context + 14, v8);
  return 3221225494LL;
}
