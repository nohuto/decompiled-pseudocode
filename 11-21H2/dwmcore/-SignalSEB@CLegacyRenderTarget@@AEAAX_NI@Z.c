/*
 * XREFs of ?SignalSEB@CLegacyRenderTarget@@AEAAX_NI@Z @ 0x1800BBC90
 * Callers:
 *     ?CheckForFullScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x1800BBBD8 (-CheckForFullScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     McTemplateU0zqq_EventWriteTransfer @ 0x1801C0EFC (McTemplateU0zqq_EventWriteTransfer.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x18026C12C (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 */

void __fastcall CLegacyRenderTarget::SignalSEB(CLegacyRenderTarget *this, char a2, unsigned int a3)
{
  char updated; // di
  struct _SEB_RPC_PUBLISH_DATA *v5; // rcx
  char v7; // bp
  struct _SEB_RPC_PUBLISH_DATA *v9; // rcx

  updated = 0;
  v5 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 2329);
  v7 = a3 > 0xC8;
  if ( v5 && *((_BYTE *)this + 18616) != v7 )
    PubSebiUpdateLevelEventRpc(v5, a3 > 0xC8);
  v9 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 2328);
  if ( v9 )
  {
    if ( *((_BYTE *)this + 18615) == a2 )
      goto LABEL_6;
    updated = PubSebiUpdateLevelEventRpc(v9, a2 != 0);
  }
  if ( *((_BYTE *)this + 18615) == a2 )
  {
LABEL_6:
    if ( *((_BYTE *)this + 18616) == v7 )
      return;
  }
  *((_BYTE *)this + 18615) = a2;
  *((_BYTE *)this + 18616) = v7;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0zqq_EventWriteTransfer((_DWORD)v9, a2, a3, a3, updated);
}
