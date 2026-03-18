/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x1408A5B06
 * Callers:
 *     PpmMediaBufferingWorker @ 0x1403ACBF0 (PpmMediaBufferingWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 (*PpmPdcNotifyMediaBufferingUpdate())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C6AF58;
  if ( qword_140C6AF58 )
    return (__int64 (*)(void))qword_140C6AF58();
  return result;
}
