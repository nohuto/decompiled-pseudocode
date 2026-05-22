/*
 * XREFs of ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x1801AC41C
 * Callers:
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801ABE84 (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AC004 (-Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ??1Edge@@QEAA@XZ @ 0x1801A9474 (--1Edge@@QEAA@XZ.c)
 *     ??4Edge@@QEAAAEAV0@$$QEAV0@@Z @ 0x1801AB090 (--4Edge@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

_QWORD *__fastcall std::vector<Edge>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a3 + 128;
  if ( a3 + 128 != v3 )
  {
    do
    {
      Edge::operator=(v4 - 128, v4);
      v4 += 128LL;
    }
    while ( v4 != v3 );
    v3 = *(_QWORD *)(a1 + 8);
  }
  Edge::~Edge((Edge *)(v3 - 128));
  *(_QWORD *)(a1 + 8) -= 128LL;
  result = a2;
  *a2 = a3;
  return result;
}
