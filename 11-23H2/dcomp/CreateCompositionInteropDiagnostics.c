/*
 * XREFs of CreateCompositionInteropDiagnostics @ 0x1801016E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ??0CompositionDiagnosticsInterop@Composition@UI@Windows@@QEAA@XZ @ 0x180100A8C (--0CompositionDiagnosticsInterop@Composition@UI@Windows@@QEAA@XZ.c)
 */

__int64 __fastcall CreateCompositionInteropDiagnostics(_QWORD *a1)
{
  unsigned int v1; // edi
  Windows::UI::Composition::CompositionDiagnosticsInterop *v3; // rax
  Windows::UI::Composition::CompositionDiagnosticsInterop *v4; // rax
  Windows::UI::Composition::CompositionDiagnosticsInterop *v5; // rbx
  int v6; // eax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0;
  *a1 = 0LL;
  v3 = (Windows::UI::Composition::CompositionDiagnosticsInterop *)DefaultHeap::Alloc(0x18uLL);
  if ( v3
    && (v4 = Windows::UI::Composition::CompositionDiagnosticsInterop::CompositionDiagnosticsInterop(v3), (v5 = v4) != 0LL) )
  {
    v6 = (**(__int64 (__fastcall ***)(Windows::UI::Composition::CompositionDiagnosticsInterop *, GUID *, _QWORD *))v4)(
           v4,
           &GUID_010d8a03_67dd_4a36_9528_5ea6781bae77,
           a1);
    if ( v6 < 0 )
      ModuleFailFastForHRESULT(v6, retaddr);
    (*(void (__fastcall **)(Windows::UI::Composition::CompositionDiagnosticsInterop *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    v1 = -2147024882;
    DoStackCaptureDirect(-2147024882, 0x23u);
  }
  return v1;
}
