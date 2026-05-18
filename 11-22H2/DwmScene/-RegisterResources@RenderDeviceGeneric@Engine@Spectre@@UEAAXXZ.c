/*
 * XREFs of ?RegisterResources@RenderDeviceGeneric@Engine@Spectre@@UEAAXXZ @ 0x1800535E0
 * Callers:
 *     ??0RenderDeviceGeneric@Engine@Spectre@@QEAA@PEAV112@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@@Z @ 0x1800526F0 (--0RenderDeviceGeneric@Engine@Spectre@@QEAA@PEAV112@V-$shared_ptr@VPerformanceLogger@Utils@Spect.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??$?4V_lambda_1ffa97e75efc20dc5ba4ef23b8bdb63a_@@$0A@@?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@QEAAAEAV01@$$QEAV_lambda_1ffa97e75efc20dc5ba4ef23b8bdb63a_@@@Z @ 0x180051EF4 (--$-4V_lambda_1ffa97e75efc20dc5ba4ef23b8bdb63a_@@$0A@@-$function@$$A6A-AV-$shared_ptr@VRendererR.c)
 *     ??$?4V_lambda_2f7a86c028961b1be19ef61dc11d1eb9_@@$0A@@?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@QEAAAEAV01@$$QEAV_lambda_2f7a86c028961b1be19ef61dc11d1eb9_@@@Z @ 0x180051FC4 (--$-4V_lambda_2f7a86c028961b1be19ef61dc11d1eb9_@@$0A@@-$function@$$A6A-AV-$shared_ptr@VRendererR.c)
 *     ??$?4V_lambda_55ce5d336e7bc116043b5e90d1e00759_@@$0A@@?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@QEAAAEAV01@$$QEAV_lambda_55ce5d336e7bc116043b5e90d1e00759_@@@Z @ 0x180052094 (--$-4V_lambda_55ce5d336e7bc116043b5e90d1e00759_@@$0A@@-$function@$$A6A-AV-$shared_ptr@VRendererR.c)
 *     ??$?4V_lambda_76eddb9b03c24eac3632c1cece1b494c_@@$0A@@?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@QEAAAEAV01@$$QEAV_lambda_76eddb9b03c24eac3632c1cece1b494c_@@@Z @ 0x180052164 (--$-4V_lambda_76eddb9b03c24eac3632c1cece1b494c_@@$0A@@-$function@$$A6A-AV-$shared_ptr@VRendererR.c)
 *     ??$?4V_lambda_838beeeaa6fb5cde8c4026525d949f60_@@$0A@@?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@QEAAAEAV01@$$QEAV_lambda_838beeeaa6fb5cde8c4026525d949f60_@@@Z @ 0x180052234 (--$-4V_lambda_838beeeaa6fb5cde8c4026525d949f60_@@$0A@@-$function@$$A6A-AV-$shared_ptr@VRendererR.c)
 *     ??$?4V_lambda_966210904f8ddb1ecfe06826adf9ae70_@@$0A@@?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@QEAAAEAV01@$$QEAV_lambda_966210904f8ddb1ecfe06826adf9ae70_@@@Z @ 0x180052304 (--$-4V_lambda_966210904f8ddb1ecfe06826adf9ae70_@@$0A@@-$function@$$A6A-AV-$shared_ptr@VRendererR.c)
 *     ??$?4V_lambda_96714d38a6c31817520ed894af71e986_@@$0A@@?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@QEAAAEAV01@$$QEAV_lambda_96714d38a6c31817520ed894af71e986_@@@Z @ 0x1800523D4 (--$-4V_lambda_96714d38a6c31817520ed894af71e986_@@$0A@@-$function@$$A6A-AV-$shared_ptr@VRendererR.c)
 *     ??$?4V_lambda_b20bfe755ee06a1fa4c395733db982e8_@@$0A@@?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@QEAAAEAV01@$$QEAV_lambda_b20bfe755ee06a1fa4c395733db982e8_@@@Z @ 0x1800524A4 (--$-4V_lambda_b20bfe755ee06a1fa4c395733db982e8_@@$0A@@-$function@$$A6A-AV-$shared_ptr@VRendererR.c)
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800525D4 (--$_Try_emplace@AEB_K$$V@-$map@_KV-$function@$$A6A-AV-$shared_ptr@VRendererResource@Engine@Spect.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::RenderDeviceGeneric::RegisterResources(Spectre::Engine::RenderDeviceGeneric *this)
{
  __int64 *v1; // rdi
  struct _Mtx_internal_imp_t *v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _BYTE v11[16]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v12; // [rsp+40h] [rbp+10h] BYREF
  struct _Mtx_internal_imp_t *v13; // [rsp+48h] [rbp+18h]

  v1 = (__int64 *)((char *)this + 496);
  v2 = (Spectre::Engine::RenderDeviceGeneric *)((char *)this + 512);
  v13 = (Spectre::Engine::RenderDeviceGeneric *)((char *)this + 512);
  std::_Mutex_base::lock((Spectre::Engine::RenderDeviceGeneric *)((char *)this + 512));
  v12 = __std_type_info_hash(&qword_1801C95F8);
  v3 = (_QWORD *)std::map<unsigned __int64,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>>::_Try_emplace<unsigned __int64 const &,>(
                   v1,
                   (__int64)v11,
                   (unsigned __int64 *)&v12);
  std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>::operator=<_lambda_966210904f8ddb1ecfe06826adf9ae70_,0>(*v3 + 40LL);
  _Mtx_unlock(v2);
  v13 = v2;
  std::_Mutex_base::lock(v2);
  v12 = __std_type_info_hash(&qword_1801C9630);
  v4 = (_QWORD *)std::map<unsigned __int64,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>>::_Try_emplace<unsigned __int64 const &,>(
                   v1,
                   (__int64)v11,
                   (unsigned __int64 *)&v12);
  std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>::operator=<_lambda_2f7a86c028961b1be19ef61dc11d1eb9_,0>(*v4 + 40LL);
  _Mtx_unlock(v2);
  v13 = v2;
  std::_Mutex_base::lock(v2);
  v12 = __std_type_info_hash(&qword_1801C9670);
  v5 = (_QWORD *)std::map<unsigned __int64,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>>::_Try_emplace<unsigned __int64 const &,>(
                   v1,
                   (__int64)v11,
                   (unsigned __int64 *)&v12);
  std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>::operator=<_lambda_55ce5d336e7bc116043b5e90d1e00759_,0>(*v5 + 40LL);
  _Mtx_unlock(v2);
  v13 = v2;
  std::_Mutex_base::lock(v2);
  v12 = __std_type_info_hash(&qword_1801C9518);
  v6 = (_QWORD *)std::map<unsigned __int64,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>>::_Try_emplace<unsigned __int64 const &,>(
                   v1,
                   (__int64)v11,
                   (unsigned __int64 *)&v12);
  std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>::operator=<_lambda_76eddb9b03c24eac3632c1cece1b494c_,0>(*v6 + 40LL);
  _Mtx_unlock(v2);
  v13 = v2;
  std::_Mutex_base::lock(v2);
  v12 = __std_type_info_hash(&qword_1801C9550);
  v7 = (_QWORD *)std::map<unsigned __int64,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>>::_Try_emplace<unsigned __int64 const &,>(
                   v1,
                   (__int64)v11,
                   (unsigned __int64 *)&v12);
  std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>::operator=<_lambda_1ffa97e75efc20dc5ba4ef23b8bdb63a_,0>(*v7 + 40LL);
  _Mtx_unlock(v2);
  v13 = v2;
  std::_Mutex_base::lock(v2);
  v12 = __std_type_info_hash(&qword_1801C8F08);
  v8 = (_QWORD *)std::map<unsigned __int64,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>>::_Try_emplace<unsigned __int64 const &,>(
                   v1,
                   (__int64)v11,
                   (unsigned __int64 *)&v12);
  std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>::operator=<_lambda_96714d38a6c31817520ed894af71e986_,0>(*v8 + 40LL);
  _Mtx_unlock(v2);
  v13 = v2;
  std::_Mutex_base::lock(v2);
  v12 = __std_type_info_hash(&qword_1801C9588);
  v9 = (_QWORD *)std::map<unsigned __int64,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>>::_Try_emplace<unsigned __int64 const &,>(
                   v1,
                   (__int64)v11,
                   (unsigned __int64 *)&v12);
  std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>::operator=<_lambda_b20bfe755ee06a1fa4c395733db982e8_,0>(*v9 + 40LL);
  _Mtx_unlock(v2);
  v13 = v2;
  std::_Mutex_base::lock(v2);
  v12 = __std_type_info_hash(&qword_1801C95C0);
  v10 = (_QWORD *)std::map<unsigned __int64,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>>::_Try_emplace<unsigned __int64 const &,>(
                    v1,
                    (__int64)v11,
                    (unsigned __int64 *)&v12);
  std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>::operator=<_lambda_838beeeaa6fb5cde8c4026525d949f60_,0>(*v10 + 40LL);
  _Mtx_unlock(v2);
}
