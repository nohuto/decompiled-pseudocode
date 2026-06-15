/*
 * XREFs of ?StartStream@CSubmixImpl@@UEAAJ_K@Z @ 0x14001E5B0
 * Callers:
 *     ?StartStream@CProcessSubmix@@UEAAJ_K@Z @ 0x14001E660 (-StartStream@CProcessSubmix@@UEAAJ_K@Z.c)
 *     ?StartStream@CStreamGroup@@UEAAJ_K@Z @ 0x1400516F0 (-StartStream@CStreamGroup@@UEAAJ_K@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x14001DE68 (-UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z.c)
 *     ?FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z @ 0x14001E544 (-FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::StartStream(CSubmixImpl *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  struct CStreamInstance *Stream; // rax
  int updated; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v13 = v2;
  Stream = CSubmixImpl::FindStream(this, a2);
  if ( !Stream )
  {
    v7 = -2005139430;
    v9 = 727LL;
    v10 = 2289827866LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v10,
      v11);
    goto LABEL_4;
  }
  *((_BYTE *)Stream + 16) = 1;
  updated = CSubmixImpl::UpdateActiveStreamCount(this, 1);
  v7 = updated;
  if ( updated < 0 )
  {
    v10 = (unsigned int)updated;
    v9 = 733LL;
    goto LABEL_7;
  }
  v7 = 0;
LABEL_4:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v13);
  return v7;
}
