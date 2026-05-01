/*
 * XREFs of wil::ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284___ @ 0x180458100
 * Callers:
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180463DA0 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall wil::ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284___(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 *v2; // rdi
  __int64 *v3; // rbx
  __int64 *v4; // rax
  std::_Ref_count_base *v5; // rcx

  v1 = *a1;
  v2 = *(__int64 **)(*a1 + 440);
  v3 = (__int64 *)(*(_QWORD *)a1[1] + 16LL);
  v4 = v2;
  if ( v3 != v2 )
  {
    do
    {
      std::shared_ptr<KBViewInfo>::operator=(v3 - 2, v3);
      v3 += 2;
    }
    while ( v3 != v2 );
    v2 = *(__int64 **)(v1 + 440);
    v4 = v2;
  }
  v5 = (std::_Ref_count_base *)*(v2 - 1);
  if ( v5 )
  {
    std::_Ref_count_base::_Decref(v5);
    v4 = *(__int64 **)(v1 + 440);
  }
  *(_QWORD *)(v1 + 440) = v4 - 2;
  return 0LL;
}
