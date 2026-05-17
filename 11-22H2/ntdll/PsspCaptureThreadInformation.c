/*
 * XREFs of PsspCaptureThreadInformation @ 0x180129CD0
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180127370 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x180054950 (RtlGetExtendedContextLength.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009F2F0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009F730 (NtCreateSection.c)
 *     ZwGetNextThread @ 0x1800A0DC0 (ZwGetNextThread.c)
 *     PsspDumpThread @ 0x18012A030 (PsspDumpThread.c)
 *     PsspFreeLinkedHandleList @ 0x18012A258 (PsspFreeLinkedHandleList.c)
 */

__int64 __fastcall PsspCaptureThreadInformation(__int64 a1, __int64 a2, __int16 a3, unsigned int a4)
{
  __int64 v5; // rdi
  unsigned int v6; // r15d
  int NextThread; // r14d
  __int64 v8; // rdx
  __int64 v9; // rsi
  int v10; // esi
  int ExtendedContextLength; // eax
  unsigned __int64 v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // [rsp+60h] [rbp-31h] BYREF
  __int64 v16; // [rsp+68h] [rbp-29h]
  __int64 v17; // [rsp+70h] [rbp-21h]
  __int64 v18; // [rsp+78h] [rbp-19h]
  HANDLE Handle; // [rsp+80h] [rbp-11h]
  int v20; // [rsp+88h] [rbp-9h]
  __int64 v21; // [rsp+90h] [rbp-1h]
  int v22; // [rsp+98h] [rbp+7h]
  __int64 v23; // [rsp+9Ch] [rbp+Bh]
  __int64 v24; // [rsp+A8h] [rbp+17h]

  v20 = a3 & 0x100;
  v5 = 0LL;
  v6 = 0;
  NextThread = ZwGetNextThread();
  if ( NextThread == -2147483622 )
    return 0LL;
  v8 = 1LL;
  do
  {
    v15 = v17;
    if ( NextThread < 0 )
      goto LABEL_15;
    v16 = 0LL;
    NextThread = ZwAllocateVirtualMemory();
    if ( NextThread < 0 )
      goto LABEL_15;
    v9 = v16;
    v5 = v16;
    *(_WORD *)(v16 + 10) = 0;
    *(_WORD *)(v9 + 8) = -4;
    ++v6;
    *(_DWORD *)(v9 + 4LL * (unsigned __int16)(*(_WORD *)(v9 + 10))++ + 12) = v17;
    NextThread = ZwGetNextThread();
    v8 = 1LL;
  }
  while ( NextThread != -2147483622 );
  if ( !v6 )
    return 0LL;
  v10 = 0;
  LODWORD(v15) = 0;
  if ( v20 )
  {
    if ( (a3 & 0x200) == 0
      || (ExtendedContextLength = RtlGetExtendedContextLength(a4, (__int64)&v15), v10 = v15, ExtendedContextLength < 0) )
    {
      v10 = 1232;
    }
  }
  *(_DWORD *)(a1 + 1024) = v10;
  v12 = v6 * (unsigned __int64)(((v10 + 15) & 0xFFFFFFF0) + 128);
  if ( v12 <= 0xFFFFFFFF )
  {
    v24 = (unsigned int)v12;
    NextThread = NtCreateSection();
    if ( NextThread < 0 )
    {
LABEL_15:
      PsspFreeLinkedHandleList(v5, v8);
      return (unsigned int)NextThread;
    }
    v18 = 0LL;
    NextThread = ZwMapViewOfSection();
    if ( NextThread < 0 )
    {
      NtClose(Handle);
      goto LABEL_15;
    }
    v21 = v18;
    v22 = 0;
    v23 = 0LL;
    NtUnmapViewOfSection();
    PsspFreeLinkedHandleList(v5, v14);
    *(_QWORD *)(a1 + 1000) = 0LL;
    *(_QWORD *)(a1 + 1008) = Handle;
    *(_DWORD *)(a1 + 992) = 0;
    *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
    return 0LL;
  }
  PsspFreeLinkedHandleList(v5, v8);
  return 3221225621LL;
}
