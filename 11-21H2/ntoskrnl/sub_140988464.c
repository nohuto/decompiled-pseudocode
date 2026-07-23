/*
 * XREFs of sub_140988464 @ 0x140988464
 * Callers:
 *     sub_1409882B4 @ 0x1409882B4 (sub_1409882B4.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140988464(__int64 a1)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  void *v6; // rcx

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
    ExFreePoolWithTag(v3, 0);
  }
  v5 = *(_QWORD **)(a1 + 16);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 16) = *v5;
    do
    {
      v6 = v5;
      v5 = *(_QWORD **)(a1 + 16);
      if ( v5 )
        *(_QWORD *)(a1 + 16) = *v5;
      ExFreePoolWithTag(v6, 0);
    }
    while ( v5 );
  }
  *(_WORD *)(a1 + 10) = 0;
}
