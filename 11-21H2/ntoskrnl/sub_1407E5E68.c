/*
 * XREFs of sub_1407E5E68 @ 0x1407E5E68
 * Callers:
 *     sub_1407E5600 @ 0x1407E5600 (sub_1407E5600.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall sub_1407E5E68(int a1, int a2, __int64 a3, __int64 a4)
{
  POOL_TYPE v8; // esi
  _DWORD *PoolWithQuotaTag; // rdi
  struct _KEVENT *v10; // rax
  int v11; // ebx
  _QWORD *v13; // rax
  _QWORD *v14; // rax

  v8 = 9;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x48uLL, 0x62704D43u);
  if ( PoolWithQuotaTag )
  {
    PoolWithQuotaTag[14] = a2 | a1;
    if ( ((a2 | a1) & 0x10000) != 0 )
    {
      *((_QWORD *)PoolWithQuotaTag + 6) = 0LL;
      if ( (unsigned int)(a1 - 3) > 1 )
        v8 = 520;
      v10 = (struct _KEVENT *)ExAllocatePoolWithQuotaTag(v8, 0x70uLL, 0x34344D43u);
      *((_QWORD *)PoolWithQuotaTag + 8) = v10;
      if ( v10 )
      {
        v11 = a1 - 1;
        if ( v11 )
        {
          if ( v11 == 2 )
          {
            *(_OWORD *)&v10->Header.Lock = 0LL;
            v10->Header.WaitListHead.Blink = 0LL;
          }
        }
        else
        {
          KeInitializeEvent(v10, SynchronizationEvent, 0);
        }
        return PoolWithQuotaTag;
      }
    }
    else
    {
      *((_QWORD *)PoolWithQuotaTag + 8) = *(_QWORD *)(a4 + 64);
      v13 = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x18uLL, 0x35344D43u);
      *((_QWORD *)PoolWithQuotaTag + 6) = v13;
      if ( v13 )
      {
        v13[2] = a3;
        v14 = (_QWORD *)*((_QWORD *)PoolWithQuotaTag + 6);
        v14[1] = v14;
        *v14 = v14;
        return PoolWithQuotaTag;
      }
    }
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  }
  return 0LL;
}
