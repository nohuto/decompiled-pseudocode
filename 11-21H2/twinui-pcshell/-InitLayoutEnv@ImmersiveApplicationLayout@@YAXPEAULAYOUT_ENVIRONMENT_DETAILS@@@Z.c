/*
 * XREFs of ?InitLayoutEnv@ImmersiveApplicationLayout@@YAXPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18011F4EC
 * Callers:
 *     ?GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18011AF94 (-GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ??0CAppLayout@@QEAA@XZ @ 0x18011F3E4 (--0CAppLayout@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ImmersiveApplicationLayout::InitLayoutEnv(
        ImmersiveApplicationLayout *this,
        struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  SetRectEmpty((LPRECT)this);
  SetRectEmpty((LPRECT)((char *)this + 24));
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 4) = 100;
}
