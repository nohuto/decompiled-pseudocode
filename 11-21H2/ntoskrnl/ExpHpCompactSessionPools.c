/*
 * XREFs of ExpHpCompactSessionPools @ 0x1402A0EF8
 * Callers:
 *     ExpHpCompactionRoutine @ 0x140363EF0 (ExpHpCompactionRoutine.c)
 * Callees:
 *     MmDetachSession @ 0x140231240 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402312E0 (MmAttachSession.c)
 *     MiGetNextSession @ 0x1402A1788 (MiGetNextSession.c)
 *     RtlpHpHeapCompact @ 0x14036DC90 (RtlpHpHeapCompact.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 ExpHpCompactSessionPools()
{
  __int64 result; // rax
  void *i; // rbx
  __int64 v2; // rdi
  __int64 v3; // r9
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  _OWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  result = MiGetNextSession(0LL);
  for ( i = (void *)result; result; i = (void *)result )
  {
    if ( (int)MmAttachSession((ULONG_PTR)i) >= 0 )
    {
      v2 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 608);
      v3 = *(_QWORD *)(v2 + 14576);
      if ( v3 )
      {
        v4 = *(__int16 *)(v3 + 342);
        v5 = *(_QWORD *)(v4 + v3 + 328) >> *(_BYTE *)(v3 + 331);
        if ( v5 <= 8 )
          v5 = 8LL;
        if ( *(_QWORD *)(v4 + v3 + 336) + *(_QWORD *)(v4 + v3 + 344) > v5 )
          RtlpHpHeapCompact(*(_QWORD *)(v2 + 14576));
      }
      v6 = *(_QWORD *)(v2 + 14584);
      if ( v6 )
      {
        v7 = *(__int16 *)(v6 + 342);
        v8 = *(_QWORD *)(v7 + v6 + 328) >> *(_BYTE *)(v6 + 331);
        if ( v8 <= 8 )
          v8 = 8LL;
        if ( *(_QWORD *)(v7 + v6 + 336) + *(_QWORD *)(v7 + v6 + 344) > v8 )
          RtlpHpHeapCompact(*(_QWORD *)(v2 + 14584));
      }
      MmDetachSession((__int64)i, (__int64)v9);
    }
    result = MiGetNextSession(i);
  }
  return result;
}
