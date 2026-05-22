/*
 * XREFs of ??1ShellGesturesProcessor@@UEAA@XZ @ 0x1801B834C
 * Callers:
 *     ??_GShellGesturesProcessor@@UEAAPEAXI@Z @ 0x1801B8550 (--_GShellGesturesProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004FB20 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18016E070 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIUActiveContactData@ShellGesturesProces.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18016E0A8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V-$.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellGesturesProcessor::~ShellGesturesProcessor(void **this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  char *v4; // rcx

  std::_Deallocate<16,0>(this[19], ((_BYTE *)this[20] - (_BYTE *)this[19]) & 0xFFFFFFFFFFFFFFF8uLL);
  this[19] = 0LL;
  this[20] = 0LL;
  this[21] = 0LL;
  std::_List_node<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>,void *>>>(
    v2,
    (_QWORD **)this[17]);
  std::_Deallocate<16,0>(this[17], 0x80uLL);
  std::_Deallocate<16,0>(this[7], ((_BYTE *)this[8] - (_BYTE *)this[7]) & 0xFFFFFFFFFFFFFFF8uLL);
  this[7] = 0LL;
  this[8] = 0LL;
  this[9] = 0LL;
  std::_List_node<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>,void *>>>(
    v3,
    (_QWORD **)this[5]);
  std::_Deallocate<16,0>(this[5], 0x30uLL);
  v4 = (char *)this[3];
  if ( v4 )
  {
    this[3] = 0LL;
    RefCountedObject::Release((RefCountedObject *)(v4 + 8));
  }
  *((_DWORD *)this + 5) = -1073741823;
}
