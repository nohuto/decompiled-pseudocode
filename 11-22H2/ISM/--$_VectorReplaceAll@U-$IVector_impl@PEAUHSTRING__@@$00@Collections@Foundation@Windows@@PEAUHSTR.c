/*
 * XREFs of ??$_VectorReplaceAll@U?$IVector_impl@PEAUHSTRING__@@$00@Collections@Foundation@Windows@@PEAUHSTRING__@@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@PEAUHSTRING__@@$00@123@IPEAPEAUHSTRING__@@@Z @ 0x1801903DC
 * Callers:
 *     ?ReplaceAll@?$IVector_impl@PEAUHSTRING__@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@@Z @ 0x180198DE0 (-ReplaceAll@-$IVector_impl@PEAUHSTRING__@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRI.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_VectorReplaceAll<Windows::Foundation::Collections::IVector_impl<HSTRING__ *,1>,HSTRING__ *>(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
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
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 104LL))(a1, *a3);
        if ( v6 < 0 )
          break;
        ++v7;
        ++a3;
        if ( v7 >= a2 )
          return (unsigned int)v6;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
    }
  }
  return (unsigned int)v6;
}
