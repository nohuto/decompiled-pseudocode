/*
 * XREFs of sub_1C00A993C @ 0x1C00A993C
 * Callers:
 *     StorPortInitialize @ 0x1C00428F0 (StorPortInitialize.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 */

__int64 __fastcall sub_1C00A993C(__int64 a1, unsigned int *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax

  v4 = (_QWORD *)sub_1C0007CF4(64LL, 224LL, 1229480274LL, *(_QWORD *)(a1 + 8));
  v5 = v4;
  if ( !v4 )
    return 3221225495LL;
  memmove(v4, a2, *a2);
  v7 = (_QWORD *)(a1 + 96);
  v8 = *(_QWORD *)(a1 + 96);
  v9 = v5 + 26;
  if ( *(_QWORD *)(v8 + 8) != a1 + 96 )
    __fastfail(3u);
  *v9 = v8;
  v5[27] = v7;
  *(_QWORD *)(v8 + 8) = v9;
  *v7 = v9;
  return 0LL;
}
