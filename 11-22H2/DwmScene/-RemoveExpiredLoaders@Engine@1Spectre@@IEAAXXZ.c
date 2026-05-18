/*
 * XREFs of ?RemoveExpiredLoaders@Engine@1Spectre@@IEAAXXZ @ 0x180035B10
 * Callers:
 *     ?CheckAllLoadersDestroyed@Engine@1Spectre@@IEAAXXZ @ 0x180032A64 (-CheckAllLoadersDestroyed@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ??0?$weak_ptr@VMaterial@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18002B398 (--0-$weak_ptr@VMaterial@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@@?$vector@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$weak_ptr@VLoaderBase@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x18002E634 (--$_Emplace_reallocate@AEBV-$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@@-$vector@V-$weak_ptr@VL.c)
 *     ?_Tidy@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180038590 (-_Tidy@-$vector@V-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V-$allocator@V-$weak_ptr@VRe.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::Engine::RemoveExpiredLoaders(Spectre::Engine::Engine *this)
{
  char *v2; // r8
  char *v3; // rbx
  _QWORD *v4; // rsi
  _QWORD *v5; // rdi
  char *v6; // r9
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  char *v11; // rax
  _BYTE v12[16]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v13; // [rsp+30h] [rbp-20h] BYREF
  char *v14; // [rsp+40h] [rbp-10h]

  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Engine *)((char *)this + 312), (__int64)v12);
  v13 = 0LL;
  v2 = 0LL;
  v14 = 0LL;
  v3 = (char *)this + 288;
  v4 = (_QWORD *)*((_QWORD *)v3 + 1);
  v5 = *(_QWORD **)v3;
  v6 = 0LL;
  while ( v5 != v4 )
  {
    v7 = v5[1];
    if ( v7 && *(_DWORD *)(v7 + 8) )
    {
      if ( v6 == v2 )
      {
        std::vector<std::weak_ptr<Spectre::Engine::LoaderBase>>::_Emplace_reallocate<std::weak_ptr<Spectre::Engine::LoaderBase> const &>(
          (char **)&v13,
          v6,
          v5);
        v2 = v14;
        v6 = (char *)*((_QWORD *)&v13 + 1);
      }
      else
      {
        std::weak_ptr<Spectre::Engine::Material>::weak_ptr<Spectre::Engine::Material>(v6, v5);
        v6 = (char *)(v8 + 16);
        *((_QWORD *)&v13 + 1) = v6;
      }
    }
    v5 += 2;
  }
  if ( v3 != (char *)&v13 )
  {
    v9 = *(_QWORD *)v3;
    *(_QWORD *)v3 = v13;
    *(_QWORD *)&v13 = v9;
    v10 = *((_QWORD *)v3 + 1);
    *((_QWORD *)v3 + 1) = v6;
    *((_QWORD *)&v13 + 1) = v10;
    v11 = (char *)*((_QWORD *)v3 + 2);
    *((_QWORD *)v3 + 2) = v2;
    v14 = v11;
  }
  std::vector<std::weak_ptr<Spectre::Engine::RendererResource>>::_Tidy(&v13);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v12);
}
