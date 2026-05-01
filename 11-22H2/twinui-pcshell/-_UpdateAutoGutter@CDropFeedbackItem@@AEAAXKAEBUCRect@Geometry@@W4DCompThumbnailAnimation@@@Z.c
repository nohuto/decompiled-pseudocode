/*
 * XREFs of ?_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z @ 0x1805F46FC
 * Callers:
 *     ?_UpdateAutoGutters@CDropFeedbackItem@@AEAAXPEBUtagRECT@@W4DCompThumbnailAnimation@@@Z @ 0x1805F4894 (-_UpdateAutoGutters@CDropFeedbackItem@@AEAAXPEBUtagRECT@@W4DCompThumbnailAnimation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180578AA8 (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_PaintAutoGutter@CDropFeedbackItem@@AEAAXPEAUIDCompThumbnail@@W4AutoGutterSide@@@Z @ 0x1805F40DC (-_PaintAutoGutter@CDropFeedbackItem@@AEAAXPEAUIDCompThumbnail@@W4AutoGutterSide@@@Z.c)
 *     ?_RegisterAutoGutter@CDropFeedbackItem@@AEAAJW4AutoGutterSide@@AEBUCRect@Geometry@@@Z @ 0x1805F412C (-_RegisterAutoGutter@CDropFeedbackItem@@AEAAJW4AutoGutterSide@@AEBUCRect@Geometry@@@Z.c)
 */

__int64 __fastcall CDropFeedbackItem::_UpdateAutoGutter(__int64 a1, int a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v4; // edi
  __int64 *v8; // rbx
  unsigned __int8 v9; // r14
  int v10; // edx
  __int64 *v11; // rbx
  __int64 v12; // rdx
  char v13; // r14
  char v14; // r15
  __int64 v16[2]; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  v16[0] = 0LL;
  if ( a2 == 0x2000 )
  {
    v8 = (__int64 *)(a1 + 240);
    v9 = 1;
    if ( *(_QWORD *)(a1 + 240) )
      goto LABEL_7;
    v10 = 0;
  }
  else
  {
    v8 = (__int64 *)(a1 + 248);
    v9 = 0;
    if ( *(_QWORD *)(a1 + 248) )
      goto LABEL_7;
    v10 = 1;
  }
  CDropFeedbackItem::_RegisterAutoGutter(a1, v10, a3);
LABEL_7:
  Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(v16, v8);
  v11 = (__int64 *)v16[0];
  if ( v16[0] )
  {
    v12 = ((v9 ^ 1u) + 1) << 6;
    v13 = ((unsigned int)v12 & *(_DWORD *)(a1 + 160)) != 0;
    v14 = ((unsigned int)v12 & *(_DWORD *)(a1 + 72)) != 0;
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v16[0] + 32LL))(v16[0], v12, a4, 0LL);
    if ( v13 != v14 )
      CDropFeedbackItem::_PaintAutoGutter(a1, v11, 0);
    if ( *(_BYTE *)(a1 + 157) )
    {
      if ( (*(_DWORD *)(a1 + 72) & 0x80000) == 0 )
        v4 = a4;
      (*(void (__fastcall **)(__int64 *, _DWORD *, _QWORD, _QWORD))(*v11 + 24))(v11, a3, v4, 0LL);
    }
  }
  return Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v16);
}
