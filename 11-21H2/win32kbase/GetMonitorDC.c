/*
 * XREFs of GetMonitorDC @ 0x1C00183FC
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C006E680 (xxxEnumDisplayMonitors.c)
 *     UserGetMonitorDC @ 0x1C0071A64 (UserGetMonitorDC.c)
 * Callees:
 *     GreIsRendering @ 0x1C0018890 (GreIsRendering.c)
 *     IsGreHintDCWndSupported @ 0x1C00188D0 (IsGreHintDCWndSupported.c)
 *     GreOffsetRgn @ 0x1C001B040 (GreOffsetRgn.c)
 *     GreDeleteObject @ 0x1C0023690 (GreDeleteObject.c)
 *     GreCreateRectRgnIndirect @ 0x1C0028800 (GreCreateRectRgnIndirect.c)
 *     GreGetBounds @ 0x1C002AEA0 (GreGetBounds.c)
 *     GreSetDCOwnerEx @ 0x1C002C0D0 (GreSetDCOwnerEx.c)
 *     GreSelectVisRgnShared @ 0x1C002FA90 (GreSelectVisRgnShared.c)
 *     CreateCacheDC @ 0x1C006AA00 (CreateCacheDC.c)
 *     IsGetStyleWindowSupported @ 0x1C006AC48 (IsGetStyleWindowSupported.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C006D8F4 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     CreateMonitorRegionForDpi @ 0x1C006DB60 (CreateMonitorRegionForDpi.c)
 *     IntersectRect @ 0x1C006EC48 (IntersectRect.c)
 *     GetMonitorRect @ 0x1C006ECBC (GetMonitorRect.c)
 *     GetCurrentThreadCompositedDpi @ 0x1C006EDE4 (GetCurrentThreadCompositedDpi.c)
 *     GreCombineRgn @ 0x1C006EFF0 (GreCombineRgn.c)
 *     GreSetRectRgn @ 0x1C008E9A0 (GreSetRectRgn.c)
 *     GreSetDCOrg @ 0x1C0092E00 (GreSetDCOrg.c)
 *     UpdateDCEInUseCount @ 0x1C00A62FC (UpdateDCEInUseCount.c)
 *     GreGetDCOrgEx @ 0x1C00AB3F0 (GreGetDCOrgEx.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x1C00ACCD0 (IsGreSelectRedirectionBitmapSupported.c)
 *     IsGetRedirectionBitmapSupported @ 0x1C00B0CCC (IsGetRedirectionBitmapSupported.c)
 *     IsSpbCheckDceSupported @ 0x1C00B3F48 (IsSpbCheckDceSupported.c)
 *     GreCopyVisRgn @ 0x1C00CA430 (GreCopyVisRgn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetMonitorDC(__int64 a1, struct tagMONITOR *a2, int a3)
{
  __int64 *i; // rbx
  int v7; // eax
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r15
  HDC v12; // rcx
  int v13; // eax
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  HRGN MonitorRegionForDpi; // r15
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // r8
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int128 v34; // xmm0
  HDC v35; // rcx
  HRGN RectRgnIndirect; // rax
  __int128 v37; // [rsp+30h] [rbp-20h] BYREF
  __int128 v38; // [rsp+40h] [rbp-10h] BYREF

  v37 = 0LL;
  while ( 2 )
  {
    for ( i = (__int64 *)*((_QWORD *)gpDispInfo + 3); i; i = (__int64 *)*i )
    {
      if ( (i[8] & 0x401000) == 0 && !(unsigned int)GreIsRendering((HDC)i[1]) && (struct tagMONITOR *)i[11] == a2 )
      {
        if ( (i[8] & 0x800) == 0 && (int)IsSpbCheckDceSupported() >= 0 && qword_1C029C420 )
          qword_1C029C420(i);
        if ( (unsigned int)GreSetDCOwnerEx(i[1], 2147483650LL, 0LL, 0LL) )
        {
          i[2] = *(_QWORD *)(a1 + 16);
          i[3] = *(_QWORD *)(a1 + 24);
          i[4] = *(_QWORD *)(a1 + 32);
          i[9] = *(_QWORD *)(a1 + 72);
          i[10] = *(_QWORD *)(a1 + 80);
          v7 = *(_DWORD *)(a1 + 64) & 0x947F9 | 0x1002;
          *((_DWORD *)i + 16) = v7;
          v8 = *(_QWORD *)(a1 + 40);
          if ( v8 > 1 )
          {
            RectRgnIndirect = (HRGN)GreCreateRectRgnIndirect(&gZero);
            i[5] = (__int64)RectRgnIndirect;
            SetMonitorRegion(a2, RectRgnIndirect, *(HRGN *)(a1 + 40));
            v7 = *((_DWORD *)i + 16);
          }
          else
          {
            i[5] = v8;
          }
          v9 = 0LL;
          if ( (v7 & 0x4000) != 0
            && (int)IsGetStyleWindowSupported() >= 0
            && qword_1C029C3F0
            && (v10 = qword_1C029C3F0(i[2], 2848LL), (v9 = (_QWORD *)v10) != 0LL) )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 26LL) & 0x20) == 0 && (int)IsGetRedirectionBitmapSupported() >= 0 )
            {
              v11 = qword_1C029C3D0 ? qword_1C029C3D0(v9) : 0LL;
              if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
              {
                v12 = (HDC)i[1];
                if ( !qword_1C029B808 || (v13 = qword_1C029B808(v12, v11), v12 = (HDC)i[1], !v13) )
                  GreSelectVisRgnShared(v12);
              }
            }
            GreCopyVisRgn(*(HDC *)(a1 + 8));
            GreOffsetRgn(ghrgnGDC);
            CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
            MonitorRegionForDpi = (HRGN)CreateMonitorRegionForDpi(a2, CurrentThreadCompositedDpi);
            if ( !(unsigned int)GreCombineRgn(ghrgnGDC, ghrgnGDC, MonitorRegionForDpi, 1) )
              GreSetRectRgn(ghrgnGDC, 0);
            GreDeleteObject(MonitorRegionForDpi);
            GreOffsetRgn(ghrgnGDC);
            GreSelectVisRgnShared((HDC)i[1]);
            GreGetDCOrgEx(*(HDC *)(a1 + 8));
            if ( a3 )
            {
              v16 = v9[5];
              v17 = *(_DWORD *)(v16 + 92);
              LODWORD(v16) = 2 * *(_DWORD *)(v16 + 88);
              LODWORD(v37) = v16 + v37;
              DWORD2(v37) += v16;
              HIDWORD(v37) += 2 * v17;
              DWORD1(v37) += 2 * v17;
              v38 = *(_OWORD *)GetMonitorRect(&v38, a2);
              IntersectRect(&v37, &v37, &v38);
              v18 = v9[5];
              v19 = -*(_DWORD *)(v18 + 92);
              v20 = -*(_DWORD *)(v18 + 88);
              DWORD2(v37) -= *(_DWORD *)(v18 + 88);
              HIDWORD(v37) += v19;
              LODWORD(v37) = v20 + v37;
              DWORD1(v37) += v19;
            }
            GreSetDCOrg((HDC)i[1]);
            GreGetBounds((HDC)i[1]);
          }
          else
          {
            GreCopyVisRgn(*(HDC *)(a1 + 8));
            SetMonitorRegion(a2, ghrgnGDC, ghrgnGDC);
            GreSelectVisRgnShared((HDC)i[1]);
            v34 = *(_OWORD *)GetMonitorRect(&v38, a2);
            v38 = v34;
            if ( a3 )
              v37 = v34;
            else
              GreGetDCOrgEx(*(HDC *)(a1 + 8));
            HIDWORD(v37) -= DWORD1(v38);
            DWORD2(v37) -= v38;
            v35 = (HDC)i[1];
            LODWORD(v37) = v37 - v38;
            DWORD1(v37) -= DWORD1(v38);
            GreSetDCOrg(v35);
          }
          if ( (int)IsGreHintDCWndSupported() >= 0 && qword_1C029B828 )
            qword_1C029B828(i[1], *(_QWORD *)i[2], 0LL, 0LL, 0);
          if ( v9 )
          {
            if ( (*(_BYTE *)(v9[5] + 26LL) & 8) != 0 && (int)IsGreHintDCWndSupported() >= 0 )
            {
              v25 = v9[5];
              v21 = *(_WORD *)(v25 + 42) & 0x2FFF;
              LOBYTE(v23) = *(_BYTE *)(v25 + 27) & 2;
              if ( qword_1C029B828 )
                qword_1C029B828(i[1], *(_QWORD *)i[2], *v9, (_BYTE)v23 == 0, v21 == 669);
            }
          }
          --gnDCECount;
          if ( a3 )
          {
            *((_DWORD *)i + 16) |= 0x80000000;
            i[9] = 0LL;
            i[10] = PsGetCurrentProcessWin32Process(v22, v21, v23, v24);
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v27, v26, v28, v29);
            *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
          }
          v31 = i[9];
          if ( v31 )
            v32 = *(_QWORD *)(v31 + 424);
          else
            v32 = i[10];
          UpdateDCEInUseCount(1LL, v32, v23);
          return i[1];
        }
      }
    }
    if ( CreateCacheDC(0LL, *(_DWORD *)(a1 + 64) & 0x4000 | 0x802u, a2) )
      continue;
    break;
  }
  return 0LL;
}
