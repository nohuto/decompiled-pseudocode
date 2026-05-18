/*
 * XREFs of sub_1800A1464 @ 0x1800A1464
 * Callers:
 *     sub_1800A0E94 @ 0x1800A0E94 (sub_1800A0E94.c)
 *     sub_1800A101C @ 0x1800A101C (sub_1800A101C.c)
 *     sub_1800A1248 @ 0x1800A1248 (sub_1800A1248.c)
 *     sub_1800A130C @ 0x1800A130C (sub_1800A130C.c)
 *     sub_1800A14B0 @ 0x1800A14B0 (sub_1800A14B0.c)
 *     sub_1800A1580 @ 0x1800A1580 (sub_1800A1580.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800A1464(__int64 a1, __int64 a2, __int64 a3)
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
