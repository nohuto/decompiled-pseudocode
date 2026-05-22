/*
 * XREFs of Windows::UI::Composition::CallOnVisual @ 0x180100C10
 * Callers:
 *     Windows::UI::Composition::EnumerateVisualTreePreOrderImpl @ 0x180101040 (Windows--UI--Composition--EnumerateVisualTreePreOrderImpl.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ToApi@UIVisual@Composition@UI@Windows@@@Visual@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001C0BC (--$ToApi@UIVisual@Composition@UI@Windows@@@Visual@Composition@UI@Windows@@SAXPEAV0123@V-$ComPtrR.c)
 *     ?GetComment@CompositionObject@Composition@UI@Windows@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x180088D2C (-GetComment@CompositionObject@Composition@UI@Windows@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180100AFC (--1-$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CallOnVisual(
        __int64 a1,
        Microsoft::WRL2::NestableRuntimeClass *a2,
        Microsoft::WRL2::NestableRuntimeClass *a3,
        unsigned int a4,
        HSTRING string)
{
  HSTRING v5; // rdi
  HRESULT Comment; // eax
  unsigned int v10; // ebx
  int v12; // eax
  HSTRING v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  v5 = string;
  v17 = 0LL;
  v16 = 0LL;
  *(_BYTE *)string = 1;
  Windows::UI::Composition::Visual::ToApi<Windows::UI::Composition::IVisual>(a2, &v17);
  Windows::UI::Composition::Visual::ToApi<Windows::UI::Composition::IVisual>(a3, &v16);
  WindowsDeleteString(0LL);
  string = 0LL;
  Comment = Windows::UI::Composition::CompositionObject::GetComment(a3, &string);
  v10 = Comment;
  if ( Comment >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, HSTRING))(*(_QWORD *)a1 + 24LL))(
            a1,
            v17,
            v16,
            a4,
            string);
    v13 = string;
    *(_BYTE *)v5 = v12 == 0;
    WindowsDeleteString(v13);
    v14 = v16;
    string = 0LL;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositiondiagnosticsinterop.cpp",
      (const char *)(unsigned int)Comment);
    WindowsDeleteString(string);
    string = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v16);
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v17);
    return v10;
  }
}
