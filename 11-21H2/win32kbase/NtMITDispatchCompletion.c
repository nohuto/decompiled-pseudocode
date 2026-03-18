/*
 * XREFs of NtMITDispatchCompletion @ 0x1C0037BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     UserDispatchMITCompletion @ 0x1C0037D4C (UserDispatchMITCompletion.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 */

__int64 __fastcall NtMITDispatchCompletion(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  if ( CInputThreadBase::IsInputThread(gpInputThread) )
    UserDispatchMITCompletion(a1, a2);
  else
    UserSetLastError(5LL, v4, v5);
  return 0LL;
}
