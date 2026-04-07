/*
 * XREFs of ?_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ @ 0x1800C4868
 * Callers:
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x1800C29DC (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ @ 0x1800C4C9C (-_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?_IsImmersiveAppOnTaskbar@CLivePreview@@AEAA_NXZ @ 0x1800C425C (-_IsImmersiveAppOnTaskbar@CLivePreview@@AEAA_NXZ.c)
 */

char __fastcall CLivePreview::_ShouldAddImmersiveChrome(CLivePreview *this)
{
  char v1; // r9

  if ( *((_BYTE *)this + 291) || CLivePreview::_IsImmersiveAppOnTaskbar(this) )
    return 1;
  return v1;
}
