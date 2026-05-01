/*
 * XREFs of ?SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z @ 0x180026740
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8___ @ 0x180026614 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8___.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x18002ACB8 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetChromeOptions(__int64 a1, unsigned __int64 a2)
{
  char v3; // cl
  unsigned __int64 v4; // r9
  int v5; // r8d
  bool v6; // zf
  int v7; // edx
  unsigned int v8; // r9d
  unsigned __int64 v9; // rbx
  char v10; // dl
  char v11; // cl
  int v12; // ecx
  bool v13; // si
  unsigned int v15; // r9d
  __int128 v16; // [rsp+20h] [rbp-48h]
  __int128 v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-18h]
  unsigned __int64 v19; // [rsp+70h] [rbp+8h]
  unsigned __int64 v20; // [rsp+78h] [rbp+10h]

  v19 = a2;
  v3 = a2;
  v4 = HIDWORD(a2);
  v5 = *(_DWORD *)(a1 + 572) & ~(_DWORD)a2;
  *(_DWORD *)(a1 + 568) |= a2;
  v6 = (*(_BYTE *)(a1 + 596) & 2) == 0;
  *(_DWORD *)(a1 + 572) = a2 & HIDWORD(a2) | v5;
  if ( v6 )
  {
    v7 = *(_DWORD *)(a1 + 576);
    if ( (v7 & 1) != 0 && (v3 & 1) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 580) & 1) != 0 )
      {
        v8 = v4 | 1;
        HIDWORD(v19) = v8;
      }
      else
      {
        v8 = HIDWORD(a2) & 0xFFFFFFFE;
        HIDWORD(v19) = HIDWORD(a2) & 0xFFFFFFFE;
      }
    }
    else
    {
      v8 = HIDWORD(v19);
    }
    if ( (v7 & 0x80u) != 0 && v3 < 0 )
    {
      if ( (*(_BYTE *)(a1 + 580) & 0x80) != 0 )
        v15 = v8 | 0x80;
      else
        v15 = v8 & 0xFFFFFF7F;
      HIDWORD(v19) = v15;
    }
  }
  v9 = v19;
  v10 = 0;
  LODWORD(v20) = v19;
  if ( (v19 & 4) != 0 && (*(_BYTE *)(a1 + 567) = (v19 & 0x400000000LL) != 0, *(_BYTE *)(a1 + 566)) )
  {
    v11 = BYTE4(v19) | 4;
    HIDWORD(v20) = HIDWORD(v19) | 4;
    v9 = v20;
  }
  else
  {
    v11 = BYTE4(v19);
  }
  if ( (v19 & 0x20) != 0 )
    *(_BYTE *)(a1 + 600) = (v11 & 0x20) != 0;
  if ( (v19 & 0x40) != 0 )
  {
    v12 = v11 & 0x40;
    v13 = v12 != 0;
    if ( *(_DWORD *)(a1 + 228) == 1 && !v12 )
    {
      CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen(a1 + 224, 3LL);
      v10 = *(_BYTE *)(a1 + 52);
    }
    *(_BYTE *)(a1 + 564) = v13;
  }
  BYTE8(v16) = v10;
  *(_QWORD *)&v16 = v9;
  v17 = v16;
  v18 = a1;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8___((_DWORD *)a1, &v17);
}
