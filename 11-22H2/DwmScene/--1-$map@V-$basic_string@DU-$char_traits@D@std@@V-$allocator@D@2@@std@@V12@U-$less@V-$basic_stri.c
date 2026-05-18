/*
 * XREFs of ??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@QEAA@XZ @ 0x180031AB0
 * Callers:
 *     _Spectre::SendEngineInitializedTelemetry::Engine::SendEngineInitializedTelemetry_::_1_::dtor$5 @ 0x1800E5F27 (_Spectre--SendEngineInitializedTelemetry--Engine--SendEngineInitializedTelemetry_--_1_--dtor$5.c)
 *     _Spectre::SendShutdownOrSuspendTelemetry::Engine::SendShutdownOrSuspendTelemetry_::_1_::dtor$6 @ 0x1800E5FA3 (_Spectre--SendShutdownOrSuspendTelemetry--Engine--SendShutdownOrSuspendTelemetry_--_1_--dtor$6.c)
 *     _Spectre::Engine::SceneNode::SceneNode_::_1_::dtor$12 @ 0x1800E62F2 (_Spectre--Engine--SceneNode--SceneNode_--_1_--dtor$12.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::map<std::string,std::string>::~map<std::string,std::string>(void **a1)
{
  std::_Tree<std::_Tmap_traits<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>,0>>::~_Tree<std::_Tmap_traits<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>,0>>(a1);
}
