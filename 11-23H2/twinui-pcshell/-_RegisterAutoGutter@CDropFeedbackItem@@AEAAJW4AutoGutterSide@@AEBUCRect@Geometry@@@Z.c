/*
 * XREFs of ?_RegisterAutoGutter@CDropFeedbackItem@@AEAAJW4AutoGutterSide@@AEBUCRect@Geometry@@@Z @ 0x1805F412C
 * Callers:
 *     ?_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z @ 0x1805F46FC (-_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_PaintAutoGutter@CDropFeedbackItem@@AEAAXPEAUIDCompThumbnail@@W4AutoGutterSide@@@Z @ 0x1805F40DC (-_PaintAutoGutter@CDropFeedbackItem@@AEAAXPEAUIDCompThumbnail@@W4AutoGutterSide@@@Z.c)
 */

__int64 __fastcall CDropFeedbackItem::_RegisterAutoGutter(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // rsi
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v8; // rbx
  int v9; // edx
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // rbx
  __int64 *v15; // [rsp+80h] [rbp+40h] BYREF
  __int64 v16; // [rsp+90h] [rbp+50h] BYREF
  __int64 v17; // [rsp+98h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v15 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v3 + 80LL);
  v8 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v15, &v17);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v8);
  v9 = a3[3] - a3[1];
  LODWORD(v16) = a3[2] - *a3;
  HIDWORD(v16) = v9;
  v10 = v7(v3, *(_QWORD *)(a1 + 56), v16, 0LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v8);
  if ( v10 >= 0 )
  {
    CDropFeedbackItem::_PaintAutoGutter(a1, v15, a2);
    (*(void (__fastcall **)(__int64 *, _DWORD *, _QWORD, _QWORD))(*v15 + 24))(v15, a3, 0LL, 0LL);
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(*v15 + 32))(v15, v11, 0LL, 0LL);
    v12 = a1 + 240;
    if ( a2 )
      v12 = a1 + 248;
    v13 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(v12, &v16);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v13);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
    *v13 = (__int64)v15;
    v10 = 0;
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v15);
  return (unsigned int)v10;
}
