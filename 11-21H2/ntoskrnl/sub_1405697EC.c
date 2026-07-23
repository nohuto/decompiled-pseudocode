/*
 * XREFs of sub_1405697EC @ 0x1405697EC
 * Callers:
 *     sub_1402989A8 @ 0x1402989A8 (sub_1402989A8.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1405697EC(int a1, int a2, __int64 a3, unsigned __int8 a4)
{
  int v5; // esi
  struct _EX_RUNDOWN_REF *v8; // rdi
  __int64 result; // rax
  int v10; // ett
  __int64 Pool2; // rbx

  v5 = a4;
  v8 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)KeGetCurrentThread() + 68);
  _m_prefetchw((char *)&v8[314].Ptr + 4);
  LODWORD(result) = HIDWORD(v8[314].Ptr);
  do
  {
    v10 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&v8[314].Ptr + 1,
                             result | 0x80000,
                             result);
  }
  while ( v10 != (_DWORD)result );
  if ( (result & 0x80000) == 0 )
  {
    Pool2 = ExAllocatePool2(256LL, 64LL, 1668508747LL);
    if ( Pool2 )
    {
      if ( sub_140347810(v8 + 139) )
      {
        ObfReferenceObjectWithTag(v8, 0x746C6644u);
        *(_QWORD *)Pool2 = 0LL;
        *(_QWORD *)(Pool2 + 16) = sub_140960A90;
        *(_QWORD *)(Pool2 + 24) = Pool2;
        *(_DWORD *)(Pool2 + 32) = a1;
        *(_QWORD *)(Pool2 + 40) = v8;
        *(_QWORD *)(Pool2 + 48) = a3;
        *(_DWORD *)(Pool2 + 56) = v5;
        *(_DWORD *)(Pool2 + 60) = a2;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
      }
      else
      {
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
    }
    return sub_1402D6B0C((__int64)&unk_140D01158, 0x178806Fu, 0, 0, (__int64)&qword_14003ABC8, 0);
  }
  return result;
}
