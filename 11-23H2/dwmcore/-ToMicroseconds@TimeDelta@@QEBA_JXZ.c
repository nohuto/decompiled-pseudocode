/*
 * XREFs of ?ToMicroseconds@TimeDelta@@QEBA_JXZ @ 0x1800DE9D4
 * Callers:
 *     ?ToMilliseconds@TimeDelta@@QEBAHXZ @ 0x1800DE974 (-ToMilliseconds@TimeDelta@@QEBAHXZ.c)
 *     ?ToSeconds@TimeDelta@@QEBAMXZ @ 0x18023DF1C (-ToSeconds@TimeDelta@@QEBAMXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TimeDelta::ToMicroseconds(TimeDelta *this)
{
  __int64 result; // rax

  result = 0x7FFFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)this != 0x7FFFFFFFFFFFFFFFLL )
    return 1000000LL * *(_QWORD *)this / Time::s_luFreq.QuadPart;
  return result;
}
