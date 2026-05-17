/*
 * XREFs of EtwpNotificationThread @ 0x180061530
 * Callers:
 *     <none>
 * Callees:
 *     TpSetWaitEx @ 0x180030910 (TpSetWaitEx.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     EtwDeliverDataBlock @ 0x180061670 (EtwDeliverDataBlock.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A2840 (NtTraceControl.c)
 */

_BYTE *__fastcall EtwpNotificationThread(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *Heap; // rbx
  char v6; // bp
  int v7; // edi
  int v8; // esi
  _BYTE *result; // rax
  unsigned int v10; // [rsp+30h] [rbp-158h] BYREF
  __int64 v11; // [rsp+38h] [rbp-150h] BYREF
  _BYTE v12[256]; // [rsp+50h] [rbp-138h] BYREF

  v11 = -600000000LL;
  Heap = v12;
  v6 = 0;
  v7 = 256;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = NtTraceControl(16LL, 0LL, 0LL, Heap, v7, &v10);
      if ( v8 < 0 )
        break;
      EtwDeliverDataBlock(Heap);
      if ( v8 != 261 )
        goto LABEL_4;
    }
    if ( v8 != -1073741789 )
      break;
    if ( Heap != v12 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
    v7 = v10;
    Heap = (_BYTE *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v10);
    if ( !Heap )
    {
      v6 = 1;
      break;
    }
  }
LABEL_4:
  TpSetWaitEx(a3, a2, (__int64 *)((unsigned __int64)&v11 & -(__int64)(v6 != 0)), 0LL);
  result = v12;
  if ( Heap != v12 )
  {
    if ( Heap )
      return (_BYTE *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
  }
  return result;
}
