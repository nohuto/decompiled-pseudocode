/*
 * XREFs of ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00673D0
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C0067010 (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0012434 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     HMAllocObject @ 0x1C0012A00 (HMAllocObject.c)
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     ThreadUnlock1 @ 0x1C0045EE0 (ThreadUnlock1.c)
 *     _HMPheFromObject @ 0x1C00481A0 (_HMPheFromObject.c)
 *     Win32AllocPoolZInit @ 0x1C004F080 (Win32AllocPoolZInit.c)
 *     HMAssignmentLock @ 0x1C004FF50 (HMAssignmentLock.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C0064820 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0064AFC (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     SetGlobalKeyboardTableInfo @ 0x1C0066A24 (SetGlobalKeyboardTableInfo.c)
 *     ?LoadKeyboardLayoutW@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@@Z @ 0x1C0066AD8 (-LoadKeyboardLayoutW@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@@Z.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0066FA8 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C0067D6C (ApiSetEditionNotifyShellLanguageHook.c)
 *     HKLtoPKL @ 0x1C006C150 (HKLtoPKL.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C006C200 (xxxInternalActivateKeyboardLayout.c)
 *     DestroyKF @ 0x1C00BFF3C (DestroyKF.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C00C4464 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     xxxWindowEvent @ 0x1C00C4C0C (xxxWindowEvent.c)
 *     ApiSetEditionInitSystemCharsetInfoForLayout @ 0x1C00C9928 (ApiSetEditionInitSystemCharsetInfoForLayout.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ?GetKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00D5440 (-GetKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C01E4678 (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 */

