/*
 * XREFs of PspWow64SetContextThread @ 0x1407A0458
 * Callers:
 *     NtSetInformationThread @ 0x1407335B0 (NtSetInformationThread.c)
 *     WbSetWowTrapFrame @ 0x140A4DC40 (WbSetWowTrapFrame.c)
 * Callees:
 *     IoThreadToProcess @ 0x140289F80 (IoThreadToProcess.c)
 *     RtlInitializeExtendedContext @ 0x14030D3B0 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x14030D430 (RtlGetExtendedContextLength.c)
 *     PsGetThreadTeb @ 0x14032A030 (PsGetThreadTeb.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140429B10 (_alloca_probe.c)
 *     memset @ 0x140435A00 (memset.c)
 *     RtlpReadExtendedContext @ 0x14076FEE0 (RtlpReadExtendedContext.c)
 *     RtlCopyContext @ 0x1407704D0 (RtlCopyContext.c)
 *     PspSetContextThreadInternal @ 0x1407705F0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407707D4 (PspGetContextThreadInternal.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1407A07E8 (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1407A0844 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     RtlpWow64SetContextOnAmd64 @ 0x1407A2B48 (RtlpWow64SetContextOnAmd64.c)
 *     EtwTiLogSetContextThread @ 0x1407A2E7C (EtwTiLogSetContextThread.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x140885DF0 (RtlGuardIsValidWow64StackPointer.c)
 */

