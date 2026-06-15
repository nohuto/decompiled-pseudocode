/*
 * XREFs of ?Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z @ 0x140024F90
 * Callers:
 *     <none>
 * Callees:
 *     ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x140013708 (--$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::Allocate(ATL::CAtlStringMgr *this, int a2, int a3)
{
  signed int v4; // ebx
  struct ATL::CStringData *result; // rax
  unsigned __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 < 0 )
    return 0LL;
  if ( 0x7FFFFFFF - a2 < 1 )
    return 0LL;
  v4 = (a2 + 8) & 0xFFFFFFF8;
  if ( a2 >= v4 )
    return 0LL;
  if ( (int)ATL::AtlMultiply<unsigned __int64>(&v6, v4, a3) < 0 )
    return 0LL;
  if ( v6 > 0xFFFFFFFFFFFFFFE7uLL )
    return 0LL;
  result = (struct ATL::CStringData *)(***((__int64 (__fastcall ****)(_QWORD, __int64))this + 1))(
                                        *((_QWORD *)this + 1),
                                        v6 + 24);
  if ( !result )
    return 0LL;
  *((_DWORD *)result + 2) = 0;
  *((_DWORD *)result + 3) = v4 - 1;
  *(_QWORD *)result = this;
  *((_DWORD *)result + 4) = 1;
  return result;
}
