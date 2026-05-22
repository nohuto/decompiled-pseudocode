/*
 * XREFs of ??$make_shared@VMPCButtonHoldHelper@@AEAM@std@@YA?AV?$shared_ptr@VMPCButtonHoldHelper@@@0@AEAM@Z @ 0x1800AF4BC
 * Callers:
 *     ??0MPCSlateDeadzoneHelper@@QEAA@MM@Z @ 0x1800AF53C (--0MPCSlateDeadzoneHelper@@QEAA@MM@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ??0MPCButtonHoldHelper@@QEAA@M@Z @ 0x1800AF774 (--0MPCButtonHoldHelper@@QEAA@M@Z.c)
 */

_QWORD *__fastcall std::make_shared<MPCButtonHoldHelper,float &>(_QWORD *a1, float *a2)
{
  _DWORD *v4; // rdi
  _QWORD *result; // rax

  v4 = operator new(0x38uLL);
  *(_OWORD *)v4 = 0LL;
  v4[2] = 1;
  v4[3] = 1;
  *(_QWORD *)v4 = &std::_Ref_count_obj2<MPCButtonHoldHelper>::`vftable';
  MPCButtonHoldHelper::MPCButtonHoldHelper((MPCButtonHoldHelper *)(v4 + 4), *a2);
  result = a1;
  *a1 = v4 + 4;
  a1[1] = v4;
  return result;
}
