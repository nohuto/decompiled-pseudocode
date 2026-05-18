/*
 * XREFs of ?Set@ScissorState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009F520
 * Callers:
 *     ?Set@CommandListState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009FC60 (-Set@CommandListState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 * Callees:
 *     ??8ScissorRect@Engine@Spectre@@QEBA_NAEBU012@@Z @ 0x180059CE4 (--8ScissorRect@Engine@Spectre@@QEBA_NAEBU012@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::ScissorState::Set(
        Spectre::Engine::ScissorState *this,
        struct Spectre::Engine::CommandList *a2)
{
  struct Spectre::Engine::CommandList *v2; // r11
  unsigned int *v4; // rdx
  _OWORD *v5; // rcx

  v2 = a2;
  if ( *((_BYTE *)this + 56) )
  {
    v5 = (_OWORD *)((char *)this + 8);
    v4 = (unsigned int *)((char *)this + 24);
LABEL_5:
    *(_OWORD *)v4 = *v5;
    (*(void (__fastcall **)(struct Spectre::Engine::CommandList *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v2 + 192LL))(
      v2,
      *v4,
      *((unsigned int *)this + 7),
      *((unsigned int *)this + 8),
      *((_DWORD *)this + 9));
    goto LABEL_6;
  }
  if ( !Spectre::Engine::ScissorRect::operator==((_DWORD *)this + 2, (_DWORD *)this + 6) )
    goto LABEL_5;
LABEL_6:
  *((_BYTE *)this + 56) = 0;
}
