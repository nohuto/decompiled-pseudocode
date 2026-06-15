/*
 * XREFs of ?ResetEngineThreadPriority@@YAJPEAPEAX@Z @ 0x140073DC0
 * Callers:
 *     ?SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@KPEAPEAX@Z @ 0x1400235A8 (-SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@KPEAPEAX@Z.c)
 *     ?RemoveFromMMCSS@CAudioPump@@AEAAXXZ @ 0x140073D80 (-RemoveFromMMCSS@CAudioPump@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ResetEngineThreadPriority(void **a1)
{
  void *v2; // rcx
  signed int LastError; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  if ( !v2 )
    return 0LL;
  if ( AvRevertMmThreadCharacteristics(v2) )
  {
    *a1 = 0LL;
    return 0LL;
  }
  LastError = GetLastError();
  v4 = LastError;
  if ( LastError > 0 )
    v4 = (unsigned __int16)LastError | 0x80070000;
  if ( (v4 & 0x80000000) != 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86A,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)v4);
  return v4;
}
