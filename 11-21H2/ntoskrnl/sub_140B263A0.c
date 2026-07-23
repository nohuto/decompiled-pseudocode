/*
 * XREFs of sub_140B263A0 @ 0x140B263A0
 * Callers:
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     InbvIsBootDriverInstalled @ 0x1403D8370 (InbvIsBootDriverInstalled.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x14041BAE0 (ZwSetInformationProcess.c)
 *     sub_14041C1A0 @ 0x14041C1A0 (sub_14041C1A0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140550E2C @ 0x140550E2C (sub_140550E2C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140B26580 @ 0x140B26580 (sub_140B26580.c)
 *     sub_140B26824 @ 0x140B26824 (sub_140B26824.c)
 *     sub_140B4BB08 @ 0x140B4BB08 (sub_140B4BB08.c)
 */

void sub_140B263A0()
{
  __int64 MaximumLength; // rsi
  __int64 v1; // rbx
  SIZE_T v2; // r14
  char *PoolWithTag; // rax
  char *v4; // rdi
  __int128 v5; // xmm0
  int v6; // r8d
  int v7; // r9d
  ULONG_PTR v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  NTSTATUS v13; // eax
  int v14; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-49h] BYREF
  HANDLE v16[18]; // [rsp+40h] [rbp-39h] BYREF
  int ProcessInformation; // [rsp+E0h] [rbp+67h] BYREF
  LARGE_INTEGER Interval; // [rsp+E8h] [rbp+6Fh] BYREF

  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  memset(v16, 0, 0x64uLL);
  if ( (unsigned __int8)sub_140B26824() )
    sub_140B4BB08();
  MaximumLength = stru_140D32978.MaximumLength;
  v1 = stru_140D32968.MaximumLength + 1148LL;
  v2 = v1 + stru_140D32978.MaximumLength;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x62537350u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheckEx(0x6Du, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
  memset(PoolWithTag, 0, v2);
  *((_DWORD *)v4 + 1) = v1;
  *(_DWORD *)v4 = v1;
  *((_QWORD *)v4 + 16) = &v4[v1];
  *((_DWORD *)v4 + 2) = 4194305;
  *((_QWORD *)v4 + 126) = MaximumLength;
  *((_OWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 11) = 0LL;
  *((_QWORD *)v4 + 8) = v4 + 1088;
  *((_WORD *)v4 + 29) = stru_140D32968.MaximumLength;
  RtlCopyUnicodeString((PUNICODE_STRING)(v4 + 56), &stru_140D32968);
  *((_QWORD *)v4 + 13) = &v4[*((unsigned __int16 *)v4 + 29) + 1088];
  *((_WORD *)v4 + 49) = 60;
  RtlCopyUnicodeString((PUNICODE_STRING)v4 + 6, &stru_140B57868);
  v5 = *((_OWORD *)v4 + 6);
  DestinationString.Buffer = (wchar_t *)*((_QWORD *)v4 + 16);
  *((_OWORD *)v4 + 7) = v5;
  DestinationString.Length = 0;
  DestinationString.MaximumLength = MaximumLength;
  RtlCopyUnicodeString(&DestinationString, &stru_140D32978);
  v8 = (int)sub_140B26580((int)v4 + 96, (_DWORD)v4, v6, v7, (__int64)v16);
  if ( InbvIsBootDriverInstalled(v10, v9) )
    sub_140550E2C(v12, v11);
  if ( (v8 & 0x80000000) != 0LL )
    KeBugCheckEx(0x6Du, v8, 0LL, 1uLL, 0LL);
  ProcessInformation = 1;
  v13 = ZwSetInformationProcess(v16[1], ProcessBreakOnTermination, &ProcessInformation, 4u);
  if ( v13 < 0 )
    KeBugCheckEx(0x6Du, v13, 0LL, 2uLL, 0LL);
  v14 = sub_14041C1A0((__int64)v16[2], 0LL);
  if ( v14 < 0 )
    KeBugCheckEx(0x6Du, v14, 0LL, 3uLL, 0LL);
  byte_140C54D0C = 1;
  Interval.QuadPart = -50000000LL;
  KeDelayExecutionThread(0, 0, &Interval);
  ZwClose(v16[2]);
  ZwClose(v16[1]);
  ExFreePoolWithTag(v4, 0);
}
