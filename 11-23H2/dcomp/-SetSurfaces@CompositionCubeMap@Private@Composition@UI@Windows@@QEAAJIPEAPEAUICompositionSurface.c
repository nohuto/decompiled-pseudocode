/*
 * XREFs of ?SetSurfaces@CompositionCubeMap@Private@Composition@UI@Windows@@QEAAJIPEAPEAUICompositionSurface@345@@Z @ 0x18017F074
 * Callers:
 *     ?SetSurfaces@Partner@CompositionCubeMap@Private@Composition@UI@Windows@@UEAAJIPEAUICompositionSurface@456@00000@Z @ 0x18017F1E0 (-SetSurfaces@Partner@CompositionCubeMap@Private@Composition@UI@Windows@@UEAAJIPEAUICompositionSu.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSurface@SurfaceBindPoint@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@@Z @ 0x18007E1B0 (-SetSurface@SurfaceBindPoint@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::CompositionCubeMap::SetSurfaces(
        Windows::UI::Composition::Private::CompositionCubeMap *this,
        unsigned int a2,
        struct IUnknown **a3)
{
  const char *v5; // rax
  __int64 v6; // rdx
  unsigned int v8; // edi
  int v9; // r14d
  struct IUnknown *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebp
  __int64 v13; // rcx
  const char *v14; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  if ( a2 >= *((_DWORD *)this + 47) )
  {
    v5 = "Invalid mipLevel.";
    v6 = 131LL;
LABEL_3:
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioncubemap.cpp",
      (const char *)0x80070057LL,
      (int)v5,
      v14);
    return 2147942487LL;
  }
  if ( *((_BYTE *)this + 192) && a2 )
  {
    v5 = "Automatic mipmap generation requires the mipmap level to be zero.";
    v6 = 136LL;
    goto LABEL_3;
  }
  v8 = 0;
  v9 = 6 * a2;
  while ( 1 )
  {
    v10 = *a3;
    if ( *a3 )
    {
      v16 = 0LL;
      ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v10->lpVtbl->QueryInterface)(
        v10,
        &GUID_4863675c_cf4a_4b1c_9ece_c5ec0c2b2fe6,
        &v16);
      if ( v16 )
        break;
    }
    v11 = Windows::UI::Composition::SurfaceBindPoint::SetSurface(
            (struct IUnknown **)(*((_QWORD *)this + 20) + 56LL * (v9 + v8)),
            *a3);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioncubemap.cpp",
        (const char *)(unsigned int)v11);
      return v12;
    }
    ++v8;
    ++a3;
    if ( v8 >= 6 )
      return 0LL;
  }
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x96,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioncubemap.cpp",
    (const char *)0x80070057LL,
    (int)"MipmapSurface is not supported as input for CompositionCubemap",
    v14);
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return 2147942487LL;
}
