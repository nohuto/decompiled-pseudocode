/*
 * XREFs of ?PopulateAudioHistoryForStream@CStreamInstance@@UEAAJ_J00H@Z @ 0x140077B20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateAudioHistoryForStreamInternal@@YAJPEAUIStreamInstanceInternal@@_J11H@Z @ 0x140068514 (-PopulateAudioHistoryForStreamInternal@@YAJPEAUIStreamInstanceInternal@@_J11H@Z.c)
 */

__int64 __fastcall CStreamInstance::PopulateAudioHistoryForStream(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // r14
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = this + 5;
  EnterCriticalSection(this + 5);
  v10 = PopulateAudioHistoryForStreamInternal((struct IStreamInstanceInternal *)&this[-1].SpinCount, a2, a3, a4, a5);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( v5 )
      LeaveCriticalSection(v5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D1,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)(unsigned int)v10);
    if ( v5 )
      LeaveCriticalSection(v5);
    return v11;
  }
}
