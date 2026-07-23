/*
 * XREFs of IoSetIoPriorityHintIntoFileObject @ 0x140557D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402A3A60 @ 0x1402A3A60 (sub_1402A3A60.c)
 */

__int64 __fastcall IoSetIoPriorityHintIntoFileObject(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  if ( a2 >= 5 )
    return 3221225485LL;
  result = sub_1402A3A60(a1, &v4);
  if ( (int)result >= 0 )
    *(_DWORD *)(v4 + 80) = a2 + 1;
  return result;
}
