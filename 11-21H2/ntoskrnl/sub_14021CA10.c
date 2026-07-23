/*
 * XREFs of sub_14021CA10 @ 0x14021CA10
 * Callers:
 *     sub_1402B1170 @ 0x1402B1170 (sub_1402B1170.c)
 *     sub_14032BD70 @ 0x14032BD70 (sub_14032BD70.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14039B280 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     sub_14021CE94 @ 0x14021CE94 (sub_14021CE94.c)
 */

_QWORD *__fastcall sub_14021CA10(__int64 a1)
{
  __int64 v1; // r9
  _QWORD *result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    result = (_QWORD *)(v1 + 16);
    while ( *result )
    {
      result += 2;
      if ( result == (_QWORD *)(v1 + 16LL * *(unsigned int *)(v1 + 8)) )
        goto LABEL_6;
    }
    *((_BYTE *)KeGetCurrentThread() + 1120) = ((__int64)result - v1) >> 4;
  }
  else
  {
LABEL_6:
    sub_14021CE94();
    return 0LL;
  }
  return result;
}
