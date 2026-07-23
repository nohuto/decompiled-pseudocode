/*
 * XREFs of BgkpTryEnableConsole @ 0x140388448
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403ADD60 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140B9D198 (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( byte_140C6AB82 )
  {
    if ( qword_140C6AB68 )
      return _InterlockedExchange64((volatile __int64 *)&stru_140C0BD48, 0LL);
  }
  return result;
}
