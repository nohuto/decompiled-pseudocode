/*
 * XREFs of LdrpCgLogFailure @ 0x1800DA860
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByAddress @ 0x180008AE0 (LdrpFindLoadedDllByAddress.c)
 *     RtlRunOnceExecuteOnce @ 0x1800328D0 (RtlRunOnceExecuteOnce.c)
 *     RtlCaptureStackBackTrace @ 0x18007A3C0 (RtlCaptureStackBackTrace.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18007CB24 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18007CD5C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

char __fastcall LdrpCgLogFailure(__int64 a1)
{
  void *ImageBaseAddress; // rsi
  USHORT v3; // ax
  unsigned __int64 v4; // r14
  unsigned __int64 i; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int16 *v8; // rax
  int v9; // ecx
  unsigned __int16 *v10; // rax
  int v11; // ecx
  unsigned __int16 *v12; // rax
  int v13; // ecx
  unsigned __int16 *v14; // rax
  int v15; // ecx
  int v17; // [rsp+38h] [rbp-D0h] BYREF
  ULONG BackTraceHash; // [rsp+3Ch] [rbp-CCh] BYREF
  ULONG v19; // [rsp+40h] [rbp-C8h] BYREF
  int v20; // [rsp+44h] [rbp-C4h] BYREF
  void *v21; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v24[24]; // [rsp+60h] [rbp-A8h] BYREF
  _EVENT_DATA_DESCRIPTOR v25; // [rsp+78h] [rbp-90h] BYREF
  void **v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  _DWORD *v28; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  __int64 v30; // [rsp+B8h] [rbp-50h]
  _DWORD v31[2]; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  __int64 v34; // [rsp+D8h] [rbp-30h]
  _DWORD v35[2]; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD *v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  __int64 v38; // [rsp+F8h] [rbp-10h]
  _DWORD v39[2]; // [rsp+100h] [rbp-8h] BYREF
  _DWORD *v40; // [rsp+108h] [rbp+0h]
  __int64 v41; // [rsp+110h] [rbp+8h]
  __int64 v42; // [rsp+118h] [rbp+10h]
  _DWORD v43[2]; // [rsp+120h] [rbp+18h] BYREF
  __int64 *v44; // [rsp+128h] [rbp+20h]
  __int64 v45; // [rsp+130h] [rbp+28h]
  ULONG *v46; // [rsp+138h] [rbp+30h]
  __int64 v47; // [rsp+140h] [rbp+38h]
  int *v48; // [rsp+148h] [rbp+40h]
  __int64 v49; // [rsp+150h] [rbp+48h]
  int *v50; // [rsp+158h] [rbp+50h]
  __int64 v51; // [rsp+160h] [rbp+58h]
  PVOID *v52; // [rsp+168h] [rbp+60h]
  int v53; // [rsp+170h] [rbp+68h]
  int v54; // [rsp+174h] [rbp+6Ch]
  __int64 *v55; // [rsp+178h] [rbp+70h]
  __int64 v56; // [rsp+180h] [rbp+78h]
  __int64 v57; // [rsp+188h] [rbp+80h] BYREF
  __int64 v58; // [rsp+190h] [rbp+88h]
  __int64 v59; // [rsp+198h] [rbp+90h]
  __int64 v60; // [rsp+1A0h] [rbp+98h]
  PVOID BackTrace[32]; // [rsp+288h] [rbp+180h] BYREF

  RtlRunOnceExecuteOnce(&CastGuardTelemetryInitRunOnce, (PRTL_RUN_ONCE_INIT_FN)CastGuardTelemetryInitOnce, 0LL, 0LL);
  ImageBaseAddress = NtCurrentPeb()->ImageBaseAddress;
  v3 = RtlCaptureStackBackTrace(1u, 0x20u, BackTrace, &BackTraceHash);
  v4 = v3;
  for ( i = 0LL; i < v4; ++i )
  {
    if ( i >= 0x20 )
      break;
    LOBYTE(v3) = LdrpFindLoadedDllByAddress((unsigned __int64)BackTrace[i], (unsigned __int64 *)&v57 + i, 0LL);
  }
  if ( (unsigned int)dword_1801819A8 > 5 )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)&dword_1801819A8, 0x400000000000LL);
    if ( (_BYTE)v3 )
    {
      v21 = ImageBaseAddress;
      v26 = &v21;
      v27 = 8LL;
      if ( v57 )
        v8 = (unsigned __int16 *)(v57 + 88);
      else
        v8 = (unsigned __int16 *)v24;
      v9 = *v8;
      v30 = *((_QWORD *)v8 + 1);
      v28 = v31;
      v29 = 2LL;
      v31[0] = v9;
      v31[1] = 0;
      if ( v58 )
        v10 = (unsigned __int16 *)(v58 + 88);
      else
        v10 = (unsigned __int16 *)v24;
      v11 = *v10;
      v34 = *((_QWORD *)v10 + 1);
      v32 = v35;
      v33 = 2LL;
      v35[0] = v11;
      v35[1] = 0;
      if ( v59 )
        v12 = (unsigned __int16 *)(v59 + 88);
      else
        v12 = (unsigned __int16 *)v24;
      v13 = *v12;
      v38 = *((_QWORD *)v12 + 1);
      v36 = v39;
      v37 = 2LL;
      v39[0] = v13;
      v39[1] = 0;
      if ( v60 )
        v14 = (unsigned __int16 *)(v60 + 88);
      else
        v14 = (unsigned __int16 *)v24;
      v15 = *v14;
      v42 = *((_QWORD *)v14 + 1);
      v44 = &v22;
      v19 = BackTraceHash;
      v46 = &v19;
      v20 = v4;
      v43[0] = v15;
      v53 = 8 * v4;
      v40 = v43;
      v48 = &v20;
      v55 = &v23;
      v50 = &v17;
      v52 = BackTrace;
      v41 = 2LL;
      v43[1] = 0;
      v22 = a1;
      v45 = 8LL;
      v47 = 4LL;
      v49 = 4LL;
      LOWORD(v17) = v4;
      v51 = 2LL;
      v54 = 0;
      v23 = 0x1000000LL;
      v56 = 8LL;
      LOBYTE(v3) = tlgWriteTransfer_EtwEventWriteTransfer(
                     (__int64)&dword_1801819A8,
                     (unsigned __int8 *)dword_18014DF14,
                     v6,
                     v7,
                     0x11u,
                     &v25);
    }
  }
  return v3;
}
