/*
 * XREFs of CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_de07712c181cbebffd3210a2d706196b___ @ 0x18006DAA8
 * Callers:
 *     ?IsServiceAvailable@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@AEBU_GUID@@PEAH@Z @ 0x18006DA10 (-IsServiceAvailable@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@AEBU_GUID@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_de07712c181cbebffd3210a2d706196b___(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rsi
  char i; // di
  __int64 v7; // rcx
  __int64 v8; // rax
  int IsWindowServiceSupported; // eax
  int v10; // ecx
  int v11; // ecx

  v2 = *(_QWORD *)(a1 + 176);
  v3 = 0LL;
  for ( i = 1; v3 < v2; ++v3 )
  {
    if ( !i )
      return;
    i = 1;
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v3);
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
    IsWindowServiceSupported = CoreIsWindowServiceSupported(v8, a2 + 12);
    v10 = *(_DWORD *)(a2 + 8);
    if ( v10 && (v11 = v10 - 1) != 0 )
    {
      if ( v11 == 1 )
      {
        if ( IsWindowServiceSupported < 0 )
          continue;
        **(_DWORD **)a2 = 1;
      }
    }
    else
    {
      **(_DWORD **)a2 = IsWindowServiceSupported >= 0;
    }
    i = 0;
  }
}
