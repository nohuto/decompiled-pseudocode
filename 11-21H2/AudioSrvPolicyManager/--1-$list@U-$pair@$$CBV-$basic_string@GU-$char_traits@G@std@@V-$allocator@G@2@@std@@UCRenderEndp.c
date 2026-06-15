/*
 * XREFs of ??1?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@@std@@QEAA@XZ @ 0x180008A28
 * Callers:
 *     ??1CDuckingManager@@UEAA@XZ @ 0x180008BF0 (--1CDuckingManager@@UEAA@XZ.c)
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$12 @ 0x180044A3D (_CDuckingManager--CDuckingManager_--_1_--dtor$12.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>::~list<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>(
        char **a1)
{
  char *v1; // rdx
  __int64 *v3; // rbx
  unsigned __int64 v4; // rdx
  __int64 *v5; // rsi

  v1 = *a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *(__int64 **)v1;
  if ( *(_QWORD *)v1 )
  {
    do
    {
      v4 = v3[5];
      v5 = (__int64 *)*v3;
      if ( v4 >= 8 )
        std::_Deallocate<16,0>((char *)v3[2], 2 * v4 + 2);
      v3[4] = 0LL;
      v3[5] = 7LL;
      *((_WORD *)v3 + 8) = 0;
      std::_Deallocate<16,0>((char *)v3, 0x38uLL);
      v3 = v5;
    }
    while ( v5 );
  }
  std::_Deallocate<16,0>(*a1, 0x38uLL);
}
