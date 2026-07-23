/*
 * XREFs of RtlCheckXfgFailureInformation @ 0x1405B1B00
 * Callers:
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ZwQueryInformationProcess @ 0x14041A9C0 (ZwQueryInformationProcess.c)
 *     ZwQueryVirtualMemory @ 0x14041AB00 (ZwQueryVirtualMemory.c)
 *     RtlQueryImageXfgFilter @ 0x1405A71A4 (RtlQueryImageXfgFilter.c)
 *     RtlDisableXfgOnTarget @ 0x1405B1DE8 (RtlDisableXfgOnTarget.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlCheckXfgFailureInformation(char *BaseAddress)
{
  unsigned __int16 *v2; // rsi
  _WORD *v3; // r14
  int InformationProcess; // edi
  _WORD *Pool2; // rax
  char *v6; // r12
  wchar_t *v7; // rcx
  unsigned __int16 v8; // ax
  UNICODE_STRING v10; // [rsp+38h] [rbp-60h] BYREF
  __int128 MemoryInformation; // [rsp+48h] [rbp-50h] BYREF
  __int64 v12; // [rsp+58h] [rbp-40h]
  char v13; // [rsp+A8h] [rbp+10h] BYREF
  ULONG_PTR ProcessInformationLength; // [rsp+B0h] [rbp+18h] BYREF

  MemoryInformation = 0LL;
  v12 = 0LL;
  ProcessInformationLength = 0LL;
  v10 = 0LL;
  v13 = 0;
  v2 = 0LL;
  v3 = 0LL;
  if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)(BaseAddress + 1) > 0x7FFFFFFF0000LL || BaseAddress + 1 < BaseAddress )
    MEMORY[0x7FFFFFFF0000] = 0;
  InformationProcess = ZwQueryInformationProcess(
                         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                         ProcessImageFileNameWin32,
                         0LL,
                         0,
                         (PULONG)&ProcessInformationLength);
  if ( InformationProcess == -1073741820 )
  {
    Pool2 = (_WORD *)ExAllocatePool2(257LL, (unsigned int)ProcessInformationLength, 1195853400LL);
    v3 = Pool2;
    if ( !Pool2 )
    {
LABEL_8:
      InformationProcess = -1073741801;
      goto LABEL_30;
    }
    InformationProcess = ZwQueryInformationProcess(
                           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                           ProcessImageFileNameWin32,
                           Pool2,
                           ProcessInformationLength,
                           0LL);
    if ( InformationProcess >= 0 )
    {
      InformationProcess = RtlQueryImageXfgFilter(v3, 0LL, 0LL, 0LL, &v13);
      if ( InformationProcess >= 0 )
      {
        if ( v13 )
        {
LABEL_29:
          RtlDisableXfgOnTarget(BaseAddress);
          InformationProcess = 0;
          goto LABEL_30;
        }
        InformationProcess = ZwQueryVirtualMemory(
                               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                               BaseAddress,
                               MemoryImageInformation,
                               &MemoryInformation,
                               0x18uLL,
                               0LL);
        if ( InformationProcess < 0 )
          goto LABEL_30;
        if ( !(_QWORD)MemoryInformation || (v12 & 2) != 0 || (v12 & 1) != 0 )
        {
          InformationProcess = -1073741811;
          goto LABEL_30;
        }
        v6 = &BaseAddress[-MemoryInformation];
        InformationProcess = ZwQueryVirtualMemory(
                               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                               (PVOID)MemoryInformation,
                               MemoryMappedFilenameInformation,
                               0LL,
                               0LL,
                               &ProcessInformationLength);
        if ( InformationProcess == -1073741820 )
        {
          v2 = (unsigned __int16 *)ExAllocatePool2(257LL, ProcessInformationLength, 1195853400LL);
          if ( !v2 )
            goto LABEL_8;
          InformationProcess = ZwQueryVirtualMemory(
                                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                 (PVOID)MemoryInformation,
                                 MemoryMappedFilenameInformation,
                                 v2,
                                 ProcessInformationLength,
                                 0LL);
          if ( InformationProcess >= 0 )
          {
            v7 = (wchar_t *)(*((_QWORD *)v2 + 1) + *v2);
            v10.Buffer = v7;
            v8 = 0;
            v10.Length = 0;
            if ( *v2 )
            {
              do
              {
                v10.Buffer = --v7;
                v8 += 2;
                v10.Length = v8;
              }
              while ( *v7 != 92 && v8 < *v2 );
            }
            if ( !v8 || *v7 != 92 )
            {
              InformationProcess = -1073741767;
              goto LABEL_30;
            }
            v10.Buffer = v7 + 1;
            v10.Length = v8 - 2;
            v10.MaximumLength = v8 - 2;
            InformationProcess = RtlQueryImageXfgFilter(v3, &v10, (void *)MemoryInformation, (__int64)v6, &v13);
            if ( InformationProcess < 0 )
              goto LABEL_30;
            if ( !v13 )
            {
              InformationProcess = -1073741275;
              goto LABEL_30;
            }
            goto LABEL_29;
          }
        }
      }
    }
  }
LABEL_30:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)InformationProcess;
}
