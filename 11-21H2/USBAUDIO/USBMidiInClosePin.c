/*
 * XREFs of USBMidiInClosePin @ 0x1C0007670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall USBMidiInClosePin(__int64 a1)
{
  _QWORD *v1; // rbx
  KIRQL v2; // al
  __int64 v3; // rdx
  _QWORD *v4; // rcx

  v1 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 152LL);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1[5] + 104LL));
  v3 = *v1;
  if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v4 = (_QWORD *)v1[1], (_QWORD *)*v4 != v1) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  KeReleaseSpinLock((PKSPIN_LOCK)(v1[5] + 104LL), v2);
  return 0LL;
}
