/*
 * XREFs of xxxClientGetTextExtentPointW @ 0x1C0212AAC
 * Callers:
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C0225BF8 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022C094 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0233E30 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C02382DC (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C024CCF8 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C024EEC0 (xxxPSMGetTextExtent.c)
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

__int64 __fastcall xxxClientGetTextExtentPointW(Gre::Base *a1, PCWSTR SourceString, int a3, _QWORD *a4)
{
  __int64 v5; // r12
  HDC CompatiblePublicDC; // r14
  __int64 MaximumLength; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r12d
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // rcx
  ULONG64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rcx
  _QWORD *v29; // rcx
  _BYTE v30[4]; // [rsp+60h] [rbp-308h] BYREF
  int v31; // [rsp+64h] [rbp-304h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-300h] BYREF
  unsigned __int64 v33; // [rsp+70h] [rbp-2F8h] BYREF
  __int64 v34; // [rsp+78h] [rbp-2F0h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-2E8h] BYREF
  unsigned __int8 *v36; // [rsp+90h] [rbp-2D8h]
  HDC v37; // [rsp+98h] [rbp-2D0h]
  __int128 v38; // [rsp+A0h] [rbp-2C8h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-2B8h]
  __int64 v40; // [rsp+B8h] [rbp-2B0h]
  unsigned __int8 v41[80]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v42[512]; // [rsp+120h] [rbp-248h] BYREF

  v5 = a3;
  RegionSize = (ULONG_PTR)a1;
  memset_0(v41, 0, sizeof(v41));
  v33 = 0LL;
  v31 = 0;
  v34 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC((__int64)a1);
  v37 = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned __int64)(2 * v5 + 2) )
    MaximumLength = 2 * v5 + 2;
  v13 = AllocCallbackMessage(80, 1u, MaximumLength, v42, 1, 0x200uLL);
  v36 = v13;
  if ( !v13 )
  {
    if ( CompatiblePublicDC != (HDC)a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v34);
    }
    return 0LL;
  }
  PtiCurrentShared(v12, v11, v14, v15);
  v38 = 0LL;
  v39 = 0LL;
  if ( v13 != v41 && v13 != v42 )
    PushW32ThreadLock((__int64)v13, &v38, (__int64)Win32FreePool);
  *((_QWORD *)v13 + 7) = CompatiblePublicDC;
  *((_DWORD *)v13 + 16) = v5;
  *((_WORD *)v13 + 20) = DestinationString.Length;
  *((_WORD *)v13 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v13,
              (char *)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v13 + 6) < 0 )
    goto LABEL_27;
  v16 = GreSaveDCInternal(a1, 1);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)v30,
    v17,
    v18,
    v19);
  EtwTraceBeginCallback(81LL);
  *((_QWORD *)v13 + 2) = 0LL;
  v20 = KeUserModeCallback(81LL, v13, *(unsigned int *)v13, &v33, &v31);
  EtwTraceEndCallback(81LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v30, v21, v22);
  GreRestoreDC(a1, v16);
  if ( CompatiblePublicDC != (HDC)a1 )
  {
    if ( v20 < 0 )
      goto LABEL_27;
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
  if ( v20 >= 0 && v31 == 24 )
  {
    v25 = (__int64 *)v33;
    v26 = v33 + 8;
    if ( v33 + 8 < v33 || v26 > MmUserProbeAddress )
      v25 = (__int64 *)MmUserProbeAddress;
    v27 = *v25;
    v40 = *v25;
    v28 = *((_QWORD *)PtiCurrentShared((__int64)v25, v26, v23, v24) + 64);
    if ( !v28 || (*(_DWORD *)(v28 + 84) & 1) == 0 || *(_QWORD **)(v28 + 96) != a4 )
    {
      v29 = *(_QWORD **)(v33 + 16);
      if ( v29 + 1 < v29 || (unsigned __int64)(v29 + 1) > MmUserProbeAddress )
        v29 = (_QWORD *)MmUserProbeAddress;
      *a4 = *v29;
      goto LABEL_28;
    }
  }
LABEL_27:
  LODWORD(v27) = 0;
LABEL_28:
  if ( CompatiblePublicDC != (HDC)a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v34);
  }
  if ( v13 != v41 && v13 != v42 )
  {
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v13 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v38);
  }
  return (unsigned int)v27;
}
