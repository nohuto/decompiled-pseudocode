/*
 * XREFs of ?SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@KPEAPEAX@Z @ 0x1400235A8
 * Callers:
 *     ?AttachToMMCSS@CAudioPump@@AEAAXXZ @ 0x140023474 (-AttachToMMCSS@CAudioPump@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetEngineThreadPriority@@YAJPEAPEAX@Z @ 0x140073DC0 (-ResetEngineThreadPriority@@YAJPEAPEAX@Z.c)
 */

__int64 __fastcall SetEngineThreadPriority(__int64 a1, DWORD a2, _QWORD *a3)
{
  HANDLE v4; // rax
  void *v5; // rbx
  BOOL v6; // eax
  signed int LastError; // eax
  signed int v9; // ebx
  __int64 v10; // rdx
  signed int v11; // eax
  HANDLE CurrentThread; // rax
  signed int v13; // eax
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD v16; // [rsp+30h] [rbp+8h] BYREF
  ULONG SystemResponsivenessValue; // [rsp+38h] [rbp+10h] BYREF
  void *v18; // [rsp+48h] [rbp+20h] BYREF

  v16 = a2;
  v4 = AvSetMmThreadCharacteristicsW(L"Audio", &v16);
  v18 = v4;
  v5 = v4;
  if ( !v4 )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    if ( v9 >= 0 )
      return (unsigned int)v9;
    v10 = 2207LL;
    goto LABEL_11;
  }
  if ( !AvQuerySystemResponsiveness(v4, &SystemResponsivenessValue) )
  {
    v11 = GetLastError();
    v9 = v11;
    if ( v11 > 0 )
      v9 = (unsigned __int16)v11 | 0x80070000;
    if ( v9 >= 0 )
      return (unsigned int)v9;
    v10 = 2214LL;
    goto LABEL_11;
  }
  if ( SystemResponsivenessValue > 0x32 )
  {
    v9 = ResetEngineThreadPriority(&v18);
    if ( v9 < 0 )
    {
      v10 = 2220LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
        (const char *)(unsigned int)v9,
        v14);
      return (unsigned int)v9;
    }
    CurrentThread = GetCurrentThread();
    v6 = SetThreadPriority(CurrentThread, 15);
    v5 = v18;
  }
  else
  {
    v6 = AvSetMmThreadPriority(v5, AVRT_PRIORITY_HIGH);
    *a3 = v5;
  }
  if ( v6 )
  {
    *a3 = v5;
    return 0LL;
  }
  v13 = GetLastError();
  v9 = v13;
  if ( v13 > 0 )
    v9 = (unsigned __int16)v13 | 0x80070000;
  if ( v9 < 0 )
  {
    v10 = 2232LL;
    goto LABEL_11;
  }
  return (unsigned int)v9;
}
