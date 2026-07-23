/*
 * XREFs of sub_140A1FF3C @ 0x140A1FF3C
 * Callers:
 *     sub_140A1E7F0 @ 0x140A1E7F0 (sub_140A1E7F0.c)
 *     sub_140A1E890 @ 0x140A1E890 (sub_140A1E890.c)
 *     sub_140A1FE8C @ 0x140A1FE8C (sub_140A1FE8C.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140A1FF3C(_QWORD **a1)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rcx
  void *v6; // rcx

  v1 = *a1;
  while ( v1 != a1 )
  {
    v3 = (_QWORD *)*v1;
    v4 = v1;
    v1 = v3;
    if ( (_QWORD *)v3[1] != v4 || (v5 = (_QWORD *)v4[1], (_QWORD *)*v5 != v4) )
      __fastfail(3u);
    *v5 = v3;
    v3[1] = v5;
    if ( (v4[6] & 1) != 0 )
    {
      v6 = (void *)v4[5];
      if ( v6 )
        ExFreePoolWithTag(v6, 0x4B444342u);
    }
    ExFreePoolWithTag(v4, 0x4B444342u);
  }
}
