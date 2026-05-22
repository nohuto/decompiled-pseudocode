/*
 * XREFs of ??0Edge@@QEAA@$$QEAV0@@Z @ 0x1801AAD4C
 * Callers:
 *     ??$_Uninitialized_move@PEAVEdge@@V?$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@AEAV?$allocator@VEdge@@@0@@Z @ 0x1801AAB4C (--$_Uninitialized_move@PEAVEdge@@V-$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@AEAV-$.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Edge::Edge(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  __int64 result; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v2 = (_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 7LL;
  *(_WORD *)(a2 + 8) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( a1 + 40 != a2 + 40 )
  {
    *(_QWORD *)(a1 + 40) = *v2;
    *v2 = 0LL;
  }
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 52) = *(_OWORD *)(a2 + 52);
  *(_OWORD *)(a1 + 68) = *(_OWORD *)(a2 + 68);
  *(_QWORD *)(a1 + 84) = *(_QWORD *)(a2 + 84);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 120);
  result = a1;
  *(_QWORD *)(a2 + 104) = 0LL;
  *(_QWORD *)(a2 + 112) = 0LL;
  *(_QWORD *)(a2 + 120) = 0LL;
  return result;
}
