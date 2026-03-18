/*
 * XREFs of ?CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ @ 0x1C02ED8D8
 * Callers:
 *     DxgkCheckDisplayState @ 0x1C02F0140 (DxgkCheckDisplayState.c)
 * Callees:
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C004D190 (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1C02ED6C0 (-CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::CheckPrimaryContentState(DISPLAYSTATECHECKER *this)
{
  unsigned int i; // ebx
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct DISPLAYDIAGNOSTICADAPTERDATA *v7; // rbp
  unsigned int v8; // edi
  VIDPNSOURCEINFO *v9; // rcx

  for ( i = 0; i < *((_DWORD *)this + 3522); ++i )
  {
    DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, i);
    v7 = DisplayAdapterDiagData;
    if ( DisplayAdapterDiagData )
    {
      v8 = 0;
      if ( *((_DWORD *)DisplayAdapterDiagData + 240) )
      {
        do
        {
          if ( v8 < 4 )
          {
            v9 = (struct DISPLAYDIAGNOSTICADAPTERDATA *)((char *)v7 + 224 * v8 + 64);
            if ( v9 )
              VIDPNSOURCEINFO::CheckPrimaryContent(v9, v4, v5, v6);
          }
          ++v8;
        }
        while ( v8 < *((_DWORD *)v7 + 240) );
      }
    }
  }
  return 0LL;
}
