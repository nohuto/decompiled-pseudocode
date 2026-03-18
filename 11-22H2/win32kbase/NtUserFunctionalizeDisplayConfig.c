/*
 * XREFs of NtUserFunctionalizeDisplayConfig @ 0x1C0143FD0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1C001EFF0 (UserIsWddmConnectedSession.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C004CDAC (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0167244 (DrvFunctionalizeDisplayConfig.c)
 *     DrvIsDisplayStateCurrent @ 0x1C01675C0 (DrvIsDisplayStateCurrent.c)
 */

__int64 __fastcall NtUserFunctionalizeDisplayConfig(
        int a1,
        unsigned int *a2,
        volatile void *a3,
        unsigned __int64 a4,
        __int64 a5,
        volatile void *a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  volatile void *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // esi
  void *QuotaZInit; // r15
  _DWORD *v20; // rdx
  __int64 CurrentProcessWow64Process; // rax
  unsigned __int64 v22; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v23; // rcx
  unsigned int v24; // edx
  unsigned int v25; // eax
  __int64 *i; // rcx
  _OWORD *v27; // r8
  _OWORD *v28; // r11
  unsigned int v29; // r9d
  unsigned int j; // r10d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int v34; // ebx
  unsigned int v36; // [rsp+30h] [rbp-118h] BYREF
  unsigned int v37; // [rsp+34h] [rbp-114h]
  _DWORD v38[2]; // [rsp+38h] [rbp-110h] BYREF
  void *v39; // [rsp+40h] [rbp-108h]
  __int64 *v40; // [rsp+48h] [rbp-100h]
  int v41; // [rsp+50h] [rbp-F8h]
  int v42; // [rsp+54h] [rbp-F4h]
  __int64 v43; // [rsp+68h] [rbp-E0h] BYREF
  int v44; // [rsp+70h] [rbp-D8h]
  void *v45; // [rsp+78h] [rbp-D0h]
  volatile void *Address; // [rsp+80h] [rbp-C8h]
  __int64 v47; // [rsp+90h] [rbp-B8h]
  _QWORD v48[10]; // [rsp+B0h] [rbp-98h] BYREF

  v47 = a5;
  Address = a6;
  v39 = 0LL;
  v36 = 0;
  v38[0] = -1;
  v43 = 0LL;
  v44 = 0;
  memset(v48, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v48[1]);
  v48[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v48[3]) = 59;
  LOBYTE(v48[6]) = -1;
  v38[1] = -1073741811;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(v11, v10, v12, v13);
  PtiCurrentShared();
  if ( !gbVideoInitialized )
  {
    v18 = -1073741823;
    QuotaZInit = v39;
LABEL_45:
    if ( a4 && !(unsigned int)DrvIsDisplayStateCurrent(1LL, &v43) )
      v18 = -1071774921;
    goto LABEL_48;
  }
  v20 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v20 = (_DWORD *)MmUserProbeAddress;
  *v20 = *v20;
  v36 = *a2;
  if ( v36 - 1 > 0x3FF )
    ExRaiseStatus(-1073741811);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress, v20, v16);
  ProbeForWrite(a3, 216LL * v36, CurrentProcessWow64Process != 0 ? 1 : 4);
  QuotaZInit = (void *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v23, v22, 216LL * v36, 0x63447355u);
  v39 = QuotaZInit;
  if ( !QuotaZInit )
    ExRaiseStatus(-1073741801);
  v40 = 0LL;
  v45 = 0LL;
  v37 = 0;
  v24 = 0;
  v41 = 0;
  v25 = 0;
  for ( i = (__int64 *)a3; ; i += 27 )
  {
    v40 = i;
    v37 = v25;
    if ( v25 >= v36 )
      break;
    if ( *i < 0 )
      v41 = ++v24;
    ++v25;
  }
  if ( v36 != v24 )
    ExRaiseStatus(-1073741811);
  v27 = a3;
  v40 = (__int64 *)a3;
  v28 = QuotaZInit;
  v45 = QuotaZInit;
  v29 = 0;
  v42 = 0;
  for ( j = 0; ; ++j )
  {
    v37 = j;
    if ( j >= v24 )
      break;
    if ( *(__int64 *)v27 < 0 )
    {
      if ( v29 >= v24 )
        ExRaiseStatus(-1073741811);
      *v28 = *v27;
      v28[1] = v27[1];
      v28[2] = v27[2];
      v28[3] = v27[3];
      v28[4] = v27[4];
      v28[5] = v27[5];
      v28[6] = v27[6];
      v28[7] = v27[7];
      v28[8] = v27[8];
      v28[9] = v27[9];
      v28[10] = v27[10];
      v28[11] = v27[11];
      v28[12] = v27[12];
      *((_QWORD *)v28 + 26) = *((_QWORD *)v27 + 26);
      if ( *(__int64 *)v28 >= 0 )
        ExRaiseStatus(-1073741790);
      v42 = ++v29;
      v28 = (_OWORD *)((char *)v28 + 216);
      v45 = v28;
    }
    v27 = (_OWORD *)((char *)v27 + 216);
    v40 = (__int64 *)v27;
  }
  if ( v29 != v24 )
    ExRaiseStatus(-1073741811);
  if ( !Address )
    ExRaiseStatus(-1073741811);
  ProbeForWrite(Address, 4uLL, 4u);
  if ( a4 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v32, v31, v33) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a4 + 12 > MmUserProbeAddress || a4 + 12 < a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v43 = *(_QWORD *)a4;
    v44 = *(_DWORD *)(a4 + 8);
  }
  if ( !(unsigned int)UserIsWddmConnectedSession() )
  {
    v18 = -1073741790;
    goto LABEL_45;
  }
  if ( a4 && !(unsigned int)DrvIsDisplayStateCurrent(1LL, &v43) )
  {
    v18 = -1071774921;
    goto LABEL_45;
  }
  v18 = DrvFunctionalizeDisplayConfig((unsigned int)&v36, (_DWORD)QuotaZInit, a1, v47, (__int64)v38);
  if ( v18 == -2147483643 )
    v18 = -1073741789;
  v34 = v36;
  memmove((void *)a3, QuotaZInit, 216LL * v36);
  *a2 = v34;
  v15 = Address;
  *(_DWORD *)Address = v38[0];
  if ( v18 < 0 )
    goto LABEL_45;
LABEL_48:
  if ( QuotaZInit )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)QuotaZInit);
    v39 = 0LL;
  }
  UserSessionSwitchLeaveCrit((__int64)v15, v14, v16, v17);
  return (unsigned int)v18;
}
