/*
 * XREFs of sub_1800B33A4 @ 0x1800B33A4
 * Callers:
 *     sub_1800B2D54 @ 0x1800B2D54 (sub_1800B2D54.c)
 *     sub_1800B2EE0 @ 0x1800B2EE0 (sub_1800B2EE0.c)
 *     sub_1800B3180 @ 0x1800B3180 (sub_1800B3180.c)
 *     sub_1800B3248 @ 0x1800B3248 (sub_1800B3248.c)
 *     sub_1800B33F0 @ 0x1800B33F0 (sub_1800B33F0.c)
 *     sub_1800B3504 @ 0x1800B3504 (sub_1800B3504.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B33A4(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rcx
  _QWORD *v5; // rax

  v3 = (_QWORD *)(a1 + 184);
  v4 = (_QWORD *)(a1 + 144);
  if ( v4 == v3 )
  {
LABEL_5:
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_BYTE *)a2 = 0;
  }
  else
  {
    v5 = v4;
    while ( *v5 != a3 )
    {
      if ( ++v5 == v3 )
        goto LABEL_5;
    }
    *(_BYTE *)a2 = 1;
    *(_QWORD *)(a2 + 8) = (unsigned int)(v5 - v4);
  }
  return a2;
}
