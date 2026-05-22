/*
 * XREFs of ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801D6E74
 * Callers:
 *     ?RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801D58D8 (-RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??1Edge@@QEAA@XZ @ 0x1801D50A0 (--1Edge@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x1801D6528 (--$_Emplace_reallocate@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@.c)
 *     ??0Edge@@QEAA@AEBV0@@Z @ 0x1801D6A08 (--0Edge@@QEAA@AEBV0@@Z.c)
 *     ??0Edge@@QEAA@PEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801D6B04 (--0Edge@@QEAA@PEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1801D7094 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801D7D0C (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Edges::AddOrUpdate(Edges *this, const unsigned __int16 *a2, struct EdgyControllerClientProxy *a3)
{
  unsigned int v6; // edi
  int Edge; // eax
  _BYTE v9[128]; // [rsp+30h] [rbp-A8h] BYREF

  v6 = 0;
  Edge = Edges::FindEdge(this, a2);
  if ( Edge < 0 )
  {
    Edge::Edge((Edge *)v9, a2, a3);
    try
    {
      if ( *((_QWORD *)this + 1) == *((_QWORD *)this + 2) )
      {
        std::vector<Edge>::_Emplace_reallocate<Edge const &>(
          (__int64 *)this,
          *((_QWORD *)this + 1),
          (const struct Edge *)v9);
      }
      else
      {
        Edge::Edge(*((Edge **)this + 1), (const struct Edge *)v9);
        *((_QWORD *)this + 1) += 128LL;
      }
    }
    catch ( ... )
    {
      v6 = -2147024882;
    }
    Edge::~Edge((Edge *)v9);
  }
  else
  {
    Edge::Set((Edge *)(*(_QWORD *)this + ((__int64)Edge << 7)), a2, a3);
  }
  return v6;
}
