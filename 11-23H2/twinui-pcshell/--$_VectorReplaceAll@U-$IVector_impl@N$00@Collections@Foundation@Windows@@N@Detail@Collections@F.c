/*
 * XREFs of ??$_VectorReplaceAll@U?$IVector_impl@N$00@Collections@Foundation@Windows@@N@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@N$00@123@IPEAN@Z @ 0x1803F6DD0
 * Callers:
 *     ?ReplaceAll@?$IVector_impl@N$00@Collections@Foundation@Windows@@UEAAJIPEAN@Z @ 0x180405D40 (-ReplaceAll@-$IVector_impl@N$00@Collections@Foundation@Windows@@UEAAJIPEAN@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_VectorReplaceAll<Windows::Foundation::Collections::IVector_impl<double,1>,double>(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  int v6; // ebp
  unsigned int v7; // ebx

  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
  if ( v6 >= 0 )
  {
    v7 = 0;
    if ( a2 )
    {
      while ( 1 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 104LL))(a1);
        if ( v6 < 0 )
          break;
        ++v7;
        a3 += 8LL;
        if ( v7 >= a2 )
          return (unsigned int)v6;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
    }
  }
  return (unsigned int)v6;
}
