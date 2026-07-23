/*
 * XREFs of BiQueryBootOptions @ 0x140804AD4
 * Callers:
 *     BiBindEfiBootManager @ 0x140805090 (BiBindEfiBootManager.c)
 *     BiExportEfiBootManager @ 0x140A5E63C (BiExportEfiBootManager.c)
 * Callees:
 *     ZwQueryBootOptions @ 0x14041CFC0 (ZwQueryBootOptions.c)
 *     BiLogMessage @ 0x140807BA0 (BiLogMessage.c)
 *     BiAcquirePrivilege @ 0x140808628 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1408086B4 (BiReleasePrivilege.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall BiQueryBootOptions(_BOOT_OPTIONS **a1, ULONG *a2)
{
  _BOOT_OPTIONS *v2; // rdi
  NTSTATUS v5; // ebx
  _BOOT_OPTIONS *Pool2; // rax
  ULONG BootOptionsLength; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = 0LL;
  *a2 = 0;
  v9 = 0LL;
  BootOptionsLength = 0;
  v5 = BiAcquirePrivilege(22LL, &v9);
  if ( v5 >= 0 )
  {
    v5 = ZwQueryBootOptions(0LL, &BootOptionsLength);
    if ( v5 != -1073741789 )
      goto LABEL_9;
    Pool2 = (_BOOT_OPTIONS *)ExAllocatePool2(258LL, BootOptionsLength, 1262764866LL);
    v2 = Pool2;
    if ( !Pool2 )
    {
      v5 = -1073741670;
      goto LABEL_6;
    }
    v5 = ZwQueryBootOptions(Pool2, &BootOptionsLength);
    if ( v5 < 0 )
    {
LABEL_9:
      BiLogMessage(4LL, L"Failed to query boot options. Status: %x", (unsigned int)v5);
      if ( v5 < 0 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0x4B444342u);
        goto LABEL_6;
      }
    }
    *a2 = BootOptionsLength;
    *a1 = v2;
LABEL_6:
    BiReleasePrivilege(&v9);
  }
  return (unsigned int)v5;
}
