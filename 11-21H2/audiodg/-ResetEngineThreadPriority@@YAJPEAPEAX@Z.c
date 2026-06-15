/*
 * XREFs of ?ResetEngineThreadPriority@@YAJPEAPEAX@Z @ 0x14002CA08
 * Callers:
 *     ?SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@KPEAPEAX@Z @ 0x140028DFC (-SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@KPEAPEAX@Z.c)
 *     ?RemoveFromMMCSS@CAudioPump@@AEAAXXZ @ 0x14002C9C8 (-RemoveFromMMCSS@CAudioPump@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ResetEngineThreadPriority(void **a1)
{
  void *v2; // rcx
  signed int LastError; // eax
  unsigned int v5; // ebx
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
  v5 = LastError;
  if ( LastError > 0 )
    v5 = (unsigned __int16)LastError | 0x80070000;
  if ( (v5 & 0x80000000) != 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86A,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)v5);
  return v5;
}
