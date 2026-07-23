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

NTSTATUS __fastcall RtlpHpHeapProtect(unsigned __int64 *BaseAddress, ULONG NewProtect)
{
  __int64 v2; // rdi
  NTSTATUS result; // eax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  bool v7; // zf
  char v8; // r8
  unsigned __int64 v9; // rcx
  char v10; // r8
  unsigned __int64 v11; // rdx
  PVOID BaseAddressa; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v13[7]; // [rsp+38h] [rbp-40h] BYREF
  ULONG OldProtect; // [rsp+90h] [rbp+18h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+20h] BYREF

  v2 = NewProtect;
  result = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, MemoryBasicInformation, v13, 0x30uLL, 0LL);
  if ( result >= 0 )
  {
    RegionSize = v13[3];
    BaseAddressa = BaseAddress;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, v2, &OldProtect);
    if ( result >= 0 )
    {
      result = RtlpHpSegProtect(BaseAddress + 40, (unsigned int)v2);
      if ( result >= 0 )
      {
        result = RtlpHpSegProtect(BaseAddress + 64, (unsigned int)v2);
        if ( result >= 0 )
        {
          v5 = BaseAddress[9];
          if ( !v5 )
            return 0;
          while ( 1 )
          {
LABEL_8:
            result = RtlpHpLargeAllocationProtect(v5, v2);
            if ( result < 0 )
              return result;
            v6 = *(_QWORD *)v5;
            if ( !*(_QWORD *)v5 )
              break;
            v7 = (BaseAddress[10] & 1) == 0;
LABEL_11:
            if ( v7 )
              v5 = v6;
            else
              v5 ^= v6;
          }
          v6 = *(_QWORD *)(v5 + 8);
          v8 = *((_BYTE *)BaseAddress + 80);
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
