/*
 * XREFs of ?GetValue@CAudioSessionPropertyStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180034CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioSessionPropertyStore::GetValue(
        CAudioSessionPropertyStore *this,
        const struct _tagpropertykey *a2,
        PROPVARIANT *a3)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  __int64 v8; // rdx
  HRESULT v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    *(_OWORD *)a3 = 0LL;
    a3[2] = 0LL;
    v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    v8 = *((_QWORD *)this + 4);
    if ( !v8 )
      goto LABEL_8;
    while ( *(_DWORD *)(v8 + 16) != a2->pid
         || *(_QWORD *)v8 != *(_QWORD *)&a2->fmtid.Data1
         || *(_QWORD *)(v8 + 8) != *(_QWORD *)a2->fmtid.Data4 )
    {
      v8 = *(_QWORD *)(v8 + 48);
      if ( !v8 )
        goto LABEL_8;
    }
    v9 = PropVariantCopy(a3, (const PROPVARIANT *)(v8 + 24));
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D8,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)(unsigned int)v9);
      if ( v7 )
        LeaveCriticalSection(v7);
      return v10;
    }
    else
    {
LABEL_8:
      if ( v7 )
        LeaveCriticalSection(v7);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CC,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
