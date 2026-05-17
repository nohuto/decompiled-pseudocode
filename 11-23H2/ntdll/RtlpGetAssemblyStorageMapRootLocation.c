/*
 * XREFs of RtlpGetAssemblyStorageMapRootLocation @ 0x1800EBB44
 * Callers:
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180083BA0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180039660 (NtdllpAllocateStringRoutine.c)
 *     DbgPrintEx @ 0x1800538D0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A1190 (NtQueryValueKey.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlpGetAssemblyStorageMapRootLocation(__int64 a1, __int64 a2, __int64 a3)
{
  int ValueKey; // eax
  unsigned int v5; // ebx
  const char *v6; // r8
  unsigned int v7; // ecx
  __int64 StringRoutine; // rax
  int *v10; // [rsp+28h] [rbp-D8h]
  __int64 v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h]
  int v14; // [rsp+48h] [rbp-B8h]
  __int64 v15; // [rsp+50h] [rbp-B0h]
  __int64 *v16; // [rsp+58h] [rbp-A8h]
  int v17; // [rsp+60h] [rbp-A0h]
  __int128 v18; // [rsp+68h] [rbp-98h]
  int v19; // [rsp+84h] [rbp-7Ch]
  unsigned int Size; // [rsp+88h] [rbp-78h]
  size_t Size_4; // [rsp+8Ch] [rbp-74h] BYREF

  Handle = 0LL;
  v12 = 0;
  v11 = a2;
  if ( a1 && a2 && a3 )
  {
    v15 = a1;
    v16 = &v11;
    v14 = 48;
    v17 = 64;
    v18 = 0LL;
    ValueKey = NtOpenKey();
    v5 = ValueKey;
    if ( ValueKey < 0 )
    {
      v6 = "SXS: Unable to open storage root subkey %wZ; Status = 0x%08lx\n";
LABEL_6:
      DbgPrintEx(51, 0, v6, &v11, ValueKey, v10);
      goto LABEL_22;
    }
    v10 = &v12;
    ValueKey = NtQueryValueKey();
    v5 = ValueKey;
    if ( ValueKey < 0 )
    {
      v6 = "SXS: Unabel to query location from storage root subkey %wZ; Status = 0x%08lx\n";
      goto LABEL_6;
    }
    if ( v19 != 1 )
    {
      DbgPrintEx(51, 0, "SXS: Assembly storage root location value type is not REG_SZ\n");
LABEL_11:
      v5 = -1073741766;
      goto LABEL_22;
    }
    v7 = Size;
    if ( (Size & 1) != 0 )
    {
      DbgPrintEx(51, 0, "SXS: Assembly storage root location value has non-even size\n");
      goto LABEL_11;
    }
    if ( Size > *(unsigned __int16 *)(a3 + 2) )
    {
      if ( Size > 0xFFFE )
      {
        DbgPrintEx(
          51,
          0,
          "SXS: Assembly storage root location for %wZ does not fit in a UNICODE STRING\n",
          &v11,
          536,
          &v12);
        v5 = -1073741562;
        goto LABEL_22;
      }
      *(_WORD *)(a3 + 2) = Size;
      StringRoutine = NtdllpAllocateStringRoutine((unsigned __int16)v7);
      *(_QWORD *)(a3 + 8) = StringRoutine;
      if ( !StringRoutine )
      {
        v5 = -1073741801;
        goto LABEL_22;
      }
      v7 = Size;
    }
    memmove(*(void **)(a3 + 8), &Size_4, v7);
    v5 = 0;
    *(_WORD *)a3 = Size;
  }
  else
  {
    v5 = -1073741811;
  }
LABEL_22:
  if ( Handle )
    NtClose(Handle);
  return v5;
}