HKL __fastcall xxxLoadKeyboardLayoutEx(
        struct tagWINDOWSTATION *a1,
        void *a2,
        HKL a3,
        unsigned int a4,
        unsigned int a5,
        wchar_t *a6,
        const unsigned __int16 *a7,
        signed int a8,
        unsigned int a9)
{
  int v9; // ebx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // r12
  unsigned int v14; // esi
  struct tagKL *v15; // rax
  __int64 v16; // r9
  __int64 v17; // rcx
  struct tagKL *KbdLayoutListHead; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  bool i; // zf
  int v23; // eax
  char *v24; // rax
  const unsigned __int16 *v25; // r9
  struct tagKBDFILE *KeyboardLayoutFile; // rbx
  __int64 v27; // r8
  __int64 v28; // rax
  const WCHAR **v29; // r13
  __int64 v30; // rax
  unsigned int v31; // ebx
  unsigned int v32; // r13d
  struct tagKBDFILE *v33; // rax
  __int64 v34; // rcx
  const WCHAR *v35; // rdx
  const WCHAR *v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  struct tagKL *v40; // rax
  __int64 v41; // rbx
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  int inited; // [rsp+40h] [rbp-C0h]
  PVOID Buffer[2]; // [rsp+50h] [rbp-B0h] BYREF
  PCWSTR SourceString[2]; // [rsp+60h] [rbp-A0h] BYREF
  void *v51; // [rsp+70h] [rbp-90h] BYREF
  __int64 v52; // [rsp+78h] [rbp-88h]
  __int64 v53; // [rsp+80h] [rbp-80h]
  __int64 *v54; // [rsp+90h] [rbp-70h] BYREF
  struct tagKBDFILE *v55; // [rsp+98h] [rbp-68h]
  HKL v56; // [rsp+A0h] [rbp-60h]
  __int128 v57; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v58; // [rsp+B8h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v60; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v61; // [rsp+E0h] [rbp-20h]

  v9 = (int)a3;
  SourceString[0] = a7;
  v11 = 0LL;
  v56 = a3;
  v51 = a2;
  v58 = 0LL;
  Buffer[0] = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v57 = 0LL;
  DestinationString = 0LL;
  if ( !a8 || a1 && (*((_DWORD *)a1 + 16) & 4) != 0 )
    return 0LL;
  v12 = gptiCurrent;
  if ( a3 )
  {
    v11 = HKLtoPKL(gptiCurrent, a3);
    if ( !v11 )
      return 0LL;
  }
  if ( a8 == v9 )
    return *(HKL *)(v11 + 40);
  v14 = a9;
  if ( (a9 & 0x40000000) == 0 )
  {
LABEL_19:
    KbdLayoutListHead = GetKbdLayoutListHead(a1);
    v21 = (__int64)KbdLayoutListHead;
    for ( i = KbdLayoutListHead == 0LL; ; i = KbdLayoutListHead == (struct tagKL *)v21 )
    {
      if ( i )
      {
        if ( qword_1C0296660
          && (int)qword_1C0296660(v17, v21) >= 0
          && (!qword_1C0296668 || !(unsigned int)qword_1C0296668((unsigned int)a8, a9, Buffer)) )
        {
          return 0LL;
        }
        inited = ApiSetEditionInitSystemCharsetInfoForLayout(SourceString[0], &v60);
        KeyboardLayoutFile = LoadKeyboardLayoutFile(v51, a4, a5, v25, a6 + 290, 0, 0);
        if ( KeyboardLayoutFile )
        {
          LOBYTE(v27) = 13;
          v28 = HMAllocObject(0LL, 0LL, v27, 160LL);
          KbdLayoutListHead = (struct tagKL *)v28;
          if ( v28 )
          {
            v29 = (const WCHAR **)(v28 + 56);
            v52 = (__int64)KeyboardLayoutFile;
            v51 = (void *)(v28 + 56);
            HMAssignmentLock((__int64 **)&v51, 1);
            if ( *(_DWORD *)a6 )
            {
              v30 = Win32AllocPoolZInit(8LL * *(unsigned int *)a6, 0x746B7355u);
              *((_QWORD *)KbdLayoutListHead + 12) = v30;
              if ( v30 )
              {
                v31 = 0;
                v32 = 0;
                if ( *(_DWORD *)a6 )
                {
                  do
                  {
                    if ( *(_QWORD *)&a6[8 * v31 + 324] )
                    {
                      a6[36 * v31 + 33] = 0;
                      v33 = LoadKeyboardLayoutFile(
                              *(void **)&a6[8 * v31 + 324],
                              *(unsigned int *)&a6[8 * v31 + 328],
                              *(unsigned int *)&a6[8 * v31 + 330],
                              (const unsigned __int16 *)(2LL * v31),
                              &a6[36 * v31 + 2],
                              *(_DWORD *)&a6[36 * v31 + 34],
                              *(_DWORD *)&a6[36 * v31 + 36]);
                      if ( !v33 )
                        break;
                      v34 = *((_QWORD *)KbdLayoutListHead + 12);
                      v55 = v33;
                      v54 = (__int64 *)(v34 + 8LL * v32);
                      HMAssignmentLock(&v54, 0);
                      ++v32;
                    }
                    ++v31;
                  }
                  while ( v31 < *(_DWORD *)a6 );
                  v14 = a9;
                }
                *((_DWORD *)KbdLayoutListHead + 22) = v32;
                v29 = (const WCHAR **)((char *)KbdLayoutListHead + 56);
              }
            }
            v35 = SourceString[0];
            *((_DWORD *)KbdLayoutListHead + 8) = 0;
            *((_WORD *)KbdLayoutListHead + 37) = 0;
            *((_QWORD *)KbdLayoutListHead + 5) = a8;
            *((_QWORD *)KbdLayoutListHead + 2) = KbdLayoutListHead;
            *((_QWORD *)KbdLayoutListHead + 3) = KbdLayoutListHead;
            RtlInitUnicodeString(&DestinationString, v35);
            RtlUnicodeStringToInteger(&DestinationString, 0x10u, (PULONG)KbdLayoutListHead + 28);
            if ( (*((_DWORD *)a6 + 194) & 1) != 0 )
              *((_DWORD *)KbdLayoutListHead + 8) |= 0x80000000;
            v36 = *v29;
            SourceString[0] = (PCWSTR)((char *)KbdLayoutListHead + 48);
            SourceString[1] = v36;
            HMAssignmentLock((__int64 **)SourceString, 1);
            v37 = *((_DWORD *)a6 + 195);
            v38 = *((_QWORD *)KbdLayoutListHead + 6);
            if ( !v37 )
              v37 = *(_DWORD *)(*(_QWORD *)(v38 + 32) + 96LL);
            *((_DWORD *)KbdLayoutListHead + 26) = v37;
            v39 = *((_DWORD *)a6 + 196);
            if ( !v39 )
              v39 = *(_DWORD *)(*(_QWORD *)(v38 + 32) + 100LL);
            *((_DWORD *)KbdLayoutListHead + 27) = v39;
            *((_DWORD *)KbdLayoutListHead + 29) = *((_DWORD *)a6 + 195);
            *((_DWORD *)KbdLayoutListHead + 30) = *((_DWORD *)a6 + 196);
            *(_DWORD *)(*(_QWORD *)(v38 + 32) + 80LL) |= (v14 >> 15) & 7;
            *((PVOID *)KbdLayoutListHead + 10) = Buffer[0];
            if ( inited )
            {
              *((_WORD *)KbdLayoutListHead + 36) = WORD2(v60);
              *((_DWORD *)KbdLayoutListHead + 16) = HIDWORD(v61);
              *((_DWORD *)KbdLayoutListHead + 17) = v60;
            }
            else
            {
              *((_WORD *)KbdLayoutListHead + 36) = 0;
              *((_QWORD *)KbdLayoutListHead + 8) = 1LL;
            }
            RtlStringCchCopyNW((char *)KbdLayoutListHead + 124, 16LL, (char *)(*((_QWORD *)v12 + 53) + 1000LL), 0x10uLL);
            v40 = GetKbdLayoutListHead(a1);
            if ( v40 )
            {
              *((_QWORD *)KbdLayoutListHead + 2) = v40;
              *((_QWORD *)KbdLayoutListHead + 3) = *((_QWORD *)v40 + 3);
              *(_QWORD *)(*((_QWORD *)v40 + 3) + 16LL) = KbdLayoutListHead;
              *((_QWORD *)v40 + 3) = KbdLayoutListHead;
            }
            else
            {
              LockKbdLayoutListHead(a1, KbdLayoutListHead);
            }
            InputTraceLogging::Keyboard::LoadKeyboardLayoutW(KbdLayoutListHead);
            goto LABEL_60;
          }
          DestroyKF(KeyboardLayoutFile);
        }
        if ( Buffer[0] )
          Win32FreePool((char *)Buffer[0]);
        return 0LL;
      }
      if ( *((_QWORD *)KbdLayoutListHead + 5) == a8 )
      {
        v23 = *((_DWORD *)KbdLayoutListHead + 8);
        if ( v23 >= 0 )
          break;
      }
      KbdLayoutListHead = (struct tagKL *)*((_QWORD *)KbdLayoutListHead + 2);
    }
    if ( (v23 & 0x20000000) != 0 )
    {
      v24 = HMPheFromObject(KbdLayoutListHead, v21, v19, v20);
      v24[25] &= ~1u;
      *((_DWORD *)KbdLayoutListHead + 8) &= ~0x20000000u;
      InputTraceLogging::Keyboard::LoadKeyboardLayoutW(KbdLayoutListHead);
    }
    else if ( (a9 & 0x40000000) == 0 )
    {
      v14 = a9 & 0xFFFFFF7F;
    }
LABEL_60:
    *(_QWORD *)&v57 = *((_QWORD *)v12 + 52);
    *((_QWORD *)v12 + 52) = &v57;
    *((_QWORD *)&v57 + 1) = KbdLayoutListHead;
    _InterlockedIncrement((volatile signed __int32 *)KbdLayoutListHead + 2);
    if ( v56 )
    {
      v41 = HKLtoPKL(v12, v56);
      if ( v41 )
      {
        v51 = (void *)*((_QWORD *)v12 + 52);
        *((_QWORD *)v12 + 52) = &v51;
        v53 = 0LL;
        v52 = v41;
        _InterlockedIncrement((volatile signed __int32 *)(v41 + 8));
        xxxSetPKLinThreads(KbdLayoutListHead, (struct tagKL *)v41);
        xxxInternalUnloadKeyboardLayout(a1, (struct tagKL *)v41, 0x80000000LL, v42);
        ThreadUnlock1();
      }
    }
    if ( (v14 & 8) != 0 )
      ReorderKeyboardLayouts(a1, KbdLayoutListHead);
    xxxWindowEvent(0x80000000, 0, 0, 0, 0);
    if ( (v14 & 0x80u) == 0 )
      ApiSetEditionNotifyShellLanguageHook(v12, 0LL, 0LL);
    if ( (v14 & 1) != 0 )
      xxxInternalActivateKeyboardLayout(a1, KbdLayoutListHead, v14, 0LL);
    if ( (v14 & 0x40000000) != 0 )
    {
      SetGlobalKeyboardTableInfo((__int64)KbdLayoutListHead, v43, v44, v45);
      v55 = KbdLayoutListHead;
      v54 = &gspklBaseLayout;
      HMAssignmentLock(&v54, 0);
      xxxSetPKLinThreads(KbdLayoutListHead, 0LL);
    }
    if ( (v14 & 0x80000000) != 0 && !gspklBaseLayout )
      SetGlobalKeyboardTableInfo((__int64)KbdLayoutListHead, v43, v44, v45);
    v46 = ThreadUnlock1();
    if ( v46 )
      return *(HKL *)(v46 + 40);
    return 0LL;
  }
  if ( PsGetThreadProcessId(*(PETHREAD *)v12) == (HANDLE)gpidLogon )
  {
    if ( !a1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2052LL);
    if ( qword_1C0296670 && (int)qword_1C0296670() >= 0 && qword_1C0296678 )
      qword_1C0296678(a1);
    while ( 1 )
    {
      v15 = (struct tagKL *)HKLtoPKL(gptiCurrent, 1LL);
      if ( !v15 )
        break;
      xxxInternalUnloadKeyboardLayout(a1, v15, 0x80000000LL, v16);
    }
    goto LABEL_19;
  }
  UserSetLastError(1004);
  return 0LL;
}
