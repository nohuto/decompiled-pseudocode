/*
 * XREFs of SpbCheckRect @ 0x1C00DC7C0
 * Callers:
 *     SpbCheckPwnd @ 0x1C0004DF4 (SpbCheckPwnd.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C00435F8 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0047DD4 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxInternalInvalidate @ 0x1C004A420 (xxxInternalInvalidate.c)
 *     xxxScrollWindowEx @ 0x1C00BFE8C (xxxScrollWindowEx.c)
 *     _ScrollDC @ 0x1C00C08AC (_ScrollDC.c)
 *     SpbCheckDce @ 0x1C00DC6F0 (SpbCheckDce.c)
 * Callees:
 *     ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x1C00053D0 (-IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z.c)
 *     IsVisible @ 0x1C006C350 (IsVisible.c)
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C00DC840 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 */

char __fastcall SpbCheckRect(struct tagWND *a1, struct tagRECT *a2, unsigned int a3)
{
  int v6; // eax
  struct tagSPB *v7; // rcx
  struct tagSPB *v8; // rbx

  v6 = IsVisible((__int64)a1);
  if ( v6 )
  {
    while ( 1 )
    {
      LOBYTE(v6) = gpDispInfo;
      v7 = *(struct tagSPB **)(gpDispInfo + 32LL);
      if ( !v7 )
        break;
      while ( 1 )
      {
        v8 = *(struct tagSPB **)v7;
        v6 = SpbCheckRect2(v7, a1, a2, a3);
        if ( !v6 )
        {
          LOBYTE(v6) = IsSpbPresentOrNull(v8);
          if ( !(_BYTE)v6 )
            break;
        }
        v7 = v8;
        if ( !v8 )
          return v6;
      }
    }
  }
  return v6;
}
