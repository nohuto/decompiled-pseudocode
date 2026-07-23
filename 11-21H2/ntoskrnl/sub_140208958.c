/*
 * XREFs of sub_140208958 @ 0x140208958
 * Callers:
 *     sub_14067BE48 @ 0x14067BE48 (sub_14067BE48.c)
 *     sub_140681670 @ 0x140681670 (sub_140681670.c)
 * Callees:
 *     sub_140369634 @ 0x140369634 (sub_140369634.c)
 */

__int64 sub_140208958()
{
  __int64 result; // rax
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  result = (unsigned int)--dword_140C49410;
  if ( !dword_140C49410 )
  {
    _InterlockedOr(v1, 0);
    if ( qword_140C49418 )
      return sub_140369634(&qword_140C49418, 0LL, 0LL);
  }
  return result;
}
