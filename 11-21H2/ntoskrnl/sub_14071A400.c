/*
 * XREFs of sub_14071A400 @ 0x14071A400
 * Callers:
 *     sub_1406CEBA0 @ 0x1406CEBA0 (sub_1406CEBA0.c)
 *     sub_14071C288 @ 0x14071C288 (sub_14071C288.c)
 *     sub_14079FD44 @ 0x14079FD44 (sub_14079FD44.c)
 *     sub_140910210 @ 0x140910210 (sub_140910210.c)
 * Callees:
 *     sub_1407190AC @ 0x1407190AC (sub_1407190AC.c)
 */

void __fastcall sub_14071A400(__int64 a1)
{
  _QWORD **v1; // rcx
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rdx

  v1 = (_QWORD **)(a1 + 32);
  v2 = *v1;
  if ( *v1 != v1 )
  {
    v3 = *v2;
    v4 = v2 - 4;
    if ( *(_QWORD **)(*v2 + 8LL) != v2
      || (v5 = (_QWORD *)v2[1], (_QWORD *)*v5 != v2)
      || (*v5 = v3, *(_QWORD *)(v3 + 8) = v5, v6 = v4[2], *(_QWORD **)(v6 + 8) != v4 + 2)
      || (v7 = (_QWORD *)v4[3], (_QWORD *)*v7 != v4 + 2) )
    {
      __fastfail(3u);
    }
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    sub_1407190AC(v4);
  }
}
