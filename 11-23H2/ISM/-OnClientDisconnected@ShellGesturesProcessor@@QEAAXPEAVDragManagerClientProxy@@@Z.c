/*
 * XREFs of ?OnClientDisconnected@ShellGesturesProcessor@@QEAAXPEAVDragManagerClientProxy@@@Z @ 0x18016EF08
 * Callers:
 *     ?OnDisconnected@DragManagerClientProxy@@MEAAJXZ @ 0x180155750 (-OnDisconnected@DragManagerClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000E920 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?erase@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@2@0@Z @ 0x180014668 (-erase@-$vector@UGestureRegistration@ShellGesturesProcessor@@V-$allocator@UGestureRegistration@S.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180045DDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x18010703C (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 *     ??4?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801566F0 (--4-$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?RemoveGestureClient@GestureHandler@@QEAAXPEAVDragManagerClientProxy@@@Z @ 0x180157B04 (-RemoveGestureClient@GestureHandler@@QEAAXPEAVDragManagerClientProxy@@@Z.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@PEAX@2@QEAU32@@Z @ 0x18016FE88 (-_Unchecked_erase@-$list@U-$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V-$vector@UGestureRegis.c)
 */

void __fastcall ShellGesturesProcessor::OnClientDisconnected(
        ShellGesturesProcessor *this,
        struct DragManagerClientProxy *a2)
{
  __int64 *v2; // r14
  __int64 i; // rbx
  __int64 v6; // rbp
  __int64 j; // rdi
  __int64 k; // rsi
  __int64 v9; // rcx
  unsigned __int64 appended; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD *v14; // rdi
  _QWORD *m; // rbx
  __int64 v16; // rcx
  GestureHandler *v17; // [rsp+20h] [rbp-38h] BYREF
  std::_Ref_count_base *v18; // [rsp+28h] [rbp-30h]
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 40);
  i = *((_QWORD *)this + 5);
LABEL_2:
  for ( i = *(_QWORD *)i;
        i != *v2;
        i = std::list<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>>::_Unchecked_erase(
              v2,
              i) )
  {
    v6 = *(_QWORD *)(i + 32);
    for ( j = *(_QWORD *)(i + 24); j != v6 && *(struct DragManagerClientProxy **)(j + 16) != a2; j += 32LL )
      ;
    if ( j != v6 )
    {
      for ( k = j + 32; k != v6; k += 32LL )
      {
        if ( *(struct DragManagerClientProxy **)(k + 16) != a2 )
        {
          *(_QWORD *)j = *(_QWORD *)k;
          *(_DWORD *)(j + 8) = *(_DWORD *)(k + 8);
          Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>::operator=(
            (__int64 *)(j + 16),
            (char *)(k + 16));
          *(_BYTE *)(j + 24) = *(_BYTE *)(k + 24);
          j += 32LL;
        }
      }
    }
    std::vector<ShellGesturesProcessor::GestureRegistration>::erase(i + 24, &v19, j, v6);
    if ( *(_QWORD *)(i + 24) != *(_QWORD *)(i + 32) )
      goto LABEL_2;
    appended = std::_Fnv1a_append_bytes(v9, (const unsigned __int8 *const)(i + 16), 4uLL);
    v11 = *((_QWORD *)this + 7);
    v12 = 2 * (*((_QWORD *)this + 10) & appended);
    if ( *(_QWORD *)(v11 + 16 * (*((_QWORD *)this + 10) & appended) + 8) == i )
    {
      if ( *(_QWORD *)(v11 + 16 * (*((_QWORD *)this + 10) & appended)) == i )
      {
        v13 = *v2;
        *(_QWORD *)(v11 + 8 * v12) = *v2;
      }
      else
      {
        v13 = *(_QWORD *)(i + 8);
      }
      *(_QWORD *)(v11 + 8 * v12 + 8) = v13;
    }
    else if ( *(_QWORD *)(v11 + 16 * (*((_QWORD *)this + 10) & appended)) == i )
    {
      *(_QWORD *)(v11 + 16 * (*((_QWORD *)this + 10) & appended)) = *(_QWORD *)i;
    }
  }
  v14 = (_QWORD *)*((_QWORD *)this + 17);
  for ( m = (_QWORD *)*v14; m != v14; m = (_QWORD *)*m )
  {
    v16 = m[3];
    if ( *(_BYTE *)(v16 + 424) )
    {
      std::weak_ptr<SystemCursorService2>::lock(v16 + 408, &v17);
      if ( v17 )
        GestureHandler::RemoveGestureClient(v17, a2);
      if ( v18 )
        std::_Ref_count_base::_Decref(v18);
    }
  }
}
