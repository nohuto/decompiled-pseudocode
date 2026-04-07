/*
 * XREFs of ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180003E64
 * Callers:
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180003D04 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 * Callees:
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x180003F0C (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180010FC0 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180011268 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180022F70 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180023BB8 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800350F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18004B4FC (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?Find@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800693F8 (-Find@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x1801013D8 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

void __fastcall CIconicBitmapRegistry::AcceptBitmap(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        struct CBitmapSource *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rcx
  CWindowIconic *v7; // rcx
  struct CWindowData ***v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // r8d
  int v11; // eax
  struct CWindowData *v12; // [rsp+58h] [rbp+28h] BYREF
  struct CWindowData **v13; // [rsp+68h] [rbp+38h] BYREF

  v12 = a2;
  v3 = *((_QWORD *)a2 + 54);
  *((_BYTE *)a2 + 666) &= ~0x10u;
  CIconicBitmapRegistry::RequestBitmap(this, v12, 0);
  if ( !IsWindowTab(v12) )
  {
    v8 = (struct CWindowData ***)((char *)this + 16);
    if ( (unsigned int)(*((_DWORD *)this + 10) + *((_DWORD *)this + 20) + *((_DWORD *)this + 21)) > *((_DWORD *)this + 2) )
      CIconicBitmapRegistry::ClearBitmap(this, **v8);
    if ( !v3 && !(unsigned int)DynArray<CWindowData *,0>::Find((char *)this + 16, &v12) )
    {
      v9 = *((_DWORD *)this + 10);
      v10 = v9 + 1;
      if ( v9 + 1 >= v9 )
      {
        if ( v10 > *((_DWORD *)this + 9) )
        {
          v13 = &v12;
          v11 = DynArrayImpl<0>::Grow((int)this + 16, 8, 1, 0, (__int64)&v13);
          if ( v11 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC0u, 0LL);
          else
            *(struct CWindowData **)((char *)*v8 + (unsigned int)(8 * (*((_DWORD *)this + 10))++)) = *v13;
        }
        else
        {
          (*v8)[*((unsigned int *)this + 10)] = v12;
          *((_DWORD *)this + 10) = v10;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
    }
  }
  CWindowData::SetIconicBitmap(v12, a3);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer(v6, &UdwmManageIconicThumbnail_Info, 0LL, *((_QWORD *)v12 + 5));
  v7 = (CWindowIconic *)*((_QWORD *)v12 + 61);
  if ( v7 )
  {
    CWindowIconic::SetBitmap(v7, *((struct CBitmapSource **)v12 + 54), (*((_BYTE *)v12 + 666) & 4) != 0, 1);
    if ( !v3 )
      CWindowIconic::OnRepresentationTypeUpdated(*((CWindowIconic **)v12 + 61));
  }
}
