/*
 * XREFs of RtlpChangeQueryDebugBufferTarget @ 0x18000230C
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800013C0 (RtlQueryProcessDebugInformation.c)
 *     RtlDestroyQueryDebugBuffer @ 0x1800022D0 (RtlDestroyQueryDebugBuffer.c)
 *     RtlSetProcessDebugInformation @ 0x1800E3ED0 (RtlSetProcessDebugInformation.c)
 * Callees:
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenProcess @ 0x1800A4530 (NtOpenProcess.c)
 *     ZwMapViewOfSection @ 0x1800A4570 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A45B0 (NtUnmapViewOfSection.c)
 */

NTSTATUS __fastcall RtlpChangeQueryDebugBufferTarget(__int64 a1, void *a2, int a3, HANDLE *a4)
{
  void *v4; // rax
  __int64 v5; // r14
  __int64 v10; // rcx
  HANDLE v11; // rdx
  PVOID *v12; // rdi
  ULONG_PTR v13; // r8
  __int128 v14; // xmm0
  _OWORD *v15; // rbx
  NTSTATUS result; // eax
  NTSTATUS v17; // eax
  NTSTATUS v18; // edi
  NTSTATUS v19; // esi
  HANDLE v20; // rdx
  HANDLE ProcessHandle; // [rsp+58h] [rbp-39h] BYREF
  ULONG_PTR ViewSize; // [rsp+60h] [rbp-31h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp-29h] BYREF
  _CLIENT_ID ClientId; // [rsp+70h] [rbp-21h] BYREF
  _CLIENT_ID v25; // [rsp+80h] [rbp-11h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-1h] BYREF
  HANDLE Handle; // [rsp+F8h] [rbp+67h] BYREF

  v4 = *(void **)(a1 + 48);
  v5 = a1 + *(_QWORD *)(a1 + 88);
  ObjectAttributes.Length = 48;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( v4 )
  {
    ClientId.UniqueProcess = v4;
    ClientId.UniqueThread = 0LL;
    result = NtOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
    if ( result < 0 )
      return result;
    v10 = (__int64)ProcessHandle;
  }
  else
  {
    v10 = -1LL;
    ProcessHandle = (HANDLE)-1LL;
  }
  if ( a2 )
  {
    v25.UniqueProcess = a2;
    v25.UniqueThread = 0LL;
    v17 = NtOpenProcess(&Handle, 0x1FFFFFu, &ObjectAttributes, &v25);
    v10 = (__int64)ProcessHandle;
    v18 = v17;
    if ( v17 < 0 )
    {
      if ( ProcessHandle != (HANDLE)-1LL )
        NtClose(ProcessHandle);
      return v18;
    }
    v11 = Handle;
  }
  else
  {
    v11 = 0LL;
    Handle = 0LL;
  }
  v12 = (PVOID *)(a1 + 16);
  if ( v10 == -1 )
  {
    v13 = *(_QWORD *)(a1 + 88);
    *v12 = (PVOID)(v13 + *(_QWORD *)(a1 + 8));
  }
  else
  {
    if ( *v12 )
    {
      NtUnmapViewOfSection((HANDLE)v10, *v12);
      v10 = (__int64)ProcessHandle;
      *v12 = 0LL;
    }
    NtClose((HANDLE)v10);
    v13 = *(_QWORD *)(a1 + 88);
    v11 = Handle;
  }
  ViewSize = v13;
  SectionOffset.QuadPart = v13;
  if ( v11 )
  {
    v19 = ZwMapViewOfSection(
            *(HANDLE *)a1,
            v11,
            (PVOID *)(a1 + 16),
            0LL,
            0LL,
            &SectionOffset,
            &ViewSize,
            ViewUnmap,
            0,
            4u);
    if ( v19 == -1073741800 )
    {
      v20 = Handle;
      *v12 = 0LL;
      v19 = ZwMapViewOfSection(
              *(HANDLE *)a1,
              v20,
              (PVOID *)(a1 + 16),
              0LL,
              0LL,
              &SectionOffset,
              &ViewSize,
              ViewUnmap,
              0,
              4u);
    }
    if ( v19 < 0 )
    {
      NtClose(Handle);
      return v19;
    }
    if ( a4 )
      *a4 = Handle;
    else
      NtClose(Handle);
  }
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 24) = a1 - (_QWORD)*v12;
  if ( a3 == 1 )
  {
    *(_DWORD *)v5 = 0;
    *(_DWORD *)(v5 + 4) = *(_DWORD *)v12;
    *(_DWORD *)(v5 + 8) = *(_DWORD *)v12;
    *(_DWORD *)(v5 + 12) = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(v5 + 16) = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(v5 + 20) = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(v5 + 24) = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(v5 + 28) = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(v5 + 32) = *(_DWORD *)(a1 + 64);
    *(_DWORD *)(v5 + 36) = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(v5 + 40) = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(v5 + 44) = *(_DWORD *)(a1 + 88);
    *(_DWORD *)(v5 + 80) = *(_DWORD *)(a1 + 160);
  }
  else
  {
    *(_OWORD *)v5 = *(_OWORD *)a1;
    *(_OWORD *)(v5 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(v5 + 32) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v5 + 48) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(v5 + 64) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(v5 + 80) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(v5 + 96) = *(_OWORD *)(a1 + 96);
    v14 = *(_OWORD *)(a1 + 112);
    v15 = (_OWORD *)(a1 + 128);
    *(_OWORD *)(v5 + 112) = v14;
    *(_OWORD *)(v5 + 128) = *v15;
    *(_OWORD *)(v5 + 144) = v15[1];
    *(_OWORD *)(v5 + 160) = v15[2];
    *(_OWORD *)(v5 + 176) = v15[3];
    *(_OWORD *)(v5 + 192) = v15[4];
    *(_QWORD *)(v5 + 8) = *(_QWORD *)(v5 + 16);
    *(_QWORD *)v5 = 0LL;
  }
  return 0;
}
