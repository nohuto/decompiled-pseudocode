/*
 * XREFs of sub_14099CB50 @ 0x14099CB50
 * Callers:
 *     <none>
 * Callees:
 *     ExQueryWnfStateData @ 0x1407EEE10 (ExQueryWnfStateData.c)
 *     sub_1407EF098 @ 0x1407EF098 (sub_1407EF098.c)
 *     sub_1407EF120 @ 0x1407EF120 (sub_1407EF120.c)
 *     sub_14099C794 @ 0x14099C794 (sub_14099C794.c)
 */

__int64 __fastcall sub_14099CB50(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v4[5]; // [rsp+24h] [rbp-14h] BYREF
  int v5; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( *a2 != 0x418B1E25A3BC0875LL )
    return 3221225659LL;
  v4[0] = 4;
  result = ExQueryWnfStateData(a1, &v5, &v3, v4);
  if ( (int)result >= 0 )
  {
    if ( v3 == 1 && byte_140C1F418 )
    {
      sub_1407EF098(0);
      if ( dword_140C1F36C )
        sub_14099C794(0, dword_140C1F36C);
      sub_1407EF120();
    }
    return 0LL;
  }
  return result;
}
