/*
 * XREFs of ?InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ @ 0x1C02023F0
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01FECEC (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z @ 0x1C02BE998 (-UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z.c)
 */

void __fastcall DXGADAPTER::InitializeDriverDiagnosticReporting(DXGADAPTER *this)
{
  struct DXGGLOBAL *Global; // rax
  unsigned int v3; // ebx
  _DWORD *v4; // rdi
  __int128 v5; // [rsp+20h] [rbp-10h] BYREF

  Global = DXGGLOBAL_GetGlobal();
  *((_QWORD *)this + 566) = 0LL;
  *((_QWORD *)this + 567) = -1LL;
  v3 = 0;
  v4 = (_DWORD *)((char *)Global + 304572);
  v5 = 0LL;
  do
  {
    DWORD1(v5) = *v4;
    if ( DWORD1(v5) )
    {
      if ( v3 )
      {
        LODWORD(v5) = v5 | 2;
        DWORD2(v5) |= 0xFFFFFFFE;
      }
      else
      {
        LODWORD(v5) = v5 | 1;
        DWORD2(v5) |= 0xFFFFFFFC;
      }
      HIDWORD(v5) = v3;
      DXGADAPTER::UpdateDiagnosticReporting(this, (struct DXGADAPTER::_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING *)&v5);
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 2 );
}
