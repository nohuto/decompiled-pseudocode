/*
 * XREFs of ?Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z @ 0x18003C010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::Allocate(ATL::CAtlStringMgr *this, int a2, int a3)
{
  signed int v4; // ebx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  struct ATL::CStringData *result; // rax

  if ( a2 >= 0 && 0x7FFFFFFF - a2 >= 1 )
  {
    v4 = (a2 + 8) & 0xFFFFFFF8;
    if ( a2 < v4 )
    {
      if ( v4 )
      {
        if ( v4 == 56LL )
          v5 = 0x492492492492492LL;
        else
          v5 = 0xFFFFFFFFFFFFFFFFuLL / v4;
        if ( v5 < a3 )
          return 0LL;
        v6 = a3 * (__int64)v4;
        if ( v6 > 0xFFFFFFFFFFFFFFE7uLL )
          return 0LL;
      }
      else
      {
        v6 = 0LL;
      }
      result = (struct ATL::CStringData *)(***((__int64 (__fastcall ****)(_QWORD, __int64))this + 1))(
                                            *((_QWORD *)this + 1),
                                            v6 + 24);
      if ( result )
      {
        *(_QWORD *)result = this;
        *((_DWORD *)result + 3) = v4 - 1;
        *((_DWORD *)result + 4) = 1;
        *((_DWORD *)result + 2) = 0;
        return result;
      }
    }
  }
  return 0LL;
}
