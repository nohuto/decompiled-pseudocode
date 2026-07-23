/*
 * XREFs of RtlpWalkFrameChain @ 0x18001E3CC
 * Callers:
 *     RtlWalkFrameChain @ 0x180079DF0 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x18001E6D4 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpIsFrameInBounds @ 0x18001EC20 (RtlpIsFrameInBounds.c)
 *     RtlpSanitizeContext @ 0x180020610 (RtlpSanitizeContext.c)
 *     RtlpxVirtualUnwind @ 0x180021010 (RtlpxVirtualUnwind.c)
 *     RtlGetExtendedContextLength2 @ 0x180054D00 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x180054DF0 (RtlInitializeExtendedContext2.c)
 *     RtlpGetStackLimits @ 0x180075CBC (RtlpGetStackLimits.c)
 *     RtlLocateExtendedFeature2 @ 0x1800765C0 (RtlLocateExtendedFeature2.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x18009F250 (ZwQueryVirtualMemory.c)
 *     RtlpCaptureContext2 @ 0x1800A31D0 (RtlpCaptureContext2.c)
 *     _alloca_probe @ 0x1800A3D80 (_alloca_probe.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  void (*v5)(void); // r12
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  void *v9; // rsp
  unsigned int v10; // edi
  __int64 v11; // r15
  NTSTATUS VirtualMemory; // eax
  __int64 v13; // rcx
  int v14; // r14d
  _BYTE v16[4]; // [rsp+60h] [rbp+0h] BYREF
  int v17; // [rsp+64h] [rbp+4h]
  ULONG ContextLength[2]; // [rsp+68h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+70h] [rbp+10h]
  int v20; // [rsp+74h] [rbp+14h]
  _BYTE v21[8]; // [rsp+78h] [rbp+18h] BYREF
  _BYTE v22[8]; // [rsp+80h] [rbp+20h] BYREF
  __int64 v23; // [rsp+88h] [rbp+28h]
  __int128 v24; // [rsp+90h] [rbp+30h]
  __int64 v25; // [rsp+A0h] [rbp+40h]
  _QWORD v26[3]; // [rsp+A8h] [rbp+48h] BYREF
  _BYTE v27[8]; // [rsp+C0h] [rbp+60h] BYREF
  _BYTE v28[16]; // [rsp+C8h] [rbp+68h] BYREF
  _BYTE MemoryInformation[32]; // [rsp+D8h] [rbp+78h] BYREF
  __int64 v30; // [rsp+F8h] [rbp+98h]
  void (*v31)(void); // [rsp+158h] [rbp+F8h]

  v19 = a2;
  v23 = a1;
  v5 = RtlRaiseExceptionForReturnAddressHijack;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
    v5 = 0LL;
  RtlGetExtendedContextLength2(v5 != 0LL ? 1048651 : 1048587, ContextLength, v5 != 0LL ? 0x800 : 0);
  v6 = ContextLength[0] + 15LL;
  if ( v6 <= ContextLength[0] )
    v6 = 0xFFFFFFFFFFFFFF0LL;
  v7 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v8 = alloca(v7);
  v9 = alloca(v7);
  RtlInitializeExtendedContext2(
    (PCONTEXT)v16,
    v5 != 0LL ? 1048651 : 1048587,
    (PCONTEXT_EX *)ContextLength,
    v5 != 0LL ? 0x800 : 0);
  RtlpCaptureContext2(v16);
  v16[0] = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits(v21, v22) )
    return 0LL;
  v10 = 0;
  v24 = xmmword_180199520;
  v25 = qword_180199530;
  do
  {
    if ( !(unsigned __int8)RtlpIsFrameInBounds(v21, v30, v22) )
      break;
    v11 = RtlpLookupFunctionEntryForStackWalks(v31);
    if ( v11 )
    {
      VirtualMemory = 0;
      v17 = 0;
      v13 = *(unsigned int *)(v11 + 8);
      v14 = DWORD2(v24);
      if ( !*(_WORD *)(v13 + *((_QWORD *)&v24 + 1) + 1) && (*(_BYTE *)(v13 + *((_QWORD *)&v24 + 1)) & 0x20) == 0 )
      {
        VirtualMemory = ZwQueryVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          v31,
                          MemoryBasicInformation,
                          MemoryInformation,
                          0x30uLL,
                          0LL);
        v17 = VirtualMemory;
        if ( VirtualMemory < 0 )
          return v10;
        if ( (v30 & 0x4000000000LL) != 0 )
          VirtualMemory = -1073741823;
        v17 = VirtualMemory;
      }
      if ( VirtualMemory < 0 )
        return v10;
    }
    else
    {
      v14 = DWORD2(v24);
      if ( !*((_QWORD *)&v24 + 1) )
        return v10;
    }
    RtlpSanitizeContext(v16);
    v26[2] = 0LL;
    v26[0] = v21;
    v26[1] = v22;
    v17 = RtlpxVirtualUnwind(
            0,
            v14,
            (_DWORD)v31,
            v11,
            (__int64)v16,
            (__int64)v16,
            (__int64)v28,
            (__int64)v27,
            0LL,
            (__int64)v26,
            0);
    if ( v17 < 0 )
      break;
    if ( v10 && v5 && v31 == v5 )
      v31 = *(void (**)(void))(*(_QWORD *)(RtlLocateExtendedFeature2(*(_QWORD *)ContextLength, 11LL, 2147353560LL) + 8)
                             - 8LL);
    if ( !v31 )
      break;
    if ( v10 >= a4 )
      *(_QWORD *)(v23 + 8LL * (v10 - a4)) = v31;
    v20 = ++v10;
  }
  while ( v10 < v19 );
  return v10;
}
