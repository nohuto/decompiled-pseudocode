/*
 * XREFs of PspInitializeCpuPartitionsPhase0 @ 0x140B6AFB4
 * Callers:
 *     PspInitPhase0 @ 0x140B4A894 (PspInitPhase0.c)
 * Callees:
 *     KeInitializeCpuPartition @ 0x1403ABDA4 (KeInitializeCpuPartition.c)
 *     PsCreateCpuPartition @ 0x140857544 (PsCreateCpuPartition.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140B6B05C (PspInitializeCpuPartitionsDefaultSd.c)
 */

__int64 PspInitializeCpuPartitionsPhase0()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  PVOID v3; // rbx
  _DWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+28h] [rbp-30h]
  const wchar_t *v6; // [rsp+30h] [rbp-28h]
  int v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+3Ch] [rbp-1Ch]
  __int64 v9; // [rsp+40h] [rbp-18h]
  __int64 v10; // [rsp+48h] [rbp-10h]

  v8 = 0;
  v4[1] = 0;
  qword_140D0F248 = (__int64)&PspCpuPartitionListHead;
  PspCpuPartitionListHead = (__int64)&PspCpuPartitionListHead;
  result = PspInitializeCpuPartitionsDefaultSd();
  if ( (int)result >= 0 )
  {
    v5 = 0LL;
    v10 = 0LL;
    v6 = L"^`";
    v9 = PsCpuPartitionDefaultSd;
    v4[0] = 48;
    v7 = 592;
    result = PsCreateCpuPartition((__int64)v4, v1, v2, &PspSystemCpuPartition);
    if ( (int)result >= 0 )
    {
      v3 = PspSystemCpuPartition;
      KeInitializeCpuPartition((__int64)PspSystemCpuPartition, 1);
      result = 0LL;
      KiSystemCpuPartition = (__int64)v3;
    }
  }
  return result;
}
