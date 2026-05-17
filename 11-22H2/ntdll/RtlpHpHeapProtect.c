/*
 * XREFs of RtlpHpHeapProtect @ 0x180121E14
 * Callers:
 *     RtlProtectHeap @ 0x180049280 (RtlProtectHeap.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009F250 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x18009F7F0 (ZwProtectVirtualMemory.c)
 *     RtlpHpLargeAllocationProtect @ 0x180122190 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x18012298C (RtlpHpSegProtect.c)
 */

__int64 __fastcall RtlpHpHeapProtect(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  bool v7; // zf
  char v8; // r8
  unsigned __int64 v9; // rcx
  char v10; // r8
  unsigned __int64 v11; // rdx

  v2 = a2;
  result = ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
  {
    result = ZwProtectVirtualMemory();
    if ( (int)result >= 0 )
    {
      result = RtlpHpSegProtect(a1 + 320, (unsigned int)v2);
      if ( (int)result >= 0 )
      {
        result = RtlpHpSegProtect(a1 + 512, (unsigned int)v2);
        if ( (int)result >= 0 )
        {
          v5 = *(_QWORD *)(a1 + 72);
          if ( !v5 )
            return 0LL;
          while ( 1 )
          {
LABEL_8:
            result = RtlpHpLargeAllocationProtect(v5, v2);
            if ( (int)result < 0 )
              return result;
            v6 = *(_QWORD *)v5;
            if ( !*(_QWORD *)v5 )
              break;
            v7 = (*(_BYTE *)(a1 + 80) & 1) == 0;
LABEL_11:
            if ( v7 )
              v5 = v6;
            else
              v5 ^= v6;
          }
          v6 = *(_QWORD *)(v5 + 8);
          v8 = *(_BYTE *)(a1 + 80);
          if ( v6 )
          {
            v7 = (v8 & 1) == 0;
            goto LABEL_11;
          }
          v9 = v5;
          v10 = v8 & 1;
          while ( 1 )
          {
            v9 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v10 )
            {
              if ( !v9 )
                return result;
              v9 ^= v5;
            }
            if ( !v9 )
              return result;
            v11 = *(_QWORD *)(v9 + 8);
            if ( v10 )
            {
              if ( !v11 )
                goto LABEL_26;
              v11 ^= v9;
            }
            if ( v11 && v11 != v5 )
            {
              v5 = v11;
              goto LABEL_8;
            }
LABEL_26:
            v5 = v9;
          }
        }
      }
    }
  }
  return result;
}
