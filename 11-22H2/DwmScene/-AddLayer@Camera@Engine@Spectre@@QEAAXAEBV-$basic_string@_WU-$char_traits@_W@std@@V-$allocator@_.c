/*
 * XREFs of ?AddLayer@Camera@Engine@Spectre@@QEAAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180059DAC
 * Callers:
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 *     ?CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180065C40 (-CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 *     ?Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z @ 0x180072750 (-Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z.c)
 * Callees:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@QEAV21@AEBV21@@Z @ 0x180058AAC (--$_Emplace_reallocate@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@-$ve.c)
 *     ??$find@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@0@V10@V10@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@@Z @ 0x1800590F4 (--$find@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$basic_string@_WU-$char_traits@_W@.c)
 */

char *__fastcall Spectre::Engine::Camera::AddLayer(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rdi
  char *result; // rax
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(__int64 **)(a1 + 424);
  v3 = a1 + 416;
  result = (char *)std::find<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::wstring>>>,std::wstring>(
                     &v6,
                     *(__int64 **)(a1 + 416),
                     v2,
                     a2);
  if ( v6 == v2 )
  {
    if ( *(_QWORD *)(v3 + 8) == *(_QWORD *)(v3 + 16) )
    {
      return std::vector<std::wstring>::_Emplace_reallocate<std::wstring const &>((char **)v3, *(char **)(v3 + 8), a2);
    }
    else
    {
      result = (char *)std::wstring::wstring(*(_QWORD **)(v3 + 8), a2);
      *(_QWORD *)(v3 + 8) += 32LL;
    }
  }
  return result;
}
