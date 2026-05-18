/*
 * XREFs of ?Set@RenderTargetState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009F160
 * Callers:
 *     ?Set@CommandListState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009FC60 (-Set@CommandListState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 * Callees:
 *     ??$?9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@0@Z @ 0x180011DF0 (--$-9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@0@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::RenderTargetState::Set(
        Spectre::Engine::RenderTargetState *this,
        struct Spectre::Engine::CommandList *a2)
{
  char *v2; // rbp
  __int64 *v4; // rdi
  __int64 v6; // rsi
  __int64 *v7; // rdx
  char v8; // r8
  _QWORD *v9; // rdx
  char v10; // r9

  v2 = (char *)this + 136;
  v4 = (__int64 *)((char *)this + 136);
  v6 = 8LL;
  do
  {
    v7 = v4 - 16;
    if ( *((_BYTE *)this + 440) || std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>(v4, v7) )
    {
      std::shared_ptr<Spectre::Engine::Light>::operator=(v4, v7);
      v8 = *((_BYTE *)this + 440);
    }
    v4 += 2;
    --v6;
  }
  while ( v6 );
  v9 = (_QWORD *)((char *)this + 392);
  if ( v8 || std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>((_QWORD *)this + 51, v9) )
  {
    std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)this + 51, v9);
LABEL_11:
    (*(void (__fastcall **)(struct Spectre::Engine::CommandList *, char *, char *))(*(_QWORD *)a2 + 176LL))(
      a2,
      v2,
      (char *)this + 408);
    goto LABEL_12;
  }
  if ( v10 )
    goto LABEL_11;
LABEL_12:
  *((_BYTE *)this + 440) = 0;
}
