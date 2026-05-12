/*
 * XREFs of ?PmBuildInstanceId@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z @ 0x1C001FAA4
 * Callers:
 *     ?PmCreatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_INFORMATION_EX@@PEAPEAU_PARTITION_EXTENSION@@@Z @ 0x1C001F7CC (-PmCreatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0007B40 (RtlStringCbPrintfW.c)
 */

__int64 __fastcall PmBuildInstanceId(const UNICODE_STRING *a1, struct _UNICODE_STRING *a2)
{
  wchar_t *Pool2; // r12
  NTSTATUS v5; // ebx
  __int64 v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rcx
  PWSTR Buffer; // rdx
  WCHAR v11; // ax

  if ( ((__int64)a2[2].Buffer & 0x200) != 0 )
  {
    v7 = 0LL;
    v5 = RtlDuplicateUnicodeString(1u, a1 + 30, a2 + 3);
    if ( v5 >= 0 )
    {
      v8 = a2[3].Length >> 1;
      if ( v8 )
      {
        v9 = v8;
        do
        {
          Buffer = a2[3].Buffer;
          v11 = Buffer[v7];
          if ( v11 == 47 || v11 == 92 )
            Buffer[v7] = 95;
          ++v7;
          --v9;
        }
        while ( v9 );
      }
    }
  }
  else
  {
    Pool2 = (wchar_t *)ExAllocatePool2(258LL, 112LL, 1178758480LL);
    if ( Pool2 )
    {
      v5 = RtlStringCbPrintfW(
             Pool2,
             0x70uLL,
             L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}#%016I64X",
             LODWORD(a1[13].Buffer),
             WORD2(a1[13].Buffer),
             HIWORD(a1[13].Buffer),
             LOBYTE(a1[14].Length),
             HIBYTE(a1[14].Length),
             LOBYTE(a1[14].MaximumLength),
             HIBYTE(a1[14].MaximumLength),
             *((unsigned __int8 *)&a1[14].MaximumLength + 2),
             *((unsigned __int8 *)&a1[14].MaximumLength + 3),
             *((unsigned __int8 *)&a1[14].MaximumLength + 4),
             *((unsigned __int8 *)&a1[14].MaximumLength + 5),
             *(_QWORD *)&a2[11].Length);
      if ( v5 < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
      }
      else
      {
        *(_DWORD *)&a2[3].Length = 7340142;
        a2[3].Buffer = Pool2;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}
