/*
 * XREFs of ??1?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@QEAA@XZ @ 0x1800340AC
 * Callers:
 *     ??1TSSession@@QEAA@XZ @ 0x180034294 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180038354 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     _TsSessionCreate_::_1_::dtor$5 @ 0x18004AEC4 (_TsSessionCreate_--_1_--dtor$5.c)
 *     _TsSessionCreate_::_1_::dtor$10 @ 0x18004AED6 (_TsSessionCreate_--_1_--dtor$10.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 *     ??1DuckingDescriptorAndId@@QEAA@XZ @ 0x180034210 (--1DuckingDescriptorAndId@@QEAA@XZ.c)
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
