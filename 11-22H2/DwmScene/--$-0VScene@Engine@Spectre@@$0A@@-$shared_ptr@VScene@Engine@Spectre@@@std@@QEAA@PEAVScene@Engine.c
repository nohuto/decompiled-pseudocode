/*
 * XREFs of ??$?0VScene@Engine@Spectre@@$0A@@?$shared_ptr@VScene@Engine@Spectre@@@std@@QEAA@PEAVScene@Engine@Spectre@@@Z @ 0x18003EED4
 * Callers:
 *     ?CreateInstance@Scene@Engine@Spectre@@SA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@PEAV223@@Z @ 0x180040794 (-CreateInstance@Scene@Engine@Spectre@@SA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@PEAV223@@Z.c)
 *     ?CreateInstance@Scene@Engine@Spectre@@SA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@PEAV223@W4ThreadingMode@Lockable@23@@Z @ 0x180040828 (-CreateInstance@Scene@Engine@Spectre@@SA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@PEAV223@W4T.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??$?4VScene@Engine@Spectre@@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAAAEAV01@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x18002A670 (--$-4VScene@Engine@Spectre@@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAAAEAV01@AEBV-$shared_ptr.c)
 *     ??1?$_Temporary_owner@VScene@Engine@Spectre@@@std@@QEAA@XZ @ 0x18003FE30 (--1-$_Temporary_owner@VScene@Engine@Spectre@@@std@@QEAA@XZ.c)
 */

__int64 **__fastcall std::shared_ptr<Spectre::Engine::Scene>::shared_ptr<Spectre::Engine::Scene>(
        __int64 **a1,
        __int64 *a2)
{
  void *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  std::_Ref_count_base *v7; // rsi
  __int64 *v9; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-10h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = operator new(0x18uLL);
  v5 = 1LL;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 1;
    *(_QWORD *)v4 = &std::_Ref_count<Spectre::Engine::Scene>::`vftable';
    *((_DWORD *)v4 + 3) = 1;
    *((_QWORD *)v4 + 2) = a2;
  }
  *a1 = a2;
  a1[1] = (__int64 *)v4;
  if ( a2 )
  {
    v6 = a2[1];
    if ( !v6 || !*(_DWORD *)(v6 + 8) )
    {
      if ( v4 )
        _InterlockedAdd((volatile signed __int32 *)v4 + 2, 1u);
      v10 = (std::_Ref_count_base *)a1[1];
      v7 = v10;
      v9 = a2;
      std::weak_ptr<Spectre::Engine::Scene>::operator=<Spectre::Engine::Scene>(a2, &v9);
      if ( v7 )
        std::_Ref_count_base::_Decref(v7);
    }
  }
  v11 = 0LL;
  std::_Temporary_owner<Spectre::Engine::Scene>::~_Temporary_owner<Spectre::Engine::Scene>(&v11, v5);
  return a1;
}
