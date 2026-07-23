/*
 * XREFs of sub_140A31CD8 @ 0x140A31CD8
 * Callers:
 *     sub_140A32064 @ 0x140A32064 (sub_140A32064.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_140A32B54 @ 0x140A32B54 (sub_140A32B54.c)
 */

__int64 __fastcall sub_140A31CD8(__int64 a1)
{
  unsigned int v1; // esi
  SIZE_T v3; // rbp
  const void **v4; // r14
  unsigned int v5; // edi
  _BYTE v6[32]; // [rsp+20h] [rbp-68h] BYREF
  SIZE_T Length; // [rsp+40h] [rbp-48h]
  void *Source1; // [rsp+48h] [rbp-40h]

  v1 = 0;
  if ( (int)sub_140A32B54(a1, v6) < 0 )
    return 0LL;
  v3 = (unsigned int)Length;
  v4 = (const void **)&off_140A3DBA8;
  v5 = 0;
  while ( (_DWORD)v3 != *((_DWORD *)v4 - 2) || RtlCompareMemory(Source1, *v4, v3) != v3 )
  {
    ++v5;
    v4 += 3;
    if ( v5 >= 0x14 )
      return v1;
  }
  return LODWORD(qword_140A3DBB0[3 * v5]);
}
