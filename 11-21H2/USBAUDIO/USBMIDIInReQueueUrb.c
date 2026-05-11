/*
 * XREFs of USBMIDIInReQueueUrb @ 0x1C0007330
 * Callers:
 *     <none>
 * Callees:
 *     USBMidiInGetCurrentTime @ 0x1C00032B0 (USBMidiInGetCurrentTime.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDDD @ 0x1C0007C78 (WPP_RECORDER_AND_TRACE_SF_DDDD.c)
 *     USBMidiInInitializeUrbAndIrp @ 0x1C003B010 (USBMidiInInitializeUrbAndIrp.c)
 */

void __fastcall USBMIDIInReQueueUrb(PDEVICE_OBJECT DeviceObject, char *Context)
{
  KSPIN_LOCK *v2; // rbp
  struct _DEVICE_OBJECT *v3; // r14
  KIRQL v5; // al
  unsigned __int64 v6; // rdi
  KIRQL v7; // bl
  bool v8; // zf
  unsigned __int64 i; // rdi
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rax
  unsigned int v13; // r13d
  char *v14; // r12
  int v15; // r15d
  KIRQL v16; // al
  char *v17; // r14
  char *j; // rbx
  __int64 v19; // r15
  _QWORD *v20; // rcx
  __int64 *v21; // r14
  __int64 v22; // rax
  __int64 **v23; // rcx
  struct _KSPIN *v24; // rcx
  KIRQL v25; // al
  KIRQL v26; // al
  unsigned int v27; // ecx
  int v28; // [rsp+20h] [rbp-78h]
  int v29; // [rsp+28h] [rbp-70h]
  int v30; // [rsp+30h] [rbp-68h]
  KIRQL NewIrql; // [rsp+A8h] [rbp+10h]

  v2 = (KSPIN_LOCK *)(Context + 104);
  v3 = DeviceObject;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 13);
  v6 = (unsigned __int64)*((unsigned int *)Context + 17) << 6;
  v7 = v5;
  v8 = *((_QWORD *)Context + 20) + v6 == 0;
  for ( i = *((_QWORD *)Context + 20) + v6; !v8 && !Context[41]; v8 = i == 0 )
  {
    *(_BYTE *)(i + 48) = 0;
    KeReleaseSpinLock(v2, v7);
    if ( *(int *)(*(_QWORD *)(i + 24) + 48LL) >= 0 )
    {
      v12 = *(_QWORD *)(i + 32);
      if ( *(int *)(v12 + 4) >= 0 )
      {
        v13 = *(_DWORD *)(v12 + 36);
        v14 = *(char **)(i + 40);
        if ( v13 >= 4 )
        {
          do
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
              || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
            {
              LOBYTE(v10) = 0;
            }
            if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || (LOBYTE(v11) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
            {
              LOBYTE(v11) = 0;
            }
            if ( (_BYTE)v10 || (_BYTE)v11 )
              WPP_RECORDER_AND_TRACE_SF_DDDD(
                WPP_GLOBAL_Control->AttachedDevice,
                v10,
                v11,
                WPP_GLOBAL_Control->DeviceExtension,
                v28,
                v29,
                v30,
                (__int64)&WPP_12af84950252383f90de75adfbe1be2b_Traceguids,
                *v14,
                v14[1],
                v14[2],
                v14[3]);
            if ( (*v14 & 0xFu) >= 2 )
            {
              v15 = (unsigned __int8)*v14 >> 4;
              v16 = KeAcquireSpinLockRaiseToDpc(v2);
              v17 = Context + 48;
              for ( j = (char *)*((_QWORD *)Context + 6); j != v17 && *((_DWORD *)j + 5) != v15; j = *(char **)j )
                ;
              KeReleaseSpinLock(v2, v16);
              if ( j != v17 )
              {
                v19 = *(_QWORD *)(*((_QWORD *)j + 3) + 16LL);
                NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v19 + 112));
                if ( j[32] )
                {
                  v20 = j + 80;
                  v21 = (__int64 *)*((_QWORD *)j + 10);
                  if ( v21 != (__int64 *)(j + 80) )
                  {
                    if ( (_QWORD *)v21[1] != v20
                      || (v22 = *v21, *(__int64 **)(*v21 + 8) != v21)
                      || (*v20 = v22,
                          *(_QWORD *)(v22 + 8) = v20,
                          *((_DWORD *)v21 + 6) = *(_DWORD *)v14,
                          v21[2] = USBMidiInGetCurrentTime(),
                          v23 = (__int64 **)*((_QWORD *)j + 9),
                          *v23 != (__int64 *)(j + 64)) )
                    {
                      __fastfail(3u);
                    }
                    *v21 = (__int64)(j + 64);
                    v21[1] = (__int64)v23;
                    *v23 = v21;
                    *((_QWORD *)j + 9) = v21;
                  }
                  if ( !j[33] )
                  {
                    v24 = (struct _KSPIN *)*((_QWORD *)j + 3);
                    j[33] = 1;
                    KsPinAttemptProcessing(v24, 1u);
                  }
                }
                KeReleaseSpinLock((PKSPIN_LOCK)(v19 + 112), NewIrql);
              }
            }
            v14 += 4;
            v13 -= 4;
          }
          while ( v13 >= 4 );
          v3 = DeviceObject;
        }
      }
    }
    if ( !Context[41] )
    {
      USBMidiInInitializeUrbAndIrp(i);
      v25 = KeAcquireSpinLockRaiseToDpc(v2);
      _InterlockedIncrement((volatile signed __int32 *)Context + 16);
      KeReleaseSpinLock(v2, v25);
      IofCallDriver(v3, *(PIRP *)(i + 24));
    }
    v26 = KeAcquireSpinLockRaiseToDpc(v2);
    ++*((_DWORD *)Context + 17);
    v7 = v26;
    v27 = *((_DWORD *)Context + 17);
    if ( 16 * *((_DWORD *)Context + 6) == v27 )
    {
      *((_DWORD *)Context + 17) = 0;
      v27 = 0;
    }
    i = *((_QWORD *)Context + 20) + ((unsigned __int64)v27 << 6);
    if ( !*(_BYTE *)(i + 48) )
      break;
  }
  Context[72] = 0;
  KeSetEvent((PRKEVENT)(Context + 112), 0, 0);
  KeReleaseSpinLock(v2, v7);
}
