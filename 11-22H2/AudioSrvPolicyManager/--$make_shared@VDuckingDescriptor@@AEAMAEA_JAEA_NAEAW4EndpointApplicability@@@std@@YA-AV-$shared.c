/*
 * XREFs of ??$make_shared@VDuckingDescriptor@@AEAMAEA_JAEA_NAEAW4EndpointApplicability@@@std@@YA?AV?$shared_ptr@VDuckingDescriptor@@@0@AEAMAEA_JAEA_NAEAW4EndpointApplicability@@@Z @ 0x180033818
 * Callers:
 *     ??0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z @ 0x180033C40 (--0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000CCF0 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<DuckingDescriptor,float &,__int64 &,bool &,enum EndpointApplicability &>(
        _QWORD *a1,
        int *a2,
        __int64 *a3,
        _BYTE *a4,
        int *a5)
{
  _DWORD *v9; // rax
  _DWORD *v10; // r10
  int v11; // r8d
  __int64 v12; // rdx
  int v13; // xmm0_4
  _QWORD *result; // rax

  v9 = operator new(0x30uLL);
  v10 = v9;
  if ( v9 )
  {
    v9[2] = 1;
    v9[3] = 1;
    *(_QWORD *)v9 = &std::_Ref_count_obj2<DuckingDescriptor>::`vftable';
    v11 = *a5;
    v12 = *a3;
    v13 = *a2;
    *((_BYTE *)v9 + 28) = *a4;
    v9[6] = v13;
    *((_QWORD *)v9 + 2) = &DuckingDescriptor::`vftable';
    *((_QWORD *)v9 + 4) = v12;
    v9[10] = v11;
  }
  else
  {
    v10 = 0LL;
  }
  *a1 = v10 + 4;
  result = a1;
  a1[1] = v10;
  return result;
}
