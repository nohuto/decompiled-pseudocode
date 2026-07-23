/*
 * XREFs of sub_14064A67C @ 0x14064A67C
 * Callers:
 *     sub_140204E2C @ 0x140204E2C (sub_140204E2C.c)
 * Callees:
 *     sub_14028AC10 @ 0x14028AC10 (sub_14028AC10.c)
 *     sub_1403767E0 @ 0x1403767E0 (sub_1403767E0.c)
 *     sub_14064A5F8 @ 0x14064A5F8 (sub_14064A5F8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

bool __fastcall sub_14064A67C(_DWORD *a1, __int64 a2)
{
  char v2; // bl
  __int64 v4; // rdx
  int v5; // eax
  _QWORD *v6; // r14
  _QWORD *v7; // rsi
  int v8; // eax

  v2 = 1;
  sub_1403767E0(a1, (__int64 *)a2, 0, 1);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 4) != 0 )
  {
    if ( (v5 & 1) == 0 )
    {
      sub_14028AC10(v4, 0);
      return v2;
    }
    *(_DWORD *)(v4 + 56) = v5 & 0xFFFFFFFB;
    sub_14028AC10(v4, 1);
  }
  v6 = (_QWORD *)(a2 + 96);
  while ( 1 )
  {
    v7 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 == v6 )
      break;
    sub_14064A5F8((_DWORD *)a2, v7 - 2, 0);
    v8 = *((_DWORD *)v7 + 4);
    if ( (v8 & 4) != 0 )
    {
      --*(_DWORD *)(a2 + 64);
      *((_DWORD *)v7 + 4) &= ~4u;
      v8 = *((_DWORD *)v7 + 4);
    }
    if ( (v8 & 1) == 0 )
      ExFreePoolWithTag(v7 - 2, 0);
  }
  return (*(_BYTE *)(a2 + 56) & 1) == 0;
}
