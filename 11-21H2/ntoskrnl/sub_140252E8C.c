/*
 * XREFs of sub_140252E8C @ 0x140252E8C
 * Callers:
 *     sub_140246604 @ 0x140246604 (sub_140246604.c)
 *     sub_140252C54 @ 0x140252C54 (sub_140252C54.c)
 *     sub_140252CF0 @ 0x140252CF0 (sub_140252CF0.c)
 *     sub_140252E20 @ 0x140252E20 (sub_140252E20.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140252E8C(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // rcx
  _QWORD *v3; // r8
  _QWORD *v4; // rax
  _QWORD *v5; // r9
  _QWORD *v6; // rax

  v1 = (_QWORD *)(a1 + 120);
  v2 = *(_QWORD **)(a1 + 120);
  while ( v2 != v1 )
  {
    v3 = (_QWORD *)*v2;
    v4 = v2;
    v5 = v2;
    v2 = v3;
    *(v4 - 1) = 0LL;
    if ( (_QWORD *)v3[1] != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v5) )
      __fastfail(3u);
    *v6 = v3;
    v3[1] = v6;
  }
}
