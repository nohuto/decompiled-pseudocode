/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x140882446
 * Callers:
 *     PpmMediaBufferingWorker @ 0x140224810 (PpmMediaBufferingWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 (*PpmPdcNotifyMediaBufferingUpdate())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C5AD88;
  if ( qword_140C5AD88 )
    return (__int64 (*)(void))qword_140C5AD88();
  return result;
}
