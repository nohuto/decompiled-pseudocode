/*
 * XREFs of sub_1C0075248 @ 0x1C0075248
 * Callers:
 *     sub_1C00AC730 @ 0x1C00AC730 (sub_1C00AC730.c)
 * Callees:
 *     sub_1C001D744 @ 0x1C001D744 (sub_1C001D744.c)
 *     sub_1C0022D90 @ 0x1C0022D90 (sub_1C0022D90.c)
 *     sub_1C00ACDF4 @ 0x1C00ACDF4 (sub_1C00ACDF4.c)
 */

bool __fastcall sub_1C0075248(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *v4; // r15
  _QWORD *v5; // rbx
  int v6; // esi
  int v7; // ebp
  bool v8; // r14

  v3 = *(_QWORD *)a1;
  v4 = (_QWORD *)(a1 + 120);
  v5 = *(_QWORD **)(a1 + 120);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  while ( v5 != v4 )
  {
    a2 = (__int64)(v5 - 2);
    a1 = *((unsigned int *)v5 + 18);
    if ( (_DWORD)a1 )
    {
      if ( (_DWORD)a1 == 1 )
      {
        sub_1C00ACDF4();
        ++v6;
        v8 = 1;
      }
    }
    else
    {
      v8 = sub_1C0022D90(*(_QWORD *)(a2 + 8));
      ++v7;
    }
    v5 = (_QWORD *)*v5;
  }
  if ( *(_BYTE *)(v3 + 4306) && (v6 || v7) && (byte_1C0093A06 & 2) != 0 )
    sub_1C001D744(a1, a2, a3, *(const wchar_t **)(v3 + 4656), *(_DWORD *)(v3 + 56), v3 + 5000, v6, v7);
  return v8;
}
