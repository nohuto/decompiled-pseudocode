/*
 * XREFs of sub_140928A50 @ 0x140928A50
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 */

__int64 __fastcall sub_140928A50(__int64 *a1, int a2, int a3, int a4)
{
  char v4; // r14
  unsigned __int8 v7; // r10
  __int64 v8; // rcx
  __int64 result; // rax
  PRKEVENT v10; // rbx
  char v11; // di
  __int64 v12; // rcx
  __int16 v13; // ax
  __int64 v14; // [rsp+20h] [rbp-78h]
  PRKEVENT Event; // [rsp+58h] [rbp-40h] BYREF
  __int64 v16[4]; // [rsp+60h] [rbp-38h] BYREF

  v4 = a4;
  v16[0] = 0LL;
  Event = 0LL;
  v7 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v7 )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v8 = (__int64)a1;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  *a1 = 0LL;
  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  result = sub_14072B3B0(v7, qword_140D05120, a3, v7, v14, 104, 0, 0, &Event, 0LL);
  if ( (int)result >= 0 )
  {
    v10 = Event;
    v11 = 1;
    Event[1].Header.LockNV = 1;
    v10[1].Header.WaitListHead.Flink = 0LL;
    LODWORD(v10[1].Header.WaitListHead.Blink) = 0;
    KeInitializeEvent(v10 + 2, SynchronizationEvent, 0);
    v10[3].Header.WaitListHead.Blink = &v10[3].Header.WaitListHead;
    v10[3].Header.WaitListHead.Flink = &v10[3].Header.WaitListHead;
    KeInitializeEvent(v10, NotificationEvent, 0);
    if ( (v4 & 1) != 0 )
      v10[4].Header.LockNV = 2;
    else
      v10[4].Header.LockNV = 0;
    v12 = *((_QWORD *)KeGetCurrentThread() + 23);
    if ( *(_QWORD *)(v12 + 1408) )
    {
      v13 = *(_WORD *)(v12 + 2412);
      if ( v13 != 332 && v13 != 452 )
        v11 = 0;
      if ( v11 )
        v10[4].Header.LockNV |= 4u;
    }
    result = sub_140729C30((char *)Event, 0LL, a2, 0, 0, 0LL, v16);
    if ( (int)result >= 0 )
    {
      *a1 = v16[0];
      return (unsigned int)result;
    }
  }
  return result;
}
