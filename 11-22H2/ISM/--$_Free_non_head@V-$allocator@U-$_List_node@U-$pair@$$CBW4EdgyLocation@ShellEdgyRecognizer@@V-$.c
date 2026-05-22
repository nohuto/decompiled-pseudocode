/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18017C328
 * Callers:
 *     ??1?$list@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1801C5628 (--1-$list@U-$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V-$vector@UGestureRegistration@ShellGe.c)
 *     ??1?$unordered_map@W4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@U?$hash@W4EdgyLocation@ShellEdgyRecognizer@@@4@U?$equal_to@W4EdgyLocation@ShellEdgyRecognizer@@@4@V?$allocator@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@@4@@std@@QEAA@XZ @ 0x1801C56A4 (--1-$unordered_map@W4EdgyLocation@ShellEdgyRecognizer@@V-$vector@UGestureRegistration@ShellGestu.c)
 *     ??1ShellGesturesProcessor@@UEAA@XZ @ 0x1801C5A78 (--1ShellGesturesProcessor@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800A951C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_List_node<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>,void *>>>(
        void *a1,
        _QWORD **a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rcx
  void *v7; // rcx
  void *v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = a1;
  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      v4 = v2[3];
      if ( v4 )
      {
        v5 = v2[4];
        while ( v4 != v5 )
        {
          v6 = *(_QWORD *)(v4 + 16);
          if ( v6 )
          {
            *(_QWORD *)(v4 + 16) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
          }
          v4 += 32LL;
        }
        v7 = (void *)v2[3];
        v9 = (v2[5] - (_QWORD)v7) & 0xFFFFFFFFFFFFFFE0uLL;
        v8 = v7;
        if ( v9 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(&v8, &v9);
          v7 = v8;
        }
        operator delete(v7);
        v2[3] = 0LL;
        v2[4] = 0LL;
        v2[5] = 0LL;
      }
      std::_Deallocate<16,0>(v2, 0x30uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
