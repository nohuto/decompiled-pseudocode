/*
 * XREFs of ?GetAt@CAudioSessionPropertyStore@@UEAAJKPEAU_tagpropertykey@@@Z @ 0x180034710
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioSessionPropertyStore::GetAt(
        CAudioSessionPropertyStore *this,
        int a2,
        struct _tagpropertykey *a3)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  __int64 v8; // rcx
  int v9; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    a3->fmtid = 0LL;
    a3->pid = 0;
    v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    v8 = *((_QWORD *)this + 4);
    v9 = 0;
    if ( !v8 )
      goto LABEL_12;
    do
    {
      if ( *(_WORD *)(v8 + 24) )
      {
        if ( v9 == a2 )
          break;
        ++v9;
      }
      v8 = *(_QWORD *)(v8 + 48);
    }
    while ( v8 );
    if ( v8 )
    {
      a3->fmtid = *(GUID *)v8;
      a3->pid = *(_DWORD *)(v8 + 16);
      if ( v7 )
        LeaveCriticalSection(v7);
      return 0LL;
    }
    else
    {
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B9,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)0x80070057LL);
      if ( v7 )
        LeaveCriticalSection(v7);
      return 2147942487LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19F,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
