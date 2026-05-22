/*
 * XREFs of ?SetConvertGraspToSystemGesture@MPCHolographicInputManager@@QEAAX_NK@Z @ 0x1800B8244
 * Callers:
 *     ?SetConvertGraspToSystemGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@_NI@Z @ 0x1800B1DD0 (-SetConvertGraspToSystemGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@_NI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall MPCHolographicInputManager::SetConvertGraspToSystemGesture(
        MPCHolographicInputManager *this,
        char a2,
        int a3)
{
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  __int64 v7; // rdx

  v3 = (_QWORD *)*((_QWORD *)this + 414);
  for ( i = (_QWORD *)*((_QWORD *)this + 413); i != v3; ++i )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 312LL))(*i) == a3 )
    {
      LOBYTE(v7) = a2;
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*i + 376LL))(*i, v7);
    }
  }
}
