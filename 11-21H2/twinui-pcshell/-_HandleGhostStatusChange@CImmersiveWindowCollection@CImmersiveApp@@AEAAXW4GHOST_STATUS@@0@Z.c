/*
 * XREFs of ?_HandleGhostStatusChange@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@0@Z @ 0x180077F48
 * Callers:
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180021D10 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800749B8 (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180074CE8 (-_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x180040BC4 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x180041B6C (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

ULONG __fastcall CImmersiveApp::CImmersiveWindowCollection::_HandleGhostStatusChange(
        CImmersiveApp::CImmersiveWindowCollection *a1,
        int a2,
        int a3)
{
  __int64 v3; // r14
  ULONG result; // eax
  __int64 v8; // r10
  const WCHAR *v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  REGHANDLE v12; // rcx
  __int64 v13; // rdx
  void (*v14)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp-69h] BYREF
  int v16; // [rsp+34h] [rbp-65h] BYREF
  int v17; // [rsp+38h] [rbp-61h] BYREF
  int v18; // [rsp+3Ch] [rbp-5Dh] BYREF
  LPVOID Context; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v21; // [rsp+58h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-39h] BYREF
  void *v23; // [rsp+70h] [rbp-29h]
  int v24; // [rsp+78h] [rbp-21h]
  int v25; // [rsp+7Ch] [rbp-1Dh]
  const WCHAR *v26; // [rsp+80h] [rbp-19h]
  int v27; // [rsp+88h] [rbp-11h]
  int v28; // [rsp+8Ch] [rbp-Dh]
  int *v29; // [rsp+90h] [rbp-9h]
  __int64 v30; // [rsp+98h] [rbp-1h]
  int *v31; // [rsp+A0h] [rbp+7h]
  __int64 v32; // [rsp+A8h] [rbp+Fh]
  int *v33; // [rsp+B0h] [rbp+17h]
  __int64 v34; // [rsp+B8h] [rbp+1Fh]

  v3 = *((_QWORD *)a1 + 20);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    *(_QWORD *)&EventDescriptor.Id = &`CAppManagerLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B3D58;
    qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    LODWORD(EventDescriptor.Keyword) = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&EventDescriptor, v13, v14);
  }
  result = (unsigned int)Context;
  v8 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v8 > 5u )
  {
    v9 = *(const WCHAR **)(v3 + 584);
    v18 = *(_DWORD *)(v3 + 592);
    v33 = &v16;
    v31 = &v17;
    v29 = &v18;
    v16 = a3;
    v17 = a2;
    v34 = 4LL;
    v32 = 4LL;
    v30 = 4LL;
    if ( v9 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v9[v10] );
      v11 = 2 * v10 + 2;
    }
    else
    {
      v9 = &LocaleName;
      v11 = 2;
    }
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v8 + 8);
    v26 = v9;
    v27 = v11;
    v28 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v23 = &unk_18069FB44;
    UserData.Reserved = 2;
    v12 = *(_QWORD *)(v8 + 32);
    v24 = 77;
    v25 = 1;
    v21 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    result = EventWriteTransfer(v12, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  if ( (((unsigned __int8)a3 ^ (unsigned __int8)a2) & 2) != 0 )
  {
    if ( (a3 & 2) != 0 )
      return CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(a1, 0, 2u);
    else
      return CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(a1, 2u);
  }
  return result;
}
