/*
 * XREFs of ?ReleaseDataPointer@CCPAudioHistoryReader@@UEAAXXZ @ 0x140087D30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 */

void __fastcall CCPAudioHistoryReader::ReleaseDataPointer(CCPAudioHistoryReader *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  int v3; // ecx
  int v4; // eax
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v3 = *((_DWORD *)this + 18);
  v5 = v1;
  if ( v3 == *((_DWORD *)this + 19) )
  {
    v4 = -1;
  }
  else if ( v3 == *((_DWORD *)this + 23) - 1 )
  {
    v4 = 0;
  }
  else
  {
    v4 = v3 + 1;
  }
  *((_DWORD *)this + 18) = v4;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v5);
}
