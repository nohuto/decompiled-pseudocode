/*
 * XREFs of sub_14068EC28 @ 0x14068EC28
 * Callers:
 *     sub_14053EE38 @ 0x14053EE38 (sub_14053EE38.c)
 *     sub_14065A848 @ 0x14065A848 (sub_14065A848.c)
 *     sub_14067BE48 @ 0x14067BE48 (sub_14067BE48.c)
 *     sub_140689B38 @ 0x140689B38 (sub_140689B38.c)
 *     sub_14068A060 @ 0x14068A060 (sub_14068A060.c)
 *     sub_14068C820 @ 0x14068C820 (sub_14068C820.c)
 *     sub_1406E9C5C @ 0x1406E9C5C (sub_1406E9C5C.c)
 *     sub_14083200C @ 0x14083200C (sub_14083200C.c)
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 *     sub_14091ADA0 @ 0x14091ADA0 (sub_14091ADA0.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1402A0800 (IoSetThreadHardErrorMode.c)
 *     ZwSetInformationFile @ 0x14041BC40 (ZwSetInformationFile.c)
 *     sub_140689DAC @ 0x140689DAC (sub_140689DAC.c)
 *     sub_14068EF5C @ 0x14068EF5C (sub_14068EF5C.c)
 */

__int64 __fastcall sub_14068EC28(__int64 a1, unsigned int a2, unsigned __int64 a3, char a4)
{
  void *v6; // r14
  unsigned __int64 v7; // rdi
  unsigned __int64 v9; // rbp
  BOOLEAN v10; // r15
  NTSTATUS v11; // eax
  unsigned int v12; // edi
  unsigned __int64 FileInformation; // [rsp+30h] [rbp-38h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  FileInformation = 0LL;
  v15 = 0LL;
  IoStatusBlock = 0LL;
  v6 = *(void **)(a1 + 8LL * a2 + 1544);
  if ( !v6 )
    return 0LL;
  if ( a2 )
    v7 = a2 - 4 <= 1 || a2 == 1 ? *(_QWORD *)(a1 + 8LL * (unsigned int)sub_140689DAC(a2) + 1808) : 0LL;
  else
    v7 = *(_QWORD *)(a1 + 1800);
  if ( (a4 & 1) != 0 && v7 && a3 <= v7 )
    return 0LL;
  v9 = sub_14068EF5C(a1, a2, v7, a3);
  v10 = IoSetThreadHardErrorMode(0);
  if ( v9 < v7 )
  {
    v15 = v9;
    v11 = ZwSetInformationFile(v6, &IoStatusBlock, &v15, 8u, FileAllocationInformation);
  }
  else
  {
    FileInformation = v9;
    v11 = ZwSetInformationFile(v6, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
  }
  v12 = v11;
  if ( v11 < 0 )
  {
    dword_140D3CE00 = 3;
    qword_140D3CE08 = (__int64)v6;
    dword_140D3CE10 = v11;
  }
  else if ( a2 )
  {
    if ( a2 - 4 <= 1 || a2 == 1 )
      *(_QWORD *)(a1 + 8LL * (unsigned int)sub_140689DAC(a2) + 1808) = v9;
  }
  else
  {
    *(_QWORD *)(a1 + 1800) = v9;
  }
  IoSetThreadHardErrorMode(v10);
  return v12;
}
