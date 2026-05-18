/*
 * XREFs of ??$make_shared@VDisplay@Engine@Spectre@@AEAV223@AEAW4RefreshPolicy@123@AEAW4RenderingMode@123@@std@@YA?AV?$shared_ptr@VDisplay@Engine@Spectre@@@0@AEAVEngine@2Spectre@@AEAW4RefreshPolicy@Display@23@AEAW4RenderingMode@523@@Z @ 0x1800301FC
 * Callers:
 *     ?CreateDisplay@Engine@1Spectre@@QEAA?AV?$shared_ptr@VDisplay@Engine@Spectre@@@std@@W4RefreshPolicy@Display@12@W4RenderingMode@612@@Z @ 0x180033108 (-CreateDisplay@Engine@1Spectre@@QEAA-AV-$shared_ptr@VDisplay@Engine@Spectre@@@std@@W4RefreshPoli.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0Display@Engine@Spectre@@QEAA@AEAV112@W4RefreshPolicy@012@W4RenderingMode@012@@Z @ 0x1800570E8 (--0Display@Engine@Spectre@@QEAA@AEAV112@W4RefreshPolicy@012@W4RenderingMode@012@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Spectre::Engine::Display,Spectre::Engine::Engine &,enum Spectre::Engine::Display::RefreshPolicy &,enum Spectre::Engine::Display::RenderingMode &>(
        _QWORD *a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rbx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  std::_Ref_count_base *v15; // rcx

  v8 = operator new(0x1F0uLL);
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Engine::Display>::`vftable';
    Spectre::Engine::Display::Display(v8 + 4, a2, *a3, *a4);
  }
  else
  {
    v9 = 0LL;
  }
  v10 = v9 + 4;
  *a1 = v9 + 4;
  a1[1] = v9;
  if ( v9 != (_DWORD *)-16LL )
  {
    v11 = *((_QWORD *)v9 + 3);
    if ( !v11 || !*(_DWORD *)(v11 + 8) )
    {
      if ( v9 )
        _InterlockedIncrement(v9 + 2);
      v12 = (volatile signed __int32 *)a1[1];
      v13 = 0LL;
      v14 = 0LL;
      if ( v12 )
      {
        v13 = v10;
        v14 = a1[1];
        _InterlockedIncrement(v12 + 3);
      }
      *v10 = v13;
      v15 = (std::_Ref_count_base *)v10[1];
      v10[1] = v14;
      if ( v15 )
        std::_Ref_count_base::_Decwref(v15);
      if ( v12 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v12);
    }
  }
  return a1;
}
