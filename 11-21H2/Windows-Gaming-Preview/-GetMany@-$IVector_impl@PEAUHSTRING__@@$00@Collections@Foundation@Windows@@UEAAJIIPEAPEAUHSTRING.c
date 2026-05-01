/*
 * XREFs of ?GetMany@?$IVector_impl@PEAUHSTRING__@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUHSTRING__@@PEAI@Z @ 0x180017F70
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18004B744 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::IVector_impl<HSTRING__ *,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        HSTRING *a4,
        _DWORD *a5)
{
  HSTRING *v8; // rdi
  unsigned int v9; // esi
  _DWORD *v10; // r12
  int v11; // ebp
  unsigned int v12; // ecx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rbx
  unsigned int v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0;
  v8 = a4;
  v9 = 0;
  memset_0(a4, 0, 8LL * a3);
  v10 = a5;
  *a5 = 0;
  v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 56LL))(a1, &v17);
  if ( v11 >= 0 )
  {
    v12 = v17;
    if ( a2 <= v17 )
    {
      v13 = 0LL;
      if ( a3 )
      {
        while ( 1 )
        {
          v14 = (unsigned int)v13 + a2;
          if ( (unsigned int)v14 >= v12 )
            break;
          v11 = (*(__int64 (__fastcall **)(__int64, __int64, HSTRING *))(*(_QWORD *)a1 + 48LL))(a1, v14, &v8[v13]);
          if ( v11 < 0 )
          {
            if ( v9 )
            {
              v15 = v9;
              do
              {
                WindowsDeleteString(*v8);
                *v8++ = 0LL;
                --v15;
              }
              while ( v15 );
            }
            return (unsigned int)v11;
          }
          ++v9;
          v13 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v13 >= a3 )
            break;
          v12 = v17;
        }
      }
      *v10 = v13;
    }
    else
    {
      return (unsigned int)-2147483637;
    }
  }
  return (unsigned int)v11;
}