__int64 __fastcall PspWow64SetContextThread(PETHREAD Thread, unsigned int *a2, int a3, char a4)
{
  __int64 v8; // rdx
  _KPROCESS *Process; // r12
  __int64 v10; // rax
  __int64 result; // rax
  bool v12; // zf
  unsigned int v13; // edi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  void *v16; // rsp
  void *v17; // rsp
  __int16 *v18; // r15
  __int64 v19; // rcx
  struct _KPROCESS *v20; // rbx
  char v21; // bl
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  void *v24; // rsp
  void *v25; // rsp
  bool v26; // dl
  __int64 v27; // rcx
  int v28; // ebx
  __int64 ThreadTeb; // rax
  _DWORD *v30; // r8
  int v31; // ecx
  int v32; // [rsp+20h] [rbp-30h]
  int v33; // [rsp+20h] [rbp-30h]
  int v34[2]; // [rsp+20h] [rbp-30h]
  int v35; // [rsp+28h] [rbp-28h]
  int v36; // [rsp+28h] [rbp-28h]
  __int16 v37; // [rsp+50h] [rbp+0h] BYREF
  char v38; // [rsp+52h] [rbp+2h]
  unsigned int v39; // [rsp+54h] [rbp+4h] BYREF
  unsigned int v40; // [rsp+58h] [rbp+8h] BYREF
  _DWORD v41[3]; // [rsp+5Ch] [rbp+Ch] BYREF
  __int64 v42; // [rsp+68h] [rbp+18h] BYREF
  PETHREAD Threada; // [rsp+70h] [rbp+20h]
  _DWORD v44[180]; // [rsp+80h] [rbp+30h] BYREF

  v38 = a4;
  v42 = 0LL;
  memset(v44, 0, 0x2CCuLL);
  v40 = 0;
  v37 = 0;
  memset(v41, 0, sizeof(v41));
  if ( a3 != 716 )
    return 3221225476LL;
  Threada = KeGetCurrentThread();
  Process = Thread->Process;
  if ( !Process[1].Affinity.StaticBitmap[30] || WORD2(Process[2].Affinity.StaticBitmap[20]) != 332 )
    return 3221225485LL;
  if ( a4 )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a2;
    v39 = *(_DWORD *)v10;
  }
  else
  {
    v39 = *a2;
  }
  LOBYTE(v8) = a4;
  result = RtlpWow64SanitizeContextFlags(&v39, v8);
  if ( (int)result >= 0 )
  {
    v12 = a4 == 0;
    v13 = v39;
    if ( v12 )
    {
      v18 = (__int16 *)a2;
      *(_QWORD *)&v41[1] = a2 + 179;
    }
    else
    {
      result = RtlGetExtendedContextLength(v39, (__int64)&v40);
      if ( (int)result < 0 )
        return result;
      v14 = v40 + 15LL;
      if ( v14 <= v40 )
        v14 = 0xFFFFFFFFFFFFFF0LL;
      v15 = v14 & 0xFFFFFFFFFFFFFFF0uLL;
      v16 = alloca(v15);
      v17 = alloca(v15);
      v18 = &v37;
      result = RtlInitializeExtendedContext((__int64)&v37, v13, (__int64)&v41[1]);
      if ( (int)result < 0 )
        return result;
      result = RtlpReadExtendedContext(v19, 1, *(__int64 *)&v41[1], v13, (__int64)a2, 0LL);
      if ( (int)result < 0 )
        return result;
    }
    v20 = IoThreadToProcess(Thread);
    if ( v20 == IoThreadToProcess(Threada)
      && (*(_DWORD *)&Process->0 & 0x20) != 0
      && (*(_DWORD *)v18 & 0x10001) == 0x10001 )
    {
      ThreadTeb = PsGetThreadTeb((__int64)Thread);
      if ( !(unsigned int)RtlGuardIsValidWow64StackPointer(*((unsigned int *)v18 + 49), ThreadTeb) )
        return 3221225485LL;
    }
    result = PspWow64ReadOrWriteThreadCpuArea((ULONG_PTR)Process, v32, v35, (__int64)v41, (__int64)&v37);
    if ( (int)result >= 0 )
    {
      v21 = v37;
      if ( (_BYTE)v37 && (v13 & 0x10040) == 0x10040 )
      {
        return 3221225659LL;
      }
      else
      {
        result = RtlGetExtendedContextLength(1048607LL, (__int64)&v40);
        if ( (int)result >= 0 )
        {
          v22 = v40 + 15LL;
          if ( v22 <= v40 )
            v22 = 0xFFFFFFFFFFFFFF0LL;
          v23 = v22 & 0xFFFFFFFFFFFFFFF0uLL;
          v24 = alloca(v23);
          v25 = alloca(v23);
          result = RtlInitializeExtendedContext((__int64)&v37, 0x10001Fu, (__int64)&v42);
          if ( (int)result >= 0 )
          {
            result = PspGetContextThreadInternal(Thread, (__int64)&v37, 0, 1, 1);
            if ( (int)result >= 0 )
            {
              result = v21
                     ? RtlCopyContext((__int64)v44, *(_DWORD *)v18, (__int64)v18)
                     : RtlpWow64SetContextOnAmd64(v44, &v37, v18, (char *)&v37 + 1);
              if ( (int)result >= 0 )
              {
                if ( LOWORD(v44[2]) != 35 )
                {
                  v26 = 0;
                  if ( (v13 & 0x10040) != 0x10040 )
                    v26 = (v13 & 0x10002) != 65538 && (v13 & 0x10020) != 65568;
                  if ( !v26 )
                    v41[0] |= 1u;
                }
                result = PspWow64ReadOrWriteThreadCpuArea((ULONG_PTR)Process, v33, v36, (__int64)v41, 0LL);
                v28 = result;
                if ( (int)result >= 0 )
                {
                  if ( HIBYTE(v37) )
                  {
                    if ( (v13 & 0x10040) == 0x10040 )
                    {
                      v44[0] |= 0x100040u;
                      v30 = (_DWORD *)v42;
                      v31 = v41[1];
                      *(_QWORD *)(v42 + 16) = *(_QWORD *)(*(_QWORD *)&v41[1] + 16LL);
                      v30[4] += v31 - (_DWORD)v30;
                      v30[1] = v30[4] + v30[5] - *v30;
                    }
                    v28 = PspSetContextThreadInternal(Thread, (__int64)&v37, 0, 1, 1);
                  }
                  if ( v28 >= 0 )
                  {
                    if ( v38 )
                    {
                      LOBYTE(v27) = KeGetCurrentThread()->PreviousMode;
                      EtwTiLogSetContextThread(v27, Thread, v18, v39, *(_QWORD *)v34);
                    }
                  }
                  return (unsigned int)v28;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
