/*
 * XREFs of ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x18000D54C
 * Callers:
 *     ?ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ @ 0x18000D4B8 (-ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ.c)
 *     ??1?$CAutoPtr@UAuxiliaryInputDescriptor@@@ATL@@QEAA@XZ @ 0x1800D8510 (--1-$CAutoPtr@UAuxiliaryInputDescriptor@@@ATL@@QEAA@XZ.c)
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z @ 0x1800DD34C (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z.c)
 *     ??1?$unique_ptr@UAuxiliaryInputDescriptor@@U?$default_delete@UAuxiliaryInputDescriptor@@@std@@@std@@QEAA@XZ @ 0x180104838 (--1-$unique_ptr@UAuxiliaryInputDescriptor@@U-$default_delete@UAuxiliaryInputDescriptor@@@std@@@s.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

AuxiliaryInputDescriptor *__fastcall AuxiliaryInputDescriptor::`scalar deleting destructor'(
        AuxiliaryInputDescriptor *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
    CoTaskMemFree(v2);
  operator delete(this, 0x10uLL);
  return this;
}
