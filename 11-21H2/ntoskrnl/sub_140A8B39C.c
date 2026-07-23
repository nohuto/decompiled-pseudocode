/*
 * XREFs of sub_140A8B39C @ 0x140A8B39C
 * Callers:
 *     sub_1402DB738 @ 0x1402DB738 (sub_1402DB738.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

void __fastcall sub_140A8B39C(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // r9
  _QWORD **v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rdx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 && (dword_140C29FC0 & 0x800) != 0 )
    sub_140A8C924(0xC4u, 0xDAuLL, a2, v2, 0LL);
  v5 = (_QWORD **)(a1 + 16);
  v6 = *v5;
  if ( *v5 != v5 )
  {
    if ( (dword_140C29FC0 & 0x800) != 0 )
    {
      sub_140A8C924(0xC4u, 0xDDuLL, v6[3], a2, v6[2]);
      v6 = *v5;
    }
    do
    {
      v7 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      ExFreePoolWithTag(v6, 0);
      v6 = *v5;
    }
    while ( *v5 != v5 );
  }
}
