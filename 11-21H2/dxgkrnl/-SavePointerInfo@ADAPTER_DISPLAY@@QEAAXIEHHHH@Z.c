/*
 * XREFs of ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z @ 0x1C000F808
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1C01A4940 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C01B633C (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall ADAPTER_DISPLAY::SavePointerInfo(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        char a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d

  v10 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 5819LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v13,
          v12,
          v14,
          0,
          2,
          -1,
          (__int64)L"VidPnSourceId < m_NumVidPnSources",
          5819LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v11 = 4000 * v10;
  *(_BYTE *)(*((_QWORD *)this + 16) + 4000 * v10 + 765) = a3;
  if ( a3 )
  {
    *(_DWORD *)(*((_QWORD *)this + 16) + v11 + 768) = a4;
    *(_DWORD *)(*((_QWORD *)this + 16) + v11 + 772) = a5;
    *(_DWORD *)(*((_QWORD *)this + 16) + v11 + 716) = a6;
    *(_DWORD *)(*((_QWORD *)this + 16) + v11 + 720) = a7;
  }
}
