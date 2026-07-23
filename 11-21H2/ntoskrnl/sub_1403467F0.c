/*
 * XREFs of sub_1403467F0 @ 0x1403467F0
 * Callers:
 *     IoQueueWorkItem @ 0x14023E0D0 (IoQueueWorkItem.c)
 *     IoTryQueueWorkItem @ 0x140255440 (IoTryQueueWorkItem.c)
 *     sub_1402DE684 @ 0x1402DE684 (sub_1402DE684.c)
 *     IoQueueWorkItemEx @ 0x140345D70 (IoQueueWorkItemEx.c)
 *     IoQueueWorkItemToNode @ 0x140558910 (IoQueueWorkItemToNode.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402F6220 @ 0x1402F6220 (sub_1402F6220.c)
 *     sub_14030F6D0 @ 0x14030F6D0 (sub_14030F6D0.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 */

__int64 __fastcall sub_1403467F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  void *v9; // rax
  _OWORD *v10; // rcx
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0;
  if ( (dword_140D0110C & 4) != 0 && (dword_140D01110 & 1) != 0 && KeGetCurrentIrql() < 2u )
  {
    v10 = (_OWORD *)*((_QWORD *)KeGetCurrentThread() + 190);
    if ( v10 )
      *(_OWORD *)(a1 + 68) = *v10;
    else
      *(_OWORD *)(a1 + 68) = 0LL;
  }
  else
  {
    *(_OWORD *)(a1 + 68) = 0LL;
  }
  if ( (KeGetPcr()[36].Unused0[2] & 0x10001) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = sub_1402F6220((__int64)CurrentThread, &v11);
    *(_QWORD *)(a1 + 56) = v9;
    if ( v9 )
    {
      if ( !v11 )
        ObfReferenceObjectWithTag(v9, 0x746C6644u);
    }
    else if ( *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1296LL) || byte_140C24528 )
    {
      ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
      *(_QWORD *)(a1 + 56) = CurrentThread;
    }
  }
  v6 = *(_QWORD *)(a1 + 40);
  if ( dword_140D05010 )
    sub_1405C5EC8(v6 - 48);
  sub_14030F6D0((volatile signed __int64 *)(v6 - 48));
  *(_QWORD *)(a1 + 32) = a2;
  result = a1;
  *(_QWORD *)(a1 + 48) = a3;
  return result;
}
