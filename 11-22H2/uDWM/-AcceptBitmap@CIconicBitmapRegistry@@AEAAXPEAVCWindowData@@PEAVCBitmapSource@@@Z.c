/*
 * XREFs of ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800C2D68
 * Callers:
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x1800C2F20 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 * Callees:
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x18001673C (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180023050 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180034310 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x1800AD25C (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x1800C3260 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800C3C28 (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x1801072B4 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x180107510 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 */

void __fastcall CIconicBitmapRegistry::AcceptBitmap(char **this, struct CWindowData *a2, struct CBitmapSource *a3)
{
  __int64 v3; // rsi
  struct CWindowData ***v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // r8d
  struct CWindowData **v9; // rdx
  unsigned int v10; // edx
  int v11; // eax
  __int64 v12; // rcx
  CWindowIconic *v13; // rcx
  struct CWindowData *v14; // [rsp+58h] [rbp+28h] BYREF
  struct CWindowData **v15; // [rsp+68h] [rbp+38h] BYREF

  v14 = a2;
  v3 = *((_QWORD *)a2 + 54);
  *((_BYTE *)a2 + 674) &= ~0x10u;
  CIconicBitmapRegistry::RequestBitmap((CIconicBitmapRegistry *)this, v14, 0);
  if ( !IsWindowTab(v14) )
  {
    v6 = (struct CWindowData ***)(this + 2);
    if ( (unsigned int)(*((_DWORD *)this + 10) + *((_DWORD *)this + 20) + *((_DWORD *)this + 21)) > *((_DWORD *)this + 2) )
      CIconicBitmapRegistry::ClearBitmap((CIconicBitmapRegistry *)this, **v6);
    if ( !v3 )
    {
      v7 = *((unsigned int *)this + 10);
      v8 = 0;
      if ( (_DWORD)v7 )
      {
        v9 = *v6;
        while ( v14 != *v9 )
        {
          ++v8;
          ++v9;
          if ( v8 >= (unsigned int)v7 )
            goto LABEL_9;
        }
      }
      else
      {
LABEL_9:
        v10 = v7 + 1;
        if ( (int)v7 + 1 >= (unsigned int)v7 )
        {
          if ( v10 > *((_DWORD *)this + 9) )
          {
            v15 = &v14;
            v11 = DynArrayImpl<0>::Grow(this + 2, 8u, 1, 0, (unsigned __int64 *)&v15);
            if ( v11 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xC0u);
            else
              *(struct CWindowData **)((char *)*v6 + (unsigned int)(8 * (*((_DWORD *)this + 10))++)) = *v15;
          }
          else
          {
            (*v6)[v7] = v14;
            *((_DWORD *)this + 10) = v10;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
      }
    }
  }
  CWindowData::SetIconicBitmap(v14, a3);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer(v12, (__int64)&UdwmManageIconicThumbnail_Info, 0LL, *((_QWORD *)v14 + 5));
  v13 = (CWindowIconic *)*((_QWORD *)v14 + 61);
  if ( v13 )
  {
    CWindowIconic::SetBitmap(v13, *((struct CBitmapSource **)v14 + 54), (*((_BYTE *)v14 + 674) & 4) != 0, 1);
    if ( !v3 )
      CWindowIconic::OnRepresentationTypeUpdated(*((CWindowIconic **)v14 + 61));
  }
}
