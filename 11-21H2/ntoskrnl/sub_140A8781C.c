/*
 * XREFs of sub_140A8781C @ 0x140A8781C
 * Callers:
 *     sub_140A86510 @ 0x140A86510 (sub_140A86510.c)
 *     sub_140A866D0 @ 0x140A866D0 (sub_140A866D0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140A87B3C @ 0x140A87B3C (sub_140A87B3C.c)
 */

__int64 __fastcall sub_140A8781C(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rbx
  __int16 v3; // bp
  KSPIN_LOCK *v4; // rsi
  KIRQL v5; // al
  _QWORD *v6; // r10
  unsigned __int64 v7; // rdi
  __int64 v8; // rdx
  __int16 v9; // r9
  unsigned __int64 v10; // rax
  _QWORD *v11; // r10
  _QWORD *v12; // r14
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  bool v15; // zf
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v2 = (_QWORD *)(a1 + 80);
  v3 = 0;
  if ( (_QWORD *)*v2 != v2 )
  {
    v4 = (KSPIN_LOCK *)(a1 + 96);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v6 = (_QWORD *)*v2;
    v7 = v5;
    while ( 1 )
    {
      v11 = v6 - 6;
      v12 = v11 + 6;
      if ( v2 == v11 + 6 )
        break;
      v8 = *((unsigned int *)v11 + 2);
      v9 = v3 | 1;
      v10 = v11[3] - v11[2];
      if ( v10 < 8 )
        v9 = v3;
      v3 = v9 | 2;
      if ( v8 + v10 + 8 > *((unsigned int *)v11 + 1) )
        v3 = v9;
      sub_140A87B3C(v11[3], v8);
      v6 = (_QWORD *)*v12;
    }
    KeReleaseSpinLockFromDpcLevel(v4);
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v14 = *((_QWORD *)CurrentPrcb + 4375);
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v15 = ((unsigned int)result & *(_DWORD *)(v14 + 20)) == 0;
          *(_DWORD *)(v14 + 20) &= result;
          if ( v15 )
            result = sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
  }
  return result;
}
