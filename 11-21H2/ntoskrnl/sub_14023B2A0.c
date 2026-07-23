/*
 * XREFs of sub_14023B2A0 @ 0x14023B2A0
 * Callers:
 *     sub_140342260 @ 0x140342260 (sub_140342260.c)
 * Callees:
 *     sub_140345AA0 @ 0x140345AA0 (sub_140345AA0.c)
 */

char __fastcall sub_14023B2A0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v6; // rdi
  unsigned int v7; // edx
  unsigned int v8; // ecx

  v3 = *(_QWORD *)(a1 + 34912) & ~*(_QWORD *)(a1 + 200);
  v4 = v3 & *a2;
  if ( !v4
    || (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 40LL) & v4) != v3
    || (*(_BYTE *)(a1 + 13244) & 1) != 0
    || *(_DWORD *)(a1 + 32472) )
  {
    return 0;
  }
  v6 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(a1 + 32) )
  {
    _disable();
    sub_140345AA0(a1, *(_QWORD *)(a1 + 8), 0LL);
    _enable();
  }
  v7 = *(_DWORD *)(v6 + 80);
  v8 = *(_DWORD *)(v6 + 84);
  if ( v7 < v8 && v8 - v7 >= dword_140D06B94 )
    return 0;
  *a2 &= v3;
  return 1;
}
