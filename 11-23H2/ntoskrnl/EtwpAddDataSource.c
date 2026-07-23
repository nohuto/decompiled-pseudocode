/*
 * XREFs of EtwpAddDataSource @ 0x14078156C
 * Callers:
 *     EtwpAddNotificationEvent @ 0x14077FE48 (EtwpAddNotificationEvent.c)
 *     EtwpQueueNotification @ 0x1407813D4 (EtwpQueueNotification.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAddDataSource(__int64 a1)
{
  __int64 result; // rax
  void *v3; // rcx
  _QWORD *v4; // rax
  signed __int64 v5; // rbx

  result = *(_QWORD *)(a1 + 1424);
  if ( !result )
  {
    result = ExAllocatePool2(64LL, 40LL, 1400337477LL);
    v3 = (void *)result;
    if ( result )
    {
      *(_QWORD *)(result + 16) = 0LL;
      v4 = (_QWORD *)(result + 24);
      v4[1] = v4;
      *v4 = v4;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1424), (signed __int64)v3, 0LL);
      if ( v5 )
      {
        ExFreePoolWithTag(v3, 0);
        return v5;
      }
      return (__int64)v3;
    }
  }
  return result;
}
