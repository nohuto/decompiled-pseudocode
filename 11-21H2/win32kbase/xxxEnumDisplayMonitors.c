/*
 * XREFs of xxxEnumDisplayMonitors @ 0x1C006E680
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x1C006E560 (NtUserEnumDisplayMonitors.c)
 * Callees:
 *     GetMonitorDC @ 0x1C00183FC (GetMonitorDC.c)
 *     GreGetClipBox @ 0x1C001BC60 (GreGetClipBox.c)
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     ReleaseCacheDC @ 0x1C002A470 (ReleaseCacheDC.c)
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C002C87C (IS_USERCRIT_OWNED_SHARED.c)
 *     GreLockVisRgn @ 0x1C002DE80 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C002E140 (GreUnlockVisRgn.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002EA80 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ThreadUnlock1 @ 0x1C0030C00 (ThreadUnlock1.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C006D24C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C006D270 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C006D5A0 (TransformRectBetweenCoordinateSpaces.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C006EAC4 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly.c)
 *     IntersectRect @ 0x1C006EC48 (IntersectRect.c)
 *     GetMonitorRect @ 0x1C006ECBC (GetMonitorRect.c)
 *     GetScreenRectForDpi @ 0x1C006ED5C (GetScreenRectForDpi.c)
 *     GetCurrentThreadCompositedDpi @ 0x1C006EDE4 (GetCurrentThreadCompositedDpi.c)
 *     LookupDC @ 0x1C0071B50 (LookupDC.c)
 *     GreGetDCPoint @ 0x1C00AB470 (GreGetDCPoint.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C00C4C54 (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     GreIntersectClipRect @ 0x1C00CA500 (GreIntersectClipRect.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxEnumDisplayMonitors(
        HDC a1,
        __int64 a2,
        __int64 (__fastcall *a3)(struct tagMONITOR *, HDC, struct tagRECT *, __int64),
        __int64 a4,
        int a5)
{
  unsigned int v6; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r13
  __int64 v11; // rdi
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // r15d
  struct tagMONITOR *i; // rdi
  HDC MonitorDC; // r12
  unsigned int v18; // eax
  char v19; // r13
  __int64 v21; // rax
  int v22; // ecx
  struct tagMONITOR *v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+30h] [rbp-D0h]
  __int64 v26; // [rsp+38h] [rbp-C8h]
  __int64 v29; // [rsp+50h] [rbp-B0h]
  __int64 ThreadWin32Thread; // [rsp+58h] [rbp-A8h]
  __int128 v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h]
  struct tagRECT v33; // [rsp+80h] [rbp-80h] BYREF
  __int128 v34; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v35[16]; // [rsp+A0h] [rbp-60h] BYREF
  struct tagRECT v36; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v37; // [rsp+C0h] [rbp-40h] BYREF
  PERESOURCE *v38; // [rsp+D0h] [rbp-30h] BYREF
  char v39; // [rsp+F8h] [rbp-8h]
  char v40; // [rsp+100h] [rbp+0h]

  v36 = 0LL;
  v32 = 0LL;
  v6 = 0;
  v25 = 0LL;
  v37 = 0LL;
  v31 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v10 = 0LL;
  v26 = 0LL;
  v11 = 0LL;
  v29 = 0LL;
  if ( !a1 )
  {
    CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
    GetScreenRectForDpi(&v33, CurrentThreadCompositedDpi);
    v36 = v33;
    if ( a2 && !(unsigned int)IntersectRect(&v36, &v36, a2) )
      return 1LL;
    goto LABEL_3;
  }
  GreLockVisRgn(*((_QWORD *)gpDispInfo + 5), v8, v9);
  v21 = LookupDC(a1, 1LL);
  v26 = v21;
  v10 = v21;
  if ( !v21 )
  {
LABEL_57:
    GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5), v13, v14);
    return v6;
  }
  v29 = *(_QWORD *)(v21 + 16);
  if ( (*(_DWORD *)(v21 + 64) & 0x4000) != 0 && qword_1C029C3F0 )
    v11 = qword_1C029C3F0(*(_QWORD *)(v21 + 16), 2848LL);
  if ( (unsigned int)GreGetClipBox(a1, &v36.left, 0) == 1 )
    goto LABEL_56;
  if ( v11
    && (*(_WORD *)(*(_QWORD *)(v11 + 40) + 42LL) & 0x2FFF) == 0x29D
    && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
  {
    TransformRectBetweenCoordinateSpaces(&v36, &v36, 0LL, v11);
  }
  if ( a2 && !(unsigned int)IntersectRect(&v36, &v36, a2) )
  {
LABEL_56:
    v6 = 1;
    goto LABEL_57;
  }
  if ( v11 )
  {
    if ( (*(_WORD *)(*(_QWORD *)(v11 + 40) + 42LL) & 0x2FFF) != 0x29D )
    {
      GreGetDCPoint(a1);
      v22 = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 88LL);
      LODWORD(v25) = v22;
      v24 = *(_QWORD *)(v11 + 40);
      v13 = *(unsigned int *)(v24 + 92);
      HIDWORD(v25) = *(_DWORD *)(v24 + 92);
      goto LABEL_43;
    }
  }
  else
  {
    GreGetDCPoint(a1);
  }
  v22 = 0;
  v13 = 0LL;
LABEL_43:
  v36.left += v22;
  v36.right += v22;
  v36.bottom += v13;
  v36.top += v13;
LABEL_3:
  v15 = 1;
  for ( i = (struct tagMONITOR *)*((_QWORD *)gpDispInfo + 13); i; i = (struct tagMONITOR *)*((_QWORD *)i + 7) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)i + 5) + 24LL) & 1) == 0 )
      continue;
    v34 = *(_OWORD *)GetMonitorRect(v35, i);
    if ( !(unsigned int)IntersectRect(&v37, &v36, &v34) )
      continue;
    if ( a1 )
    {
      v23 = AdjustDisplayMonitor(i, &v37);
      MonitorDC = (HDC)GetMonitorDC(v10, v23, v23 != i);
      if ( !MonitorDC )
        goto LABEL_57;
      v37.top -= HIDWORD(v25);
      v37.left -= v25;
      v37.bottom -= HIDWORD(v25);
      v37.right -= v25;
      GreIntersectClipRect(MonitorDC, v37.bottom);
    }
    else
    {
      MonitorDC = 0LL;
    }
    *(_QWORD *)&v31 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v31;
    *((_QWORD *)&v31 + 1) = i;
    _InterlockedAdd((volatile signed __int32 *)i + 2, 1u);
    if ( a1 )
      GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5), v13, v14);
    if ( a5 )
    {
      v18 = a3(i, MonitorDC, &v37, a4);
      goto LABEL_16;
    }
    if ( !qword_1C029C448 || (int)qword_1C029C448() < 0 )
      goto LABEL_17;
    if ( qword_1C029C450 )
    {
      v18 = qword_1C029C450(*(_QWORD *)i, MonitorDC, &v37, a4, a3);
LABEL_16:
      v15 = v18;
      goto LABEL_17;
    }
    v15 = 0;
LABEL_17:
    SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(&v38);
    if ( !gbInDestroyHandleTableObjects
      && !UserIsUserCritSecInExclusive()
      && (!IS_USERCRIT_OWNED_SHARED()
       || !tagDomLock::IsLockedExclusive(&gDomainHandleManagerLock)
       && !tagDomLock::IsLockedShared(&gDomainHandleManagerLock)) )
    {
      __int2c();
    }
    v19 = *((_BYTE *)qword_1C0294B68 + dword_1C0294B70 * (unsigned int)(unsigned __int16)*(_DWORD *)i + 25) & 1;
    if ( v40 && v39 && v38 )
      ExReleaseResourceAndLeaveCriticalRegion(*v38);
    if ( !ThreadUnlock1() || v19 )
      v15 = 0;
    if ( MonitorDC )
      ReleaseCacheDC((__int64)MonitorDC, 0LL, v14);
    if ( !v15 )
      return 0LL;
    if ( a1 )
    {
      GreLockVisRgn(*((_QWORD *)gpDispInfo + 5), v13, v14);
      v26 = LookupDC(a1, 1LL);
      v10 = v26;
      if ( !v26 || *(_QWORD *)(v26 + 16) != v29 )
        goto LABEL_57;
    }
    else
    {
      v10 = v26;
    }
  }
  if ( a1 )
    GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5), v13, v14);
  return v15;
}
