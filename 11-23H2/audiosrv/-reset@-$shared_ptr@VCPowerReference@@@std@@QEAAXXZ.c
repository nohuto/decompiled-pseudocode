/*
 * XREFs of ?reset@?$shared_ptr@VCPowerReference@@@std@@QEAAXXZ @ 0x180017948
 * Callers:
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180013400 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     ??1CVADServer@@UEAA@XZ @ 0x180017678 (--1CVADServer@@UEAA@XZ.c)
 *     _lambda_4cf3c136a642c8dee72a13c9ea3c1a02_::operator() @ 0x180049AFC (_lambda_4cf3c136a642c8dee72a13c9ea3c1a02_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall std::shared_ptr<CPowerReference>::reset(_QWORD *a1)
{
  std::_Ref_count_base *v1; // rax

  v1 = (std::_Ref_count_base *)a1[1];
  a1[1] = 0LL;
  *a1 = 0LL;
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
