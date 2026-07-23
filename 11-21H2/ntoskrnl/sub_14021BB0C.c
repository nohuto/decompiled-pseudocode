/*
 * XREFs of sub_14021BB0C @ 0x14021BB0C
 * Callers:
 *     PsTlsGetValue @ 0x1406940E0 (PsTlsGetValue.c)
 *     PsTlsSetValue @ 0x1406941F0 (PsTlsSetValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14021BB0C(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  int v4; // ecx
  __int64 v5; // r11
  __int64 v6; // rax

  if ( (unsigned int)(a2 - 1) <= 0xEE
    && (v3 = 0,
        _BitScanReverse((unsigned int *)&v4, a2 + 16),
        (v5 = *(&xmmword_140CF5E78 + (unsigned int)(v4 - 4) + 1)) != 0)
    && (v6 = v5
           + 8
           * (((unsigned int)(a2 + 16) ^ (unsigned __int64)(unsigned int)(1 << v4))
            + 4 * ((unsigned int)(a2 + 16) ^ (unsigned __int64)(unsigned int)(1 << v4))
            + 1)) != 0 )
  {
    *a3 = *(_QWORD *)(v6 + 16);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
