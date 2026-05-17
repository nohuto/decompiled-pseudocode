/*
 * XREFs of PsspCaptureHandleTrace @ 0x180128228
 * Callers:
 *     PsspCaptureProcessInformation @ 0x180128578 (PsspCaptureProcessInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x18009F110 (NtQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x18009F2F0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009F730 (NtCreateSection.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall PsspCaptureHandleTrace(__int64 a1, void *a2)
{
  NTSTATUS result; // eax
  unsigned __int64 v5; // rcx
  int v6; // edi
  ULONG ReturnLength; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v8; // [rsp+58h] [rbp-A8h]
  ULONG ProcessInformationLength; // [rsp+60h] [rbp-A0h]
  int v10; // [rsp+64h] [rbp-9Ch]
  HANDLE Handle; // [rsp+68h] [rbp-98h]
  __int64 v12; // [rsp+70h] [rbp-90h]
  _BYTE ProcessInformation[8]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v14; // [rsp+88h] [rbp-78h]

  memset_thunk_772440563353939046(ProcessInformation, 0, 0xB0uLL);
  result = NtQueryInformationProcess(a2, (PROCESSINFOCLASS)32, ProcessInformation, 0xB0u, &ReturnLength);
  if ( (int)(result + 0x80000000) < 0 || result == -1073741820 )
  {
    v5 = 160LL * v14;
    if ( v5 > 0xFFFFFFFF || (int)v5 + 176 < (unsigned int)v5 )
    {
      return -1073741675;
    }
    else
    {
      v10 = 0;
      ProcessInformationLength = v5 + 176;
      result = NtCreateSection();
      if ( result >= 0 )
      {
        v8 = 0LL;
        v12 = 0LL;
        v6 = ZwMapViewOfSection();
        if ( v6 >= 0 )
        {
          memset_thunk_772440563353939046(v8, 0, 0xB0uLL);
          if ( NtQueryInformationProcess(a2, (PROCESSINFOCLASS)32, v8, ProcessInformationLength, &ReturnLength) >= 0 )
          {
            NtUnmapViewOfSection();
            *(_DWORD *)(a1 + 936) = ReturnLength;
            *(_QWORD *)(a1 + 944) = Handle;
            *(_QWORD *)(a1 + 952) = MEMORY[0x7FFE0014];
            return 0;
          }
          else
          {
            NtUnmapViewOfSection();
            return NtClose(Handle);
          }
        }
        else
        {
          NtClose(Handle);
          return v6;
        }
      }
    }
  }
  return result;
}
