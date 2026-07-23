/*
 * XREFs of sub_140A94248 @ 0x140A94248
 * Callers:
 *     sub_140A7C248 @ 0x140A7C248 (sub_140A7C248.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140A94248(_QWORD **a1, __int64 a2)
{
  _QWORD *v2; // rbx
  void *v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rdx

  v2 = *a1;
  while ( v2 != a1 )
  {
    v5 = v2;
    v6 = (_QWORD *)*v2;
    if ( v2[2] == a2 )
    {
      if ( (_QWORD *)v6[1] != v2 || (v7 = (_QWORD *)v2[1], (_QWORD *)*v7 != v2) )
        __fastfail(3u);
      *v7 = v6;
      v6[1] = v7;
      v2 = (_QWORD *)*v2;
      ExFreePoolWithTag(v5, 0);
      --dword_140C1AFA8;
    }
    else
    {
      v2 = (_QWORD *)*v2;
    }
  }
}
