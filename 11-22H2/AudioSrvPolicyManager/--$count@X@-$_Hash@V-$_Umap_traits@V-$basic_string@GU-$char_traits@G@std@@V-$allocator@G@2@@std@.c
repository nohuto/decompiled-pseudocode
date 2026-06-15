/*
 * XREFs of ??$count@X@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEBA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180011FB0
 * Callers:
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180040F60 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180041350 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::count<void>(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned __int64 v2; // rbp
  __int64 v4; // rdi
  _QWORD *v6; // r10
  __int64 v7; // rbx
  __int64 v8; // r8
  unsigned __int64 i; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // r10
  _QWORD *v13; // r11
  _QWORD *v14; // rax
  char *v15; // r9
  __int64 v16; // rcx
  signed __int64 v17; // r9
  unsigned __int16 v18; // dx

  v2 = a2[3];
  v4 = a2[2];
  v6 = a2;
  if ( v2 >= 8 )
    v6 = (_QWORD *)*a2;
  v7 = 0LL;
  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 2 * v4; v8 = 0x100000001B3LL * (v10 ^ v8) )
    v10 = *((unsigned __int8 *)v6 + i++);
  v11 = a1[3];
  v12 = *(_QWORD **)(v11 + 16 * (v8 & a1[6]) + 8);
  if ( v12 != (_QWORD *)a1[1] )
  {
    v13 = *(_QWORD **)(v11 + 16 * (v8 & a1[6]));
    while ( 1 )
    {
      v14 = v12 + 2;
      if ( v12[5] >= 8uLL )
        v14 = (_QWORD *)*v14;
      v15 = (char *)a2;
      if ( v2 >= 8 )
        v15 = (char *)*a2;
      if ( v4 == v12[4] )
      {
        v16 = v4;
        if ( !v4 )
          goto LABEL_21;
        v17 = v15 - (char *)v14;
        while ( 1 )
        {
          v18 = *(_WORD *)((char *)v14 + v17);
          if ( v18 < *(_WORD *)v14 || v18 > *(_WORD *)v14 )
            break;
          if ( v16 == 1 )
            goto LABEL_21;
          --v16;
          v14 = (_QWORD *)((char *)v14 + 2);
        }
      }
      if ( v12 == v13 )
        break;
      v12 = (_QWORD *)v12[1];
    }
  }
  v12 = 0LL;
LABEL_21:
  LOBYTE(v7) = v12 != 0LL;
  return v7;
}
