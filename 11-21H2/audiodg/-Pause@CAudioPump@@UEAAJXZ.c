/*
 * XREFs of ?Pause@CAudioPump@@UEAAJXZ @ 0x1400058E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x140001FCC (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x140005FD8 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 */

__int64 __fastcall CAudioPump::Pause(CAudioPump *this)
{
  char *v1; // rbx
  char v3; // si
  unsigned __int64 v4; // rax
  void *v5; // rdx
  void *v7; // rdx
  HANDLE Handles[3]; // [rsp+20h] [rbp-18h] BYREF
  char *v9; // [rsp+48h] [rbp+10h] BYREF

  v1 = (char *)this + 120;
  v3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)this + 3);
  v4 = *((_QWORD *)this + 14) - 1LL;
  v9 = v1;
  if ( v4 <= 0xFFFFFFFFFFFFFFFDuLL && _InterlockedCompareExchange((volatile signed __int32 *)this + 78, 1, 2) == 2 )
  {
    if ( *((_BYTE *)this + 4648)
      && CAudioPump::OutputPumpWorkRoutine == *((unsigned int (__fastcall **)(CAudioPump *))this + 26)
      && *((_QWORD *)this + 49) )
    {
      v3 = 1;
    }
    else
    {
      *((_DWORD *)this + 79) = 40;
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v9);
  if ( v3 )
  {
    wil::details::ResetEvent(*((wil::details **)this + 51), v5);
    wil::details::SetEvent(*((wil::details **)this + 49), v7);
    Handles[0] = *((HANDLE *)this + 32);
    Handles[1] = *((HANDLE *)this + 51);
    WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF);
  }
  return 0LL;
}
