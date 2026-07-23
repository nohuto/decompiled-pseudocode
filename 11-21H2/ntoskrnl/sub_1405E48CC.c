/*
 * XREFs of sub_1405E48CC @ 0x1405E48CC
 * Callers:
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     sub_1403A5920 @ 0x1403A5920 (sub_1403A5920.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 */

__int64 __fastcall sub_1405E48CC(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v5; // ebp
  unsigned int v6; // eax
  _DWORD *v7; // rdx
  _QWORD *v8; // rdi
  KSPIN_LOCK *v9; // r14
  __int16 v10; // cx
  __int16 v11; // ax
  _QWORD *i; // rax
  unsigned __int64 v13; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  bool v17; // zf

  v2 = *(unsigned __int16 *)(a2 + 14);
  v5 = 0;
  v6 = 0;
  if ( (_WORD)v2 )
  {
    v7 = (_DWORD *)(a2 + 16);
    do
    {
      v6 += *v7;
      v7 += 2;
      --v2;
    }
    while ( v2 );
  }
  v8 = (_QWORD *)(a1 + 8 * (v6 % *(_DWORD *)(a1 + 720) + 2LL * (v6 % *(_DWORD *)(a1 + 720)) + 91));
  v9 = v8 + 1;
  *((_BYTE *)v8 + 16) = KeAcquireSpinLockRaiseToDpc(v8 + 1);
  v10 = *(_WORD *)(a2 + 8);
  if ( (v10 & 0x7FF) != 0x7FF )
  {
    v11 = v10 ^ (v10 ^ (v10 - 1)) & 0x7FF;
    *(_WORD *)(a2 + 8) = v11;
    if ( (v11 & 0x7FF) == 0 )
    {
      for ( i = (_QWORD *)*v8; ; i = (_QWORD *)*i )
      {
        if ( !i )
        {
          __debugbreak();
          goto LABEL_11;
        }
        if ( i == (_QWORD *)a2 )
          break;
        v8 = i;
      }
      *v8 = *(_QWORD *)a2;
LABEL_11:
      v5 = 1;
    }
  }
  v13 = *((unsigned __int8 *)v9 + 8);
  KeReleaseSpinLockFromDpcLevel(v9);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v13 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v17 = ((unsigned int)result & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= result;
        if ( v17 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v13);
  if ( v5 )
  {
    result = (__int64)ExpInterlockedPushEntrySList(
                        (PSLIST_HEADER)(a1 + 16 * (((unsigned __int64)*(unsigned __int16 *)(a2 + 8) >> 11) + 13)),
                        (PSLIST_ENTRY)(a2 + 16));
    _InterlockedAdd((volatile signed __int32 *)(a1 + 196), 1u);
  }
  return result;
}
