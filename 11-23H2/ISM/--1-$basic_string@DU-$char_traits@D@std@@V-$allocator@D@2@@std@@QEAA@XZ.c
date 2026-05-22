/*
 * XREFs of ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800C550C
 * Callers:
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$0 @ 0x1800C58D9 (_ISMTracing--GetVector3AsString_--_1_--dtor$0.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$1 @ 0x1800C58E5 (_ISMTracing--GetVector3AsString_--_1_--dtor$1.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$2 @ 0x1800C58F1 (_ISMTracing--GetVector3AsString_--_1_--dtor$2.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$3 @ 0x1800C58FD (_ISMTracing--GetVector3AsString_--_1_--dtor$3.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$4 @ 0x1800C5909 (_ISMTracing--GetVector3AsString_--_1_--dtor$4.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$5 @ 0x1800C5915 (_ISMTracing--GetVector3AsString_--_1_--dtor$5.c)
 *     _ISMTracing::LogMPCHandInputReport_::_1_::dtor$0 @ 0x1800C6F77 (_ISMTracing--LogMPCHandInputReport_--_1_--dtor$0.c)
 *     _ISMTracing::LogMPCHandInputReport_::_1_::dtor$1 @ 0x1800C6F83 (_ISMTracing--LogMPCHandInputReport_--_1_--dtor$1.c)
 *     _ISMTracing::LogMPCHandInputReport_::_1_::dtor$3 @ 0x1800C6F8F (_ISMTracing--LogMPCHandInputReport_--_1_--dtor$3.c)
 *     _ISMTracing::LogMPCHandInputReport_::_1_::dtor$4 @ 0x1800C6F9B (_ISMTracing--LogMPCHandInputReport_--_1_--dtor$4.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::string::~string(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 0x10 )
    std::_Deallocate<16,0>(*(void **)a1, v1 + 1);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 15LL;
  *(_BYTE *)a1 = 0;
}
