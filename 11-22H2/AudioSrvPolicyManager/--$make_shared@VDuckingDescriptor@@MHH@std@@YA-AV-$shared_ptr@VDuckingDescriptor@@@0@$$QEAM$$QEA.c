/*
 * XREFs of ??$make_shared@VDuckingDescriptor@@MHH@std@@YA?AV?$shared_ptr@VDuckingDescriptor@@@0@$$QEAM$$QEAH1@Z @ 0x18001FE2C
 * Callers:
 *     ?RuntimeClassInitialize@CDuckingManager@@QEAAJXZ @ 0x180022BD0 (-RuntimeClassInitialize@CDuckingManager@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000CCF0 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<DuckingDescriptor,float,int,int>(_QWORD *a1, int *a2, int *a3, int *a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // r10
  int v10; // ecx
  __int64 v11; // rdx
  int v12; // xmm0_4
  _QWORD *result; // rax

  v8 = operator new(0x30uLL);
  v9 = v8;
  if ( v8 )
  {
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<DuckingDescriptor>::`vftable';
    v10 = *a4;
    v11 = *a3;
    v12 = *a2;
    *((_QWORD *)v8 + 2) = &DuckingDescriptor::`vftable';
    v8[10] = 0;
    *((_BYTE *)v8 + 28) = v10 != 0;
    v8[6] = v12;
    *((_QWORD *)v8 + 4) = v11;
  }
  else
  {
    v9 = 0LL;
  }
  *a1 = v9 + 4;
  result = a1;
  a1[1] = v9;
  return result;
}
