/*
 * XREFs of NtUserQueryDisplayConfig @ 0x1C001E630
 * Callers:
 *     <none>
 * Callees:
 *     _QdcSdcTranslateStatusDefault @ 0x1C001EDBC (_QdcSdcTranslateStatusDefault.c)
 *     UserIsWddmConnectedSession @ 0x1C001EFF0 (UserIsWddmConnectedSession.c)
 *     DrvQueryDisplayConfig @ 0x1C001F100 (DrvQueryDisplayConfig.c)
 *     DrvSampleDisplayState @ 0x1C001F260 (DrvSampleDisplayState.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C004CDAC (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 */

__int64 __fastcall NtUserQueryDisplayConfig(__int64 a1, unsigned int *a2, volatile void *a3, int *a4, _DWORD *Address)
{
  unsigned int v8; // ebx
  const void *QuotaZInit; // rsi
  int v10; // ecx
  _DWORD *v11; // rdx
  __int64 CurrentProcessWow64Process; // rax
  unsigned __int64 v13; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v14; // rcx
  __int64 v15; // rcx
  int v16; // r15d
  __int64 v17; // rax
  unsigned int v18; // edi
  unsigned int v19; // eax
  unsigned int v20; // ebx
  unsigned int v22; // [rsp+20h] [rbp-98h] BYREF
  int v23; // [rsp+24h] [rbp-94h]
  int v24; // [rsp+28h] [rbp-90h] BYREF
  const void *v25; // [rsp+30h] [rbp-88h]
  __int64 v26; // [rsp+48h] [rbp-70h] BYREF
  int v27; // [rsp+50h] [rbp-68h]
  __int128 v28; // [rsp+60h] [rbp-58h] BYREF
  __int64 v29; // [rsp+70h] [rbp-48h]

  v8 = a1;
  QuotaZInit = 0LL;
  v25 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v22 = 0;
  v24 = -1;
  v26 = 0LL;
  v27 = 0;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1);
  if ( !gbVideoInitialized )
  {
    v18 = -1073741823;
    goto LABEL_29;
  }
  if ( (v8 & 0xFFFFFF88) != 0 || (v10 = v8 & 7, ((v10 - 1) & 0xFFFFFFFC) != 0) || v10 == 3 )
  {
    v18 = -1073741811;
    goto LABEL_29;
  }
  PtiCurrentShared();
  v11 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v11 = (_DWORD *)MmUserProbeAddress;
  *v11 = *v11;
  v22 = *a2;
  if ( v22 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(a3, 216LL * v22, CurrentProcessWow64Process != 0 ? 1 : 4);
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v14, v13, 216LL * v22, 0x63447355u);
    v25 = QuotaZInit;
    if ( !QuotaZInit )
      ExRaiseStatus(-1073741801);
    if ( qword_1C0295450 )
      qword_1C0295450(QuotaZInit, &v28, Win32FreePool);
    v16 = v8 & 4;
    if ( (v8 & 4) != 0 )
    {
      ProbeForWrite(a4, 4uLL, 4u);
    }
    else if ( a4 )
    {
      v18 = -1073741811;
      v23 = -1073741811;
      goto LABEL_29;
    }
    if ( Address )
    {
      v17 = PsGetCurrentProcessWow64Process();
      ProbeForWrite(Address, 0xCuLL, v17 != 0 ? 1 : 4);
    }
    if ( (unsigned int)UserIsWddmConnectedSession(v15) )
    {
      if ( Address )
        DrvSampleDisplayState(&v26);
      v19 = DrvQueryDisplayConfig(v8, &v22, QuotaZInit, &v24);
      v18 = v19;
      v23 = v19;
      if ( v19 == -2147483643 )
      {
        v18 = -1073741789;
        v23 = -1073741789;
      }
      else if ( v19 != -1073741789 )
      {
        v18 = QdcSdcTranslateStatusDefault(v19);
        v23 = v18;
      }
      v20 = v22;
      memmove((void *)a3, QuotaZInit, 216LL * v22);
      *a2 = v20;
      if ( v16 )
        *a4 = v24;
      if ( Address )
      {
        *(_QWORD *)Address = v26;
        Address[2] = v27;
      }
    }
    else
    {
      v18 = -1073741790;
    }
  }
  else
  {
    v18 = -1073741811;
    v23 = -1073741811;
    QuotaZInit = v25;
  }
LABEL_29:
  if ( QuotaZInit && qword_1C0295558 )
    qword_1C0295558(&v28);
  UserSessionSwitchLeaveCrit();
  return v18;
}
