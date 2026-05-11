/*
 * XREFs of USBMidiInCompleteCallback @ 0x1C0005990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall USBMidiInCompleteCallback(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  char v4; // r14
  __int64 v5; // rbx
  KIRQL v7; // al
  KIRQL v8; // r15
  int v11; // ecx

  v3 = *(_DWORD *)(a2 + 48);
  v4 = 0;
  v5 = *(_QWORD *)(a3 + 56);
  if ( v3 >= 0 )
  {
    v11 = *(_DWORD *)(*(_QWORD *)(a3 + 32) + 4LL);
    if ( v11 < 0 )
    {
      if ( v11 == -1073713152 )
      {
        v3 = -1073741810;
        *(_BYTE *)(v5 + 41) = 1;
      }
      else
      {
        v3 = -1073741668;
      }
      *(_BYTE *)(v5 + 40) = 1;
    }
  }
  else
  {
    *(_WORD *)(v5 + 40) = 257;
  }
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 104));
  *(_BYTE *)(a3 + 48) = 1;
  v8 = v7;
  if ( (*(_DWORD *)(v5 + 64))-- == 1 )
    KeSetEvent((PRKEVENT)(v5 + 136), 0, 0);
  if ( !*(_BYTE *)(v5 + 41)
    && a3 == *(_QWORD *)(v5 + 160) + ((unsigned __int64)*(unsigned int *)(v5 + 68) << 6)
    && !*(_BYTE *)(v5 + 72)
    && v3 != -1073741810 )
  {
    *(_BYTE *)(v5 + 72) = 1;
    v4 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 104), v8);
  if ( v4 )
    IoQueueWorkItem(*(PIO_WORKITEM *)(v5 + 96), (PIO_WORKITEM_ROUTINE)USBMIDIInReQueueUrb, DelayedWorkQueue, (PVOID)v5);
  return 3221225494LL;
}
