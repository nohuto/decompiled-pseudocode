/*
 * XREFs of sub_14098F3B8 @ 0x14098F3B8
 * Callers:
 *     sub_14098F2D0 @ 0x14098F2D0 (sub_14098F2D0.c)
 *     sub_140A51888 @ 0x140A51888 (sub_140A51888.c)
 * Callees:
 *     sub_14098F2F8 @ 0x14098F2F8 (sub_14098F2F8.c)
 */

void __fastcall sub_14098F3B8(__int64 a1)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rax

  v2 = (_QWORD **)(a1 + 24);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    sub_14098F2F8(v3);
    --*(_DWORD *)(a1 + 40);
  }
}
