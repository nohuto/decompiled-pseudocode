/*
 * XREFs of ?ReleaseBuffer@CHolographicViewerProxy@DirectComposition@@UEAAJIPEAX@Z @ 0x1800E8320
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CHolographicViewerProxy::ReleaseBuffer(
        DirectComposition::CHolographicViewerProxy *this,
        __int64 a2,
        void *a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned int v5; // edx
  int v6; // ecx
  int v7; // eax

  v3 = *((_QWORD *)this + 3);
  if ( !v3 )
  {
    v4 = -2147019873;
    v5 = 176;
    v6 = -2147019873;
LABEL_5:
    DoStackCaptureDirect(v6, v5);
    return v4;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, void *))(*(_QWORD *)v3 + 64LL))(v3, a2, a3);
  v4 = v7;
  if ( v7 < 0 )
  {
    v5 = 178;
    v6 = v7;
    goto LABEL_5;
  }
  return v4;
}
