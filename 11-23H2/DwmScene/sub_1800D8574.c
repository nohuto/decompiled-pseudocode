/*
 * XREFs of sub_1800D8574 @ 0x1800D8574
 * Callers:
 *     sub_1800D875C @ 0x1800D875C (sub_1800D875C.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

_QWORD *__fastcall sub_1800D8574(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = *a2;
  if ( *a2 )
  {
    v5 = sub_18001C190();
    if ( v5 )
    {
      *(_DWORD *)(v5 + 8) = 1;
      *(_DWORD *)(v5 + 12) = 1;
      *(_QWORD *)v5 = &std::_Ref_count_resource<unsigned char *,std::default_delete<unsigned char [0]>>::`vftable';
      *(_QWORD *)(v5 + 16) = v4;
    }
    *a1 = v4;
    a1[1] = v5;
    *a2 = 0LL;
  }
  return a1;
}
