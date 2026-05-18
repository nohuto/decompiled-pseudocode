/*
 * XREFs of ?CreateConfiguration@Engine@1Spectre@@QEAAHH@Z @ 0x180032B8C
 * Callers:
 *     ??0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@5@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@5@@Z @ 0x180030FC8 (--0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V-$shared_ptr@VPerformanceLogger@Utils@Spec.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ??$_Try_emplace@AEBH$$V@?$map@HV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBHV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEBH@Z @ 0x18002F878 (--$_Try_emplace@AEBH$$V@-$map@HV-$shared_ptr@VIConfigurationManager@Utils@Spectre@@@std@@U-$less.c)
 *     ??$make_shared@VJsonConfigurationManager@Utils@Spectre@@AEAHAEAV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@std@@@std@@YA?AV?$shared_ptr@VJsonConfigurationManager@Utils@Spectre@@@0@AEAHAEAV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@0@@Z @ 0x180030480 (--$make_shared@VJsonConfigurationManager@Utils@Spectre@@AEAHAEAV-$shared_ptr@VIConfigurationMana.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Spectre::Engine::Engine::CreateConfiguration(Spectre::Engine::Engine *this, int a2)
{
  __int64 v3; // rax
  std::_Ref_count_base **v4; // rax
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rcx
  __int64 v7; // rdx
  std::_Ref_count_base *v8; // rbx
  std::_Ref_count_base *v9; // rcx
  unsigned int v10; // edi
  std::_Ref_count_base *v12[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v13; // [rsp+30h] [rbp-50h] BYREF
  std::_Ref_count_base *v14; // [rsp+38h] [rbp-48h]
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  std::_Ref_count_base *v16; // [rsp+48h] [rbp-38h]
  _BYTE v17[16]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v18[16]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v19[16]; // [rsp+70h] [rbp-10h] BYREF
  int v20; // [rsp+90h] [rbp+10h] BYREF
  unsigned int v21; // [rsp+98h] [rbp+18h] BYREF

  v21 = a2;
  v20 = 0;
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Engine *)((char *)this + 8), (__int64)v17);
  *(_OWORD *)v12 = 0LL;
  if ( v20 )
  {
    v3 = std::map<int,std::shared_ptr<Spectre::Utils::IConfigurationManager>>::_Try_emplace<int const &,>(
           (__int64 *)this + 135,
           (__int64)v18,
           &v20);
    v4 = (std::_Ref_count_base **)std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
                                    &v15,
                                    (_QWORD *)(*(_QWORD *)v3 + 40LL));
    v5 = *v4;
    *v4 = 0LL;
    v12[0] = v5;
    v6 = v4[1];
    v4[1] = 0LL;
    v12[1] = v6;
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
  }
  v21 = *((_DWORD *)this + 274);
  *((_DWORD *)this + 274) = v21 + 1;
  std::make_shared<Spectre::Utils::JsonConfigurationManager,int &,std::shared_ptr<Spectre::Utils::IConfigurationManager> &>(
    &v13,
    &v21,
    v12);
  v7 = *(_QWORD *)std::map<int,std::shared_ptr<Spectre::Utils::IConfigurationManager>>::_Try_emplace<int const &,>(
                    (__int64 *)this + 135,
                    (__int64)v19,
                    (int *)&v21);
  v8 = v14;
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
    v8 = v14;
  }
  *(_QWORD *)(v7 + 40) = v13;
  v9 = *(std::_Ref_count_base **)(v7 + 48);
  *(_QWORD *)(v7 + 48) = v8;
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v10 = v21;
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  if ( v12[1] )
    std::_Ref_count_base::_Decref(v12[1]);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v17);
  return v10;
}
