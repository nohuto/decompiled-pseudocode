/*
 * XREFs of ?BeginDrawWithGutters@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180036F80
 * Callers:
 *     ?BeginDraw@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z @ 0x180036F50 (-BeginDraw@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?IsRectangleInSurface@DirectComposition@@YA_NAEBUtagRECT@@II@Z @ 0x180030204 (-IsRectangleInSurface@DirectComposition@@YA_NAEBUtagRECT@@II@Z.c)
 *     ?CanBeginDraw@CVirtualSurface@DirectComposition@@AEAAJ_N@Z @ 0x180037138 (-CanBeginDraw@CVirtualSurface@DirectComposition@@AEAAJ_N@Z.c)
 *     ?BeginDrawInternal@CVirtualSurface@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@PEAPEAXPEAI3PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x1800371B0 (-BeginDrawInternal@CVirtualSurface@DirectComposition@@AEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRect.c)
 *     ?AddVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@QEAAXPEAVCVirtualSurface@2@@Z @ 0x180037BB4 (-AddVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@QEAAXPEAVCVirtualSurface@2@@Z.c)
 *     ?TransitionDrawingState@CVirtualSurface@DirectComposition@@AEAAXW4SurfaceState@2@@Z @ 0x180038F8C (-TransitionDrawingState@CVirtualSurface@DirectComposition@@AEAAXW4SurfaceState@2@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0qqxdddd_EventWriteTransfer @ 0x1800EC24C (McTemplateU0qqxdddd_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::BeginDrawWithGutters(
        DirectComposition::CVirtualSurface *this,
        struct tagRECT *a2,
        const struct _GUID *a3,
        void **a4,
        struct tagPOINT *a5,
        struct DCOMPOSITION_GUTTERS *a6)
{
  __int64 v8; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DirectComposition::CVirtualSurface *v13; // r15
  const struct tagRECT *v14; // rdx
  __int64 v15; // rax
  int CanBeginDraw; // ebx
  LONG v17; // eax
  LONG v18; // eax
  LONG bottom; // r10d
  LONG right; // r9d
  LONG top; // r8d
  LONG left; // edx
  LONG v24; // eax
  unsigned int v25; // [rsp+50h] [rbp-39h] BYREF
  LONG v26; // [rsp+54h] [rbp-35h] BYREF
  void *v27; // [rsp+58h] [rbp-31h] BYREF
  struct DCOMPOSITION_GUTTERS *v28; // [rsp+60h] [rbp-29h]
  DirectComposition::CDeviceLock *v29; // [rsp+68h] [rbp-21h] BYREF
  LONG v30; // [rsp+70h] [rbp-19h] BYREF
  LONG v31; // [rsp+74h] [rbp-15h]
  LONG v32; // [rsp+78h] [rbp-11h]
  LONG v33; // [rsp+7Ch] [rbp-Dh]

  v28 = a6;
  v8 = *((_QWORD *)this + 4);
  v27 = 0LL;
  v25 = 0;
  v26 = 0;
  v29 = (DirectComposition::CDeviceLock *)(*(_QWORD *)(v8 + 24) + 96LL);
  DirectComposition::CDeviceLock::Enter(v29);
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 2) != 0 )
  {
    if ( a2 )
    {
      bottom = a2->bottom;
      right = a2->right;
      top = a2->top;
      left = a2->left;
    }
    else
    {
      bottom = *((_DWORD *)this + 11);
      LOBYTE(top) = 0;
      right = *((_DWORD *)this + 10);
      left = 0;
    }
    v13 = (DirectComposition::CVirtualSurface *)((char *)this - 72);
    McTemplateU0qqxdddd_EventWriteTransfer(
      *(_QWORD *)(*((_QWORD *)this + 4) + 24LL),
      left,
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 160LL),
      84,
      (_BYTE)this - 72,
      left,
      top,
      right,
      bottom);
  }
  else
  {
    v13 = (DirectComposition::CVirtualSurface *)((char *)this - 72);
  }
  if ( a4
    && a5
    && (v14 = (const struct tagRECT *)*((unsigned int *)this + 10), (_DWORD)v14)
    && (v12 = *((unsigned int *)this + 11), (_DWORD)v12)
    && (!a2 || DirectComposition::IsRectangleInSurface((DirectComposition *)a2, v14, v12)) )
  {
    v15 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_e8f7fe7a_191c_466d_ad95_975678bda998.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_e8f7fe7a_191c_466d_ad95_975678bda998.Data1 )
      v15 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_e8f7fe7a_191c_466d_ad95_975678bda998.Data4;
    if ( v15 || (v11 = *(_QWORD *)(*((_QWORD *)this + 4) + 24LL), *(int *)(v11 + 368) >= 1) )
    {
      CanBeginDraw = DirectComposition::CVirtualSurface::CanBeginDraw(
                       (DirectComposition::CVirtualSurface *)((char *)this - 72),
                       1);
      if ( CanBeginDraw >= 0 )
      {
        if ( a2 )
        {
          v30 = a2->left;
          v31 = a2->top;
          v32 = a2->right;
          v17 = a2->bottom;
        }
        else
        {
          v24 = *((_DWORD *)this + 10);
          v30 = 0;
          v31 = 0;
          v32 = v24;
          v17 = *((_DWORD *)this + 11);
        }
        v33 = v17;
        CanBeginDraw = DirectComposition::CVirtualSurface::BeginDrawInternal(
                         (_DWORD)v13,
                         (unsigned int)&v30,
                         (_DWORD)a3,
                         (unsigned int)&v27,
                         (__int64)&v25,
                         (__int64)&v26,
                         (__int64)v28);
        if ( CanBeginDraw >= 0 )
        {
          DirectComposition::CVirtualSurfaceOptimizer::AddVirtualSurface(
            *(DirectComposition::CVirtualSurfaceOptimizer **)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 464LL),
            v13);
          DirectComposition::CVirtualSurface::TransitionDrawingState(v13, 1LL);
          v11 = v25;
          v18 = v26;
          *a4 = v27;
          a5->x = v11;
          a5->y = v18;
          goto LABEL_17;
        }
      }
    }
    else
    {
      CanBeginDraw = -2147024809;
    }
  }
  else
  {
    CanBeginDraw = -2147024809;
    if ( !a4 )
      goto LABEL_29;
  }
  *a4 = 0LL;
LABEL_29:
  if ( a5 )
    *a5 = 0LL;
LABEL_17:
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer(v11, &DCOMPEVENT_BEGIN_DRAW_Stop, v12, 1LL, &v30);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v29);
  return (unsigned int)CanBeginDraw;
}
