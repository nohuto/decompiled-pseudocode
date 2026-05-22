/*
 * XREFs of ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AB324
 * Callers:
 *     ?OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801A9B28 (-OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??1Edge@@QEAA@XZ @ 0x1801A9474 (--1Edge@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x1801AA8CC (--$_Emplace_reallocate@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@.c)
 *     ??0Edge@@QEAA@AEBV0@@Z @ 0x1801AAE00 (--0Edge@@QEAA@AEBV0@@Z.c)
 *     ??0Edge@@QEAA@PEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AAF54 (--0Edge@@QEAA@PEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1801AB44C (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AC164 (-Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Edges::AddOrUpdate(Edges *this, const struct EdgyCompositionConfigurationUpdateEx *a2)
{
  unsigned int v4; // edi
  int Edge; // eax
  _BYTE v7[128]; // [rsp+30h] [rbp-98h] BYREF

  v4 = 0;
  Edge = Edges::FindEdge(this, (const unsigned __int16 *)a2 + 12);
  if ( Edge < 0 )
  {
    Edge::Edge((Edge *)v7, a2);
    try
    {
      if ( *((_QWORD *)this + 1) == *((_QWORD *)this + 2) )
      {
        std::vector<Edge>::_Emplace_reallocate<Edge const &>(
          (__int64 *)this,
          *((_QWORD *)this + 1),
          (const struct Edge *)v7);
      }
      else
      {
        Edge::Edge(*((Edge **)this + 1), (const struct Edge *)v7);
        *((_QWORD *)this + 1) += 128LL;
      }
    }
    catch ( ... )
    {
      v4 = -2147024882;
    }
    Edge::~Edge((Edge *)v7);
  }
  else
  {
    Edge::Set((Edge *)(*(_QWORD *)this + ((__int64)Edge << 7)), a2);
  }
  return v4;
}
