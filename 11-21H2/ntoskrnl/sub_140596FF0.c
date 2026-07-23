/*
 * XREFs of sub_140596FF0 @ 0x140596FF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140332670 @ 0x140332670 (sub_140332670.c)
 */

__int64 __fastcall sub_140596FF0(__int64 a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  int v7; // edi
  int v9; // ebx
  unsigned __int64 v10; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 24);
  v7 = a3;
  v12 = sub_140317A10(a3);
  if ( (*a2 & 2) != 0 )
  {
    v9 = 3;
LABEL_5:
    v10 = sub_140317A10((unsigned __int64)&v12);
    sub_140332670(v5, v7, a4, 48 * ((v10 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, a5, v9);
    return 0LL;
  }
  if ( (*a2 & 1) != 0 )
  {
    v9 = 5;
    goto LABEL_5;
  }
  return 0LL;
}
