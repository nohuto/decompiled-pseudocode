/*
 * XREFs of ?GetChannelCount@CVADServer@@UEAAJPEAI@Z @ 0x180051670
 * Callers:
 *     AudioServerGetChannelCount @ 0x1800515A0 (AudioServerGetChannelCount.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVADServer::GetChannelCount(CVADServer *this, unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  v5 = *((_QWORD *)this + 21);
  if ( v5 )
  {
    if ( *((_DWORD *)this + 40) )
    {
      *a2 = *(_DWORD *)(v5 + 96);
      if ( v2 )
        LeaveCriticalSection(v2);
      return 0LL;
    }
    v7 = 2093LL;
  }
  else
  {
    v7 = 2092LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)0x88890001LL);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 2290679809LL;
}
