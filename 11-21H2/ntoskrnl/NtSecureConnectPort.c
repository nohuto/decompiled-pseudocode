/*
 * XREFs of NtSecureConnectPort @ 0x140664220
 * Callers:
 *     NtConnectPort @ 0x1406640A0 (NtConnectPort.c)
 *     IopConnectLinkTrackingPort @ 0x140934110 (IopConnectLinkTrackingPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1406640F0 (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpCreateClientPort @ 0x140667114 (AlpcpCreateClientPort.c)
 *     AlpcpDispatchConnectionRequest @ 0x140667F24 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x140668084 (AlpcpFormatConnectionRequest.c)
 *     SeReleaseSid @ 0x140668444 (SeReleaseSid.c)
 *     SeCaptureSid @ 0x14066846C (SeCaptureSid.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     AlpcpDereferenceBlobEx @ 0x1407A5A54 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockMessage @ 0x1407A7628 (AlpcpUnlockMessage.c)
 *     AlpcpLogConnectFail @ 0x140967A0C (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x140967A74 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x140967AE4 (AlpcpLogConnectSuccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSecureConnectPort(
        HANDLE *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        void *Src,
        unsigned __int64 a6,
        _DWORD *a7,
        volatile void *a8,
        unsigned int *a9)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  void *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int ClientPort; // r14d
  _DWORD *v23; // r14
  int v24; // edi
  ULONG_PTR v25; // r15
  unsigned int v26; // r13d
  int v27; // eax
  unsigned int v28; // eax
  int v30; // [rsp+20h] [rbp-1A8h]
  int v31; // [rsp+40h] [rbp-188h]
  int v32; // [rsp+48h] [rbp-180h]
  char PreviousMode; // [rsp+60h] [rbp-168h]
  int v34; // [rsp+64h] [rbp-164h]
  unsigned int v35; // [rsp+68h] [rbp-160h] BYREF
  __int64 v36; // [rsp+70h] [rbp-158h] BYREF
  volatile void *Address; // [rsp+78h] [rbp-150h]
  PVOID Object; // [rsp+80h] [rbp-148h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-140h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-138h] BYREF
  unsigned __int64 v41; // [rsp+98h] [rbp-130h]
  ULONG_PTR v42; // [rsp+A0h] [rbp-128h] BYREF
  HANDLE *v43; // [rsp+A8h] [rbp-120h]
  _DWORD *v44; // [rsp+B0h] [rbp-118h]
  __m128i v45; // [rsp+B8h] [rbp-110h] BYREF
  __int128 v46; // [rsp+C8h] [rbp-100h]
  __int128 v47; // [rsp+D8h] [rbp-F0h]
  unsigned int *v48; // [rsp+E8h] [rbp-E0h]
  __int128 v49; // [rsp+F0h] [rbp-D8h] BYREF
  __int64 v50; // [rsp+100h] [rbp-C8h]
  _OWORD v51[2]; // [rsp+108h] [rbp-C0h] BYREF
  __int64 v52; // [rsp+128h] [rbp-A0h]
  __int64 v53[8]; // [rsp+130h] [rbp-98h] BYREF
  __int64 v54; // [rsp+170h] [rbp-58h] BYREF
  int v55; // [rsp+178h] [rbp-50h]

  v41 = a2;
  v43 = a1;
  v44 = a7;
  v48 = a9;
  Address = a8;
  Object = 0LL;
  memset(v53, 0, sizeof(v53));
  Handle = 0LL;
  v36 = 0LL;
  v42 = 0LL;
  memset(v51, 0, sizeof(v51));
  v52 = 0LL;
  v35 = 0;
  v54 = 0LL;
  v55 = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v49 = 0LL;
  v50 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    if ( a9 )
      v35 = *a9;
    if ( a4 )
    {
      v45 = *(__m128i *)a4;
      v46 = *(_OWORD *)(a4 + 16);
      v47 = *(_OWORD *)(a4 + 32);
    }
    if ( a3 )
    {
      v54 = *(_QWORD *)a3;
      v55 = *(_DWORD *)(a3 + 8);
    }
    v36 = (__int64)Src;
    goto LABEL_35;
  }
  v12 = 0x7FFFFFFF0000LL;
  v13 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)v43 < 0x7FFFFFFF0000LL )
    v13 = (__int64)v43;
  *(_QWORD *)v13 = *(_QWORD *)v13;
  if ( a9 )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
      v14 = (__int64)a9;
    v35 = *(_DWORD *)v14;
    ProbeForWrite(Address, v35, 1u);
  }
  if ( a4 )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( a4 < 0x7FFFFFFF0000LL )
      v15 = a4;
    v45 = *(__m128i *)v15;
    v46 = *(_OWORD *)(v15 + 16);
    v47 = *(_OWORD *)(v15 + 32);
    if ( _mm_cvtsi128_si32(v45) != 48 )
    {
      v34 = -1073741811;
      goto LABEL_57;
    }
    if ( (a4 & 3) != 0 )
      goto LABEL_33;
    *(_BYTE *)v15 = *(_BYTE *)v15;
    *(_BYTE *)(v15 + 47) = *(_BYTE *)(v15 + 47);
  }
  if ( !a6 )
    goto LABEL_20;
  v16 = 0x7FFFFFFF0000LL;
  if ( a6 < 0x7FFFFFFF0000LL )
    v16 = a6;
  if ( *(_DWORD *)v16 != 24 )
  {
    v34 = -1073741811;
    goto LABEL_57;
  }
  if ( (a6 & 3) != 0 )
LABEL_33:
    ExRaiseDatatypeMisalignment();
  *(_BYTE *)v16 = *(_BYTE *)v16;
  *(_BYTE *)(v16 + 23) = *(_BYTE *)(v16 + 23);
LABEL_20:
  if ( v44 )
  {
    v17 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v44 < 0x7FFFFFFF0000LL )
      v17 = (__int64)v44;
    *(_DWORD *)v17 = *(_DWORD *)v17;
  }
  if ( a3 )
  {
    if ( a3 < 0x7FFFFFFF0000LL )
      v12 = a3;
    v54 = *(_QWORD *)v12;
    v55 = *(_DWORD *)(v12 + 8);
  }
  v36 = (__int64)Src;
  if ( !Src || (v34 = SeCaptureSid(Src, v30, 1, (__int64)&v36), v34 >= 0) )
  {
LABEL_35:
    v18 = (void *)v36;
    ClientPort = AlpcpCreateClientPort(
                   (unsigned int)&Handle,
                   (unsigned int)&Object,
                   0,
                   v41,
                   0LL,
                   0LL,
                   0LL,
                   0LL,
                   v36,
                   (unsigned __int64)&v54 & -(__int64)(a3 != 0),
                   1);
    v34 = ClientPort;
    if ( v18 != Src )
    {
      LOBYTE(v20) = 1;
      LOBYTE(v19) = PreviousMode;
      SeReleaseSid(v18, v19, v20, v21);
    }
    if ( ClientPort >= 0 )
    {
      LOWORD(v51[0]) = v35;
      v41 = (unsigned __int64)&v45 & -(__int64)(a4 != 0);
      LOBYTE(v32) = PreviousMode;
      LOBYTE(v31) = 1;
      v23 = Object;
      v24 = AlpcpFormatConnectionRequest(&v42, 0LL, Object, Address, v51, 0LL, v41, &BugCheckParameter2, v31, v32);
      v34 = v24;
      if ( v24 >= 0 )
      {
        v25 = v42;
        v26 = *(_DWORD *)(v42 + 264);
        if ( AlpcpLogEnabled )
          AlpcpLogConnectRequest(v42);
        v53[0] = (__int64)v23;
        v53[1] = v25;
        LODWORD(v53[6]) = 0x20000;
        v27 = AlpcpDispatchConnectionRequest(v53);
        v24 = v27;
        v34 = v27;
        if ( v27 < 0 )
        {
          if ( AlpcpLogEnabled )
            AlpcpLogConnectFail(v26, (unsigned int)v27);
          AlpcpUnlockMessage(v25);
        }
        else
        {
          v28 = AlpcpReceiveLegacyConnectionReply(
                  v53,
                  (__int64)Address,
                  &v35,
                  BugCheckParameter2,
                  v41,
                  (unsigned __int64)&v49 & -(__int64)(a6 != 0));
          v24 = v28;
          v34 = v28;
          if ( v28 )
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectFail(v26, v28);
          }
          else
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectSuccess(v26);
            *v43 = Handle;
            if ( a4 )
            {
              *(__m128i *)a4 = v45;
              *(_OWORD *)(a4 + 16) = v46;
              *(_OWORD *)(a4 + 32) = v47;
            }
            if ( a6 )
            {
              *(_OWORD *)a6 = v49;
              *(_QWORD *)(a6 + 16) = v50;
            }
            if ( v48 )
              *v48 = v35;
            if ( v44 )
              *v44 = v23[68];
          }
        }
      }
      ObfDereferenceObject(v23);
      if ( BugCheckParameter2 )
        AlpcpDereferenceBlobEx(BugCheckParameter2);
      if ( v24 )
        NtClose(Handle);
    }
  }
LABEL_57:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v34;
}
