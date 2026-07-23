/*
 * XREFs of PiCMValidateDeviceInstance @ 0x14079A0A8
 * Callers:
 *     PiCMHandleIoctl @ 0x1406D0790 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x1406CE898 (_RegRtlQueryValue.c)
 *     _PnpOpenObjectRegKey @ 0x1406CF990 (_PnpOpenObjectRegKey.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140741628 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiCMReleaseObjectInputData @ 0x14079A2C8 (PiCMReleaseObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x14079A2F8 (PiCMReturnBasicResultData.c)
 *     PiCMCaptureObjectInputData @ 0x14079A374 (PiCMCaptureObjectInputData.c)
 *     _CmGetDeviceStatus @ 0x14079A758 (_CmGetDeviceStatus.c)
 *     PiAuDoesClientHaveAccess @ 0x14079AA78 (PiAuDoesClientHaveAccess.c)
 */

__int64 __fastcall PiCMValidateDeviceInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r12
  int v9; // ebx
  int v10; // edi
  int v11; // ebx
  int v13; // eax
  int v14; // [rsp+48h] [rbp-39h] BYREF
  int v15; // [rsp+4Ch] [rbp-35h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-31h] BYREF
  int v17; // [rsp+58h] [rbp-29h] BYREF
  int v18; // [rsp+5Ch] [rbp-25h] BYREF
  int v19; // [rsp+60h] [rbp-21h] BYREF
  __int128 v20; // [rsp+68h] [rbp-19h] BYREF
  int v21[4]; // [rsp+78h] [rbp-9h]
  __int64 v22; // [rsp+88h] [rbp+7h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp+Fh] BYREF

  v6 = a6;
  v14 = 0;
  v15 = 0;
  v19 = 0;
  *a6 = 0;
  v18 = 0;
  v17 = 0;
  Handle = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  *(_OWORD *)v21 = 0LL;
  LOBYTE(a6) = 1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, &v20);
  if ( v9 < 0 )
    goto LABEL_17;
  v10 = DWORD1(v20);
  if ( *(_QWORD *)v21 && (unsigned int)(DWORD1(v20) - 1) <= 1 && DWORD2(v20) == 1 && !v21[3] && a3 && a4 >= 8 )
  {
    v11 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, *(__int64 *)v21, 1u, 1, 0, (__int64)&Handle);
    if ( v11 >= 0 )
    {
      if ( v10 == 2 && (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
      {
LABEL_19:
        LODWORD(a6) = 4;
        if ( (int)RegRtlQueryValue(Handle, L"Phantom", &v14, &v15, (unsigned int *)&a6) >= 0
          && v14 == 4
          && (_DWORD)a6 == 4 )
        {
          v13 = v11;
          if ( v15 )
            v13 = -1073741810;
          v11 = v13;
        }
        goto LABEL_14;
      }
      SeCaptureSubjectContext(&SubjectContext);
      v11 = PiPnpRtlApplyMandatoryFilters(
              *(__int64 *)&PiPnpRtlCtx,
              *(__int64 *)v21,
              1,
              (__int64)Handle,
              &SubjectContext,
              &a6);
      SeReleaseSubjectContext(&SubjectContext);
      if ( v11 >= 0 )
      {
        if ( !(_BYTE)a6 )
          goto LABEL_21;
        if ( v10 == 2 )
          goto LABEL_19;
        if ( (int)CmGetDeviceStatus(
                    PiPnpRtlCtx,
                    v21[0],
                    (_DWORD)Handle,
                    (unsigned int)&v19,
                    (__int64)&v18,
                    (__int64)&v17) < 0 )
LABEL_21:
          v11 = -1073741810;
      }
    }
  }
  else
  {
    v11 = -1073741811;
  }
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  v9 = PiCMReturnBasicResultData((unsigned int)v11, (unsigned int)v22, a3, a4, v6);
LABEL_17:
  PiCMReleaseObjectInputData(&v20);
  return (unsigned int)v9;
}
