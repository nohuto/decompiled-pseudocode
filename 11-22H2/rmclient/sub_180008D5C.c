/*
 * XREFs of sub_180008D5C @ 0x180008D5C
 * Callers:
 *     sub_180008D10 @ 0x180008D10 (sub_180008D10.c)
 * Callees:
 *     sub_18001F190 @ 0x18001F190 (sub_18001F190.c)
 */

__int64 __fastcall sub_180008D5C(__int64 a1)
{
  _QWORD *v2; // rdx
  __int64 result; // rax
  __int64 v4; // rcx
  void *v5; // rax
  _QWORD *v6; // [rsp+20h] [rbp-10h] BYREF
  _QWORD *v7; // [rsp+28h] [rbp-8h]

  if ( *(_QWORD *)a1 )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  RtlAcquireSRWLockExclusive(a1 + 32);
  *(_DWORD *)(a1 + 64) |= 4u;
  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 == (_QWORD *)(a1 + 16) )
  {
    v7 = &v6;
    v6 = &v6;
  }
  else
  {
    v7 = *(_QWORD **)(a1 + 24);
    v6 = v2;
    v2[1] = &v6;
    *v7 = &v6;
    *(_QWORD *)(a1 + 24) = a1 + 16;
    *(_QWORD *)(a1 + 16) = a1 + 16;
  }
  while ( v6 != &v6 )
  {
    v5 = (void *)sub_18001F190(&v6);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  result = RtlReleaseSRWLockExclusive(a1 + 32);
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 )
    return TpWaitForWork(v4, 0LL);
  return result;
}
