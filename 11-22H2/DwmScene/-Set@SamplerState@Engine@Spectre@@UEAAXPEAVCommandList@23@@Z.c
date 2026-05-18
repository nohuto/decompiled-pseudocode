/*
 * XREFs of ?Set@SamplerState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009E4C0
 * Callers:
 *     ?Set@CommandListState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009FC60 (-Set@CommandListState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 * Callees:
 *     ??$?9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@0@Z @ 0x180011DF0 (--$-9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@0@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::SamplerState::Set(
        Spectre::Engine::SamplerState *this,
        struct Spectre::Engine::CommandList *a2)
{
  unsigned int i; // esi
  int v5; // eax
  unsigned int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // rax
  char *v9; // rbx

  for ( i = 0; i < 6; ++i )
  {
    v5 = *((_DWORD *)this + 1154);
    if ( _bittest(&v5, i) )
    {
      v6 = 0;
      v7 = 0LL;
      do
      {
        if ( *((_BYTE *)this + 4620)
          || std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>(
               (_QWORD *)this + 32 * i + 2 * v7 + 193,
               (_QWORD *)this + 32 * i + 2 * v7 + 1) )
        {
          v8 = 16 * (v7 + 16LL * i);
          v9 = (char *)this + v8;
          std::shared_ptr<Spectre::Engine::Light>::operator=(
            (__int64 *)((char *)this + v8 + 1544),
            (Spectre::Engine::SamplerState *)((char *)this + v8 + 8));
          (*(void (__fastcall **)(struct Spectre::Engine::CommandList *, _QWORD, char *, _QWORD))(*(_QWORD *)a2 + 136LL))(
            a2,
            i,
            v9 + 1544,
            v6);
        }
        ++v6;
        ++v7;
      }
      while ( v6 < 0x10 );
    }
  }
  *((_BYTE *)this + 4620) = 0;
}
