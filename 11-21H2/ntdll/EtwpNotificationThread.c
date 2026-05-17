/*
 * XREFs of EtwpNotificationThread @ 0x1800073C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwDeliverDataBlock @ 0x180007500 (EtwDeliverDataBlock.c)
 *     TpSetWaitEx @ 0x18001EB80 (TpSetWaitEx.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A7A40 (NtTraceControl.c)
 */

_BYTE *__fastcall EtwpNotificationThread(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *Heap; // rbx
  char v6; // bp
  int v7; // edi
  int v8; // esi
  _BYTE *result; // rax
  int v10; // [rsp+20h] [rbp-158h]
  unsigned int v11; // [rsp+30h] [rbp-148h] BYREF
  __int64 v12; // [rsp+38h] [rbp-140h] BYREF
  _BYTE v13[256]; // [rsp+40h] [rbp-138h] BYREF

  v12 = -600000000LL;
  Heap = v13;
  v6 = 0;
  v7 = 256;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = v7;
      v8 = NtTraceControl(16LL, 0LL, 0LL);
      if ( v8 < 0 )
        break;
      EtwDeliverDataBlock(Heap);
      if ( v8 != 261 )
        goto LABEL_4;
    }
    if ( v8 != -1073741789 )
      break;
    if ( Heap != v13 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
    v7 = v11;
    Heap = (_BYTE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v11);
    if ( !Heap )
    {
      v6 = 1;
      break;
    }
  }
LABEL_4:
  TpSetWaitEx(a3, a2, (unsigned __int64)&v12 & -(__int64)(v6 != 0), 0LL, v10, &v11);
  result = v13;
  if ( Heap != v13 )
  {
    if ( Heap )
      return (_BYTE *)RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  }
  return result;
}
