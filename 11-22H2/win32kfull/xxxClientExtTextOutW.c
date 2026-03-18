/*
 * XREFs of xxxClientExtTextOutW @ 0x1C021212C
 * Callers:
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0225E60 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022C094 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0233FEC (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0022D84 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0024328 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0024460 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     GreSaveDCInternal @ 0x1C0092580 (GreSaveDCInternal.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBE98 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBF84 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     CreateCompatiblePublicDC @ 0x1C023F4DC (CreateCompatiblePublicDC.c)
 */

__int64 __fastcall xxxClientExtTextOutW(Gre::Base *a1, int a2, int a3, int a4, _OWORD *a5, PCWSTR SourceString, int a7)
{
  HDC CompatiblePublicDC; // r14
  __int64 MaximumLength; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int8 *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r12d
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 *v26; // rcx
  __int64 v27; // rbx
  _BYTE v28[4]; // [rsp+60h] [rbp-308h] BYREF
  int v29; // [rsp+64h] [rbp-304h] BYREF
  __int64 v30; // [rsp+68h] [rbp-300h]
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-2F8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-2F0h] BYREF
  __int64 v33; // [rsp+88h] [rbp-2E0h]
  _QWORD v34[3]; // [rsp+90h] [rbp-2D8h] BYREF
  __int128 v35; // [rsp+A8h] [rbp-2C0h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-2B0h]
  unsigned __int8 v37[112]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v38[512]; // [rsp+140h] [rbp-228h] BYREF

  LODWORD(v33) = a2;
  RegionSize = (ULONG_PTR)a1;
  memset_0(v37, 0, 0x68uLL);
  v34[0] = 0LL;
  v29 = 0;
  v30 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC((__int64)a1);
  v34[2] = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= 2 * (unsigned __int64)(unsigned int)(a7 + 1) )
    MaximumLength = 2LL * (unsigned int)(a7 + 1);
  v15 = AllocCallbackMessage(104, 1u, MaximumLength, v38, 1, 0x200uLL);
  v34[1] = v15;
  if ( !v15 )
  {
    if ( CompatiblePublicDC != (HDC)a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v30);
    }
    return 0LL;
  }
  PtiCurrentShared(v14, v13, v16, v17);
  v35 = 0LL;
  v36 = 0LL;
  if ( v15 != v37 && v15 != v38 )
    PushW32ThreadLock((__int64)v15, &v35, (__int64)Win32FreePool);
  *((_QWORD *)v15 + 7) = CompatiblePublicDC;
  *((_DWORD *)v15 + 16) = v33;
  *((_DWORD *)v15 + 17) = a3;
  *((_DWORD *)v15 + 18) = a4;
  v18 = (int)a5;
  if ( a5 )
  {
    *(_OWORD *)(v15 + 76) = *a5;
    v18 = 1;
  }
  *((_DWORD *)v15 + 24) = v18;
  *((_DWORD *)v15 + 23) = a7;
  *((_WORD *)v15 + 20) = DestinationString.Length;
  *((_WORD *)v15 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v15,
              (char *)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v15 + 6) < 0 )
    goto LABEL_23;
  v19 = GreSaveDCInternal(a1, 1);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)v28,
    v20,
    v21,
    v22);
  EtwTraceBeginCallback(80LL);
  *((_QWORD *)v15 + 2) = 0LL;
  v23 = KeUserModeCallback(80LL, v15, *(unsigned int *)v15, v34, &v29);
  EtwTraceEndCallback(80LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v28, v24, v25);
  GreRestoreDC(a1, v19);
  if ( CompatiblePublicDC != (HDC)a1 )
  {
    if ( v23 < 0 )
      goto LABEL_23;
    NtGdiBitBltInternal(
      (__int64)a1,
      0,
      0,
      *(_DWORD *)(gpDispInfo + 88LL),
      *(_DWORD *)(gpDispInfo + 92LL),
      CompatiblePublicDC,
      0,
      0,
      13369376,
      0,
      0);
  }
  if ( v23 >= 0 && v29 == 24 )
  {
    v26 = (__int64 *)v34[0];
    if ( (unsigned __int64)(v34[0] + 8LL) < v34[0] || v34[0] + 8LL > MmUserProbeAddress )
      v26 = (__int64 *)MmUserProbeAddress;
    v27 = *v26;
    v33 = *v26;
    goto LABEL_24;
  }
LABEL_23:
  LODWORD(v27) = 0;
LABEL_24:
  if ( CompatiblePublicDC != (HDC)a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v30);
  }
  if ( v15 != v37 && v15 != v38 )
  {
    if ( *((_QWORD *)v15 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v15 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v35);
  }
  return (unsigned int)v27;
}
