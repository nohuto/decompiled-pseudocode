/*
 * XREFs of ?SetValue@CAudioSessionPropertyStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x18003E990
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016C6C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_ptr@Upropstoreinfo_tag@@U?$default_delete@Upropstoreinfo_tag@@@std@@@std@@QEAA@XZ @ 0x18003BAB4 (--1-$unique_ptr@Upropstoreinfo_tag@@U-$default_delete@Upropstoreinfo_tag@@@std@@@std@@QEAA@XZ.c)
 *     ?IsValidProperty@CAudioSessionPropertyStore@@AEAA_NPEBUtagPROPVARIANT@@@Z @ 0x18003D158 (-IsValidProperty@CAudioSessionPropertyStore@@AEAA_NPEBUtagPROPVARIANT@@@Z.c)
 */

__int64 __fastcall CAudioSessionPropertyStore::SetValue(
        CAudioSessionPropertyStore *this,
        const struct _tagpropertykey *a2,
        const PROPVARIANT *a3)
{
  unsigned int v6; // ebx
  PROPVARIANT **v7; // rdi
  char *i; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  HRESULT v11; // eax
  __int64 v12; // rax
  PROPVARIANT *v13; // rax
  PROPVARIANT *v14; // rbx
  HRESULT v15; // eax
  HRESULT v16; // esi
  DWORD pid; // eax
  PROPVARIANT pvarDest[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  PROPVARIANT *v22; // [rsp+70h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+88h] [rbp+48h] BYREF

  if ( CAudioSessionPropertyStore::IsValidProperty(this, (const struct tagPROPVARIANT *)a3) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    v7 = (PROPVARIANT **)((char *)this + 32);
    v23 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
    for ( i = (char *)this + 32; ; i = (char *)(v9 + 48) )
    {
      v9 = *(_QWORD *)i;
      if ( !*(_QWORD *)i )
        break;
      if ( *(_DWORD *)(v9 + 16) == a2->pid )
      {
        v10 = *(_QWORD *)v9 - *(_QWORD *)&a2->fmtid.Data1;
        if ( *(_QWORD *)v9 == *(_QWORD *)&a2->fmtid.Data1 )
          v10 = *(_QWORD *)(v9 + 8) - *(_QWORD *)a2->fmtid.Data4;
        if ( !v10 )
        {
          *(_OWORD *)pvarDest = 0LL;
          v20 = 0LL;
          v11 = PropVariantCopy(pvarDest, a3);
          v6 = v11;
          if ( v11 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1FA,
              (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
              (const char *)(unsigned int)v11);
            goto LABEL_21;
          }
          PropVariantClear((PROPVARIANT *)(*(_QWORD *)i + 24LL));
          v12 = *(_QWORD *)i;
          *(_OWORD *)(v12 + 24) = *(_OWORD *)pvarDest;
          *(_QWORD *)(v12 + 40) = v20;
LABEL_19:
          *((_BYTE *)this + 88) = 1;
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v23);
          return 0LL;
        }
      }
    }
    v13 = (PROPVARIANT *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v22 = v13;
    v14 = v13;
    if ( v13 )
    {
      *(_OWORD *)(v13 + 3) = 0LL;
      v13[5] = 0LL;
      v15 = PropVariantCopy(v13 + 3, a3);
      v16 = v15;
      if ( v15 >= 0 )
      {
        while ( *v7 )
          v7 = (PROPVARIANT **)(*v7 + 6);
        v14[6] = 0LL;
        pid = a2->pid;
        v22 = 0LL;
        *((_DWORD *)v14 + 4) = pid;
        *(GUID *)v14 = a2->fmtid;
        *v7 = v14;
        std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>((void **)&v22);
        goto LABEL_19;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20F,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)(unsigned int)v15);
      std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>((void **)&v22);
      v6 = v16;
    }
    else
    {
      v6 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20B,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)0x8007000ELL);
      std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>((void **)&v22);
    }
LABEL_21:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v23);
  }
  else
  {
    v6 = -2147023266;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EC,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)0x8007065ELL);
  }
  return v6;
}
