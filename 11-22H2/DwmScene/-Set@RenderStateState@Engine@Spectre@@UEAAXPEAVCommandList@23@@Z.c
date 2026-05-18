/*
 * XREFs of ?Set@RenderStateState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009EB40
 * Callers:
 *     ?Set@CommandListState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009FC60 (-Set@CommandListState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::RenderStateState::Set(
        Spectre::Engine::RenderStateState *this,
        struct Spectre::Engine::CommandList *a2)
{
  __int64 v3; // rax
  char v4; // [rsp+20h] [rbp-28h]
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  if ( *((_BYTE *)this + 61) )
  {
    v3 = *(_QWORD *)a2;
    v5 = *(_OWORD *)((char *)this + 44);
    v4 = *((_BYTE *)this + 60);
    (*(void (__fastcall **)(struct Spectre::Engine::CommandList *, char *, _QWORD, __int128 *, char))(v3 + 168))(
      a2,
      (char *)this + 24,
      *((unsigned int *)this + 10),
      &v5,
      v4);
    *((_BYTE *)this + 61) = 0;
  }
}
