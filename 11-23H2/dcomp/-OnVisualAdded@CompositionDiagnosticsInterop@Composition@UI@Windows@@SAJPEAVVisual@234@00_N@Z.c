/*
 * XREFs of ?OnVisualAdded@CompositionDiagnosticsInterop@Composition@UI@Windows@@SAJPEAVVisual@234@00_N@Z @ 0x1801013B0
 * Callers:
 *     ?InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z @ 0x180061E08 (-InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z.c)
 *     ?InsertAtTop@Api@VisualCollection@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x180062A50 (-InsertAtTop@Api@VisualCollection@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z.c)
 *     ?InsertAtBottom@Api@VisualCollection@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x180062C00 (-InsertAtBottom@Api@VisualCollection@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z.c)
 *     ?InsertAbove@Api@VisualCollection@Composition@UI@Windows@@UEAAJPEAUIVisual@345@0@Z @ 0x180063020 (-InsertAbove@Api@VisualCollection@Composition@UI@Windows@@UEAAJPEAUIVisual@345@0@Z.c)
 * Callees:
 *     ??$ToApi@UIVisual@Composition@UI@Windows@@@Visual@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001C0BC (--$ToApi@UIVisual@Composition@UI@Windows@@@Visual@Composition@UI@Windows@@SAXPEAV0123@V-$ComPtrR.c)
 *     ?GetComment@CompositionObject@Composition@UI@Windows@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x180088D2C (-GetComment@CompositionObject@Composition@UI@Windows@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180100AFC (--1-$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionDiagnosticsInterop::OnVisualAdded(
        struct Windows::UI::Composition::Visual *this,
        struct Windows::UI::Composition::Visual *a2,
        struct Windows::UI::Composition::Visual *a3,
        char a4)
{
  int v7; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  char v12; // [rsp+20h] [rbp-40h]
  HSTRING string; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+48h] [rbp-18h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  __int64 v16; // [rsp+58h] [rbp-8h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  Windows::UI::Composition::Visual::ToApi<Windows::UI::Composition::IVisual>(a2, &v16);
  Windows::UI::Composition::Visual::ToApi<Windows::UI::Composition::IVisual>(this, &v15);
  Windows::UI::Composition::Visual::ToApi<Windows::UI::Composition::IVisual>(a3, &v14);
  WindowsDeleteString(0LL);
  string = 0LL;
  Windows::UI::Composition::CompositionObject::GetComment(this, &string);
  v12 = a4;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, char, HSTRING))(*(_QWORD *)qword_180220D10 + 24LL))(
         qword_180220D10,
         v15,
         v16,
         v14,
         v12,
         string);
  if ( v7 >= 0 )
  {
    WindowsDeleteString(string);
    v9 = v14;
    string = 0LL;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return 0LL;
  }
  else
  {
    WindowsDeleteString(string);
    string = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v14);
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v15);
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v16);
    return (unsigned int)v7;
  }
}
