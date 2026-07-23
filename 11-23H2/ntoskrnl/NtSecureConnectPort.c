/*
 * XREFs of NtSecureConnectPort @ 0x1407C4100
 * Callers:
 *     NtConnectPort @ 0x1407C40B0 (NtConnectPort.c)
 *     IopConnectLinkTrackingPort @ 0x140944A00 (IopConnectLinkTrackingPort.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeReleaseSid @ 0x1406BB2D4 (SeReleaseSid.c)
 *     SeCaptureSid @ 0x1406BB2FC (SeCaptureSid.c)
 *     NtClose @ 0x1406E44F0 (NtClose.c)
 *     AlpcpDispatchConnectionRequest @ 0x140716258 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x140716458 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x140717944 (AlpcpCreateClientPort.c)
 *     AlpcpUnlockMessage @ 0x14071C0B8 (AlpcpUnlockMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x14071EB3C (AlpcpDereferenceBlobEx.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1407C46BC (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpLogConnectFail @ 0x14097A4E0 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x14097A554 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x14097A5C4 (AlpcpLogConnectSuccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSecureConnectPort(
        PHANDLE PortHandle,
        PUNICODE_STRING PortName,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos,
        PPORT_VIEW ClientView,
        PSID RequiredServerSid,
        PREMOTE_PORT_VIEW ServerView,
        PULONG MaxMessageLength,
        PVOID ConnectionInformation,
        PULONG ConnectionInformationLength)
{
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // dl
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  PSID v23; // rdi
  int v24; // r15d
  _DWORD *v25; // r15
  int v26; // edi
  ULONG_PTR v27; // r13
  unsigned int v28; // r12d
  int v29; // eax
  unsigned int v30; // eax
  int v32; // [rsp+20h] [rbp-1A8h]
  char v33; // [rsp+60h] [rbp-168h]
  NTSTATUS v34; // [rsp+64h] [rbp-164h]
  ULONG v35; // [rsp+68h] [rbp-160h] BYREF
  __int64 v36; // [rsp+70h] [rbp-158h] BYREF
  volatile void *Address; // [rsp+78h] [rbp-150h]
  PVOID Object; // [rsp+80h] [rbp-148h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-140h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-138h] BYREF
  __int64 v41; // [rsp+98h] [rbp-130h]
  ULONG_PTR v42; // [rsp+A0h] [rbp-128h] BYREF
  PHANDLE v43; // [rsp+A8h] [rbp-120h]
  PULONG v44; // [rsp+B0h] [rbp-118h]
  __m128i v45; // [rsp+B8h] [rbp-110h] BYREF
  __int128 v46; // [rsp+C8h] [rbp-100h]
  __int128 v47; // [rsp+D8h] [rbp-F0h]
  PULONG v48; // [rsp+E8h] [rbp-E0h]
  _REMOTE_PORT_VIEW v49; // [rsp+F0h] [rbp-D8h] BYREF
  _OWORD v50[2]; // [rsp+108h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+128h] [rbp-A0h]
  __int64 v52[8]; // [rsp+130h] [rbp-98h] BYREF
  __int64 v53; // [rsp+170h] [rbp-58h] BYREF
  int v54; // [rsp+178h] [rbp-50h]

  v41 = (__int64)PortName;
  v43 = PortHandle;
  v44 = MaxMessageLength;
  v48 = ConnectionInformationLength;
  Address = ConnectionInformation;
  Object = 0LL;
  memset(v52, 0, sizeof(v52));
  Handle = 0LL;
  v36 = 0LL;
  v42 = 0LL;
  memset(v50, 0, sizeof(v50));
  v51 = 0LL;
  v35 = 0;
  v53 = 0LL;
  v54 = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  memset(&v49, 0, sizeof(v49));
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v33 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( ConnectionInformationLength )
      v35 = *ConnectionInformationLength;
    if ( ClientView )
    {
      v45 = *(__m128i *)&ClientView->Length;
      v46 = *(_OWORD *)&ClientView->SectionOffset;
      v47 = *(_OWORD *)&ClientView->ViewBase;
    }
    if ( SecurityQos )
    {
      v53 = *(_QWORD *)&SecurityQos->Length;
      v54 = *(_DWORD *)&SecurityQos->ContextTrackingMode;
    }
    v36 = (__int64)RequiredServerSid;
    goto LABEL_38;
  }
  v15 = 0x7FFFFFFF0000LL;
  v16 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)v43 < 0x7FFFFFFF0000LL )
    v16 = (__int64)v43;
  *(_QWORD *)v16 = *(_QWORD *)v16;
  if ( ConnectionInformationLength )
  {
    v17 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ConnectionInformationLength < 0x7FFFFFFF0000LL )
      v17 = (__int64)ConnectionInformationLength;
    v35 = *(_DWORD *)v17;
    ProbeForWrite(Address, v35, 1u);
    PreviousMode = v33;
  }
  if ( ClientView )
  {
    v18 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ClientView < 0x7FFFFFFF0000LL )
      v18 = (__int64)ClientView;
    v45 = *(__m128i *)v18;
    v46 = *(_OWORD *)(v18 + 16);
    v47 = *(_OWORD *)(v18 + 32);
    if ( _mm_cvtsi128_si32(v45) != 48 )
    {
      v34 = -1073741811;
      goto LABEL_60;
    }
    if ( ((unsigned __int8)ClientView & 3) != 0 )
      goto LABEL_36;
    v19 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ClientView < 0x7FFFFFFF0000LL )
      v19 = (__int64)ClientView;
    *(_BYTE *)v19 = *(_BYTE *)v19;
    *(_BYTE *)(v19 + 47) = *(_BYTE *)(v19 + 47);
  }
  if ( !ServerView )
    goto LABEL_24;
  v20 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)ServerView < 0x7FFFFFFF0000LL )
    v20 = (__int64)ServerView;
  if ( *(_DWORD *)v20 != 24 )
  {
    v34 = -1073741811;
    goto LABEL_60;
  }
  if ( ((unsigned __int8)ServerView & 3) != 0 )
LABEL_36:
    ExRaiseDatatypeMisalignment();
  v21 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)ServerView < 0x7FFFFFFF0000LL )
    v21 = (__int64)ServerView;
  *(_BYTE *)v21 = *(_BYTE *)v21;
  *(_BYTE *)(v21 + 23) = *(_BYTE *)(v21 + 23);
LABEL_24:
  if ( v44 )
  {
    v22 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v44 < 0x7FFFFFFF0000LL )
      v22 = (__int64)v44;
    *(_DWORD *)v22 = *(_DWORD *)v22;
  }
  if ( SecurityQos )
  {
    if ( (unsigned __int64)SecurityQos < 0x7FFFFFFF0000LL )
      v15 = (__int64)SecurityQos;
    v53 = *(_QWORD *)v15;
    v54 = *(_DWORD *)(v15 + 8);
  }
  v36 = (__int64)RequiredServerSid;
  if ( !RequiredServerSid
    || (v34 = SeCaptureSid((char *)RequiredServerSid, PreviousMode, v11, v12, v32, 1, (PSID *)&v36), v34 >= 0) )
  {
LABEL_38:
    v23 = (PSID)v36;
    v24 = AlpcpCreateClientPort(
            (__int64 *)&Handle,
            &Object,
            0,
            v41,
            0LL,
            0LL,
            0LL,
            0LL,
            (void *)v36,
            (unsigned __int64)&v53 & -(__int64)(SecurityQos != 0LL),
            1);
    v34 = v24;
    if ( v23 != RequiredServerSid )
      SeReleaseSid(v23, v33, 1);
    if ( v24 >= 0 )
    {
      LOWORD(v50[0]) = v35;
      v41 = (unsigned __int64)&v45 & -(__int64)(ClientView != 0LL);
      v25 = Object;
      v26 = AlpcpFormatConnectionRequest(
              &v42,
              0,
              Object,
              (__int64)Address,
              (unsigned __int16 *)v50,
              0LL,
              v41,
              &BugCheckParameter2,
              1,
              v33);
      v34 = v26;
      if ( v26 >= 0 )
      {
        v27 = v42;
        v28 = *(_DWORD *)(v42 + 264);
        if ( AlpcpLogEnabled )
          AlpcpLogConnectRequest(v42);
        v52[0] = (__int64)v25;
        v52[1] = v27;
        LODWORD(v52[6]) = 0x20000;
        v29 = AlpcpDispatchConnectionRequest(v52);
        v26 = v29;
        v34 = v29;
        if ( v29 < 0 )
        {
          if ( AlpcpLogEnabled )
            AlpcpLogConnectFail(v28, (unsigned int)v29);
          AlpcpUnlockMessage(v27);
        }
        else
        {
          v30 = AlpcpReceiveLegacyConnectionReply(
                  (unsigned int)v52,
                  (_DWORD)Address,
                  (unsigned int)&v35,
                  BugCheckParameter2,
                  v41,
                  (unsigned __int64)&v49 & -(__int64)(ServerView != 0LL));
          v26 = v30;
          v34 = v30;
          if ( v30 )
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectFail(v28, v30);
          }
          else
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectSuccess(v28);
            *v43 = Handle;
            if ( ClientView )
            {
              *(__m128i *)&ClientView->Length = v45;
              *(_OWORD *)&ClientView->SectionOffset = v46;
              *(_OWORD *)&ClientView->ViewBase = v47;
            }
            if ( ServerView )
              *ServerView = v49;
            if ( v48 )
              *v48 = v35;
            if ( v44 )
              *v44 = v25[68];
          }
        }
      }
      ObfDereferenceObject(v25);
      if ( BugCheckParameter2 )
        AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
      if ( v26 )
        NtClose(Handle);
    }
  }
LABEL_60:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v34;
}
