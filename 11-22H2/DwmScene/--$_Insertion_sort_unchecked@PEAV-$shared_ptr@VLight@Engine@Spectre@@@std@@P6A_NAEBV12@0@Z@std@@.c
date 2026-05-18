/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAV?$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAPEAV?$shared_ptr@VLight@Engine@Spectre@@@0@QEAV10@0P6A_NAEBV10@1@Z@Z @ 0x180071364
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VLight@Engine@Spectre@@@0@0_JP6A_NAEBV10@2@Z@Z @ 0x180071A1C (--$_Sort_unchecked@PEAV-$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV-$s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Insertion_sort_unchecked<std::shared_ptr<Spectre::Engine::Light> *,bool (*)(std::shared_ptr<Spectre::Engine::Light> const &,std::shared_ptr<Spectre::Engine::Light> const &)>(
        __int64 *a1,
        __int64 *a2,
        __int64 (__fastcall *a3)(__int64 *, __int64 *))
{
  __int64 *i; // rbx
  __int64 *v7; // r14
  __int64 *v8; // rsi
  __int64 *v9; // rcx
  __int64 *v10; // rcx
  char v12; // al
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v14; // [rsp+28h] [rbp-20h]

  if ( a1 != a2 )
  {
    for ( i = a1 + 2; i != a2; i += 2 )
    {
      v7 = i;
      v13 = *i;
      v14 = (std::_Ref_count_base *)i[1];
      *i = 0LL;
      i[1] = 0LL;
      v8 = i;
      if ( (unsigned __int8)a3(&v13, a1) )
      {
        if ( i != a1 )
        {
          do
          {
            v9 = v8;
            v8 -= 2;
            std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v9, v8);
          }
          while ( v8 != a1 );
        }
        v10 = a1;
      }
      else
      {
        while ( 1 )
        {
          v8 -= 2;
          v12 = a3(&v13, v8);
          v10 = v7;
          if ( !v12 )
            break;
          std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v7, v8);
          v7 = v8;
        }
      }
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v10, &v13);
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
    }
  }
  return a2;
}
