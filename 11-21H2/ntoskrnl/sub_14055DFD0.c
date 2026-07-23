/*
 * XREFs of sub_14055DFD0 @ 0x14055DFD0
 * Callers:
 *     sub_140642660 @ 0x140642660 (sub_140642660.c)
 * Callees:
 *     sub_140554BC4 @ 0x140554BC4 (sub_140554BC4.c)
 */

unsigned __int64 __fastcall sub_14055DFD0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+2Ch] [rbp-1Ch]
  __int64 v6; // [rsp+30h] [rbp-18h]
  unsigned __int64 v7; // [rsp+38h] [rbp-10h]
  char v8; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  result = (unsigned int)dword_140D018E0;
  if ( dword_140D018E0 )
  {
    result = (unsigned __int64)(unsigned int)dword_140D018E0 << 20;
    if ( a2 >= result )
    {
      v3 = 0LL;
      v7 = a2 >> 12;
      v6 = a1;
      v4 = 1;
      return sub_140554BC4((__int64)&v3, &v8);
    }
  }
  return result;
}
