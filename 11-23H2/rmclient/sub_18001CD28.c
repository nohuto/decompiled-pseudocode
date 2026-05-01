/*
 * XREFs of sub_18001CD28 @ 0x18001CD28
 * Callers:
 *     sub_18001CE50 @ 0x18001CE50 (sub_18001CE50.c)
 *     sub_18001CFF4 @ 0x18001CFF4 (sub_18001CFF4.c)
 *     sub_18001EA7C @ 0x18001EA7C (sub_18001EA7C.c)
 * Callees:
 *     HamCloseActivity @ 0x180007EB0 (HamCloseActivity.c)
 */

CLIENT_CALL_RETURN __fastcall sub_18001CD28(__int64 a1)
{
  char v2; // di
  CLIENT_CALL_RETURN result; // rax

  RtlAcquireSRWLockExclusive(a1 + 8);
  if ( *(_DWORD *)(a1 + 40) == 3 )
  {
    v2 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = 3;
    v2 = 1;
  }
  result.Simple = RtlReleaseSRWLockExclusive(a1 + 8);
  if ( v2 )
  {
    RtlWakeAllConditionVariable(a1 + 16);
    return HamCloseActivity(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
  }
  return result;
}
