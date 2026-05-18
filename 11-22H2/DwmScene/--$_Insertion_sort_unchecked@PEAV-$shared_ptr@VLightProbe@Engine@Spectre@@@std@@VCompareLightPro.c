/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@std@@YAPEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@0@QEAV10@0VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@Z @ 0x1800A41A0
 * Callers:
 *     ?SortLightProbes@LightGatherer@Engine@Spectre@@CAXAEAV?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@@Z @ 0x1800A46B8 (-SortLightProbes@LightGatherer@Engine@Spectre@@CAXAEAV-$vector@V-$shared_ptr@VLightProbe@Engine@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??RCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@QEBA_NAEBV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@0@Z @ 0x1800A44D4 (--RCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@QEBA_NAEBV-$shared_ptr@VLightProbe@.c)
 */

_QWORD *__fastcall std::_Insertion_sort_unchecked<std::shared_ptr<Spectre::Engine::LightProbe> *,Spectre::Engine::LightGatherer::CompareLightProbeVisibility>(
        std::_Ref_count_base *a1,
        _QWORD *a2)
{
  __int64 *v3; // rdi
  __int64 *v4; // rbx
  std::_Ref_count_base *v5; // r14
  __int64 v6; // rax
  std::_Ref_count_base *v7; // rax
  __int64 v8; // rcx
  __int64 *i; // rsi
  __int64 *v10; // rcx
  __int64 *v11; // r10
  __int64 *v12; // rsi
  __int64 *j; // r8
  __int64 v15; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v16; // [rsp+28h] [rbp-10h]

  v3 = (__int64 *)a1;
  if ( a1 != (std::_Ref_count_base *)a2 )
  {
    v4 = (__int64 *)((char *)a1 + 16);
    if ( (_QWORD *)((char *)a1 + 16) != a2 )
    {
      v5 = a1;
      do
      {
        v6 = *v4;
        *v4 = 0LL;
        v15 = v6;
        v7 = (std::_Ref_count_base *)*((_QWORD *)v5 + 3);
        *((_QWORD *)v5 + 3) = 0LL;
        v16 = v7;
        if ( (unsigned __int8)Spectre::Engine::LightGatherer::CompareLightProbeVisibility::operator()(a1, &v15, v3) )
        {
          for ( i = v4; i != v3; std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v10, i) )
          {
            v10 = i;
            i -= 2;
          }
          v11 = v3;
        }
        else
        {
          v12 = (__int64 *)v5;
          for ( j = (__int64 *)v5;
                (unsigned __int8)Spectre::Engine::LightGatherer::CompareLightProbeVisibility::operator()(v8, &v15, j);
                j = v12 )
          {
            std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v11, v12);
            v12 -= 2;
          }
        }
        std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v11, &v15);
        a1 = v16;
        if ( v16 )
          std::_Ref_count_base::_Decref(v16);
        v4 += 2;
        v5 = (std::_Ref_count_base *)((char *)v5 + 16);
      }
      while ( v4 != a2 );
    }
  }
  return a2;
}
