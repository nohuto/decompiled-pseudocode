/*
 * XREFs of sub_140AABB44 @ 0x140AABB44
 * Callers:
 *     sub_140AAB07C @ 0x140AAB07C (sub_140AAB07C.c)
 *     sub_140AABA70 @ 0x140AABA70 (sub_140AABA70.c)
 *     sub_140AAD1C4 @ 0x140AAD1C4 (sub_140AAD1C4.c)
 *     sub_140AAEAF4 @ 0x140AAEAF4 (sub_140AAEAF4.c)
 * Callees:
 *     sub_140AAE514 @ 0x140AAE514 (sub_140AAE514.c)
 */

__int64 *sub_140AABB44()
{
  __int64 *result; // rax
  __int64 v1; // rcx

  while ( 1 )
  {
    result = (__int64 *)qword_140C0DE60;
    v1 = *(_QWORD *)qword_140C0DE60;
    if ( *(__int64 **)(qword_140C0DE60 + 8) != &qword_140C0DE60 || *(_QWORD *)(v1 + 8) != qword_140C0DE60 )
      __fastfail(3u);
    qword_140C0DE60 = *(_QWORD *)qword_140C0DE60;
    *(_QWORD *)(v1 + 8) = &qword_140C0DE60;
    if ( result == &qword_140C0DE60 )
      break;
    sub_140AAE514(result);
  }
  dword_140C0DE94 = 0;
  return result;
}
