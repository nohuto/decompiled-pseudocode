/*
 * XREFs of ??$_VectorGetMany@U?$IVectorView_impl@M$00@Collections@Foundation@Windows@@M@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVectorView_impl@M$00@123@IIPEAMPEAI@Z @ 0x18016FE54
 * Callers:
 *     ?GetMany@?$IVectorView_impl@M$00@Collections@Foundation@Windows@@UEAAJIIPEAMPEAI@Z @ 0x180170BA0 (-GetMany@-$IVectorView_impl@M$00@Collections@Foundation@Windows@@UEAAJIIPEAMPEAI@Z.c)
 * Callees:
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_VectorGetMany<Windows::Foundation::Collections::IVectorView_impl<float,1>,float>(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        _DWORD *a5)
{
  _DWORD *v9; // r14
  __int64 result; // rax
  unsigned int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // rdx
  unsigned int v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0;
  memset_0(a4, 0, 4LL * a3);
  v9 = a5;
  *a5 = 0;
  result = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 56LL))(a1, &v14);
  if ( (int)result >= 0 )
  {
    v11 = v14;
    if ( a2 <= v14 )
    {
      v12 = 0LL;
      if ( a3 )
      {
        while ( 1 )
        {
          v13 = (unsigned int)v12 + a2;
          if ( (unsigned int)v13 >= v11 )
            break;
          result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 48LL))(
                     a1,
                     v13,
                     (__int64)a4 + 4 * v12);
          if ( (int)result < 0 )
            return result;
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= a3 )
            break;
          v11 = v14;
        }
      }
      *v9 = v12;
    }
    else
    {
      return 2147483659LL;
    }
  }
  return result;
}
