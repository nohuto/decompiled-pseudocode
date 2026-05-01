/*
 * XREFs of ?GetSimpleTempAppVisualArray@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1805ECDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1805EEF98 (-_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 */

__int64 __fastcall CDragVisual::GetSimpleTempAppVisualArray(CDragVisual *this, struct ITemporaryAppVisualArray **a2)
{
  int v3; // eax
  struct ITemporaryAppVisualArray *v4; // rbx
  unsigned int v5; // edi
  int v7; // [rsp+30h] [rbp+8h] BYREF
  struct ITemporaryAppVisualArray *v8; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  v3 = CDragVisual::_CreateTempAppVisuals((CDragVisual *)((char *)this - 48), &v8);
  v4 = v8;
  v5 = v3;
  if ( v3 >= 0 )
  {
    (*(void (__fastcall **)(struct ITemporaryAppVisualArray *, int *))(*(_QWORD *)v8 + 24LL))(v8, &v7);
    if ( v7 )
    {
      Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&v8);
      v5 = 0;
      *a2 = v4;
    }
    else
    {
      v5 = -2147023728;
    }
  }
  if ( v4 )
    (*(void (__fastcall **)(struct ITemporaryAppVisualArray *))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
