/*
 * XREFs of sub_140551F78 @ 0x140551F78
 * Callers:
 *     sub_140553968 @ 0x140553968 (sub_140553968.c)
 *     sub_140554244 @ 0x140554244 (sub_140554244.c)
 *     sub_1405554B0 @ 0x1405554B0 (sub_1405554B0.c)
 *     KeInitializeCrashDumpHeader @ 0x140555F30 (KeInitializeCrashDumpHeader.c)
 *     sub_14092C440 @ 0x14092C440 (sub_14092C440.c)
 *     sub_140A66300 @ 0x140A66300 (sub_140A66300.c)
 * Callees:
 *     RtlGetNtProductType @ 0x140245CC0 (RtlGetNtProductType.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmGetPhysicalMemoryRanges @ 0x140852550 (MmGetPhysicalMemoryRanges.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140551F78(
        _NT_PRODUCT_TYPE *a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _NT_PRODUCT_TYPE *v10; // r11
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rcx
  size_t v13; // r8
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rax
  PPHYSICAL_MEMORY_RANGE v15; // r8
  __int64 v16; // rdi
  LARGE_INTEGER *p_NumberOfBytes; // rdx
  LARGE_INTEGER NumberOfBytes; // rcx
  __int64 v19; // r9
  signed __int64 v20; // rcx
  unsigned __int64 QuadPart; // rax
  __int64 result; // rax

  v10 = a1;
  v11 = 2048LL;
  if ( ((unsigned __int8)a1 & 4) != 0 )
  {
    *a1 = 1162297680;
    v10 = a1 + 1;
    v11 = 2047LL;
  }
  memset64(v10, 0x4547415045474150uLL, v11 >> 1);
  if ( (v11 & 1) != 0 )
    v10[v11 - 1] = 1162297680;
  *((_QWORD *)a1 + 9) = a5;
  *((_QWORD *)a1 + 10) = a6;
  *((_QWORD *)a1 + 11) = a7;
  *((_DWORD *)a1 + 1) = 875976004;
  *((_DWORD *)a1 + 14) = a3;
  *((_QWORD *)a1 + 8) = a4;
  if ( a8 )
    v12 = *(_QWORD *)(*(_QWORD *)(a8 + 184) + 40LL);
  else
    v12 = __readcr3();
  *((_QWORD *)a1 + 2) = v12 & 0xFFFFFFFFFFFFF000uLL;
  *((_BYTE *)a1 + 4174) = 4;
  *((_DWORD *)a1 + 12) = 34404;
  *((_DWORD *)a1 + 998) = a2;
  *((_QWORD *)a1 + 3) = qword_140D069A8;
  *((_QWORD *)a1 + 4) = &PsLoadedModuleList;
  *((_QWORD *)a1 + 5) = &qword_140C1BF80;
  *((_QWORD *)a1 + 16) = &unk_140C02190;
  *((_DWORD *)a1 + 13) = KeQueryActiveProcessorCountEx(0xFFFFu);
  *((_DWORD *)a1 + 2) = (unsigned int)NtBuildNumber >> 28;
  *((_DWORD *)a1 + 3) = (unsigned __int16)NtBuildNumber;
  if ( (unsigned int)(a2 - 5) <= 1 || !qword_140D06950 )
    goto LABEL_24;
  if ( KeGetCurrentIrql() > 1u )
  {
    v13 = 16 * ((unsigned int)(*(_DWORD *)qword_140D06950 - 1) + 2LL);
    if ( v13 > 0x2BC )
      v13 = 700LL;
    memmove(a1 + 34, qword_140D06950, v13);
    goto LABEL_25;
  }
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  v15 = PhysicalMemoryRanges;
  if ( !PhysicalMemoryRanges )
  {
LABEL_24:
    memset(a1 + 34, 0, 0x2BCuLL);
    goto LABEL_25;
  }
  v16 = 0LL;
  p_NumberOfBytes = &PhysicalMemoryRanges->NumberOfBytes;
  NumberOfBytes = PhysicalMemoryRanges->NumberOfBytes;
  v19 = 0LL;
  while ( NumberOfBytes.QuadPart )
  {
    v16 = (unsigned int)(v16 + 1);
    v19 += (unsigned __int64)NumberOfBytes.QuadPart >> 12;
    NumberOfBytes = PhysicalMemoryRanges[(unsigned int)v16].NumberOfBytes;
  }
  *((_QWORD *)a1 + 18) = v19;
  if ( 16 * ((unsigned __int64)(unsigned int)(v16 - 1) + 2) > 0x2BC )
    v16 = 42LL;
  *((_DWORD *)a1 + 34) = v16;
  if ( (_DWORD)v16 )
  {
    v20 = (char *)a1 - (char *)PhysicalMemoryRanges;
    do
    {
      *(LONGLONG *)((char *)&p_NumberOfBytes[18].QuadPart + v20) = (unsigned __int64)p_NumberOfBytes[-1].QuadPart >> 12;
      QuadPart = p_NumberOfBytes->QuadPart;
      p_NumberOfBytes += 2;
      *(LONGLONG *)((char *)&p_NumberOfBytes[17].QuadPart + v20) = QuadPart >> 12;
      --v16;
    }
    while ( v16 );
  }
  ExFreePoolWithTag(v15, 0);
LABEL_25:
  memset(a1 + 210, 0, 0xBB8uLL);
  *((_QWORD *)a1 + 481) = 0LL;
  *((_DWORD *)a1 + 966) = 0;
  *((_QWORD *)a1 + 482) = 0LL;
  *((_DWORD *)a1 + 960) = -2147483645;
  *((_DWORD *)a1 + 961) = 1;
  *((_DWORD *)a1 + 1002) = MEMORY[0xFFFFF78000000014];
  *((_DWORD *)a1 + 1003) = MEMORY[0xFFFFF78000000018];
  *((_DWORD *)a1 + 1036) = MEMORY[0xFFFFF78000000008];
  *((_DWORD *)a1 + 1037) = MEMORY[0xFFFFF7800000000C];
  RtlGetNtProductType(a1 + 1040);
  *((_DWORD *)a1 + 1041) = MEMORY[0xFFFFF780000002D0];
  result = MEMORY[0xFFFFF780000002C4];
  *((_DWORD *)a1 + 1044) = 0;
  *((_DWORD *)a1 + 1045) = result;
  if ( byte_140D06888 )
    *((_DWORD *)a1 + 1044) = 2048;
  return result;
}
