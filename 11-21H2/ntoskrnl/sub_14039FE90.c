/*
 * XREFs of sub_14039FE90 @ 0x14039FE90
 * Callers:
 *     sub_140521CF0 @ 0x140521CF0 (sub_140521CF0.c)
 * Callees:
 *     sub_140354420 @ 0x140354420 (sub_140354420.c)
 *     sub_14039FEEC @ 0x14039FEEC (sub_14039FEEC.c)
 */

__int64 sub_14039FE90()
{
  __int64 result; // rax
  unsigned __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  if ( qword_140C4E3E8 )
  {
    if ( byte_140C4C6A8 )
    {
      sub_140354420(qword_140C4E3E8, 3u, qword_140C4C690, 1, &v1);
      qword_140C4C6B0 = MEMORY[0xFFFFF78000000008];
      return sub_14039FEEC();
    }
  }
  return result;
}
