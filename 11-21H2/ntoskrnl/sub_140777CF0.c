/*
 * XREFs of sub_140777CF0 @ 0x140777CF0
 * Callers:
 *     sub_140775D50 @ 0x140775D50 (sub_140775D50.c)
 *     sub_1407762E4 @ 0x1407762E4 (sub_1407762E4.c)
 *     sub_1407792B4 @ 0x1407792B4 (sub_1407792B4.c)
 * Callees:
 *     sub_140776E5C @ 0x140776E5C (sub_140776E5C.c)
 *     sub_140777298 @ 0x140777298 (sub_140777298.c)
 *     sub_140948F60 @ 0x140948F60 (sub_140948F60.c)
 */

char __fastcall sub_140777CF0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 **v4; // rcx
  unsigned int v5; // eax

  v2 = a1 + 192;
  v4 = *(__int64 ***)(a1 + 200);
  if ( *v4 != (__int64 *)v2 )
    __fastfail(3u);
  *a2 = v2;
  a2[1] = (__int64)v4;
  *v4 = a2;
  *(_QWORD *)(v2 + 8) = a2;
  if ( ++*(_DWORD *)(a1 + 208) > 0x3E8u )
  {
    v5 = sub_140777298(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL));
    LODWORD(v2) = 2 * sub_140948F60(v5);
    if ( *(_DWORD *)(a1 + 208) > (unsigned int)v2 )
    {
      *(_DWORD *)(a1 + 216) |= 1u;
      LOBYTE(v2) = sub_140776E5C(a1);
    }
  }
  return v2;
}
