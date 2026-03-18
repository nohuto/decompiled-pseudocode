/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x1C0316AC0
 * Callers:
 *     ?DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z @ 0x1C0318084 (-DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z.c)
 *     DxgkCreateHwQueueInternal @ 0x1C031DCDC (DxgkCreateHwQueueInternal.c)
 *     NtDxgkOutputDuplPresentToHwQueue @ 0x1C0320530 (NtDxgkOutputDuplPresentToHwQueue.c)
 * Callees:
 *     memset @ 0x1C0028640 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<unsigned char,16>::AllocateElements(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  void *v5; // rcx

  if ( a2 <= 0x10 )
  {
    v5 = a1 + 1;
    *a1 = (__int64)v5;
    if ( a2 )
      memset(v5, 0, a2);
  }
  else
  {
    if ( !(0xFFFFFFFFFFFFFFFFuLL / a2) )
      return 0LL;
    *a1 = ExAllocatePool2(256LL, a2, 1265072196LL);
  }
  result = *a1;
  *((_DWORD *)a1 + 6) = a2;
  return result;
}
