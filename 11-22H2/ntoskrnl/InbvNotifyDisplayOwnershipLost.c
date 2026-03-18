/*
 * XREFs of InbvNotifyDisplayOwnershipLost @ 0x14054E6A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 (*InbvNotifyDisplayOwnershipLost())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C6AC58;
  if ( qword_140C6AC58 )
  {
    result = *(__int64 (**)(void))qword_140C6AC58;
    if ( *(_QWORD *)qword_140C6AC58 )
      return (__int64 (*)(void))result();
  }
  return result;
}
