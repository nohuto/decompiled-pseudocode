/*
 * XREFs of sub_140652638 @ 0x140652638
 * Callers:
 *     sub_14020C810 @ 0x14020C810 (sub_14020C810.c)
 * Callees:
 *     IoGetGenericIrpExtension @ 0x140379030 (IoGetGenericIrpExtension.c)
 *     IoSetGenericIrpExtension @ 0x140387790 (IoSetGenericIrpExtension.c)
 */

__int64 __fastcall sub_140652638(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v5; // r9
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  if ( a2 > 0xFu )
    return 3221225485LL;
  result = IoGetGenericIrpExtension(a1, &v6, 4u);
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741275 )
  {
    LOBYTE(v5) = 1;
    LOBYTE(v6) = a2 & 0xF | v6 & 0xF0 | 0x10;
    return IoSetGenericIrpExtension(a1, &v6, 4LL, v5);
  }
  return result;
}
