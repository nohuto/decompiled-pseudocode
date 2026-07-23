/*
 * XREFs of sub_140597390 @ 0x140597390
 * Callers:
 *     <none>
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1405972B4 @ 0x1405972B4 (sub_1405972B4.c)
 *     sub_140597478 @ 0x140597478 (sub_140597478.c)
 */

__int64 __fastcall sub_140597390(__int64 a1, _QWORD *a2, _BYTE *a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v11; // rbx
  char v12; // bl
  unsigned __int64 v13; // rax

  v5 = a5;
  if ( (unsigned int)sub_140597478(*(_QWORD *)(a1 + 24), a5) )
    return 1LL;
  v11 = sub_140317A10((unsigned __int64)a3);
  a5 = v11;
  if ( (*a2 & 2) != 0 )
    v12 = (v11 & 0x20) != 0;
  else
    v12 = (*a2 & 1) != 0;
  v13 = sub_140317A10((unsigned __int64)&a5);
  return sub_1405972B4(a1, a3, a4, 48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, v5, v12, 0LL);
}
