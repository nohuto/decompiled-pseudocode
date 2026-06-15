/*
 * XREFs of ??1?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@QEAA@XZ @ 0x180033F04
 * Callers:
 *     ??1TSSession@@QEAA@XZ @ 0x1800340EC (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x1800376B4 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     _TsSessionCreate_::_1_::dtor$5 @ 0x180049A10 (_TsSessionCreate_--_1_--dtor$5.c)
 *     _TsSessionCreate_::_1_::dtor$10 @ 0x180049A22 (_TsSessionCreate_--_1_--dtor$10.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 *     ??1DuckingDescriptorAndId@@QEAA@XZ @ 0x180034068 (--1DuckingDescriptorAndId@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>(
        DuckingDescriptorAndId **a1)
{
  DuckingDescriptorAndId *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    DuckingDescriptorAndId::~DuckingDescriptorAndId(*a1);
    operator delete(v1);
  }
}
