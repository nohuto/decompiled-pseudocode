/*
 * XREFs of RtlpWalkFrameChain @ 0x180036958
 * Callers:
 *     RtlWalkFrameChain @ 0x18007FEA0 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x180035498 (RtlpGetStackLimits.c)
 *     RtlpIsFrameInBounds @ 0x180035D50 (RtlpIsFrameInBounds.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x180036378 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlInitializeExtendedContext2 @ 0x180036510 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1800366B0 (RtlGetExtendedContextLength2.c)
 *     RtlpSanitizeContext @ 0x1800367D8 (RtlpSanitizeContext.c)
 *     RtlpxVirtualUnwind @ 0x180039210 (RtlpxVirtualUnwind.c)
 *     RtlLocateExtendedFeature2 @ 0x18007D270 (RtlLocateExtendedFeature2.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1800A44D0 (ZwQueryVirtualMemory.c)
 *     RtlpCaptureContext2 @ 0x1800A8390 (RtlpCaptureContext2.c)
 *     _alloca_probe @ 0x1800A8F40 (_alloca_probe.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  char *v6; // r15
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  void *v10; // rsp
  unsigned int v11; // edi
  unsigned int *v12; // r14
  NTSTATUS VirtualMemory; // eax
  _BYTE *v14; // rcx
  _BYTE v16[4]; // [rsp+60h] [rbp+0h] BYREF
  int v17; // [rsp+64h] [rbp+4h]
  ULONG ContextLength[2]; // [rsp+68h] [rbp+8h] BYREF
  int v19; // [rsp+70h] [rbp+10h]
  unsigned __int64 v20; // [rsp+78h] [rbp+18h] BYREF
  void *v21; // [rsp+80h] [rbp+20h] BYREF
  __int64 v22; // [rsp+88h] [rbp+28h]
  __int128 v23; // [rsp+90h] [rbp+30h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+40h]
  _QWORD v25[3]; // [rsp+A8h] [rbp+48h] BYREF
  _BYTE v26[8]; // [rsp+C0h] [rbp+60h] BYREF
  _BYTE v27[16]; // [rsp+C8h] [rbp+68h] BYREF
  _BYTE MemoryInformation[32]; // [rsp+D8h] [rbp+78h] BYREF
  unsigned __int64 v29; // [rsp+F8h] [rbp+98h]
  char *v30; // [rsp+158h] [rbp+F8h]

  v22 = a1;
  v6 = (char *)RtlRaiseExceptionForReturnAddressHijack;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
    v6 = 0LL;
  RtlGetExtendedContextLength2(v6 != 0LL ? 1048651 : 1048587, ContextLength, v6 != 0LL ? 0x800 : 0);
  v7 = ContextLength[0] + 15LL;
  if ( v7 <= ContextLength[0] )
    v7 = 0xFFFFFFFFFFFFFF0LL;
  v8 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
  v9 = alloca(v8);
  v10 = alloca(v8);
  RtlInitializeExtendedContext2(
    (PCONTEXT)v16,
    v6 != 0LL ? 1048651 : 1048587,
    (PCONTEXT_EX *)ContextLength,
    v6 != 0LL ? 0x800 : 0);
  RtlpCaptureContext2(v16);
  v16[0] = 0;
  if ( !RtlpGetStackLimits(&v20, &v21) )
    return 0LL;
  v11 = 0;
  v23 = xmmword_18018F510;
  v24 = qword_18018F520;
  do
  {
    if ( !RtlpIsFrameInBounds(&v20, v29, (unsigned __int64 *)&v21) )
      break;
    v12 = RtlpLookupFunctionEntryForStackWalks(v30, (__int64)&v23);
    if ( !v12 )
      break;
    VirtualMemory = 0;
    v17 = 0;
    v14 = (_BYTE *)(*((_QWORD *)&v23 + 1) + v12[2]);
    if ( !v14[2] && !v14[1] && (*v14 & 0x20) == 0 )
    {
      VirtualMemory = ZwQueryVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        v30,
                        MemoryBasicInformation,
                        MemoryInformation,
                        0x30uLL,
                        0LL);
      v17 = VirtualMemory;
      if ( VirtualMemory < 0 )
        return v11;
      if ( (v29 & 0x4000000000LL) != 0 )
        VirtualMemory = -1073741823;
      v17 = VirtualMemory;
    }
    if ( VirtualMemory < 0 )
      break;
    RtlpSanitizeContext((__int64)v16);
    v25[2] = 0LL;
    v25[0] = &v20;
    v25[1] = &v21;
    v17 = RtlpxVirtualUnwind(
            0,
            DWORD2(v23),
            (_DWORD)v30,
            (_DWORD)v12,
            (__int64)v16,
            (__int64)v16,
            (__int64)v27,
            (__int64)v26,
            0LL,
            (__int64)v25,
            0);
    if ( v17 < 0 )
      break;
    if ( v11 && v6 && v30 == v6 )
      v30 = *(char **)(*(_QWORD *)(RtlLocateExtendedFeature2(*(_QWORD *)ContextLength, 11LL, 2147353560LL) + 8) - 8LL);
    if ( !v30 )
      break;
    if ( v11 >= a4 )
      *(_QWORD *)(v22 + 8LL * (v11 - a4)) = v30;
    v19 = ++v11;
  }
  while ( v11 < a2 );
  return v11;
}
