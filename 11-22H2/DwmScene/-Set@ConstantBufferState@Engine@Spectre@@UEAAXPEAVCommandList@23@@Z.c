/*
 * XREFs of ?Set@ConstantBufferState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009DDD0
 * Callers:
 *     ?Set@CommandListState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009FC60 (-Set@CommandListState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 * Callees:
 *     ??$?9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@0@Z @ 0x180011DF0 (--$-9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@0@Z.c)
 *     ??4?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003B558 (--4-$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::ConstantBufferState::Set(
        Spectre::Engine::ConstantBufferState *this,
        struct Spectre::Engine::CommandList *a2)
{
  __int64 v4; // rsi
  int v5; // eax
  unsigned int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // rcx
  char *v9; // rbx

  v4 = 0LL;
  do
  {
    v5 = *((_DWORD *)this + 866);
    if ( _bittest(&v5, v4) )
    {
      v6 = 0;
      v7 = 0LL;
      do
      {
        if ( *((_BYTE *)this + 3468)
          || std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>(
               (_QWORD *)this + 24 * v4 + 2 * v7 + 145,
               (_QWORD *)this + 24 * v4 + 2 * v7 + 1) )
        {
          v8 = 16 * (v7 + 12 * v4);
          v9 = (char *)this + v8;
          std::shared_ptr<Spectre::Engine::SceneNode const>::operator=(
            (Spectre::Engine::ConstantBufferState *)((char *)this + v8 + 1160),
            (Spectre::Engine::ConstantBufferState *)((char *)this + v8 + 8));
          (*(void (__fastcall **)(struct Spectre::Engine::CommandList *, _QWORD, char *, _QWORD))(*(_QWORD *)a2 + 112LL))(
            a2,
            (unsigned int)v4,
            v9 + 1160,
            v6);
        }
        ++v6;
        ++v7;
      }
      while ( v6 < 0xC );
    }
    v4 = (unsigned int)(v4 + 1);
  }
  while ( (unsigned int)v4 < 6 );
  *((_BYTE *)this + 3468) = 0;
}
