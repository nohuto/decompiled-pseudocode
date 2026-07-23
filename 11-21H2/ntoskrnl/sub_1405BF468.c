/*
 * XREFs of sub_1405BF468 @ 0x1405BF468
 * Callers:
 *     sub_1405B6318 @ 0x1405B6318 (sub_1405B6318.c)
 *     sub_1405BBC9C @ 0x1405BBC9C (sub_1405BBC9C.c)
 *     sub_1405C14D4 @ 0x1405C14D4 (sub_1405C14D4.c)
 *     sub_1405C1CE0 @ 0x1405C1CE0 (sub_1405C1CE0.c)
 *     sub_1405C4980 @ 0x1405C4980 (sub_1405C4980.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405BF3F0 @ 0x1405BF3F0 (sub_1405BF3F0.c)
 */

LONG __fastcall sub_1405BF468(__int64 a1, int a2, char a3, __int64 a4)
{
  volatile LONG *v4; // r14
  struct _KEVENT *v9; // rdi
  unsigned __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // r8
  LONG result; // eax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  bool v16; // zf

  v4 = (volatile LONG *)(a1 + 1344);
  v9 = 0LL;
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  v11 = sub_1405BF3F0(a1, a2, a4);
  if ( (a3 & 1) != 0 )
    v11 = sub_1405BF3F0(a1, a2 + 1, v12);
  if ( v11 )
    v9 = *(struct _KEVENT **)(a1 + 2344);
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  result = dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v10 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v16 = (result & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= result;
        if ( v16 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  if ( v9 )
    return KeSetEvent(v9, 1, 0);
  return result;
}
