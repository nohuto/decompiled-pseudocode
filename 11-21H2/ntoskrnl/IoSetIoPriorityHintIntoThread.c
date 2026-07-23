/*
 * XREFs of IoSetIoPriorityHintIntoThread @ 0x14028F250
 * Callers:
 *     <none>
 * Callees:
 *     sub_14028F698 @ 0x14028F698 (sub_14028F698.c)
 */

__int64 __fastcall IoSetIoPriorityHintIntoThread(__int64 a1, __int64 a2)
{
  if ( (unsigned int)a2 >= 5 )
    return 3221225485LL;
  sub_14028F698(a1, a2);
  return 0LL;
}
