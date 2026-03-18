/*
 * XREFs of NtMITDispatchCompletion @ 0x1C0057A90
 * Callers:
 *     <none>
 * Callees:
 *     UserDispatchMITCompletion @ 0x1C00579A4 (UserDispatchMITCompletion.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0057EC8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 */

__int64 __fastcall NtMITDispatchCompletion(int a1, unsigned int a2)
{
  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    UserDispatchMITCompletion(a1, a2);
  else
    UserSetLastError(5LL);
  return 0LL;
}
