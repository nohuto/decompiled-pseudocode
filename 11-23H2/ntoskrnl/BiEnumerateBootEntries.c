/*
 * XREFs of BiEnumerateBootEntries @ 0x1408072B0
 * Callers:
 *     BiBuildIdentifierList @ 0x140804938 (BiBuildIdentifierList.c)
 * Callees:
 *     ZwEnumerateBootEntries @ 0x14041CD90 (ZwEnumerateBootEntries.c)
 *     BiLogMessage @ 0x1408058F0 (BiLogMessage.c)
 *     BiAcquirePrivilege @ 0x140806378 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x140806404 (BiReleasePrivilege.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall BiEnumerateBootEntries(_QWORD *a1, ULONG *a2)
{
  NTSTATUS v4; // ebx
  void *Pool2; // rax
  void *v6; // rdi
  NTSTATUS v7; // eax
  ULONG BufferLength; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = BiAcquirePrivilege(0x16u, (__int64)&v10);
  if ( v4 >= 0 )
  {
    BufferLength = 0x2000;
    Pool2 = (void *)ExAllocatePool2(258LL, 0x2000LL, 1262764866LL);
    v6 = Pool2;
    BufferLength &= -(Pool2 != 0LL);
    while ( 1 )
    {
      v7 = ZwEnumerateBootEntries(Pool2, &BufferLength);
      v4 = v7;
      if ( v7 != -1073741789 )
        break;
      if ( v6 )
        ExFreePoolWithTag(v6, 0x4B444342u);
      Pool2 = (void *)ExAllocatePool2(258LL, BufferLength, 1262764866LL);
      v6 = Pool2;
      if ( !Pool2 )
      {
        v4 = -1073741670;
        goto LABEL_6;
      }
    }
    if ( v7 < 0 )
    {
      BiLogMessage(4LL, L"Failed to enumerate boot entries. Status: %x", (unsigned int)v7);
      if ( v6 )
        ExFreePoolWithTag(v6, 0x4B444342u);
    }
    else
    {
      *a2 = BufferLength;
      *a1 = v6;
    }
LABEL_6:
    BiReleasePrivilege((unsigned int *)&v10);
  }
  return (unsigned int)v4;
}
