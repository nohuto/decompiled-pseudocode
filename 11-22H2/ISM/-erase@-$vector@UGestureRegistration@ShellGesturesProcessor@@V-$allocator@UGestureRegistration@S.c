/*
 * XREFs of ?erase@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@2@0@Z @ 0x180015178
 * Callers:
 *     ?UnregisterGestureSource@ShellGesturesProcessor@@QEAAX_KPEAVDragManagerClientProxy@@@Z @ 0x1800150F0 (-UnregisterGestureSource@ShellGesturesProcessor@@QEAAX_KPEAVDragManagerClientProxy@@@Z.c)
 *     ?OnClientDisconnected@ShellGesturesProcessor@@QEAAXPEAVDragManagerClientProxy@@@Z @ 0x18017D190 (-OnClientDisconnected@ShellGesturesProcessor@@QEAAXPEAVDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801649D0 (--4-$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAXPEAUGestureRegistration@ShellGesturesProcessor@@QEAU12@AEAV?$allocator@UGestureRegistration@ShellGesturesProcessor@@@0@@Z @ 0x18017C23C (--$_Destroy_range@V-$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAXPEAUG.c)
 */

_QWORD *__fastcall std::vector<ShellGesturesProcessor::GestureRegistration>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *result; // rax
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rbx

  if ( a3 != a4 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = a3;
    if ( a4 != v8 )
    {
      v10 = a4 - a3;
      do
      {
        *(_QWORD *)v9 = *(_QWORD *)(v10 + v9);
        *(_DWORD *)(v9 + 8) = *(_DWORD *)(v10 + v9 + 8);
        Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>::operator=(v9 + 16, v9 + v10 + 16);
        *(_BYTE *)(v9 + 24) = *(_BYTE *)(v10 + v9 + 24);
        v9 += 32LL;
      }
      while ( v10 + v9 != v8 );
    }
    std::_Destroy_range<std::allocator<ShellGesturesProcessor::GestureRegistration>>(v9);
    *(_QWORD *)(a1 + 8) = v9;
  }
  result = a2;
  *a2 = a3;
  return result;
}
