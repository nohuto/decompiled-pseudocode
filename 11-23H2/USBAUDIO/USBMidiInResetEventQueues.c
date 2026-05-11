/*
 * XREFs of USBMidiInResetEventQueues @ 0x1C000B668
 * Callers:
 *     USBMidiInStateChangePin @ 0x1C000B710 (USBMidiInStateChangePin.c)
 * Callees:
 *     <none>
 */

void __fastcall USBMidiInResetEventQueues(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  KSPIN_LOCK *v3; // rdi
  KIRQL v4; // al
  _QWORD *v5; // rdx
  KIRQL v6; // r9
  _QWORD *v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // r8

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(v1 + 152);
  v3 = (KSPIN_LOCK *)(v1 + 112);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 112));
  *(_BYTE *)(v2 + 32) = 0;
  v5 = (_QWORD *)(v2 + 64);
  v6 = v4;
  while ( 1 )
  {
    v7 = (_QWORD *)*v5;
    if ( (_QWORD *)*v5 == v5 )
      break;
    if ( (_QWORD *)v7[1] != v5
      || (v8 = *v7, *(_QWORD **)(*v7 + 8LL) != v7)
      || (*v5 = v8,
          *(_QWORD *)(v8 + 8) = v5,
          *(_OWORD *)v7 = 0LL,
          *((_OWORD *)v7 + 1) = 0LL,
          v9 = *(_QWORD **)(v2 + 88),
          *v9 != v2 + 80) )
    {
      __fastfail(3u);
    }
    *v7 = v2 + 80;
    v7[1] = v9;
    *v9 = v7;
    *(_QWORD *)(v2 + 88) = v7;
  }
  KeReleaseSpinLock(v3, v6);
}
