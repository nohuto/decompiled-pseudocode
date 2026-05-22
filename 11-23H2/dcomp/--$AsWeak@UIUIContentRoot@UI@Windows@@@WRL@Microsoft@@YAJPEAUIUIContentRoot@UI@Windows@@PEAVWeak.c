/*
 * XREFs of ??$AsWeak@UIUIContentRoot@UI@Windows@@@WRL@Microsoft@@YAJPEAUIUIContentRoot@UI@Windows@@PEAVWeakRef@01@@Z @ 0x180018E10
 * Callers:
 *     ?SetUIContentRoot@UIContext@UI@Windows@@UEAAJPEAUIUIContentRoot@23@@Z @ 0x180018930 (-SetUIContentRoot@UIContext@UI@Windows@@UEAAJPEAUIUIContentRoot@23@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180100AFC (--1-$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::AsWeak<Windows::UI::IUIContentRoot>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+20h] BYREF

  v10 = 0LL;
  v3 = (**a1)(a1, &GUID_00000038_0000_0000_c000_000000000046, &v10);
  if ( v3 < 0 )
    goto LABEL_13;
  v9 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &v9);
  if ( v3 < 0 )
  {
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v9);
LABEL_13:
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v10);
    return (unsigned int)v3;
  }
  v4 = v9;
  v5 = v9;
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v4 = v9;
  }
  v6 = *a2;
  *a2 = v5;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v4 = v9;
  }
  if ( v4 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 0LL;
}
