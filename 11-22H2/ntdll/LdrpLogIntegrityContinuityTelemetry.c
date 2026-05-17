/*
 * XREFs of LdrpLogIntegrityContinuityTelemetry @ 0x1800DC0A0
 * Callers:
 *     LdrpValidateIntegrityContinuity @ 0x180088520 (LdrpValidateIntegrityContinuity.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180032A30 (RtlRunOnceExecuteOnce.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18007C4B4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18007C6EC (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x18009F4B0 (NtQuerySystemInformation.c)
 *     RtlCaptureContext @ 0x1800A3110 (RtlCaptureContext.c)
 *     RtlReportException @ 0x1800E6D10 (RtlReportException.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLogIntegrityContinuityTelemetry(__int64 a1, int a2, int a3, int a4, char a5)
{
  __int64 v9; // rax
  int v10; // esi
  unsigned __int16 *v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // ecx
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  int v18; // [rsp+40h] [rbp-C8h] BYREF
  int v19; // [rsp+44h] [rbp-C4h] BYREF
  int v20; // [rsp+48h] [rbp-C0h] BYREF
  int v21; // [rsp+4Ch] [rbp-BCh] BYREF
  int v22; // [rsp+50h] [rbp-B8h] BYREF
  int v23; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  __int64 SystemInformation; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD v26[4]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+78h] [rbp-90h]
  int v28; // [rsp+80h] [rbp-88h]
  __int64 v29; // [rsp+88h] [rbp-80h]
  struct _CONTEXT ContextRecord; // [rsp+108h] [rbp+0h] BYREF
  char v31[32]; // [rsp+5D8h] [rbp+4D0h] BYREF
  _DWORD *v32; // [rsp+5F8h] [rbp+4F0h]
  __int64 v33; // [rsp+600h] [rbp+4F8h]
  __int64 v34; // [rsp+608h] [rbp+500h]
  _DWORD v35[2]; // [rsp+610h] [rbp+508h] BYREF
  int *v36; // [rsp+618h] [rbp+510h]
  __int64 v37; // [rsp+620h] [rbp+518h]
  int *v38; // [rsp+628h] [rbp+520h]
  __int64 v39; // [rsp+630h] [rbp+528h]
  int *v40; // [rsp+638h] [rbp+530h]
  __int64 v41; // [rsp+640h] [rbp+538h]
  int *v42; // [rsp+648h] [rbp+540h]
  __int64 v43; // [rsp+650h] [rbp+548h]
  _DWORD *v44; // [rsp+658h] [rbp+550h]
  __int64 v45; // [rsp+660h] [rbp+558h]
  __int64 v46; // [rsp+668h] [rbp+560h]
  _DWORD v47[2]; // [rsp+670h] [rbp+568h] BYREF
  int *v48; // [rsp+678h] [rbp+570h]
  __int64 v49; // [rsp+680h] [rbp+578h]
  int *v50; // [rsp+688h] [rbp+580h]
  __int64 v51; // [rsp+690h] [rbp+588h]
  int *v52; // [rsp+698h] [rbp+590h]
  __int64 v53; // [rsp+6A0h] [rbp+598h]
  __int64 *v54; // [rsp+6A8h] [rbp+5A0h]
  __int64 v55; // [rsp+6B0h] [rbp+5A8h]
  int *v56; // [rsp+6B8h] [rbp+5B0h]
  __int64 v57; // [rsp+6C0h] [rbp+5B8h]

  SystemInformation = 0LL;
  if ( (int)RtlRunOnceExecuteOnce(
              &LibLoaderTelemetryInitRunOnce,
              (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))LibLoaderTelemetryInitOnce,
              0LL,
              0LL) >= 0 )
  {
    v9 = *(_QWORD *)(a1 + 48);
    if ( v9 )
    {
      v10 = *(unsigned __int8 *)(v9 + 284);
      v11 = (unsigned __int16 *)(v9 + 72);
    }
    else
    {
      v11 = (unsigned __int16 *)&unk_1801325C0;
      v10 = -1;
    }
    LODWORD(SystemInformation) = 8;
    NtQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, 0LL);
    if ( (unsigned int)dword_18017E8E8 > 5 && tlgKeywordOn((__int64)&dword_18017E8E8, 0x800000000000LL) )
    {
      v13 = *(_QWORD *)(a1 + 56);
      v14 = *(unsigned __int16 *)(v13 + 72);
      v34 = *(_QWORD *)(v13 + 80);
      v35[0] = v14;
      v32 = v35;
      v33 = 2LL;
      v35[1] = 0;
      v17 = *(unsigned __int8 *)(v13 + 284);
      v36 = &v17;
      v18 = *(_DWORD *)(a1 + 32);
      v38 = &v18;
      v19 = *(_DWORD *)(a1 + 36);
      v40 = &v19;
      v42 = &v20;
      v44 = v47;
      v46 = *((_QWORD *)v11 + 1);
      v47[0] = *v11;
      v48 = &v21;
      v50 = &v22;
      v23 = HIDWORD(SystemInformation);
      v52 = &v23;
      v54 = &v24;
      LOBYTE(v16) = a5;
      v56 = &v16;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 4LL;
      v20 = a3;
      v43 = 4LL;
      v45 = 2LL;
      v47[1] = 0;
      v21 = v10;
      v49 = 4LL;
      v22 = a2;
      v51 = 4LL;
      v53 = 4LL;
      LODWORD(v24) = a4;
      v55 = 4LL;
      v57 = 1LL;
      tlgWriteTransfer_EtwEventWriteTransfer(
        (__int64)&dword_18017E8E8,
        byte_18014AA3D,
        (__int64)v35,
        v12,
        15,
        (__int64)v31);
    }
  }
  RtlCaptureContext(&ContextRecord);
  memset_thunk_772440563353939046(v26, 0, 0x98uLL);
  v26[0] = -1073740791;
  v26[1] = 0;
  v27 = 0LL;
  v28 = 1;
  v29 = 45LL;
  return RtlReportException(v26, &ContextRecord, 30LL);
}
