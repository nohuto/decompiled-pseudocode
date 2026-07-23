/*
 * XREFs of sub_14098E0AC @ 0x14098E0AC
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 *     sub_14080A01C @ 0x14080A01C (sub_14080A01C.c)
 */

__int64 __fastcall sub_14098E0AC(int a1)
{
  int v1; // ecx
  unsigned int v2; // ebx
  int v4; // [rsp+40h] [rbp+18h] BYREF
  int v5; // [rsp+44h] [rbp+1Ch]

  v2 = 0;
  if ( sub_14080A01C(a1) )
  {
    v4 = v1;
    v5 = 0;
    if ( !(unsigned __int8)sub_14042A5E0(38LL, &v4) )
      sub_1405CAE6C(0x605uLL, 0x26uLL, qword_140D04890, 0LL);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v2;
}
