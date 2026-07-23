/*
 * XREFs of sub_140A31D80 @ 0x140A31D80
 * Callers:
 *     sub_140659E70 @ 0x140659E70 (sub_140659E70.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_140A32B54 @ 0x140A32B54 (sub_140A32B54.c)
 */

__int64 __fastcall sub_140A31D80(__int64 a1)
{
  SIZE_T v1; // rbp
  const void **v2; // rdi
  __int64 v3; // rsi
  __int64 result; // rax
  SIZE_T v5; // rbp
  const void **v6; // rsi
  __int64 v7; // rdi
  _BYTE v8[32]; // [rsp+20h] [rbp-68h] BYREF
  SIZE_T Length; // [rsp+40h] [rbp-48h]
  void *Source1; // [rsp+48h] [rbp-40h]
  SIZE_T v11; // [rsp+50h] [rbp-38h]
  void *v12; // [rsp+58h] [rbp-30h]

  if ( (int)sub_140A32B54(a1, v8) < 0 )
    return 0LL;
  v1 = (unsigned int)Length;
  v2 = (const void **)&off_140A39AB8;
  v3 = 0LL;
  while ( (_DWORD)v1 != *((_DWORD *)v2 - 2) || RtlCompareMemory(Source1, *v2, v1) != v1 )
  {
    v3 = (unsigned int)(v3 + 1);
    v2 += 3;
    if ( (unsigned int)v3 >= 2 )
      return 0LL;
  }
  result = (unsigned int)dword_140A39AC0[6 * v3];
  if ( (_DWORD)result == 11776 )
  {
    v5 = (unsigned int)v11;
    v6 = (const void **)&off_140A39AE8;
    v7 = 0LL;
    while ( (_DWORD)v5 != *((_DWORD *)v6 - 2) || RtlCompareMemory(v12, *v6, v5) != v5 )
    {
      v7 = (unsigned int)(v7 + 1);
      v6 += 3;
      if ( (unsigned int)v7 >= 2 )
        return 0LL;
    }
    return (unsigned int)dword_140A39AF0[6 * v7];
  }
  return result;
}
