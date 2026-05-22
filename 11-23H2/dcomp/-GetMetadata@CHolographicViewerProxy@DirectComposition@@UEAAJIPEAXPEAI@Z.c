/*
 * XREFs of ?GetMetadata@CHolographicViewerProxy@DirectComposition@@UEAAJIPEAXPEAI@Z @ 0x1800E7CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CHolographicViewerProxy::GetMetadata(
        DirectComposition::CHolographicViewerProxy *this,
        __int64 a2,
        void *a3,
        unsigned int *a4)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // eax

  v4 = *((_QWORD *)this + 3);
  if ( !v4 )
  {
    v5 = -2147019873;
    v6 = 190;
    v7 = -2147019873;
LABEL_5:
    DoStackCaptureDirect(v7, v6);
    return v5;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, void *, unsigned int *))(*(_QWORD *)v4 + 80LL))(v4, a2, a3, a4);
  v5 = v8;
  if ( v8 < 0 )
  {
    v6 = 192;
    v7 = v8;
    goto LABEL_5;
  }
  return v5;
}
