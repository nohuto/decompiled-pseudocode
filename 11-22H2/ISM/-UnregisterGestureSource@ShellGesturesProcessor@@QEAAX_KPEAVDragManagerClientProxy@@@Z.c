/*
 * XREFs of ?UnregisterGestureSource@ShellGesturesProcessor@@QEAAX_KPEAVDragManagerClientProxy@@@Z @ 0x1800150F0
 * Callers:
 *     ?RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@3456@PEAVDragManagerClientProxy@@@Z @ 0x1800747CC (-RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?erase@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@2@0@Z @ 0x180015178 (-erase@-$vector@UGestureRegistration@ShellGesturesProcessor@@V-$allocator@UGestureRegistration@S.c)
 *     ??4?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801649D0 (--4-$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@PEAX@2@QEAU32@@Z @ 0x18017E108 (-_Unchecked_erase@-$list@U-$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V-$vector@UGestureRegis.c)
 */

void __fastcall ShellGesturesProcessor::UnregisterGestureSource(
        ShellGesturesProcessor *this,
        __int64 a2,
        struct DragManagerClientProxy *a3)
{
  __int64 *v3; // r14
  __int64 v6; // rbx
  __int64 i; // rdi
  __int64 v8; // rcx
  __int64 j; // rsi
  __int64 v10; // rbp
  struct DragManagerClientProxy **v11; // rdx
  unsigned __int64 appended; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  char v16; // [rsp+60h] [rbp+8h] BYREF
  struct DragManagerClientProxy *v17; // [rsp+70h] [rbp+18h]

  v17 = a3;
  v3 = (__int64 *)((char *)this + 40);
  v6 = **((_QWORD **)this + 5);
  while ( v6 != *v3 )
  {
    v10 = *(_QWORD *)(v6 + 32);
    for ( i = *(_QWORD *)(v6 + 24);
          i != v10 && (*(_QWORD *)i != a2 || *(struct DragManagerClientProxy **)(i + 16) != a3);
          i += 32LL )
    {
      ;
    }
    if ( i != v10 )
    {
      for ( j = i + 32; j != v10; j += 32LL )
      {
        v11 = (struct DragManagerClientProxy **)(j + 16);
        if ( *(_QWORD *)j != a2 || *v11 != a3 )
        {
          *(_QWORD *)i = *(_QWORD *)j;
          *(_DWORD *)(i + 8) = *(_DWORD *)(j + 8);
          Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>::operator=(i + 16, v11);
          a3 = v17;
          *(_BYTE *)(i + 24) = *(_BYTE *)(j + 24);
          i += 32LL;
        }
      }
    }
    std::vector<ShellGesturesProcessor::GestureRegistration>::erase(v6 + 24, &v16, i, v10);
    if ( *(_QWORD *)(v6 + 24) == *(_QWORD *)(v6 + 32) )
    {
      appended = std::_Fnv1a_append_bytes(v8, (const unsigned __int8 *const)(v6 + 16), 4uLL);
      v13 = *((_QWORD *)this + 7);
      v14 = 2 * (*((_QWORD *)this + 10) & appended);
      if ( *(_QWORD *)(v13 + 16 * (*((_QWORD *)this + 10) & appended) + 8) == v6 )
      {
        if ( *(_QWORD *)(v13 + 16 * (*((_QWORD *)this + 10) & appended)) == v6 )
        {
          v15 = *v3;
          *(_QWORD *)(v13 + 8 * v14) = *v3;
        }
        else
        {
          v15 = *(_QWORD *)(v6 + 8);
        }
        *(_QWORD *)(v13 + 8 * v14 + 8) = v15;
      }
      else if ( *(_QWORD *)(v13 + 16 * (*((_QWORD *)this + 10) & appended)) == v6 )
      {
        *(_QWORD *)(v13 + 16 * (*((_QWORD *)this + 10) & appended)) = *(_QWORD *)v6;
      }
      v6 = std::list<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>>::_Unchecked_erase(
             v3,
             v6);
    }
    else
    {
      v6 = *(_QWORD *)v6;
    }
    a3 = v17;
  }
}
