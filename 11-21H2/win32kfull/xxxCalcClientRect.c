/*
 * XREFs of xxxCalcClientRect @ 0x1C0066538
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0151FD0 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     NtUserUpdateClientRect @ 0x1C01FFF10 (NtUserUpdateClientRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1C004CE04 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C0068450 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     GetCaptionHeight @ 0x1C00BBE0C (GetCaptionHeight.c)
 *     GetWindowDpiLastNotify @ 0x1C00BBEF0 (GetWindowDpiLastNotify.c)
 *     xxxMenuBarCompute @ 0x1C00C2488 (xxxMenuBarCompute.c)
 */

__int64 *__fastcall xxxCalcClientRect(struct tagWND *a1, _DWORD *a2, int a3)
{
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // r15d
  int WindowBordersWithDpiAwareness; // eax
  int v13; // edi
  signed int v14; // r14d
  signed int v15; // r15d
  int v16; // r13d
  __int64 v17; // rdx
  int v18; // esi
  __int64 v19; // rcx
  int v20; // r15d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 *v24; // rax
  __int64 *result; // rax
  __int64 v26; // rdx
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  int v32; // ecx
  unsigned int v33; // eax
  int v34; // esi
  int v35; // edx
  __int64 v36; // rax
  unsigned int WindowDpiLastNotify; // eax
  int DpiDependentMetric; // r13d
  __int64 v39; // rax
  int v40; // [rsp+30h] [rbp-50h]
  __int128 v41; // [rsp+38h] [rbp-48h]
  __int64 *v42; // [rsp+48h] [rbp-38h] BYREF
  __int64 v43; // [rsp+50h] [rbp-30h] BYREF
  __int64 v44; // [rsp+58h] [rbp-28h]
  __int128 v45; // [rsp+60h] [rbp-20h] BYREF
  __int64 v46; // [rsp+70h] [rbp-10h]
  char v47; // [rsp+C0h] [rbp+40h]
  int v49; // [rsp+D8h] [rbp+58h]

  v5 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v5 = *ThreadWin32Thread;
  v42 = (__int64 *)gSmartObjNullRef;
  v43 = *(_QWORD *)(v5 + 1472);
  *(_QWORD *)(v5 + 1472) = &v43;
  v44 = 0LL;
  v46 = 0LL;
  v7 = *((_QWORD *)a1 + 5);
  v45 = 0LL;
  v47 = *(_BYTE *)(v7 + 16) & 0xF;
  SetOrClrWF(0LL, a1, 15LL, 1LL);
  SetOrClrWF(0LL, a1, 1040LL, 1LL);
  v9 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v9 + 31) & 0x20) != 0 )
  {
    a2[2] = *a2;
    a2[3] = a2[1];
  }
  else
  {
    v10 = HIDWORD(*(_QWORD *)a2);
    v11 = HIDWORD(*(_QWORD *)a2);
    v41 = *(_OWORD *)a2;
    if ( (*(_BYTE *)(v9 + 30) & 0xC0) == 0xC0 )
    {
      SetOrClrWF(1LL, a1, 8LL, 1LL);
      v11 = GetCaptionHeight(a1) + v10;
    }
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, v8, 0, 0);
    v13 = v41 + WindowBordersWithDpiAwareness;
    v14 = DWORD2(v41) - WindowBordersWithDpiAwareness;
    v49 = WindowBordersWithDpiAwareness;
    v15 = v11 + WindowBordersWithDpiAwareness;
    v16 = HIDWORD(v41) - WindowBordersWithDpiAwareness;
    LODWORD(v41) = v41 + WindowBordersWithDpiAwareness;
    DWORD2(v41) -= WindowBordersWithDpiAwareness;
    DWORD1(v41) = v15;
    v40 = HIDWORD(v41) - WindowBordersWithDpiAwareness;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
    {
      v26 = *((_QWORD *)a1 + 21);
      v44 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v42, v26);
      if ( v44 || *v42 )
      {
        SetOrClrWF(1LL, a1, 1LL, 1LL);
        if ( !a3 )
        {
          v27 = v44;
          if ( !v44 )
            v27 = *v42;
          *(_DWORD *)(*(_QWORD *)(v27 + 40) + 40LL) |= 0x200u;
          v28 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v45 = *(_QWORD *)(v28 + 416);
          *(_QWORD *)(v28 + 416) = &v45;
          *((_QWORD *)&v45 + 1) = v27;
          HMLockObject(v27);
          v15 += xxxMenuBarCompute((unsigned int)&v42, (_DWORD)a1, v15 - (int)v10, v49, v14 - v13);
          DWORD1(v41) = v15;
          v29 = *(_QWORD *)(*((_QWORD *)&v45 + 1) + 40LL);
          *(_DWORD *)(v29 + 40) &= ~0x200u;
          ThreadUnlock1(v29, v30, v31);
          v16 = v40;
        }
      }
    }
    v17 = *((_QWORD *)a1 + 5);
    v18 = v16;
    if ( v15 >= v16 )
      v18 = v15;
    HIDWORD(v41) = v18;
    if ( (*(_BYTE *)(v17 + 21) & 2) != 0 && v13 >= v14 )
    {
      DWORD2(v41) = v13;
    }
    else if ( v15 < v16 )
    {
      v19 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v17 + 25) & 2) != 0 && v14 - v13 >= 4 && v18 - v15 >= 4 )
      {
        SetOrClrWF(1LL, a1, 1040LL, 1LL);
        v19 = *((_QWORD *)a1 + 5);
        v13 += 2;
        v14 -= 2;
        LODWORD(v41) = v13;
        v15 += 2;
        v18 -= 2;
        *(_QWORD *)((char *)&v41 + 4) = __PAIR64__(v14, v15);
        HIDWORD(v41) = v18;
      }
      if ( (*(_BYTE *)(v19 + 30) & 0x10) != 0
        && ((v35 = *(_DWORD *)(v19 + 288) & 0xF, v35 == 3)
          ? (WindowDpiLastNotify = (*(_DWORD *)(v19 + 288) >> 8) & 0x1FF)
          : (*(_DWORD *)(v19 + 232) & 0x400) != 0
          ? (WindowDpiLastNotify = GetWindowDpiLastNotify(a1))
          : v35
         || (v36 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) == 0
         || (*(_DWORD *)(**(_QWORD **)(v36 + 8) + 64LL) & 1) == 0
          ? (WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL))
          : (WindowDpiLastNotify = 96),
            DpiDependentMetric = GetDpiDependentMetric(1LL, WindowDpiLastNotify),
            v18 - v15 > DpiDependentMetric) )
      {
        SetOrClrWF(1LL, a1, 4LL, 1LL);
        v20 = a3;
        if ( !a3 )
          HIDWORD(v41) = v18 - DpiDependentMetric;
      }
      else
      {
        v20 = a3;
      }
      v21 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v21 + 30) & 0x20) != 0 )
      {
        v32 = *(_DWORD *)(v21 + 288) & 0xF;
        if ( v32 == 3 )
        {
          v33 = (*(_DWORD *)(v21 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v21 + 232) & 0x400) != 0 )
        {
          v33 = GetWindowDpiLastNotify(a1);
        }
        else if ( !v32
               && (v39 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v39 + 8) + 64LL) & 1) != 0 )
        {
          v33 = 96;
        }
        else
        {
          v33 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
        }
        v34 = GetDpiDependentMetric(0LL, v33);
        if ( v14 - v13 >= v34 )
        {
          SetOrClrWF(1LL, a1, 2LL, 1LL);
          if ( !v20 )
          {
            if ( ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) ^ *(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL)) & 0x40) != 0 )
              LODWORD(v41) = v34 + v13;
            else
              DWORD2(v41) = v14 - v34;
          }
        }
      }
    }
    *(_OWORD *)a2 = v41;
  }
  v22 = *((_QWORD *)a1 + 5);
  if ( v47 != (*(_BYTE *)(v22 + 16) & 0xF) && *(char *)(v22 + 23) < 0 )
    xxxWindowEvent(0x8004u, 1);
  v23 = 0LL;
  v24 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v24 )
    v23 = *v24;
  SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v42);
  result = *(__int64 **)(v23 + 1472);
  if ( result )
  {
    result = (__int64 *)*result;
    *(_QWORD *)(v23 + 1472) = result;
  }
  return result;
}
