/*
 * XREFs of ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@7@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@std@@@1@AEBI@Z @ 0x18002E5CC
 * Callers:
 *     ?TrackReference@AnimationLoggingManager@Composition@UI@Windows@@QEAAXPEAVProxyObject@234@@Z @ 0x18002E54C (-TrackReference@AnimationLoggingManager@Composition@UI@Windows@@QEAAXPEAVProxyObject@234@@Z.c)
 *     ?DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDebugAnimationCallback@Private@234@PEAUHSTRING__@@PEAPEAUIClosable@Foundation@4@@Z @ 0x18016B67C (-DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDe.c)
 *     ?DebugReferenceProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagnosticsPrincipal@@IAEBUObjectPropertyStringTuple@@@Z @ 0x18016BB7C (-DebugReferenceProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagn.c)
 *     ?UnDebugProperties2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAVDebugPropertyRegistration@234@@Z @ 0x18016EF30 (-UnDebugProperties2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>,0>>::_Find_lower_bound<unsigned int>(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  unsigned int v5; // r8d
  int v6; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *a3;
    do
    {
      *(_QWORD *)a2 = v4;
      if ( *((_DWORD *)v4 + 8) >= v5 )
      {
        *(_QWORD *)(a2 + 16) = v4;
        v6 = 1;
        v4 = (__int64 *)*v4;
      }
      else
      {
        v4 = (__int64 *)v4[2];
        v6 = 0;
      }
      *(_DWORD *)(a2 + 8) = v6;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
