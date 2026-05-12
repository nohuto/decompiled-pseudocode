/*
 * XREFs of PmPerfCounterIdleUpdate @ 0x1C00042C0
 * Callers:
 *     PmWmiCounterIoComplete @ 0x1C00041F0 (PmWmiCounterIoComplete.c)
 *     PmPerfCounterQuery @ 0x1C001D5B0 (PmPerfCounterQuery.c)
 *     PmWmiCounterQuery @ 0x1C001D860 (PmWmiCounterQuery.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PmPerfCounterIdleUpdate(__int64 a1, __int64 a2, char a3, char a4)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v8; // r11
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // [rsp+8h] [rbp+8h]

  LODWORD(v12) = 1;
  if ( a4 )
  {
    v5 = -1LL;
    if ( a3 )
      v5 = 0xFFFFFFFEFFFFFFFFuLL;
    if ( *(_DWORD *)(a1 + 64) == 1 )
      *(_QWORD *)(a1 + 80) = a2;
    if ( a3 && *(_DWORD *)(a1 + 68) == 1 )
    {
      *(_QWORD *)(a1 + 88) = a2;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), v5);
      return 0LL;
    }
  }
  else
  {
    HIDWORD(v12) = a3 != 0;
    v5 = v12;
  }
  v6 = v5 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), v5);
  if ( a4 || (_DWORD)v6 != 1 && (!a3 || HIDWORD(v6) != 1) )
    return 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL * HIDWORD(KeGetPcr()[1].LockArray));
  if ( v8 )
  {
    if ( (_DWORD)v6 == 1 )
    {
      v9 = *(_QWORD *)(a1 + 80);
      if ( a2 > v9 )
        *(_QWORD *)(v8 + 40) += a2 - v9;
    }
    if ( a3 )
    {
      if ( HIDWORD(v6) == 1 )
      {
        v11 = *(_QWORD *)(a1 + 88);
        if ( a2 > v11 )
          *(_QWORD *)(v8 + 104) += a2 - v11;
      }
    }
  }
  if ( (_DWORD)v6 == 1 && (v10 = *(_QWORD *)(a1 + 80), a2 > v10) )
    return a2 - v10;
  else
    return 0LL;
}
