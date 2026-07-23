/*
 * XREFs of sub_140651304 @ 0x140651304
 * Callers:
 *     IoReadDiskSignature @ 0x1409305C0 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x1409306C0 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x140930890 (IoReadPartitionTableEx.c)
 * Callees:
 *     sub_14064FD74 @ 0x14064FD74 (sub_14064FD74.c)
 *     sub_1406513D8 @ 0x1406513D8 (sub_1406513D8.c)
 *     sub_1406518D8 @ 0x1406518D8 (sub_1406518D8.c)
 *     sub_14065193C @ 0x14065193C (sub_14065193C.c)
 *     sub_14065253C @ 0x14065253C (sub_14065253C.c)
 */

__int64 __fastcall sub_140651304(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  int v7; // r8d
  __int64 result; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v5 = *(unsigned int *)(a1 + 256);
  if ( !(_DWORD)v5 )
    goto LABEL_8;
  v7 = v5 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
      return 3221225659LL;
    v9 = a1;
    return sub_14065253C(&v9);
  }
  v9 = a1;
  result = sub_14064FD74(&v9, a2);
  if ( (int)result < 0 )
  {
    result = sub_1406513D8(a1);
    if ( (int)result >= 0 )
    {
LABEL_8:
      sub_1406518D8(&v9, a1, v5, a4);
      return sub_14065193C(&v9, a2);
    }
  }
  return result;
}
