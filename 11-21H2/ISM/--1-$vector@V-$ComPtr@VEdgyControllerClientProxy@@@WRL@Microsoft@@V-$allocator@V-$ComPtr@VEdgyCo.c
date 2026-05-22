/*
 * XREFs of ??1?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1801A9468
 * Callers:
 *     _Edge::Edge_::_1_::dtor$2 @ 0x1801AAF3D (_Edge--Edge_--_1_--dtor$2.c)
 *     _Edge::Edge_::_1_::dtor$2_0 @ 0x1801AAFD1 (_Edge--Edge_--_1_--dtor$2_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::~vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>()
{
  return std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::_Tidy();
}
