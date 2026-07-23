/*
 * XREFs of sub_1409DB704 @ 0x1409DB704
 * Callers:
 *     sub_1409DAEE4 @ 0x1409DAEE4 (sub_1409DAEE4.c)
 * Callees:
 *     sub_1409DB2FC @ 0x1409DB2FC (sub_1409DB2FC.c)
 *     sub_1409DB4B0 @ 0x1409DB4B0 (sub_1409DB4B0.c)
 */

NTSTATUS __fastcall sub_1409DB704(__int64 a1, int a2)
{
  NTSTATUS result; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+34h] [rbp+Ch]

  v4 = 0;
  if ( !a1 )
    return -1073741811;
  result = sub_1409DB2FC(a1, &v4);
  if ( result >= 0 )
  {
    v5 = a2;
    return sub_1409DB4B0((_DWORD *)0x41E, 2u, (ULONGLONG)&v4);
  }
  return result;
}
