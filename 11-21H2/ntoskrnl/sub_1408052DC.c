/*
 * XREFs of sub_1408052DC @ 0x1408052DC
 * Callers:
 *     sub_140A519DC @ 0x140A519DC (sub_140A519DC.c)
 * Callees:
 *     sub_14029394C @ 0x14029394C (sub_14029394C.c)
 *     sub_14038B488 @ 0x14038B488 (sub_14038B488.c)
 */

unsigned __int64 sub_1408052DC()
{
  unsigned __int64 result; // rax
  unsigned int v1; // [rsp+40h] [rbp+8h] BYREF

  result = 0LL;
  v1 = 0;
  if ( dword_140C227E0 == 4 )
  {
    if ( !byte_140C223A8 )
    {
      sub_14038B488(0LL, 0LL, 0LL, 0LL, (__int64)&v1, 0LL);
      return v1;
    }
  }
  else if ( !byte_140C223A8 )
  {
    return result;
  }
  return sub_14029394C(qword_140C22E28, qword_140D069F8, 0x3E8uLL);
}
