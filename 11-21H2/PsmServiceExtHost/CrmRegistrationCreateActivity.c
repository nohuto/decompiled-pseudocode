/*
 * XREFs of CrmRegistrationCreateActivity @ 0x180048A74
 * Callers:
 *     CrmRegistrationStartWithActivity @ 0x180048A24 (CrmRegistrationStartWithActivity.c)
 * Callees:
 *     CrmActivityInitialize @ 0x18003085C (CrmActivityInitialize.c)
 *     CrmRegistrationAddActivity @ 0x180030A9C (CrmRegistrationAddActivity.c)
 *     CrmActivityStart @ 0x180030D90 (CrmActivityStart.c)
 *     CrmActivityDereference @ 0x18003B650 (CrmActivityDereference.c)
 */

__int64 __fastcall CrmRegistrationCreateActivity(__int64 a1, int a2, __int64 *a3)
{
  PVOID Heap; // rax
  unsigned int v7; // edi
  __int64 v8; // rbx
  int v9; // r14d

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xD8uLL);
  v7 = 0;
  v8 = (__int64)Heap;
  if ( Heap )
  {
    CrmActivityInitialize((__int64)Heap, a1);
    v9 = CrmActivityStart((struct _WNF_STATE_NAME *)v8, a1, a2, (void *)(a1 + 72));
    if ( v9 < 0 )
    {
      CrmActivityDereference((volatile signed __int64 *)v8);
      return (unsigned int)v9;
    }
    else
    {
      CrmRegistrationAddActivity(a1, v8);
      if ( a3 )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 16)) <= 1 )
          __fastfail(0xEu);
        *a3 = v8;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}
