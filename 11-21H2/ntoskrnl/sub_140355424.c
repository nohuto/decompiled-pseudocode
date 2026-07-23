/*
 * XREFs of sub_140355424 @ 0x140355424
 * Callers:
 *     sub_140355830 @ 0x140355830 (sub_140355830.c)
 *     sub_1403B6010 @ 0x1403B6010 (sub_1403B6010.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     sub_140355534 @ 0x140355534 (sub_140355534.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140355424(__int64 *BugCheckParameter2, unsigned int a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  char v6; // bp
  __int64 result; // rax
  struct _KPRCB *v8; // r9
  __int64 v9; // r8
  bool v10; // zf
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v12; // r8

  v4 = *(_QWORD *)(BugCheckParameter2[104] + 8LL * a2);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 128));
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 88), 0x40000000, 0x80000000) == 0x80000000 )
  {
    KeResetEvent((PRKEVENT)(v4 + 104));
    *(_DWORD *)(v4 + 136) = 2;
    v6 = 0;
    if ( BugCheckParameter2[15] )
    {
      sub_14042A5E0(BugCheckParameter2[24], a2);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 136), 0xFFFFFFFF) != 1 )
      {
        sub_140355058(BugCheckParameter2[6], a2, 13, 0LL);
LABEL_5:
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 128));
        result = (unsigned int)dword_140D06B08;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
              v12 = *((_QWORD *)CurrentPrcb + 4375);
              v10 = ((unsigned int)result & *(_DWORD *)(v12 + 20)) == 0;
              *(_DWORD *)(v12 + 20) &= result;
              if ( v10 )
                result = sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v5);
        if ( v6 )
          return sub_140355534((ULONG_PTR)BugCheckParameter2);
        return result;
      }
    }
    else
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 136), 0xFFFFFFFE);
    }
    v6 = 1;
    goto LABEL_5;
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 128));
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v8 = KeGetCurrentPrcb();
        v9 = *((_QWORD *)v8 + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v10 = ((unsigned int)result & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= result;
        if ( v10 )
          result = sub_140418E4C(v8);
      }
    }
  }
  __writecr8(v5);
  return result;
}
