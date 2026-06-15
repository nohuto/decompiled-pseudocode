/*
 * XREFs of ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x180009CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x180009F20 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000AA00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18000BBC0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F4D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 *     ?at@?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180040380 (-at@-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_ptr@.c)
 *     memmove_0 @ 0x180047698 (memmove_0.c)
 */

float __fastcall CEndpointVolumeStateManager::GetEndpointVolumeOverridePolicyVolume(
        CEndpointVolumeStateManager *this,
        const unsigned __int16 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r15
  __int64 v5; // r8
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  _QWORD *v9; // r8
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // r10
  _QWORD *v16; // r11
  _QWORD *v17; // rax
  char *v18; // r9
  unsigned __int64 v19; // rcx
  signed __int64 v20; // r9
  unsigned __int16 v21; // dx
  __int64 v22; // rbx
  float v23; // xmm6_4
  _QWORD v25[2]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v26; // [rsp+30h] [rbp-58h]
  unsigned __int64 v27; // [rsp+38h] [rbp-50h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v6 = 0LL;
  v27 = 7LL;
  v25[0] = 0LL;
  v7 = -1LL;
  v26 = 0LL;
  do
    ++v7;
  while ( a2[v7] );
  if ( v7 > 7 )
  {
    std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(v25, v7, v5, a2);
  }
  else
  {
    v8 = 2 * v7;
    v26 = v7;
    memmove_0(v25, a2, 2 * v7);
    *(_WORD *)((char *)v25 + v8) = 0;
  }
  v9 = v25;
  v10 = 0xCBF29CE484222325uLL;
  v11 = 0LL;
  v12 = 2 * v26;
  if ( v27 >= 8 )
    v9 = (_QWORD *)v25[0];
  if ( v12 )
  {
    do
    {
      v13 = *((unsigned __int8 *)v9 + v11++);
      v10 = 0x100000001B3LL * (v13 ^ v10);
    }
    while ( v11 < v12 );
  }
  v14 = *((_QWORD *)this + 10);
  v15 = *(_QWORD **)(v14 + 16 * (v10 & *((_QWORD *)this + 13)) + 8);
  if ( v15 != *((_QWORD **)this + 8) )
  {
    v16 = *(_QWORD **)(v14 + 16 * (v10 & *((_QWORD *)this + 13)));
    while ( 1 )
    {
      v17 = v15 + 2;
      if ( v15[5] >= 8uLL )
        v17 = (_QWORD *)*v17;
      v18 = (char *)v25;
      if ( v27 >= 8 )
        v18 = (char *)v25[0];
      if ( v26 == v15[4] )
      {
        v19 = v26;
        if ( !v26 )
        {
LABEL_25:
          v6 = v15;
          break;
        }
        v20 = v18 - (char *)v17;
        while ( 1 )
        {
          v21 = *(_WORD *)((char *)v17 + v20);
          if ( v21 < *(_WORD *)v17 || v21 > *(_WORD *)v17 )
            break;
          if ( v19 == 1 )
            goto LABEL_25;
          --v19;
          v17 = (_QWORD *)((char *)v17 + 2);
        }
      }
      if ( v15 == v16 )
        break;
      v15 = (_QWORD *)v15[1];
    }
  }
  if ( v27 >= 8 )
    std::_Deallocate<16,0>(v25[0], 2 * v27 + 2);
  if ( v6 )
  {
    std::wstring::wstring(v25, a2, v9);
    v22 = std::unordered_map<std::wstring,std::unique_ptr<CEndpointVolumeState>>::at((char *)this + 56, v25);
    std::wstring::~wstring(v25);
    if ( *(_BYTE *)(*(_QWORD *)v22 + 8LL) )
      v23 = 0.0;
    else
      v23 = *(float *)(*(_QWORD *)v22 + 4LL);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v23;
  }
  else
  {
    if ( v2 )
      LeaveCriticalSection(v2);
    return FLOAT_1_0;
  }
}
