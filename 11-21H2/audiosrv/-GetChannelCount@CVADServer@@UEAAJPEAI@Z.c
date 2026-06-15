/*
 * XREFs of ?GetChannelCount@CVADServer@@UEAAJPEAI@Z @ 0x18000E1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVADServer::GetChannelCount(CVADServer *this, unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  v5 = *((_QWORD *)this + 24);
  if ( v5 )
  {
    if ( *((_DWORD *)this + 46) )
    {
      *a2 = *(_DWORD *)(v5 + 84);
      v6 = 0;
      goto LABEL_4;
    }
    v8 = 2176LL;
  }
  else
  {
    v8 = 2175LL;
  }
  v6 = -2004287487;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)0x88890001LL,
    v9);
LABEL_4:
  if ( v4 )
    LeaveCriticalSection(v4);
  return v6;
}
