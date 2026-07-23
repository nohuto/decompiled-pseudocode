/*
 * XREFs of sub_1403924A0 @ 0x1403924A0
 * Callers:
 *     sub_1403923A4 @ 0x1403923A4 (sub_1403923A4.c)
 *     sub_1405F903C @ 0x1405F903C (sub_1405F903C.c)
 *     sub_1405F94CC @ 0x1405F94CC (sub_1405F94CC.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_1403924A0(_DWORD *a1, __int64 a2)
{
  int v3; // r11d
  __int64 v4; // r8
  unsigned int v5; // ebx
  int v6; // edi
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 i; // r8
  _DWORD *v10; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx

  v3 = a1[114];
  v4 = (unsigned int)(*(_DWORD *)(a2 + 4) >> v3);
  v5 = a1[115];
  v6 = a1[116];
  v7 = (unsigned int)a1[118];
  _BitScanReverse((unsigned int *)&v8, v4);
  for ( i = v6 * (*(_DWORD *)(a2 + 4) & v5)
          + *(_QWORD *)(*(_QWORD *)&a1[2 * v8 + 48] + 16 * (v4 ^ (unsigned int)(1 << v8)));
        ;
        i = v6 * (v10[1] & v5) + *(_QWORD *)(*(_QWORD *)&a1[2 * v13 + 48] + 16 * (v12 ^ (unsigned int)(1 << v13))) )
  {
    v10 = (_DWORD *)(v7 + i);
    if ( *v10 != -1 )
      break;
    v12 = (unsigned int)(v10[1] >> v3);
    _BitScanReverse((unsigned int *)&v13, v12);
  }
  return v10;
}
