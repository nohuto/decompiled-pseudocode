/*
 * XREFs of ?RemoveRelatedProcess@ApplicationSpecificEndpointInfo@@UEAAJK@Z @ 0x18003CD80
 * Callers:
 *     <none>
 * Callees:
 *     memmove_0 @ 0x18004444F (memmove_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationSpecificEndpointInfo::RemoveRelatedProcess(ApplicationSpecificEndpointInfo *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  _DWORD *v5; // r8
  _DWORD *i; // rdi
  _DWORD *j; // rax
  _DWORD *v8; // rdx

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v5 = (_DWORD *)*((_QWORD *)this + 8);
  for ( i = (_DWORD *)*((_QWORD *)this + 7); i != v5 && a2 != *i; ++i )
    ;
  if ( i != v5 )
  {
    for ( j = i + 1; j != v5; ++j )
    {
      if ( a2 != *j )
        *i++ = *j;
    }
  }
  v8 = (_DWORD *)*((_QWORD *)this + 8);
  if ( i != v8 )
  {
    memmove_0(i, v8, 0LL);
    *((_QWORD *)this + 8) = i;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
