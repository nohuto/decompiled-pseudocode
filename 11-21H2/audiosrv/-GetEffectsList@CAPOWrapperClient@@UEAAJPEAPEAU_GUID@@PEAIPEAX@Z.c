/*
 * XREFs of ?GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x1801188E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BFD00 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAPOWrapperClient::GetEffectsList(
        CAPOWrapperClient *this,
        struct _GUID **a2,
        unsigned int *a3,
        void *a4)
{
  __int64 v6; // rcx
  void *v9; // rbx
  HANDLE CurrentProcess; // rax
  const char *v11; // r9
  int v13; // ebx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HANDLE TargetHandle; // [rsp+60h] [rbp+8h] BYREF

  v6 = *((_QWORD *)this + 7);
  if ( v6 && g_ADGProcess )
  {
    TargetHandle = 0LL;
    if ( a4 )
    {
      v9 = *(void **)&g_ADGProcess[2].LockCount;
      CurrentProcess = GetCurrentProcess();
      if ( !DuplicateHandle(CurrentProcess, a4, v9, &TargetHandle, 0, 0, 2u) )
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)0xD7,
                 (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
                 v11);
      v6 = *((_QWORD *)this + 7);
    }
    v13 = (*(__int64 (__fastcall **)(__int64, struct _GUID **, unsigned int *))(*(_QWORD *)v6 + 48LL))(v6, a2, a3);
    if ( v13 >= 0 )
      return 0LL;
    v14 = 218LL;
  }
  else
  {
    v13 = -2147024809;
    v14 = 202LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
    (const char *)(unsigned int)v13);
  return (unsigned int)v13;
}
