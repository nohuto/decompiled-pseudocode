/*
 * XREFs of ??1?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAA@XZ @ 0x18065EE08
 * Callers:
 *     ??1CShellSnapComponent@@UEAA@XZ @ 0x18065EFF0 (--1CShellSnapComponent@@UEAA@XZ.c)
 *     ??1SnapEducationHandler@@UEAA@XZ @ 0x18065F4B0 (--1SnapEducationHandler@@UEAA@XZ.c)
 *     ??_GSnapEducationHandler@@UEAAPEAXI@Z @ 0x18065FAD0 (--_GSnapEducationHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?pop_back@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAAXXZ @ 0x180031EB0 (-pop_back@-$deque@UApplicationViewHistory@SnapEducationHandler@@V-$allocator@UApplicationViewHis.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<SnapEducationHandler::ApplicationViewHistory>::~deque<SnapEducationHandler::ApplicationViewHistory>(
        void **a1)
{
  char *v2; // rdi
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  while ( a1[4] )
    std::deque<SnapEducationHandler::ApplicationViewHistory>::pop_back(a1);
  v2 = (char *)a1[2];
  while ( v2 )
  {
    v3 = (void *)*((_QWORD *)a1[1] + (_QWORD)--v2);
    if ( v3 )
      std::_Deallocate<16,0>(v3, 0x38uLL);
  }
  v4 = a1[1];
  if ( v4 )
    std::_Deallocate<16,0>(v4, 8LL * (_QWORD)a1[2]);
  v5 = *a1;
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[1] = 0LL;
  std::_Deallocate<16,0>(v5, 0x10uLL);
}
