/*
 * XREFs of ??$make_shared@VCXvmPowerReference@@PEAVCXvmPowerReferenceManager@@@std@@YA?AV?$shared_ptr@VCXvmPowerReference@@@0@$$QEAPEAVCXvmPowerReferenceManager@@@Z @ 0x180119704
 * Callers:
 *     ?AcquirePowerReference@CXvmPowerReferenceManager@@QEAA?AV?$shared_ptr@VCXvmPowerReference@@@std@@XZ @ 0x18011A000 (-AcquirePowerReference@CXvmPowerReferenceManager@@QEAA-AV-$shared_ptr@VCXvmPowerReference@@@std@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<CXvmPowerReference,CXvmPowerReferenceManager *>(_QWORD *a1, _QWORD *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // r8

  v4 = operator new(0x18uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<CXvmPowerReference>::`vftable';
    *((_QWORD *)v4 + 2) = *a2;
  }
  else
  {
    v5 = 0LL;
  }
  a1[1] = v5;
  *a1 = v5 + 4;
  return a1;
}
