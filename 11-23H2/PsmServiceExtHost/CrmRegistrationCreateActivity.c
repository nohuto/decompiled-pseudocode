/*
 * XREFs of CrmRegistrationCreateActivity @ 0x180043870
 * Callers:
 *     CrmSrvActivityAllocate @ 0x180038B3C (CrmSrvActivityAllocate.c)
 *     CrmRegistrationStartWithActivity @ 0x180043820 (CrmRegistrationStartWithActivity.c)
 * Callees:
 *     CrmActivityDereference @ 0x180004AA8 (CrmActivityDereference.c)
 *     CrmActivityStart @ 0x18002B870 (CrmActivityStart.c)
 *     CrmActivityInitialize @ 0x18002C64C (CrmActivityInitialize.c)
 *     CrmRegistrationAddActivity @ 0x18002C6E4 (CrmRegistrationAddActivity.c)
 */

__int64 __fastcall CrmRegistrationCreateActivity(__int64 a1, ULONG a2, __int64 a3, __int64 *a4)
{
  PVOID Heap; // rax
  unsigned int v9; // edi
  __int64 v10; // rbx
  int v11; // r14d

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xF0uLL);
  v9 = 0;
  v10 = (__int64)Heap;
  if ( Heap )
  {
    CrmActivityInitialize((__int64)Heap, a1);
    v11 = CrmActivityStart((struct _WNF_STATE_NAME *)v10, a1, a2, a3, (void *)(a1 + 72));
    if ( v11 < 0 )
    {
      CrmActivityDereference((volatile signed __int64 *)v10);
      return (unsigned int)v11;
    }
    else
    {
      if ( a4 )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v10 + 16)) <= 1 )
          __fastfail(0xEu);
        *a4 = v10;
      }
      CrmRegistrationAddActivity(a1, v10);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v9;
}
