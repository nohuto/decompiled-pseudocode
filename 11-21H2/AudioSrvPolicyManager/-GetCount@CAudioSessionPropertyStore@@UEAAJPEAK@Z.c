/*
 * XREFs of ?GetCount@CAudioSessionPropertyStore@@UEAAJPEAK@Z @ 0x180034830
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionPropertyStore::GetCount(CAudioSessionPropertyStore *this, unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v6; // edx
  __int64 i; // rcx
  unsigned int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    v6 = 0;
    for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 48) )
    {
      v8 = v6 + 1;
      if ( !*(_WORD *)(i + 24) )
        v8 = v6;
      v6 = v8;
    }
    *a2 = v6;
    if ( v5 )
      LeaveCriticalSection(v5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17A,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
