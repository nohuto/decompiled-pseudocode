/*
 * XREFs of CrmRegistrationCreateActivity @ 0x1800438F0
 * Callers:
 *     CrmSrvActivityAllocate @ 0x180038BBC (CrmSrvActivityAllocate.c)
 *     CrmRegistrationStartWithActivity @ 0x1800438A0 (CrmRegistrationStartWithActivity.c)
 * Callees:
 *     CrmActivityDereference @ 0x180004AA8 (CrmActivityDereference.c)
 *     CrmActivityStart @ 0x18002B870 (CrmActivityStart.c)
 *     CrmRegistrationAddActivity @ 0x18002C050 (CrmRegistrationAddActivity.c)
 *     CrmActivityInitialize @ 0x18002C728 (CrmActivityInitialize.c)
 *     Feature_888503610__private_IsEnabledDeviceUsage @ 0x18004BC60 (Feature_888503610__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall CrmRegistrationCreateActivity(__int64 a1, ULONG a2, __int64 a3, __int64 *a4)
{
  PVOID Heap; // rax
  unsigned int v9; // ebx
  __int64 v10; // rdi
  int v11; // ebp

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
      if ( !(unsigned int)Feature_888503610__private_IsEnabledDeviceUsage() )
        CrmRegistrationAddActivity(a1, v10);
      if ( a4 )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v10 + 16)) <= 1 )
          __fastfail(0xEu);
        *a4 = v10;
      }
      if ( (unsigned int)Feature_888503610__private_IsEnabledDeviceUsage() )
        CrmRegistrationAddActivity(a1, v10);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v9;
}
