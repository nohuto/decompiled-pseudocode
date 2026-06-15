/*
 * XREFs of ??1?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAA@XZ @ 0x1800386F4
 * Callers:
 *     ??1CEndpointVolumeStateManager@@UEAA@XZ @ 0x180038854 (--1CEndpointVolumeStateManager@@UEAA@XZ.c)
 *     _TSSession::Create_::_1_::dtor$13 @ 0x180045F25 (_TSSession--Create_--_1_--dtor$13.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@std@@QEAA@XZ @ 0x1800387E0 (--1-$unique_ptr@VCEndpointVolumeState@@U-$default_delete@VCEndpointVolumeState@@@std@@@std@@QEAA.c)
 */

void __fastcall std::list<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>::~list<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>(
        char **a1)
{
  char *v1; // rdx
  __int64 *v3; // rbx
  __int64 *v4; // rsi
  unsigned __int64 v5; // rdx

  v1 = *a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *(__int64 **)v1;
  if ( *(_QWORD *)v1 )
  {
    do
    {
      v4 = (__int64 *)*v3;
      std::unique_ptr<CEndpointVolumeState>::~unique_ptr<CEndpointVolumeState>(v3 + 6);
      v5 = v3[5];
      if ( v5 >= 8 )
        std::_Deallocate<16,0>((char *)v3[2], 2 * v5 + 2);
      v3[4] = 0LL;
      v3[5] = 7LL;
      *((_WORD *)v3 + 8) = 0;
      std::_Deallocate<16,0>((char *)v3, 0x38uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, 0x38uLL);
}
