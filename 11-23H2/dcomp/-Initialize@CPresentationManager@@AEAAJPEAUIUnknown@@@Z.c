/*
 * XREFs of ?Initialize@CPresentationManager@@AEAAJPEAUIUnknown@@@Z @ 0x1801ADD50
 * Callers:
 *     ?Create@CPresentationManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x1801AD4D0 (-Create@CPresentationManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R?$default_delete@VCSynchronizationContext@@@std@@QEBAXPEAVCSynchronizationContext@@@Z @ 0x1801AD0E4 (--R-$default_delete@VCSynchronizationContext@@@std@@QEBAXPEAVCSynchronizationContext@@@Z.c)
 *     ?Create@CSynchronizationContext@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x1801AEB84 (-Create@CSynchronizationContext@@SAJPEAUIUnknown@@PEAPEAV1@@Z.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall CPresentationManager::Initialize(void **this, struct IUnknown *a2)
{
  _QWORD *v2; // rsi
  int v4; // ebx
  struct CSynchronizationContext *v5; // rcx
  struct CSynchronizationContext *v6; // rdx
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int LostEvent; // eax
  unsigned int v12; // edx
  int v13; // ecx
  struct CSynchronizationContext **v15; // [rsp+20h] [rbp-20h]
  struct CSynchronizationContext *v16; // [rsp+28h] [rbp-18h] BYREF
  char v17; // [rsp+30h] [rbp-10h]
  HANDLE hObject; // [rsp+60h] [rbp+20h] BYREF
  LARGE_INTEGER Frequency; // [rsp+70h] [rbp+30h] BYREF

  hObject = 0LL;
  v2 = this + 19;
  v16 = 0LL;
  v15 = (struct CSynchronizationContext **)(this + 19);
  v17 = 1;
  v4 = CSynchronizationContext::Create(a2, &v16);
  if ( v17 )
  {
    v5 = v16;
    v6 = *v15;
    *v15 = v16;
    if ( v6 )
      std::default_delete<CSynchronizationContext>::operator()(
        (__int64)v5,
        (__int64 (__fastcall ***)(_QWORD, __int64))v6);
  }
  if ( v4 < 0 )
  {
    v12 = 41;
    v13 = v4;
  }
  else
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 48LL))(*v2);
    v8 = NtFlipObjectCreate(v7, &hObject);
    v9 = HRESULTFromNTSTATUS(v8);
    v4 = v9;
    if ( v9 < 0 )
    {
      v12 = 46;
    }
    else
    {
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        this + 15,
        0LL);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        this + 13,
        0LL);
      v10 = NtFlipObjectOpen(hObject, 1LL, this + 13, this + 15);
      v9 = HRESULTFromNTSTATUS(v10);
      v4 = v9;
      if ( v9 < 0 )
      {
        v12 = 52;
      }
      else
      {
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          this + 14,
          0LL);
        LostEvent = NtFlipObjectQueryLostEvent(this[13], this + 14);
        v9 = HRESULTFromNTSTATUS(LostEvent);
        v4 = v9;
        if ( v9 >= 0 )
        {
          QueryPerformanceFrequency(&Frequency);
          *((double *)this + 22) = (double)(int)Frequency.LowPart;
          goto LABEL_15;
        }
        v12 = 56;
      }
    }
    v13 = v9;
  }
  DoStackCaptureDirect(v13, v12);
LABEL_15:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return (unsigned int)v4;
}
