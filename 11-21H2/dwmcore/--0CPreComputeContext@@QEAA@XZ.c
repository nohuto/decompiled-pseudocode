/*
 * XREFs of ??0CPreComputeContext@@QEAA@XZ @ 0x1800308A0
 * Callers:
 *     ??$make_unique@VCPreComputeContext@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPreComputeContext@@U?$default_delete@VCPreComputeContext@@@std@@@0@XZ @ 0x18001A564 (--$make_unique@VCPreComputeContext@@$$V$0A@@std@@YA-AV-$unique_ptr@VCPreComputeContext@@U-$defau.c)
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x18002E810 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800A24D0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??0CLightStack@@QEAA@XZ @ 0x180053050 (--0CLightStack@@QEAA@XZ.c)
 */

CPreComputeContext *__fastcall CPreComputeContext::CPreComputeContext(CPreComputeContext *this)
{
  __int64 v1; // r8
  __int64 v2; // r9
  CPreComputeContext *result; // rax

  *(_QWORD *)this = (char *)this + 24;
  *((_QWORD *)this + 1) = (char *)this + 24;
  *((_QWORD *)this + 2) = (char *)this + 1368;
  *((_QWORD *)this + 175) = 0LL;
  *((_QWORD *)this + 177) = 0LL;
  *((_DWORD *)this + 352) = 0;
  *((_DWORD *)this + 356) = 0;
  *((_QWORD *)this + 179) = 0LL;
  *((_QWORD *)this + 181) = 0LL;
  *((_DWORD *)this + 360) = 0;
  *((_DWORD *)this + 364) = 0;
  *((_QWORD *)this + 183) = 0LL;
  *((_QWORD *)this + 185) = 0LL;
  *((_DWORD *)this + 368) = 0;
  *((_DWORD *)this + 372) = 0;
  *((_QWORD *)this + 171) = 0LL;
  *((_QWORD *)this + 173) = 0LL;
  *((_DWORD *)this + 344) = 0;
  *((_DWORD *)this + 348) = 0;
  CLightStack::CLightStack((CPreComputeContext *)((char *)this + 1496));
  *(_QWORD *)(v1 + 1736) = v2;
  result = (CPreComputeContext *)v1;
  *(_QWORD *)(v1 + 1752) = v2;
  *(_DWORD *)(v1 + 1744) = v2;
  *(_DWORD *)(v1 + 1760) = v2;
  *(_QWORD *)(v1 + 1768) = v2;
  *(_QWORD *)(v1 + 1776) = v2;
  *(_QWORD *)(v1 + 1784) = v2;
  *(_DWORD *)(v1 + 1792) = v2;
  *(_QWORD *)(v1 + 1800) = v2;
  *(_QWORD *)(v1 + 1808) = v2;
  *(_QWORD *)(v1 + 1816) = v2;
  *(_DWORD *)(v1 + 1824) = v2;
  *(_QWORD *)(v1 + 1832) = v2;
  *(_QWORD *)(v1 + 1840) = v2;
  *(_QWORD *)(v1 + 1848) = v2;
  *(_QWORD *)(v1 + 1892) = v2;
  *(_QWORD *)(v1 + 1904) = v2;
  *(_DWORD *)(v1 + 1912) = v2;
  *(_QWORD *)(v1 + 1884) = 1LL;
  *(_DWORD *)(v1 + 1860) = v2;
  *(_QWORD *)(v1 + 1864) = v2;
  *(_QWORD *)(v1 + 1872) = v2;
  *(_BYTE *)(v1 + 1936) = v2;
  return result;
}
