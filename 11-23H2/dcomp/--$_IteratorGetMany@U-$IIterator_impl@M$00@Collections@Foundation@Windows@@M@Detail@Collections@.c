/*
 * XREFs of ??$_IteratorGetMany@U?$IIterator_impl@M$00@Collections@Foundation@Windows@@M@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@M$00@123@IPEAMPEAI@Z @ 0x18016FD88
 * Callers:
 *     ?GetMany@?$IIterator_impl@M$00@Collections@Foundation@Windows@@UEAAJIPEAMPEAI@Z @ 0x180170B90 (-GetMany@-$IIterator_impl@M$00@Collections@Foundation@Windows@@UEAAJIPEAMPEAI@Z.c)
 * Callees:
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<float,1>,float>(
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
  memset_0(a3, 0, 4LL * a2);
  *a4 = 0;
  result = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 56LL))(a1, &v10);
  if ( (int)result >= 0 )
  {
    while ( v10 )
    {
      if ( (unsigned int)v8 < a2 )
      {
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, (__int64)a3 + 4 * v8);
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
