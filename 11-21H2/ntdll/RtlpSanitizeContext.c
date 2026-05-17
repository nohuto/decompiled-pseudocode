/*
 * XREFs of RtlpSanitizeContext @ 0x1800367D8
 * Callers:
 *     RtlDispatchException @ 0x180035990 (RtlDispatchException.c)
 *     RtlpWalkFrameChain @ 0x180036958 (RtlpWalkFrameChain.c)
 *     RtlUnwindEx @ 0x180038900 (RtlUnwindEx.c)
 *     RtlVirtualUnwind2 @ 0x18010F9F0 (RtlVirtualUnwind2.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1800368AC (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlpSanitizeContext(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // r11
  bool v3; // zf
  int v4; // r8d
  unsigned int v5; // r10d
  unsigned int v6; // r9d
  int v7; // ecx

  result = RtlpValidateContextFlags(*(unsigned int *)(a1 + 48), 0LL);
  if ( (int)result < 0 )
    v3 = (_DWORD)result == -1073741811;
  else
    v3 = (v2[12] & 0x100000) == 0;
  if ( v3 )
  {
    v2[12] = v2[12] & 0xF800001F | 0x100000;
  }
  else if ( (int)result < 0 )
  {
    v2[12] = 1048587;
    return result;
  }
  result = v2[12] & 0x100040;
  if ( (_DWORD)result == 1048640 )
  {
    result = (unsigned int)v2[308];
    v4 = v2[312];
    if ( (int)result > v4
      || (v5 = v2[309], v6 = v2[313], v7 = v5 + result, result = v6 + v4, v7 < (int)result)
      || v5 < 0x530
      || v2[311] != 1232
      || v6 < 0x40
      || (result = (int)v2[310], (_DWORD *)((char *)v2 + result + 1232) != v2) )
    {
      v2[12] &= ~0x40u;
    }
  }
  return result;
}
