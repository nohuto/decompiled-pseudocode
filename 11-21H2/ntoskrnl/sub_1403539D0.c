/*
 * XREFs of sub_1403539D0 @ 0x1403539D0
 * Callers:
 *     sub_140353230 @ 0x140353230 (sub_140353230.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403539D0(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int8 *v3; // rdx
  unsigned int v4; // eax
  int v5; // ecx

  v1 = *(_QWORD *)(a1 + 16);
  if ( (v1 & 1) != 0
    && (v3 = (unsigned __int8 *)(v1 & 0xFFFFFFFFFFFFFFFEuLL), v4 = *v3, (unsigned __int8)v4 <= 8u)
    && (v5 = 404, _bittest(&v5, v4)) )
  {
    return *((unsigned int *)v3 + 10);
  }
  else
  {
    return 0LL;
  }
}
