/*
 * XREFs of ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x180025F74
 * Callers:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18002F7CC (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z @ 0x18000A1F0 (-TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::CanBeRemoved(CProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v6 = v2;
  if ( *((_DWORD *)this + 104) != 2
    || *((_QWORD *)this + 10)
    || (v3 = *((_DWORD *)this + 112), v4 = 1, (v3 & 1) != 0)
    || (v3 & 0x1000) != 0
    || *((_DWORD *)this + 113)
    || *((_DWORD *)this + 114)
    || TsSessionIdIsAScreenReaderProcess(*((_DWORD *)this + 41), *((_DWORD *)this + 40), 0LL)
    || *((_DWORD *)this + 122)
    || *((_DWORD *)this + 127)
    || *((_DWORD *)this + 128)
    || *((_DWORD *)this + 129)
    || *((_DWORD *)this + 124) )
  {
    v4 = 0;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v6);
  return v4;
}
