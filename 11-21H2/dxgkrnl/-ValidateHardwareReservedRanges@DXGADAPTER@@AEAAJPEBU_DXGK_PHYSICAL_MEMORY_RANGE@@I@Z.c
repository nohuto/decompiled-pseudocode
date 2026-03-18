/*
 * XREFs of ?ValidateHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x1C0219424
 * Callers:
 *     ?CreatePhysicalObjectsForHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x1C0219344 (-CreatePhysicalObjectsForHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGADAPTER::ValidateHardwareReservedRanges(
        DXGADAPTER *this,
        const struct _DXGK_PHYSICAL_MEMORY_RANGE *a2,
        unsigned int a3)
{
  unsigned int v5; // ebx
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rdi
  unsigned int v7; // ecx
  unsigned __int64 QuadPart; // rsi
  __int64 v9; // r15
  unsigned __int64 v10; // rbp
  LARGE_INTEGER NumberOfBytes; // rax
  int v12; // r8d
  PHYSICAL_ADDRESS *p_BaseAddress; // rdx
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r13

  v5 = 0;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  if ( PhysicalMemoryRanges )
  {
    v7 = 0;
    if ( a3 )
    {
      while ( 1 )
      {
        QuadPart = a2->BaseAddress.QuadPart;
        v9 = a2->NumberOfBytes.QuadPart;
        v10 = v9 + a2->BaseAddress.QuadPart;
        if ( v10 < a2->BaseAddress.QuadPart )
        {
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogSingleEntry2)(
            2LL,
            (LARGE_INTEGER)a2->BaseAddress.QuadPart,
            (LARGE_INTEGER)a2->NumberOfBytes.QuadPart);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Driver reserved memory range overflow. BaseAddress=0x%I64x, Size=%I64u",
            QuadPart,
            v9,
            0LL,
            0LL,
            0LL);
          goto LABEL_14;
        }
        NumberOfBytes = PhysicalMemoryRanges->NumberOfBytes;
        v12 = 0;
        if ( NumberOfBytes.QuadPart )
          break;
LABEL_8:
        ++v7;
        ++a2;
        if ( v7 >= a3 )
          goto LABEL_9;
      }
      p_BaseAddress = &PhysicalMemoryRanges->BaseAddress;
      while ( 1 )
      {
        v14 = p_BaseAddress->QuadPart;
        v15 = NumberOfBytes.QuadPart + p_BaseAddress->QuadPart;
        if ( QuadPart < v15 && v10 > v14 )
          break;
        p_BaseAddress = &PhysicalMemoryRanges[++v12].BaseAddress;
        NumberOfBytes = p_BaseAddress[1];
        if ( !NumberOfBytes.QuadPart )
          goto LABEL_8;
      }
      WdLogSingleEntry4(2LL, QuadPart, v10, p_BaseAddress->QuadPart, NumberOfBytes.QuadPart + p_BaseAddress->QuadPart);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver hardware reserved range cannot intersect a physical range of memory in Mm",
        QuadPart,
        v10,
        v14,
        v15,
        0LL);
LABEL_14:
      v5 = -1073741811;
    }
LABEL_9:
    ExFreePoolWithTag(PhysicalMemoryRanges, 0);
    return v5;
  }
  else
  {
    WdLogSingleEntry1(6LL, 10868LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Couldn't allocate buffer to query system memory size",
      10868LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
