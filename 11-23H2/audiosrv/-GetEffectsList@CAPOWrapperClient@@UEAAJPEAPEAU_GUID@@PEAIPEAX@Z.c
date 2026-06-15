/*
 * XREFs of ?GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x1800CF620
 * Callers:
 *     ?GetEffectsList@CAPOWrapperClient@@W7EAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x180075B10 (-GetEffectsList@CAPOWrapperClient@@W7EAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CD4A0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAPOWrapperClient::GetEffectsList(
        CAPOWrapperClient *this,
        struct _GUID **a2,
        unsigned int *a3,
        void *a4)
{
  void *v8; // rbx
  HANDLE CurrentProcess; // rax
  const char *v10; // r9
  int v12; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HANDLE TargetHandle; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 8) && g_ADGProcess )
  {
    TargetHandle = 0LL;
    if ( a4 )
    {
      v8 = *(void **)&g_ADGProcess[2].LockCount;
      CurrentProcess = GetCurrentProcess();
      if ( !DuplicateHandle(CurrentProcess, a4, v8, &TargetHandle, 0, 0, 2u) )
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)0xDD,
                 (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
                 v10);
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, struct _GUID **, unsigned int *))(**((_QWORD **)this + 8) + 48LL))(
            *((_QWORD *)this + 8),
            a2,
            a3);
    if ( v12 >= 0 )
      return 0LL;
    v13 = 224LL;
  }
  else
  {
    v12 = -2147024809;
    v13 = 208LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
    (const char *)(unsigned int)v12);
  return (unsigned int)v12;
}
