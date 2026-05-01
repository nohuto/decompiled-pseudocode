/*
 * XREFs of ??$MakeAndInitialize@VTrayInfoTipDisplayInfo@SystemTray@@V12@PEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAVTrayInfoTipDisplayInfo@SystemTray@@$$QEAPEAUHSTRING__@@@Z @ 0x180491B7C
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipAppInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x180491E7C (-RuntimeClassInitialize@TrayInfoTipAppInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180490FE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApp_ea_180490FE0.c)
 *     ??0TrayInfoTipDisplayInfo@SystemTray@@QEAA@XZ @ 0x180491C30 (--0TrayInfoTipDisplayInfo@SystemTray@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x1804930C8 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SystemTray::TrayInfoTipDisplayInfo,SystemTray::TrayInfoTipDisplayInfo,HSTRING__ *>(
        volatile signed __int64 **a1,
        HSTRING *a2)
{
  SystemTray::TrayInfoTipDisplayInfo *v4; // rax
  int v5; // edi
  volatile signed __int64 *v6; // rbx
  volatile int *v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt

  *a1 = 0LL;
  v4 = (SystemTray::TrayInfoTipDisplayInfo *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = (volatile signed __int64 *)SystemTray::TrayInfoTipDisplayInfo::TrayInfoTipDisplayInfo(v4);
    v5 = SystemTray::TrayInfoTipDisplayInfo::RuntimeClassInitialize((SystemTray::TrayInfoTipDisplayInfo *)v6, *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
      {
        v8 = *((_QWORD *)v6 + 8);
        while ( v8 >= 0 )
        {
          if ( (_DWORD)v8 != 0x7FFFFFFF )
          {
            v9 = v8;
            v8 = _InterlockedCompareExchange64(v6 + 8, v8 + 1, v8);
            if ( v9 != v8 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v8 + 16), v7);
      }
LABEL_11:
      *a1 = v6;
      v5 = 0;
    }
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release((__int64)v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
