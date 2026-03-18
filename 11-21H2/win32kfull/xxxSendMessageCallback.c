/*
 * XREFs of xxxSendMessageCallback @ 0x1C00ACE14
 * Callers:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C00A9418 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     xxxBroadcastMessageEx @ 0x1C00A9E58 (xxxBroadcastMessageEx.c)
 *     xxxCapture @ 0x1C00AA7F8 (xxxCapture.c)
 *     xxxSendNotifyMessage @ 0x1C00ACBA0 (xxxSendNotifyMessage.c)
 *     ?xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00ACCB0 (-xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00C9AD0 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01EDC90 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     FreeDelayedHooks @ 0x1C0023FA0 (FreeDelayedHooks.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     SfnDWORD @ 0x1C004DC40 (SfnDWORD.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00514D0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxInterSendMsgEx @ 0x1C00517B0 (xxxInterSendMsgEx.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C00AD240 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ.c)
 *     xxxBroadcastMessage @ 0x1C012015C (xxxBroadcastMessage.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C0159D38 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxSendMessageCallback(
        struct tagWND *a1,
        __int64 a2,
        unsigned __int64 a3,
        void **a4,
        void (__fastcall *a5)(struct tagWND *, _QWORD, __int64, __int64),
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  __int64 v10; // r14
  __int64 *v12; // rbx
  int v13; // esi
  ULONG_PTR v14; // r9
  __int64 v15; // rax
  __int64 *v16; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  BOOL v21; // ecx
  _DWORD *v22; // rcx
  unsigned int *v23; // rdx
  unsigned int v24; // ecx
  unsigned __int64 v25; // rdx
  BOOL v26; // ecx
  int v27; // [rsp+50h] [rbp-E8h]
  int v28; // [rsp+50h] [rbp-E8h]
  __int64 v29; // [rsp+58h] [rbp-E0h] BYREF
  unsigned __int64 v30; // [rsp+60h] [rbp-D8h]
  __int64 v31; // [rsp+68h] [rbp-D0h]
  __int64 v32[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v33; // [rsp+80h] [rbp-B8h]
  __int128 v34; // [rsp+90h] [rbp-A8h]
  int v35; // [rsp+A0h] [rbp-98h]
  __int64 v36; // [rsp+A8h] [rbp-90h]
  ULONG_PTR BugCheckParameter3; // [rsp+B0h] [rbp-88h]
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp-80h]
  _BYTE v39[56]; // [rsp+C0h] [rbp-78h] BYREF

  v31 = (__int64)a4;
  v30 = a3;
  v10 = (unsigned int)a2;
  BugCheckParameter2 = (ULONG_PTR)a1;
  v12 = 0LL;
  v29 = 0LL;
  *(_OWORD *)v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v13 = 1;
  if ( a5 || (v27 = 1, a6 != 1) )
    v27 = 0;
  if ( (unsigned int)a2 >= 0x400 )
  {
    v18 = 0;
  }
  else
  {
    if ( !_bittest16(&MessageTable[(unsigned int)a2], 9u) && ((_DWORD)a2 != 537 || (a3 & 0x8000) == 0) )
      goto LABEL_7;
    v18 = 1;
  }
  if ( v18 )
  {
    UserSetLastError(1159LL, a2);
    return 0LL;
  }
LABEL_7:
  if ( a1 == (struct tagWND *)-1LL )
  {
    if ( a5 )
    {
      v13 = 3;
      v32[0] = (__int64)a5;
      v32[1] = a6;
      LODWORD(v33) = a7;
      v12 = v32;
    }
    return xxxBroadcastMessage(0, a2, a3, (_DWORD)a4, v13, (__int64)v12, a8);
  }
  else
  {
    v14 = 0LL;
    BugCheckParameter3 = 0LL;
    if ( a1 )
    {
      v15 = *(_QWORD *)a1;
      v36 = *(_QWORD *)a1;
    }
    else
    {
      LOWORD(v15) = 0;
      v36 = 0LL;
    }
    v35 = (unsigned __int16)v15;
    if ( (unsigned __int64)(unsigned __int16)v15 >= *(_QWORD *)(gpsi + 8LL)
      || (v14 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v15 * LODWORD(gSharedInfo[2]),
          *(struct tagWND **)(gpKernelHandleTable + 24LL * (unsigned __int16)v15) != a1)
      || *(_BYTE *)(v14 + 24) != 1 )
    {
      KeBugCheckEx(0x197u, 1uLL, (ULONG_PTR)a1, v14, 1uLL);
    }
    if ( !v27 && gptiCurrent == *((_QWORD *)a1 + 2) )
    {
      SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v39);
      if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x20) != 0 )
      {
        v21 = (unsigned int)v10 < 0x400 && ((unsigned __int16)MessageTable[v10] >> 14) & 1;
        if ( !v21 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 4) == 0 )
        {
          *((_QWORD *)&v33 + 1) = *(_QWORD *)a1;
          LODWORD(v33) = v10;
          v32[1] = v30;
          v32[0] = v31;
          *(_QWORD *)&v34 = 0LL;
          xxxCallHook(0, 0LL, (__int64)v32, 4);
        }
      }
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v39);
      FreeDelayedHooks();
      v19 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v19 + 18) & 4) != 0 )
      {
        v25 = *(_QWORD *)(v19 + 120);
        if ( v25 >= 7 )
          return 0LL;
        v20 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, __int64))(&gServerHandlers)[v25])(
                a1,
                (unsigned int)v10,
                v30,
                v31);
        v29 = v20;
      }
      else
      {
        xxxSendMessageToClient(a1, v10, v30, v31, 0LL, 0, &v29);
        v20 = v29;
      }
      if ( a5 )
      {
        if ( a7 )
        {
          v22 = *(_DWORD **)(gptiCurrent + 448LL);
          v28 = *v22 & 8;
          *v22 |= 4u;
          **(_DWORD **)(gptiCurrent + 448LL) |= 8u;
          if ( (_DWORD)v10 == 576 || (_DWORD)v10 == 281 )
            ((void (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, void (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64), _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v10]])(
              a1,
              (unsigned int)v10,
              a6,
              v29,
              a5,
              *(_QWORD *)(gpsi + 752LL),
              1,
              0LL);
          else
            SfnDWORD((__int64 *)a1, v10, a6, v29, (__int64)a5, *(_QWORD *)(gpsi + 752LL));
          **(_DWORD **)(gptiCurrent + 448LL) &= ~4u;
          v23 = *(unsigned int **)(gptiCurrent + 448LL);
          v24 = *v23 | 8;
          if ( !v28 )
            v24 = *v23 & 0xFFFFFFF7;
          *v23 = v24;
        }
        else
        {
          a5(a1, (unsigned int)v10, a6, v20);
        }
      }
      SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v39);
      if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x2000) != 0 )
      {
        v26 = (unsigned int)v10 < 0x400 && ((unsigned __int16)MessageTable[v10] >> 14) & 1;
        if ( !v26 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 4) == 0 )
        {
          v34 = *(unsigned __int64 *)a1;
          DWORD2(v33) = v10;
          *(_QWORD *)&v33 = v30;
          v32[1] = v31;
          v32[0] = v29;
          xxxCallHook(0, 0LL, (__int64)v32, 12);
        }
      }
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v39);
      FreeDelayedHooks();
      return 1LL;
    }
    else
    {
      v16 = 0LL;
      if ( a5 )
      {
        LODWORD(v32[0]) = a7 != 0 ? 257 : 1;
        v32[1] = (__int64)a5;
        *(_QWORD *)&v33 = a6;
        v16 = v32;
      }
      return xxxInterSendMsgEx(a1, a2, a3, a4, 0, *((struct tagTHREADINFO **)a1 + 2), (__int64)v16, a8, a9);
    }
  }
}
