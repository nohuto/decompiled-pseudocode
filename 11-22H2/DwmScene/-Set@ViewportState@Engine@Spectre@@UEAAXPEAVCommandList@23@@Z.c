/*
 * XREFs of ?Set@ViewportState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009F390
 * Callers:
 *     ?Set@CommandListState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009FC60 (-Set@CommandListState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 * Callees:
 *     ??9Viewport@Engine@Spectre@@QEAA_NAEBU012@@Z @ 0x18009F2D4 (--9Viewport@Engine@Spectre@@QEAA_NAEBU012@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::ViewportState::Set(
        Spectre::Engine::ViewportState *this,
        struct Spectre::Engine::CommandList *a2)
{
  struct Spectre::Engine::CommandList *v2; // r8
  char *v3; // rdx
  char *v5; // rcx
  __int64 v6; // xmm1_8

  v2 = a2;
  v3 = (char *)this + 8;
  if ( *((_BYTE *)this + 80) )
  {
    v5 = (char *)this + 32;
LABEL_5:
    v6 = *((_QWORD *)v3 + 2);
    *(_OWORD *)v5 = *(_OWORD *)v3;
    *((_QWORD *)v5 + 2) = v6;
    (*(void (__fastcall **)(struct Spectre::Engine::CommandList *))(*(_QWORD *)v2 + 184LL))(v2);
    goto LABEL_6;
  }
  if ( Spectre::Engine::Viewport::operator!=((float *)this + 8, (float *)v3) )
    goto LABEL_5;
LABEL_6:
  *((_BYTE *)this + 80) = 0;
}
