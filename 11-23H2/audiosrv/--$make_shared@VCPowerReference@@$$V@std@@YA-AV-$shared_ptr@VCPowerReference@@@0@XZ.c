/*
 * XREFs of ??$make_shared@VCPowerReference@@$$V@std@@YA?AV?$shared_ptr@VCPowerReference@@@0@XZ @ 0x18003A484
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18003A160 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180067A64 (memset_0.c)
 */

_QWORD *__fastcall std::make_shared<CPowerReference,>(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  _QWORD *result; // rax

  v2 = operator new(0x80uLL);
  v3 = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 2) = 1;
    *((_DWORD *)v2 + 3) = 1;
    *v2 = &std::_Ref_count_obj2<CPowerReference>::`vftable';
    memset_0(v2 + 3, 0, 0x68uLL);
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[4] = 0LL;
    v3[5] = 0LL;
    v3[6] = 0LL;
    v3[7] = 0LL;
    v3[8] = 0LL;
    v3[9] = 0LL;
    v3[10] = 0LL;
    v3[11] = 0LL;
    v3[12] = 0LL;
    v3[13] = 0LL;
    v3[14] = 0LL;
    v3[15] = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 2;
  result = a1;
  a1[1] = v3;
  return result;
}
