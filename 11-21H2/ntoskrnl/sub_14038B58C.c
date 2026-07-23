/*
 * XREFs of sub_14038B58C @ 0x14038B58C
 * Callers:
 *     sub_1407FE3D8 @ 0x1407FE3D8 (sub_1407FE3D8.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14038B58C(_DWORD *a1, _QWORD *a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v8; // r8
  bool v9; // zf
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  __int64 **v12; // r8
  __int64 *i; // rcx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v21; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C23760, &LockHandle);
  v8 = qword_140C23758;
  v9 = *(_DWORD *)(qword_140C23758 + 40) == 0;
  *a4 = *(_DWORD *)(qword_140C23758 + 84);
  if ( v9 )
  {
    *a1 |= 0x4000000u;
  }
  else
  {
    v12 = (__int64 **)(v8 + 24);
    for ( i = *v12; i != (__int64 *)v12; i = (__int64 *)*i )
    {
      v14 = *((_DWORD *)i + 4);
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              if ( v17 == 1 )
              {
                v18 = *((_DWORD *)i + 6);
                if ( v18 )
                {
                  v19 = v18 - 1;
                  if ( v19 )
                  {
                    if ( v19 == 1 )
                      *a1 |= 0x2000000u;
                  }
                  else
                  {
                    *a1 |= 0x100000u;
                  }
                }
                else
                {
                  *a1 |= 0x10000u;
                }
              }
            }
            else
            {
              *a1 |= 0x40000u;
            }
          }
          else
          {
            *a1 |= 0x2000u;
          }
        }
        else if ( (unsigned int)(*((_DWORD *)i + 6) - 1) <= 1 )
        {
          *a1 |= 0x800u;
        }
      }
      else
      {
        *a1 |= 0x1000u;
        if ( a2 && a3 )
        {
          *a2 = i + 12;
          *a3 = i + 5;
        }
      }
    }
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
        v21 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v9 = ((unsigned int)result & *(_DWORD *)(v21 + 20)) == 0;
        *(_DWORD *)(v21 + 20) &= result;
        if ( v9 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
