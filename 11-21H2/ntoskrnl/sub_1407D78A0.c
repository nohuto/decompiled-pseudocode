/*
 * XREFs of sub_1407D78A0 @ 0x1407D78A0
 * Callers:
 *     sub_1407D5E30 @ 0x1407D5E30 (sub_1407D5E30.c)
 *     sub_140947450 @ 0x140947450 (sub_140947450.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1407D78A0(PVOID P, __int64 a2)
{
  int v2; // edi
  __int32 i; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  _DWORD *v7; // rax
  void *v8; // rcx
  __int64 v9; // rcx
  void *v10; // rcx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  Interval.QuadPart = -1000000LL;
  v2 = a2;
  for ( i = _InterlockedExchange((volatile __int32 *)P + 17, 1); i; i = _InterlockedExchange(
                                                                          (volatile __int32 *)P + 17,
                                                                          1) )
    KeDelayExecutionThread(0, 0, &Interval);
  v5 = *((_QWORD *)P + 10);
  if ( v5 )
  {
    while ( _InterlockedExchange((volatile __int32 *)(v5 + 68), 1) )
    {
      KeDelayExecutionThread(0, 0, &Interval);
      v5 = *((_QWORD *)P + 10);
    }
  }
  if ( *((_BYTE *)P + 72) || (v6 = *((_QWORD *)P + 10)) != 0 && *(_BYTE *)(v6 + 72) )
  {
    v10 = (void *)*((_QWORD *)P + 6);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
  else
  {
    v7 = (_DWORD *)*((_QWORD *)P + 17);
    if ( *((_QWORD *)P + 3) )
    {
      *v7 = v2;
      KeSetEvent(*((PRKEVENT *)P + 3), 0, 0);
    }
    else if ( v7 && *((_DWORD *)P + 32) == 1 )
    {
      *v7 = v2;
    }
    if ( *((_QWORD *)P + 4) )
      sub_14042A5E0(*((_QWORD *)P + 5), a2);
  }
  v8 = (void *)*((_QWORD *)P + 19);
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x56706E50u);
  v9 = *((_QWORD *)P + 10);
  if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 64), 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(*((PVOID *)P + 10), 0x4B706E50u);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(P, 0x4B706E50u);
}
