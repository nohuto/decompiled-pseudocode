/*
 * XREFs of RtlpWaitOnAddressRemoveWaitBlock @ 0x1800500C4
 * Callers:
 *     RtlpWaitOnAddressWithTimeout @ 0x180034024 (RtlpWaitOnAddressWithTimeout.c)
 *     RtlpWaitOnCriticalSection @ 0x1800340F0 (RtlpWaitOnCriticalSection.c)
 *     RtlpWaitOnAddress @ 0x18004FFC4 (RtlpWaitOnAddress.c)
 * Callees:
 *     RtlpWaitOnAddressWithTimeout @ 0x180034024 (RtlpWaitOnAddressWithTimeout.c)
 *     RtlpWaitOnAddressWakeEntireList @ 0x180050654 (RtlpWaitOnAddressWakeEntireList.c)
 *     NtWaitForAlertByThreadId @ 0x1800A29E0 (NtWaitForAlertByThreadId.c)
 */

signed __int64 __fastcall RtlpWaitOnAddressRemoveWaitBlock(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  signed __int64 result; // rax
  signed __int64 v6; // rbx
  signed __int64 v7; // rtt
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r15
  char v10; // r8
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  signed __int64 v13; // rcx
  signed __int64 v14; // rtt
  unsigned __int64 v15; // rcx
  char v16; // dl
  bool v17; // zf

  v4 = (*(_DWORD *)a2 >> 5) & 0x7F;
  result = *(_QWORD *)(a1 + 8 * v4);
  while ( result )
  {
    if ( (result & 2) != 0 )
    {
      v14 = result;
      result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v4), result | 1, result);
      if ( v14 == result )
        break;
    }
    else
    {
      v6 = result | 2;
      v7 = result;
      result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v4), result | 2, result);
      if ( v7 == result )
      {
        v8 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
        v9 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
        v10 = 0;
        v11 = *(_QWORD *)((v6 & 0xFFFFFFFFFFFFFFFCuLL) + 24);
        while ( 1 )
        {
          v12 = *(_QWORD *)(v8 + 16);
          if ( v8 == a2 )
          {
            v10 = 1;
            if ( v8 == v9 )
            {
              v13 = *(_QWORD *)(v8 + 16);
              if ( v12 )
                v13 = v12 ^ ((unsigned __int8)v6 ^ (unsigned __int8)v12) & 3;
              result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v4), v13, v6);
              if ( v6 == result )
              {
                if ( !v13 )
                  return result;
                *(_QWORD *)(v12 + 24) = 0LL;
                v8 = v12;
                v9 = v12;
              }
              else
              {
                v6 = result;
                v8 = result & 0xFFFFFFFFFFFFFFFCuLL;
                v9 = result & 0xFFFFFFFFFFFFFFFCuLL;
                v11 = *(_QWORD *)((result & 0xFFFFFFFFFFFFFFFCuLL) + 24);
              }
              goto LABEL_18;
            }
            *(_QWORD *)(v11 + 16) = v12;
            if ( v12 )
              *(_QWORD *)(v12 + 24) = v11;
            else
              *(_QWORD *)(v11 + 32) = v11;
          }
          else
          {
            *(_QWORD *)(v8 + 24) = v11;
            v11 = v8;
          }
          v8 = v12;
LABEL_18:
          if ( !v8 )
          {
            if ( !v10 && _InterlockedExchange((volatile __int32 *)(a2 + 40), 0) != 2 )
              NtWaitForAlertByThreadId(*(PVOID *)a2, 0LL);
            *(_QWORD *)(v9 + 32) = v11;
            do
            {
              v15 = 0LL;
              v16 = v6 & 1;
              if ( (v6 & 1) == 0 )
                v15 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
              result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v4), v15, v6);
              v17 = v6 == result;
              v6 = result;
            }
            while ( !v17 );
            if ( v16 )
              return RtlpWaitOnAddressWakeEntireList(result);
            return result;
          }
        }
      }
    }
  }
  if ( _InterlockedExchange((volatile __int32 *)(a2 + 40), 1) != 2 )
    return RtlpWaitOnAddressWithTimeout(a1, (PVOID *)a2, 0LL, RtlpWaitOnAddressSpinCycleCount);
  return result;
}
