/*
 * XREFs of FindBestPos @ 0x1C0245C74
 * Callers:
 *     NtUserCalculatePopupWindowPosition @ 0x1C01F17C0 (NtUserCalculatePopupWindowPosition.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0062244 (GetMonitorWorkRectForWindow.c)
 *     GetMonitorRectForWindow @ 0x1C0063604 (GetMonitorRectForWindow.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     GetMonitorRect @ 0x1C007CB08 (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C007CB4C (GetMonitorWorkRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C0245B78 (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     GetMonitorMenuRect @ 0x1C025A588 (GetMonitorMenuRect.c)
 *     GetMonitorMenuRectForWindow @ 0x1C025A5CC (GetMonitorMenuRectForWindow.c)
 */

__int64 __fastcall FindBestPos(
        LONG a1,
        LONG a2,
        int a3,
        int a4,
        struct tagRECT *a5,
        int a6,
        unsigned int ***a7,
        struct tagMONITOR *a8,
        unsigned __int64 a9)
{
  unsigned int **v12; // rax
  __int128 v14; // xmm6
  __int128 *MonitorRectForWindow; // rax
  unsigned int *v16; // rcx
  const struct tagWND *v17; // r14
  unsigned int *v18; // rcx
  BOOL v19; // edx
  __int64 CurrentProcessWin32Process; // rax
  struct tagRECT *v21; // rax
  struct tagRECT v22; // xmm0
  unsigned int **v23; // rax
  int v24; // ecx
  int v25; // r15d
  int v26; // r14d
  int v27; // r8d
  int v28; // ecx
  __int64 v29; // r15
  int v30; // r14d
  int v31; // r14d
  int v32; // r14d
  unsigned int *v33; // rcx
  unsigned int v34; // eax
  struct tagMONITOR *v36[2]; // [rsp+48h] [rbp-A1h] BYREF
  int v37[2]; // [rsp+58h] [rbp-91h]
  struct tagMONITOR *v38; // [rsp+60h] [rbp-89h]
  struct tagPOINT v39; // [rsp+68h] [rbp-81h] BYREF
  struct tagRECT v40; // [rsp+70h] [rbp-79h] BYREF
  struct tagRECT v41; // [rsp+80h] [rbp-69h] BYREF
  char v42[16]; // [rsp+90h] [rbp-59h] BYREF
  __int128 v43; // [rsp+A0h] [rbp-49h] BYREF
  struct tagRECT v44; // [rsp+B0h] [rbp-39h] BYREF
  unsigned int v45[4]; // [rsp+C0h] [rbp-29h]

  v39 = 0LL;
  v12 = *a7;
  v37[0] = a3;
  v38 = a8;
  v40 = 0LL;
  if ( *v12 )
  {
    v16 = **a7;
    if ( *((_QWORD *)v16 + 7) )
      v17 = (const struct tagWND *)*((_QWORD *)v16 + 7);
    else
      v17 = (const struct tagWND *)*((_QWORD *)v16 + 2);
    v44 = *(struct tagRECT *)GetMonitorMenuRectForWindow(&v41);
    v14 = *(_OWORD *)GetMonitorWorkRectForWindow((__int64)&v43, (__int64)v38, v17);
    *(_OWORD *)v36 = v14;
    MonitorRectForWindow = (__int128 *)GetMonitorRectForWindow((__int64)v42, (__int64)v38, v17);
  }
  else
  {
    v44 = *(struct tagRECT *)GetMonitorMenuRect(&v44, a8);
    v14 = *(_OWORD *)GetMonitorWorkRect((__int64)&v43, (__int64)a8);
    *(_OWORD *)v36 = v14;
    MonitorRectForWindow = (__int128 *)GetMonitorRect((__int64)&v41, (__int64)a8);
  }
  v43 = *MonitorRectForWindow;
  if ( (a6 & 0x10000) != 0 )
    goto LABEL_12;
  if ( PtInRect(v36, a9) )
  {
    if ( !**a7 || (v18 = **a7, (*v18 & 0x10000000) == 0) )
    {
      v14 = *(_OWORD *)v36;
LABEL_12:
      *(_OWORD *)v36 = v14;
      goto LABEL_13;
    }
  }
  if ( **a7 )
  {
    v19 = ***a7 >> 31;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
    if ( CurrentProcessWin32Process )
      v19 = (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x30) == 0;
    else
      v19 = 0;
  }
  v21 = (struct tagRECT *)&v43;
  if ( v19 )
    v21 = &v44;
  v22 = *v21;
  v23 = *a7;
  *(struct tagRECT *)v36 = v22;
  if ( *v23 )
    ***a7 |= 0x10000000u;
LABEL_13:
  if ( a5 )
  {
    v40 = *a5;
    IntersectRect(&v40, &v40.left, (int *)v36);
  }
  else
  {
    v40.left = a1;
    v40.top = a2;
    v40.right = a1;
    v40.bottom = a2;
  }
  if ( a3 + a1 > SLODWORD(v36[1]) )
  {
    a1 = LODWORD(v36[1]) - a3;
    if ( **a7 )
    {
      if ( (***a7 & 0x1800000) != 0 )
        ***a7 ^= (***a7 ^ 0xFF7FFFFF) & 0x1800000;
    }
  }
  if ( a1 < SLODWORD(v36[0]) )
  {
    a1 = (LONG)v36[0];
    if ( **a7 )
    {
      if ( (***a7 & 0x1800000) != 0 )
        ***a7 ^= (***a7 ^ 0x800000) & 0x1800000;
    }
  }
  if ( (a6 & 8) != 0 && a3 + a1 > SLODWORD(v36[1]) )
    a1 = LODWORD(v36[1]) - a3;
  v24 = HIDWORD(v36[1]);
  if ( a4 + a2 > SHIDWORD(v36[1]) )
  {
    if ( (a6 & 0x20010) != 0 || a2 - a4 < SHIDWORD(v36[0]) || a2 >= SHIDWORD(v36[1]) )
      a2 = HIDWORD(v36[1]) - a4;
    else
      a2 -= a4;
    if ( **a7 && (***a7 & 0x6000000) != 0 )
      ***a7 ^= (***a7 ^ 0xFDFFFFFF) & 0x6000000;
    v24 = HIDWORD(v36[1]);
  }
  if ( a2 < SHIDWORD(v36[0]) )
  {
    a2 = HIDWORD(v36[0]);
    if ( **a7 && (***a7 & 0x6000000) != 0 )
      ***a7 ^= (***a7 ^ 0x2000000) & 0x6000000;
    v24 = HIDWORD(v36[1]);
  }
  v25 = a6 & 0x20;
  if ( (a6 & 0x20) != 0 && a4 + a2 > v24 && (a6 & 0x20000) != 0 )
    a2 = v24 - a4;
  if ( !(unsigned int)TryRect(4, a1, a2, v37[0], a4, &v40, &v39, v38) )
  {
    v26 = a6 & 0x40;
    v27 = (a6 & 8) == 0 ? 2 : 0;
    *(unsigned int *)((char *)v45 + (v26 != 0 ? 8 : 0)) = v27;
    *(unsigned int *)((char *)&v45[1] + (v26 != 0 ? 8 : 0)) = 2 - v27;
    *(unsigned int *)((char *)v45 + (v26 == 0 ? 8 : 0)) = v25 != 0 ? 1 : 3;
    v28 = v25 != 0 ? 3 : 1;
    v29 = 0LL;
    *(unsigned int *)((char *)&v45[3] + (-(__int64)(v26 != 0) & 0xFFFFFFFFFFFFFFF8uLL)) = v28;
    while ( 1 )
    {
      v30 = v45[v29];
      if ( (unsigned int)TryRect(v30, a1, a2, v37[0], a4, &v40, &v39, v38) )
        break;
      if ( ++v29 >= 4 )
        return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
    }
    if ( !**a7 )
      goto LABEL_70;
    if ( v30 )
    {
      v31 = v30 - 1;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( v32 )
        {
          if ( v32 != 1 )
          {
LABEL_70:
            LOWORD(a1) = v39.x;
            LOWORD(a2) = v39.y;
            return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
          }
          v33 = **a7;
          v34 = *v33 & 0xF07FFFFF | 0x2000000;
        }
        else
        {
          v33 = **a7;
          v34 = *v33 & 0xF07FFFFF | 0x800000;
        }
      }
      else
      {
        v33 = **a7;
        v34 = *v33 & 0xF07FFFFF | 0x4000000;
      }
    }
    else
    {
      v33 = **a7;
      v34 = *v33 & 0xF07FFFFF | 0x1000000;
    }
    *v33 = v34;
    goto LABEL_70;
  }
  return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
}
