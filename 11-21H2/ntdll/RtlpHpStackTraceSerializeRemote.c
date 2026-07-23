/*
 * XREFs of RtlpHpStackTraceSerializeRemote @ 0x1801163A8
 * Callers:
 *     RtlpHpStackTraceSerialize @ 0x1801162AC (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A4570 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A45B0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A49B0 (NtCreateSection.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800FF558 (RtlpHeapPerformCrossProcessQuery.c)
 */

__int64 __fastcall RtlpHpStackTraceSerializeRemote(__int64 a1)
{
  ULONG_PTR v1; // rsi
  NTSTATUS v3; // ebx
  int v4; // eax
  HANDLE v5; // rax
  char *v6; // rdx
  ULONG_PTR ViewSize[2]; // [rsp+50h] [rbp-39h] BYREF
  HANDLE Buffer[16]; // [rsp+60h] [rbp-29h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+F0h] [rbp+67h] BYREF
  PVOID BaseAddress; // [rsp+F8h] [rbp+6Fh] BYREF
  HANDLE SectionHandle; // [rsp+100h] [rbp+77h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+108h] [rbp+7Fh] BYREF

  SectionHandle = 0LL;
  v1 = 0x10000LL;
  BaseAddress = 0LL;
  for ( MaximumSize.QuadPart = 0x10000LL;
        ;
        MaximumSize.QuadPart = ((unsigned __int64)Buffer[4] + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL )
  {
    memset(Buffer, 0, 0x60uLL);
    if ( *(_BYTE *)(a1 + 32) == 2 )
    {
      v3 = NtCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
      if ( v3 < 0 )
        goto LABEL_22;
      Buffer[0] = SectionHandle;
      Buffer[1] = (HANDLE)MaximumSize.QuadPart;
      LODWORD(Buffer[3]) = 0x20000000;
    }
    else
    {
      LODWORD(Buffer[3]) = 0x8000000;
    }
    v4 = RtlpHeapPerformCrossProcessQuery(*(HANDLE *)(a1 + 8), Buffer);
    v3 = v4;
    if ( v4 >= 0 )
      break;
    if ( v4 != -1073741789 )
      goto LABEL_22;
    NtClose(SectionHandle);
  }
  if ( ((__int64)Buffer[11] & 1) != 0 )
    *(_BYTE *)(a1 + 33) |= 1u;
  if ( *(_BYTE *)(a1 + 32) != 1 )
  {
    SectionOffset.QuadPart = 0LL;
    ViewSize[0] = 0x10000LL;
    if ( MaximumSize.QuadPart > 0 )
    {
      v5 = 0LL;
      while ( v5 < Buffer[4] )
      {
        v3 = ZwMapViewOfSection(
               SectionHandle,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               &BaseAddress,
               0LL,
               v1,
               &SectionOffset,
               ViewSize,
               ViewUnmap,
               0,
               4u);
        if ( v3 < 0 )
          goto LABEL_22;
        v6 = (HANDLE)(SectionOffset.QuadPart + ViewSize[0]) <= Buffer[4]
           ? (char *)ViewSize[0]
           : (char *)Buffer[4] - SectionOffset.QuadPart;
        v3 = (*(__int64 (__fastcall **)(PVOID, char *, _QWORD))(a1 + 16))(BaseAddress, v6, *(_QWORD *)(a1 + 24));
        if ( v3 < 0 )
          goto LABEL_22;
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
        v1 = ViewSize[0];
        BaseAddress = 0LL;
        v5 = (HANDLE)(ViewSize[0] + SectionOffset.QuadPart);
        SectionOffset.QuadPart = (__int64)v5;
        if ( (__int64)v5 >= MaximumSize.QuadPart )
          break;
      }
    }
    v3 = 0;
  }
LABEL_22:
  if ( BaseAddress )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( SectionHandle )
    NtClose(SectionHandle);
  return (unsigned int)v3;
}
