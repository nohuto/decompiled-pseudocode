/*
 * XREFs of USBMIDIInReQueueUrb @ 0x1C0002240
 * Callers:
 *     <none>
 * Callees:
 *     USBMidiInAddEventToPinQueue @ 0x1C0002468 (USBMidiInAddEventToPinQueue.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDDD @ 0x1C000930C (WPP_RECORDER_AND_TRACE_SF_DDDD.c)
 *     USBMidiInInitializeUrbAndIrp @ 0x1C003CE90 (USBMidiInInitializeUrbAndIrp.c)
 */

void __fastcall USBMIDIInReQueueUrb(PDEVICE_OBJECT DeviceObject, char *Context)
{
  KSPIN_LOCK *v2; // rbp
  KIRQL v5; // bl
  unsigned __int64 v6; // rdi
  int v7; // edx
  int v8; // r8d
  __int64 v9; // rax
  unsigned int v10; // ecx
  char *v11; // r14
  unsigned __int64 v12; // r15
  KIRQL v13; // al
  KIRQL v14; // al
  unsigned int v15; // ecx
  int v16; // [rsp+20h] [rbp-68h]
  int v17; // [rsp+28h] [rbp-60h]
  int v18; // [rsp+30h] [rbp-58h]

  v2 = (KSPIN_LOCK *)(Context + 104);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 13);
  v6 = *((_QWORD *)Context + 20) + ((unsigned __int64)*((unsigned int *)Context + 17) << 6);
  while ( v6 )
  {
    if ( Context[41] )
      break;
    *(_BYTE *)(v6 + 48) = 0;
    KeReleaseSpinLock(v2, v5);
    if ( *(int *)(*(_QWORD *)(v6 + 24) + 48LL) >= 0 )
    {
      v9 = *(_QWORD *)(v6 + 32);
      if ( *(int *)(v9 + 4) >= 0 )
      {
        v10 = *(_DWORD *)(v9 + 36);
        v11 = *(char **)(v6 + 40);
        if ( v10 >= 4 )
        {
          v12 = (unsigned __int64)v10 >> 2;
          do
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
              || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
            {
              LOBYTE(v7) = 0;
            }
            if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || (LOBYTE(v8) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
            {
              LOBYTE(v8) = 0;
            }
            if ( (_BYTE)v7 || (_BYTE)v8 )
              WPP_RECORDER_AND_TRACE_SF_DDDD(
                WPP_GLOBAL_Control->AttachedDevice,
                v7,
                v8,
                WPP_GLOBAL_Control->DeviceExtension,
                v16,
                v17,
                v18,
                (__int64)&WPP_12af84950252383f90de75adfbe1be2b_Traceguids,
                *v11,
                v11[1],
                v11[2],
                v11[3]);
            USBMidiInAddEventToPinQueue(Context, v11);
            v11 += 4;
            --v12;
          }
          while ( v12 );
        }
      }
    }
    if ( !Context[41] )
    {
      USBMidiInInitializeUrbAndIrp(v6);
      v13 = KeAcquireSpinLockRaiseToDpc(v2);
      _InterlockedIncrement((volatile signed __int32 *)Context + 16);
      KeReleaseSpinLock(v2, v13);
      IofCallDriver(DeviceObject, *(PIRP *)(v6 + 24));
    }
    v14 = KeAcquireSpinLockRaiseToDpc(v2);
    ++*((_DWORD *)Context + 17);
    v5 = v14;
    v15 = *((_DWORD *)Context + 17);
    if ( 16 * *((_DWORD *)Context + 6) == v15 )
    {
      *((_DWORD *)Context + 17) = 0;
      v15 = 0;
    }
    v6 = *((_QWORD *)Context + 20) + ((unsigned __int64)v15 << 6);
    if ( !*(_BYTE *)(v6 + 48) )
      break;
  }
  Context[72] = 0;
  KeSetEvent((PRKEVENT)(Context + 112), 0, 0);
  KeReleaseSpinLock(v2, v5);
}
