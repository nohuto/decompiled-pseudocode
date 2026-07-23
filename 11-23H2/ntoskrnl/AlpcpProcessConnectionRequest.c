/*
 * XREFs of AlpcpProcessConnectionRequest @ 0x140715DD4
 * Callers:
 *     AlpcpConnectPort @ 0x140717570 (AlpcpConnectPort.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     AlpcpProbeMessageAttributes @ 0x140715AF4 (AlpcpProbeMessageAttributes.c)
 *     AlpcpDispatchConnectionRequest @ 0x140716258 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x140716458 (AlpcpFormatConnectionRequest.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14071B334 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpUnlockMessage @ 0x14071C0B8 (AlpcpUnlockMessage.c)
 *     AlpcpReadMessageData @ 0x14071C0E8 (AlpcpReadMessageData.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x14071C168 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpExposeAttributes @ 0x14073BF90 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveSynchronousReply @ 0x14073DED0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x14097914C (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpLogConnectFail @ 0x14097A4E0 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x14097A554 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x14097A5C4 (AlpcpLogConnectSuccess.c)
 */

__int64 __fastcall AlpcpProcessConnectionRequest(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        unsigned __int64 *a4,
        __int64 a5,
        int *a6,
        __int64 *a7,
        char a8)
{
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // r12
  char PreviousMode; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 result; // rax
  ULONG_PTR v18; // r13
  int v19; // edx
  unsigned int v20; // ebx
  unsigned int v21; // eax
  unsigned int v22; // r14d
  ULONG_PTR v23; // rbx
  int v24; // edx
  int v25; // ecx
  unsigned int v26; // ecx
  int v27; // r13d
  __int64 v28; // rdx
  __int16 v29; // ax
  __int16 v30; // dx
  unsigned __int64 v31; // r13
  int v32; // [rsp+50h] [rbp-B8h]
  ULONG_PTR v33; // [rsp+58h] [rbp-B0h] BYREF
  int v34; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v35; // [rsp+68h] [rbp-A0h]
  __int64 v36; // [rsp+70h] [rbp-98h] BYREF
  __int128 v37; // [rsp+78h] [rbp-90h] BYREF
  __int128 v38; // [rsp+88h] [rbp-80h]
  __int64 v39; // [rsp+98h] [rbp-70h]
  _QWORD v40[8]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v42; // [rsp+118h] [rbp+10h]
  unsigned int v43; // [rsp+118h] [rbp+10h]

  v11 = a1;
  memset(v40, 0, sizeof(v40));
  v33 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v36 = 0LL;
  if ( (a2 & 0x10000) != 0 )
    return 3221225485LL;
  v32 = 0;
  v35 = -1LL;
  if ( a8 )
  {
    if ( a3 )
    {
      AlpcpProbeForWriteMessageHeader(a3, a2);
      AlpcpProbeAndCaptureMessageHeader(a3, &v37, a2);
    }
    v12 = 0x7FFFFFFF0000LL;
    if ( a4 )
    {
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a4;
      v35 = *(_QWORD *)v15;
      v16 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v16 = (__int64)a4;
      *(_QWORD *)v16 = *(_QWORD *)v16;
    }
    v13 = (__int64)a6;
    PreviousMode = 1;
    if ( a6 )
      v32 = AlpcpProbeMessageAttributes(a2, a6, 1);
    if ( a7 )
    {
      if ( (unsigned __int64)a7 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a7;
      v36 = *(_QWORD *)v12;
      a7 = &v36;
    }
    v11 = a1;
  }
  else
  {
    if ( a3 )
    {
      v37 = *a3;
      v38 = a3[1];
      v39 = *((_QWORD *)a3 + 4);
    }
    if ( a4 )
      v35 = *a4;
    v13 = (__int64)a6;
    PreviousMode = 1;
    if ( a6 )
      v32 = *a6;
  }
  result = AlpcpFormatConnectionRequest(&v33, a2, v11, a3, &v37, a5, 0LL, 0LL, 0, a8);
  if ( (int)result < 0 )
    return result;
  v18 = v33;
  v42 = *(_DWORD *)(v33 + 264);
  if ( AlpcpLogEnabled )
    AlpcpLogConnectRequest(v33);
  v40[0] = v11;
  v40[1] = v18;
  LODWORD(v40[6]) = a2;
  v20 = AlpcpDispatchConnectionRequest(v40);
  if ( (v20 & 0x80000000) != 0 )
  {
    if ( AlpcpLogEnabled )
      AlpcpLogConnectFail(v42, v20);
    AlpcpUnlockMessage(v18);
    return v20;
  }
  if ( (a2 & 0x20000) == 0 )
    return v20;
  if ( (a2 & 0x100000) == 0 )
    PreviousMode = KeGetCurrentThread()->PreviousMode;
  v33 = 0LL;
  LOBYTE(v19) = PreviousMode;
  v21 = AlpcpReceiveSynchronousReply((unsigned int)v40, v19, (unsigned int)&v33, v32, (__int64)a7);
  v22 = v21;
  if ( v21 )
  {
    if ( AlpcpLogEnabled )
      AlpcpLogConnectFail(v42, v21);
    if ( (*(_BYTE *)(a1 + 416) & 0x10) != 0 )
      return (unsigned int)-1073741759;
  }
  else
  {
    if ( AlpcpLogEnabled )
      AlpcpLogConnectSuccess(v42);
    v23 = v33;
    v24 = *(unsigned __int16 *)(v33 + 240);
    v25 = 24;
    if ( (a2 & 0xC0000000) != 0x80000000 )
      v25 = 40;
    v26 = v24 + v25;
    v43 = v26;
    if ( a4 )
    {
      v31 = v26;
      if ( v26 > v35 )
      {
        AlpcpUnlockMessage(v33);
        *a4 = v31;
        return 3221225507LL;
      }
    }
    if ( a3 )
    {
      v34 = 0;
      if ( (a2 & 0x80000000) == 0 || (a2 & 0x40000000) != 0 )
      {
        *a3 = *(_OWORD *)(v33 + 240);
        a3[1] = *(_OWORD *)(v23 + 256);
        *((_QWORD *)a3 + 4) = *(_QWORD *)(v23 + 272);
        v27 = a1;
        if ( _bittest((const signed __int32 *)(a1 + 256), 0xCu) )
          *((_WORD *)a3 + 2) = *(_WORD *)(v23 + 244) & 0xC00F;
        v34 = *(unsigned __int16 *)(v23 + 242);
        v28 = (__int64)a3 + 40;
      }
      else
      {
        *(_WORD *)a3 = v24;
        v34 = *(unsigned __int16 *)(v23 + 240) + 24;
        *((_WORD *)a3 + 1) = v34;
        v29 = *(_WORD *)(v23 + 246);
        if ( v29 )
          *((_WORD *)a3 + 3) = v29 - 16;
        else
          *((_WORD *)a3 + 3) = 0;
        v30 = *(_WORD *)(v23 + 244) | 0x1000;
        *((_WORD *)a3 + 2) = v30;
        *((_DWORD *)a3 + 2) = *(_DWORD *)(v23 + 248);
        *((_DWORD *)a3 + 3) = *(_DWORD *)(v23 + 256);
        *((_DWORD *)a3 + 4) = *(_DWORD *)(v23 + 264);
        *((_DWORD *)a3 + 5) = *(_DWORD *)(v23 + 272);
        *((_DWORD *)a3 + 5) = *(_DWORD *)(v23 + 272);
        v27 = a1;
        if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
          *((_WORD *)a3 + 2) = v30 & 0xC00F;
        v28 = (__int64)a3 + 24;
      }
      if ( *(_QWORD *)(v23 + 176) )
        AlpcpGetDataFromUserVaSafe(v23, v28);
      else
        AlpcpReadMessageData(v23, v28);
      v26 = v43;
    }
    else
    {
      v27 = a1;
    }
    if ( a4 )
      *a4 = v26;
    if ( v13 )
      AlpcpExposeAttributes(v27, a2, v23, v32, v13);
    AlpcpUnlockMessage(v23);
  }
  return v22;
}
