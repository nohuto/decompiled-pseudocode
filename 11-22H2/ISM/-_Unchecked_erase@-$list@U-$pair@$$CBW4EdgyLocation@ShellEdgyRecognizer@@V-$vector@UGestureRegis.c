/*
 * XREFs of ?_Unchecked_erase@?$list@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@PEAX@2@QEAU32@@Z @ 0x18017E108
 * Callers:
 *     ?UnregisterGestureSource@ShellGesturesProcessor@@QEAAX_KPEAVDragManagerClientProxy@@@Z @ 0x1800150F0 (-UnregisterGestureSource@ShellGesturesProcessor@@QEAAX_KPEAVDragManagerClientProxy@@@Z.c)
 *     ?OnClientDisconnected@ShellGesturesProcessor@@QEAAXPEAVDragManagerClientProxy@@@Z @ 0x18017D190 (-OnClientDisconnected@ShellGesturesProcessor@@QEAAXPEAVDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800A951C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>>::_Unchecked_erase(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  _BYTE *v7; // rcx
  void *v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = *a2;
  --*(_QWORD *)(a1 + 8);
  *a2[1] = v3;
  v3[1] = a2[1];
  v4 = a2[3];
  if ( v4 )
  {
    v5 = a2[4];
    while ( v4 != v5 )
    {
      v6 = v4[2];
      if ( v6 )
      {
        v4[2] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      }
      v4 += 4;
    }
    v7 = a2[3];
    v10 = ((char *)a2[5] - v7) & 0xFFFFFFFFFFFFFFE0uLL;
    v9 = v7;
    if ( v10 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v9, &v10);
      v7 = v9;
    }
    operator delete(v7);
    a2[3] = 0LL;
    a2[4] = 0LL;
    a2[5] = 0LL;
  }
  std::_Deallocate<16,0>(a2, 0x30uLL);
  return v3;
}
