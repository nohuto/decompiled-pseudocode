/*
 * XREFs of NtUserCalculatePopupWindowPosition @ 0x1C01F17C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _MonitorFromPoint @ 0x1C007B350 (_MonitorFromPoint.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x1C015A024 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C015A044 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     FindBestPos @ 0x1C0245C74 (FindBestPos.c)
 */

__int64 __fastcall NtUserCalculatePopupWindowPosition(__int64 a1, __int64 a2, int a3, __int128 *a4, _DWORD *a5)
{
  __int64 *v7; // r14
  unsigned __int64 *v8; // rdi
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r14
  struct tagMONITOR *v15; // r13
  int BestPos; // ebx
  _BYTE *v17; // rcx
  __int64 v19; // [rsp+50h] [rbp-A8h]
  __int64 v20; // [rsp+60h] [rbp-98h]
  __int64 v21[7]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v22; // [rsp+A8h] [rbp-50h] BYREF

  v7 = (__int64 *)a2;
  v8 = (unsigned __int64 *)a1;
  v21[2] = a1;
  v21[3] = a2;
  v22 = 0LL;
  v9 = 0;
  EnterCrit(0LL, 0LL);
  if ( (a3 & 0xFFFE0200) != 0 )
  {
    v11 = 1004LL;
LABEL_3:
    UserSetLastError(v11, v10);
    goto LABEL_28;
  }
  if ( !a5 )
  {
    v11 = 87LL;
    goto LABEL_3;
  }
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (__int128 *)MmUserProbeAddress;
    v22 = *a4;
    a4 = &v22;
  }
  if ( (unsigned __int64)v7 >= MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  v19 = *v7;
  if ( (int)*v7 < 0 || (HIDWORD(*v7) & 0x80000000) != 0 )
  {
    UserSetLastError(87LL, v10);
  }
  else
  {
    if ( (unsigned __int64)v8 >= MmUserProbeAddress )
      v8 = (unsigned __int64 *)MmUserProbeAddress;
    v13 = *v8;
    v21[4] = v13;
    v20 = v13;
    v14 = HIDWORD(v13);
    v15 = (struct tagMONITOR *)MonitorFromPoint(v13, 2u, 0);
    if ( (a3 & 4) != 0 )
    {
      LODWORD(v13) = v13 - (int)v19 / 2;
    }
    else if ( (a3 & 8) != 0 )
    {
      LODWORD(v13) = v13 - v19;
    }
    if ( (a3 & 0x10) != 0 )
    {
      LODWORD(v14) = SHIDWORD(v19) / -2 + v14;
    }
    else if ( (a3 & 0x20) != 0 )
    {
      LODWORD(v14) = v14 - HIDWORD(v19);
    }
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v21, 0LL);
    BestPos = FindBestPos(v13, v14, (__int64)a4, a3 | 0x20000u, (__int64)v21, v15, v20);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v21);
    v17 = a5;
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v17 = (_BYTE *)MmUserProbeAddress;
    *v17 = *v17;
    v17[15] = v17[15];
    *a5 = (__int16)BestPos;
    a5[1] = SHIWORD(BestPos);
    a5[2] = v19 + (__int16)BestPos;
    v12 = (unsigned int)(SHIWORD(BestPos) + HIDWORD(v19));
    a5[3] = v12;
    v9 = 1;
  }
LABEL_28:
  UserSessionSwitchLeaveCrit(v12);
  return v9;
}
