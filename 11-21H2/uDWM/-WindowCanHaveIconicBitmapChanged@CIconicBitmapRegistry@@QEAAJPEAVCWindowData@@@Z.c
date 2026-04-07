/*
 * XREFs of ?WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x180023AEC
 * Callers:
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180010A90 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180023170 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x180003F0C (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180010FC0 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180023BB8 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18004B4FC (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x1801013D8 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

__int64 __fastcall CIconicBitmapRegistry::WindowCanHaveIconicBitmapChanged(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2)
{
  char v2; // al
  unsigned int v3; // esi
  CBaseObject *v6; // rcx
  int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 i; // r8
  CWindowIconic *v11; // rcx
  __int64 v12; // rax
  __int64 v14; // rcx
  CWindowIconic *v15; // rbp
  int v16; // eax
  int v17; // eax
  CWindowIconic *v18; // rcx
  int v19; // eax

  v2 = *((_BYTE *)a2 + 666);
  v3 = 0;
  if ( (v2 & 2) != 0 )
    goto LABEL_11;
  v6 = (CBaseObject *)*((_QWORD *)a2 + 54);
  *((_BYTE *)a2 + 666) = v2 & 0xEB;
  if ( v6 )
    CBaseObject::Release(v6);
  *((_QWORD *)a2 + 54) = 0LL;
  v7 = CIconicBitmapRegistry::RequestBitmap(this, a2, 0);
  v3 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x38Fu);
  if ( (unsigned __int64)a2 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v15 = (CWindowIconic *)*((_QWORD *)this + 12);
    *((_BYTE *)this + 88) = 0;
  }
  else
  {
    v8 = *((_DWORD *)this + 10);
    v9 = 0LL;
    for ( i = *((_QWORD *)this + 2); (unsigned int)v9 < v8; v9 = (unsigned int)(v9 + 1) )
    {
      if ( a2 == *(struct CWindowData **)(i + 8 * v9) )
        break;
    }
    if ( (unsigned int)v9 < v8 )
    {
      while ( (unsigned int)v9 < v8 - 1 )
      {
        *(_QWORD *)(i + 8 * v9) = *(_QWORD *)(i + 8LL * (unsigned int)(v9 + 1));
        v9 = (unsigned int)(v9 + 1);
        v8 = *((_DWORD *)this + 10);
      }
      *((_DWORD *)this + 10) = v8 - 1;
    }
    else if ( !*((_QWORD *)a2 + 54) )
    {
      goto LABEL_10;
    }
    CWindowData::SetIconicBitmap(a2, 0LL);
    v15 = (CWindowIconic *)*((_QWORD *)a2 + 61);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(v14, (int)&UdwmManageIconicThumbnail_Info, 2, *((_QWORD *)a2 + 5));
  }
  if ( v15 )
    CWindowIconic::SetBitmap(v15, 0LL, 0, 1);
LABEL_10:
  v11 = (CWindowIconic *)*((_QWORD *)a2 + 61);
  if ( v11 )
  {
    v16 = CWindowIconic::OnRepresentationTypeUpdated(v11);
    v3 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x393u);
      return v3;
    }
  }
LABEL_11:
  v12 = *((_QWORD *)this + 12);
  if ( v12 && *(struct CWindowData **)(v12 + 72) == a2 )
  {
    *(_WORD *)((char *)this + 89) = 0;
    *((_BYTE *)this + 88) = 0;
    v17 = CIconicBitmapRegistry::RequestBitmap(this, (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL, 0);
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x39Cu);
    v18 = (CWindowIconic *)*((_QWORD *)this + 12);
    *((_BYTE *)this + 88) = 0;
    if ( v18 )
    {
      CWindowIconic::SetBitmap(v18, 0LL, 0, 1);
      v18 = (CWindowIconic *)*((_QWORD *)this + 12);
    }
    v19 = CWindowIconic::OnRepresentationTypeUpdated(v18);
    v3 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x39Eu);
  }
  return v3;
}
