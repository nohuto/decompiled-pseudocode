/*
 * XREFs of ?Add@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAAHAEBQEAG0@Z @ 0x14009080C
 * Callers:
 *     ?Add@CExpansionVector@ATL@@QEAAHPEBG0@Z @ 0x1400908BC (-Add@CExpansionVector@ATL@@QEAAHPEBG0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::Add(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rdx
  _QWORD *v11; // rdx

  v6 = _o__recalloc(*(_QWORD *)a1, *(_DWORD *)(a1 + 16) + 1, 8LL);
  if ( !v6 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v8 = _o__recalloc(v7, *(_DWORD *)(a1 + 16) + 1, 8LL);
  if ( !v8 )
    return 0LL;
  v9 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v8;
  v10 = (_QWORD *)(*(_QWORD *)a1 + 8 * v9);
  if ( v10 )
    *v10 = *a2;
  v11 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v9);
  if ( v11 )
    *v11 = *a3;
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
