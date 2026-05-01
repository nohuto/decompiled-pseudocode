/*
 * XREFs of ??$_IteratorGetMany@U?$IIterator_impl@N$00@Collections@Foundation@Windows@@N@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@N$00@123@IPEANPEAI@Z @ 0x1803F5A88
 * Callers:
 *     ?GetMany@?$IIterator_impl@N$00@Collections@Foundation@Windows@@UEAAJIPEANPEAI@Z @ 0x1803FDDF0 (-GetMany@-$IIterator_impl@N$00@Collections@Foundation@Windows@@UEAAJIPEANPEAI@Z.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<double,1>,double>(
        __int64 a1,
        unsigned int a2,
        void *a3,
        _DWORD *a4)
{
  __int64 v8; // rbx
  __int64 result; // rax
  char v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0;
  v8 = 0LL;
  memset_0(a3, 0, 8LL * a2);
  *a4 = 0;
  result = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 56LL))(a1, &v10);
  if ( (int)result >= 0 )
  {
    while ( v10 )
    {
      if ( (unsigned int)v8 < a2 )
      {
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, (__int64)a3 + 8 * v8);
        if ( (int)result < 0 )
          return result;
        v8 = (unsigned int)(v8 + 1);
        result = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 64LL))(a1, &v10);
        if ( (int)result >= 0 )
          continue;
      }
      if ( (int)result < 0 )
        return result;
      break;
    }
    *a4 = v8;
  }
  return result;
}
