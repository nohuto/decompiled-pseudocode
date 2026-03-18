/*
 * XREFs of BiQueryBootOptions @ 0x140802550
 * Callers:
 *     BiBindEfiBootManager @ 0x140802B0C (BiBindEfiBootManager.c)
 *     BiExportEfiBootManager @ 0x140A5E5CC (BiExportEfiBootManager.c)
 * Callees:
 *     ZwQueryBootOptions @ 0x14041D680 (ZwQueryBootOptions.c)
 *     BiLogMessage @ 0x140805620 (BiLogMessage.c)
 *     BiAcquirePrivilege @ 0x1408060A8 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x140806134 (BiReleasePrivilege.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall BiQueryBootOptions(_QWORD *a1, unsigned int *a2)
{
  void *v2; // rdi
  int BootOptions; // ebx
  __int64 Pool2; // rax
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = 0LL;
  *a2 = 0;
  v9 = 0LL;
  v8 = 0;
  BootOptions = BiAcquirePrivilege(22LL, &v9);
  if ( BootOptions >= 0 )
  {
    BootOptions = ZwQueryBootOptions(0LL, (__int64)&v8);
    if ( BootOptions != -1073741789 )
      goto LABEL_9;
    Pool2 = ExAllocatePool2(258LL, v8, 1262764866LL);
    v2 = (void *)Pool2;
    if ( !Pool2 )
    {
      BootOptions = -1073741670;
      goto LABEL_6;
    }
    BootOptions = ZwQueryBootOptions(Pool2, (__int64)&v8);
    if ( BootOptions < 0 )
    {
LABEL_9:
      BiLogMessage(4LL, L"Failed to query boot options. Status: %x", (unsigned int)BootOptions);
      if ( BootOptions < 0 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0x4B444342u);
        goto LABEL_6;
      }
    }
    *a2 = v8;
    *a1 = v2;
LABEL_6:
    BiReleasePrivilege(&v9);
  }
  return (unsigned int)BootOptions;
}
