/*
 * XREFs of sub_14029E260 @ 0x14029E260
 * Callers:
 *     CcUninitializeCacheMap @ 0x1402761B0 (CcUninitializeCacheMap.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     sub_14029E120 @ 0x14029E120 (sub_14029E120.c)
 *     sub_1403C7DE0 @ 0x1403C7DE0 (sub_1403C7DE0.c)
 * Callees:
 *     sub_14023C3B4 @ 0x14023C3B4 (sub_14023C3B4.c)
 *     sub_1402768B4 @ 0x1402768B4 (sub_1402768B4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_14029D344 @ 0x14029D344 (sub_14029D344.c)
 *     sub_14029E3A0 @ 0x14029E3A0 (sub_14029E3A0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14029E260(__int64 a1, char a2)
{
  __int64 result; // rax
  char v3; // si
  __int64 v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 OldIrql; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  result = 0LL;
  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !(_BYTE)dword_140D051DC && (unsigned int)dword_140C097B4 <= 1 && byte_140C54C58 != 1 )
  {
    v7 = sub_14029E3A0(a1, 0LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
    if ( *(_DWORD *)(a1 + 808) )
    {
      if ( sub_1402768B4(a1) )
      {
        v3 = 1;
        sub_14029D344(v10);
      }
    }
    else if ( *(_QWORD *)(a1 + 992) > 0x2000uLL || a2 )
    {
      if ( sub_1402768B4(a1) )
      {
        sub_14029D344(v9);
        v3 = 1;
      }
    }
    else if ( !*(_DWORD *)(v7 + 188)
           && !*(_DWORD *)(v7 + 176)
           && *(_QWORD *)(v7 + 104) == v7 + 104
           && *(_QWORD *)(v7 + 120) == v7 + 120 )
    {
      sub_14029D344(a1);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = (unsigned int)dword_140D06B08;
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v13 = ((unsigned int)result & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= result;
          if ( v13 )
            result = sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( v3 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result < 2u )
        return sub_14023C3B4(a1, 0LL);
    }
  }
  return result;
}
