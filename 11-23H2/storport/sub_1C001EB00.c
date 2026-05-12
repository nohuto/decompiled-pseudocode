/*
 * XREFs of sub_1C001EB00 @ 0x1C001EB00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C001F11C @ 0x1C001F11C (sub_1C001F11C.c)
 */

__int64 __fastcall sub_1C001EB00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  KIRQL Irql; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a3 + 16);
  if ( _InterlockedExchange64((volatile __int64 *)(v3 + 104), 0LL) )
  {
    *(_QWORD *)(*(_QWORD *)(v3 + 184) + 32LL) = 0LL;
  }
  else
  {
    Irql = 0;
    IoAcquireCancelSpinLock(&Irql);
    v6 = *(_QWORD *)(v3 + 184);
    v7 = *(_QWORD *)(v6 + 32);
    *(_QWORD *)(v6 + 32) = 0LL;
    IoReleaseCancelSpinLock(Irql);
    if ( v7 )
      return 3221225494LL;
  }
  sub_1C001F11C(*(_QWORD *)(a3 + 16), a3);
  return 3221225494LL;
}
