/*
 * XREFs of ?SetValue@CAudioSessionPropertyStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800373F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002B0C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionPropertyStore::SetValue(
        CAudioSessionPropertyStore *this,
        const struct _tagpropertykey *a2,
        const PROPVARIANT *a3)
{
  int v6; // ecx
  GUID **v8; // rsi
  char *v9; // rdi
  __int64 v10; // rcx
  GUID *v11; // rax
  GUID *v12; // rdi
  HRESULT v13; // eax
  unsigned int v14; // r14d
  HRESULT v15; // eax
  unsigned int v16; // esi
  __int64 v17; // rax
  PROPVARIANT pvarDest[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *(_WORD *)a3 > 0x1Fu )
  {
    if ( *(_WORD *)a3 < 0x40u || *(_WORD *)a3 > 0x41u && *(_WORD *)a3 != 70 && *(_WORD *)a3 != 8196 )
      goto LABEL_4;
  }
  else if ( *(_WORD *)a3 <= 0x1Du )
  {
    v6 = 1057026562;
    if ( _bittest(&v6, *(unsigned __int16 *)a3) )
    {
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1EC,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)0x8007065ELL);
      return 2147944030LL;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v8 = (GUID **)((char *)this + 32);
  v9 = (char *)this + 32;
  v10 = *((_QWORD *)this + 4);
  if ( !v10 )
  {
LABEL_14:
    v11 = (GUID *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( !v11 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20B,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)0x8007000ELL);
      if ( this != (CAudioSessionPropertyStore *)-48LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
      return 2147942414LL;
    }
    *(_OWORD *)v11[1].Data4 = 0LL;
    *(_QWORD *)v11[2].Data4 = 0LL;
    v13 = PropVariantCopy((PROPVARIANT *)v11[1].Data4, a3);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20F,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)(unsigned int)v13);
      operator delete(v12);
      if ( this != (CAudioSessionPropertyStore *)-48LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
      return v14;
    }
    while ( *v8 )
      v8 = (GUID **)&(*v8)[3];
    *(_QWORD *)&v12[3].Data1 = 0LL;
    v12[1].Data1 = a2->pid;
    *v12 = a2->fmtid;
    *v8 = v12;
LABEL_27:
    *((_BYTE *)this + 88) = 1;
    if ( this != (CAudioSessionPropertyStore *)-48LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    return 0LL;
  }
  while ( *(_DWORD *)(v10 + 16) != a2->pid
       || *(_QWORD *)v10 != *(_QWORD *)&a2->fmtid.Data1
       || *(_QWORD *)(v10 + 8) != *(_QWORD *)a2->fmtid.Data4 )
  {
    v9 = (char *)(v10 + 48);
    v10 = *(_QWORD *)(v10 + 48);
    if ( !v10 )
      goto LABEL_14;
  }
  *(_OWORD *)pvarDest = 0LL;
  v19 = 0LL;
  v15 = PropVariantCopy(pvarDest, a3);
  v16 = v15;
  if ( v15 >= 0 )
  {
    PropVariantClear((PROPVARIANT *)(*(_QWORD *)v9 + 24LL));
    v17 = *(_QWORD *)v9;
    *(_OWORD *)(v17 + 24) = *(_OWORD *)pvarDest;
    *(_QWORD *)(v17 + 40) = v19;
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1FA,
    (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
    (const char *)(unsigned int)v15);
  if ( this != (CAudioSessionPropertyStore *)-48LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  return v16;
}
