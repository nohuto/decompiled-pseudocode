/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@0@0V12@@Z @ 0x18027FF90
 * Callers:
 *     ?reserve_region@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCUnpinResource@CD3DDevice@@_K0@Z @ 0x180008908 (-reserve_region@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DD.c)
 * Callees:
 *     ??0CUnpinResource@CD3DDevice@@QEAA@AEBV01@@Z @ 0x180280054 (--0CUnpinResource@CD3DDevice@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CD3DDevice::CUnpinResource *>,stdext::checked_array_iterator<CD3DDevice::CUnpinResource *>>(
        __int64 a1,
        const struct CD3DDevice::CUnpinResource *a2,
        const struct CD3DDevice::CUnpinResource *a3,
        _QWORD *a4)
{
  const struct CD3DDevice::CUnpinResource *v4; // rbx
  __int64 v8; // rdx
  bool v9; // cf
  CD3DDevice::CUnpinResource *v10; // rsi
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a2;
  v8 = (a3 - a2) >> 5;
  if ( v8 >= 0 )
  {
    if ( v8 <= 0 )
      goto LABEL_7;
    v9 = a4[1] - a4[2] < (unsigned __int64)v8;
  }
  else
  {
    v9 = a4[2] < (unsigned __int64)-v8;
  }
  if ( v9 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
  }
LABEL_7:
  v10 = (CD3DDevice::CUnpinResource *)(*a4 + 32LL * a4[2]);
  while ( v4 != a3 )
  {
    CD3DDevice::CUnpinResource::CUnpinResource(v10, v4);
    v10 = (CD3DDevice::CUnpinResource *)((char *)v10 + 32);
    v4 = (const struct CD3DDevice::CUnpinResource *)((char *)v4 + 32);
  }
  result = a1;
  a4[2] = ((__int64)v10 - *a4) >> 5;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
