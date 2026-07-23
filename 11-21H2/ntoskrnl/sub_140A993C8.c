/*
 * XREFs of sub_140A993C8 @ 0x140A993C8
 * Callers:
 *     sub_140A7F8F2 @ 0x140A7F8F2 (sub_140A7F8F2.c)
 * Callees:
 *     IoGetStackLimits @ 0x1402AB940 (IoGetStackLimits.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 */

ULONG sub_140A993C8()
{
  ULONG result; // eax
  unsigned __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v2; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v1 = (unsigned __int64)&v1;
  IoGetStackLimits(&v2, &v3);
  result = v1;
  if ( v1 < v2 || (result = v1, v1 > v3) )
  {
    if ( dword_140C0B1F8 > 2 )
    {
      result = dword_140D5768C;
      if ( !dword_140D5768C )
      {
        result = DbgPrintEx(0x5Du, 0, "DVRF: Driver switched stacks using an unsupported method!\n");
        dword_140D5768C = 1;
      }
    }
  }
  return result;
}
