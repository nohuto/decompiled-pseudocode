/*
 * XREFs of ?VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z @ 0x1C0045418
 * Callers:
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_N@Z @ 0x1C0045F30 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_N@Z.c)
 * Callees:
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x1C003260C (McTemplateK0qxxx_EtwWriteTransfer.c)
 */

void __fastcall VSYNC_TIME_STATS::VSyncStateChange(VSYNC_TIME_STATS *this, enum _DXGK_CRTC_VSYNC_STATE a2, int a3)
{
  LARGE_INTEGER v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  union _LARGE_INTEGER v9; // [rsp+78h] [rbp+20h] BYREF

  v9.QuadPart = 0LL;
  v6 = KeQueryPerformanceCounter(&v9);
  if ( !a3 )
  {
    if ( (unsigned int)(a2 - 1) > 1 )
      return;
    v7 = v6.QuadPart - *(_QWORD *)this;
    if ( is_mul_ok(v7, 0x3E8uLL) )
    {
      v8 = v7 * (unsigned __int128)0x3E8uLL / (unsigned __int64)v9.QuadPart;
    }
    else
    {
      v7 /= v9.QuadPart;
      v8 = 1000 * v7 + 1000 * ((v6.QuadPart - *(_QWORD *)this) % (unsigned __int64)v9.QuadPart) / v9.QuadPart;
    }
    if ( a2 != DXGK_VSYNC_DISABLE_KEEP_PHASE )
    {
      *((_QWORD *)this + 4) += v8;
      goto LABEL_20;
    }
LABEL_19:
    *((_QWORD *)this + 3) += v8;
LABEL_20:
    *(LARGE_INTEGER *)this = v6;
    if ( (byte_1C006E944 & 1) != 0 )
      McTemplateK0qxxx_EtwWriteTransfer(
        v7,
        &EventVSyncTimeStatistics,
        v8,
        a3,
        *((_QWORD *)this + 2),
        *((_QWORD *)this + 3),
        *((_QWORD *)this + 4));
    return;
  }
  if ( a3 == 1 )
  {
    if ( a2 )
      return;
    v7 = v6.QuadPart - *(_QWORD *)this;
    if ( is_mul_ok(v7, 0x3E8uLL) )
    {
      v8 = v7 * (unsigned __int128)0x3E8uLL / (unsigned __int64)v9.QuadPart;
    }
    else
    {
      v7 /= v9.QuadPart;
      v8 = 1000 * v7 + 1000 * ((v6.QuadPart - *(_QWORD *)this) % (unsigned __int64)v9.QuadPart) / v9.QuadPart;
    }
    *((_QWORD *)this + 2) += v8;
    goto LABEL_20;
  }
  if ( a3 == 2 && a2 == DXGK_VSYNC_DISABLE_KEEP_PHASE )
  {
    v7 = v6.QuadPart - *(_QWORD *)this;
    if ( is_mul_ok(v7, 0x3E8uLL) )
    {
      v8 = v7 * (unsigned __int128)0x3E8uLL / (unsigned __int64)v9.QuadPart;
    }
    else
    {
      v7 /= v9.QuadPart;
      v8 = 1000 * v7 + 1000 * ((v6.QuadPart - *(_QWORD *)this) % (unsigned __int64)v9.QuadPart) / v9.QuadPart;
    }
    goto LABEL_19;
  }
}
