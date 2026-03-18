/*
 * XREFs of ??$move@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@0@0V12@@Z @ 0x180008D2C
 * Callers:
 *     ?clear_region@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800059FC (-clear_region@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DDev.c)
 * Callees:
 *     ??4CUnpinResource@CD3DDevice@@QEAAAEAV01@$$QEAV01@@Z @ 0x180008DE0 (--4CUnpinResource@CD3DDevice@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::move<std::move_iterator<CD3DDevice::CUnpinResource *>,stdext::checked_array_iterator<CD3DDevice::CUnpinResource *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rdx
  bool v9; // cf
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a2;
  v8 = (a3 - a2) >> 5;
  if ( v8 < 0 )
  {
    v9 = a4[2] < (unsigned __int64)-v8;
  }
  else
  {
    if ( v8 <= 0 )
      goto LABEL_5;
    v9 = a4[1] - a4[2] < (unsigned __int64)v8;
  }
  if ( v9 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
    JUMPOUT(0x180118549LL);
  }
LABEL_5:
  v10 = *a4 + 32LL * a4[2];
  while ( v4 != a3 )
  {
    CD3DDevice::CUnpinResource::operator=(v10, v4);
    v10 += 32LL;
    v4 += 32LL;
  }
  result = a1;
  a4[2] = (v10 - *a4) >> 5;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
