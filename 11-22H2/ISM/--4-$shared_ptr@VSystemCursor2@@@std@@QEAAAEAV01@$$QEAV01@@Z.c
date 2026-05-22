/*
 * XREFs of ??4?$shared_ptr@VSystemCursor2@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180073E1C
 * Callers:
 *     ?CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ @ 0x180073E5C (-CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     _lambda_c0e0b7aaf59f49f216d7dff859f9f140_::operator() @ 0x1800785B8 (_lambda_c0e0b7aaf59f49f216d7dff859f9f140_--operator().c)
 *     ??$_Move_unchecked@PEAV?$shared_ptr@ULegacyDeviceInfo@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@PEAV10@00@Z @ 0x1800DDB98 (--$_Move_unchecked@PEAV-$shared_ptr@ULegacyDeviceInfo@@@std@@PEAV12@@std@@YAPEAV-$shared_ptr@ULe.c)
 *     ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x1800DE400 (-FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ.c)
 *     ?DestroyCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x180110840 (-DestroyCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z.c)
 *     ?CreateCursorVisual@SystemCursor2@@AEAAJXZ @ 0x180113CA0 (-CreateCursorVisual@SystemCursor2@@AEAAJXZ.c)
 *     ?ResetState@SystemCursor2@@QEAAJXZ @ 0x180114D34 (-ResetState@SystemCursor2@@QEAAJXZ.c)
 *     ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x180165A18 (-ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@Syste.c)
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_139f71076f5ab0ecef881a1ffc08c112___ @ 0x1801FD37C (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shared_ptr_HotKey.c)
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_31ada6ebdd22db73722d2ce1394329de___ @ 0x1801FD42C (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shar_ea_1801FD42C.c)
 *     ??0HotKeyProcessor@@QEAA@XZ @ 0x1801FD574 (--0HotKeyProcessor@@QEAA@XZ.c)
 *     ?FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV?$shared_ptr@UHotKeyInfo@@@std@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801FE348 (-FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV-$shared_ptr@UHotKeyInfo@@@std@@PEAP.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004673C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::shared_ptr<SystemCursor2>::operator=(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  std::_Ref_count_base *v5; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  a2[1] = 0LL;
  *a1 = v2;
  v5 = (std::_Ref_count_base *)a1[1];
  a1[1] = v4;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}
