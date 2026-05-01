/*
 * XREFs of ?ApplyGameRelatedForGameModeProcess@BroadcastDVRComponent@@AEAAXKAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@@Z @ 0x1803D576C
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D6E6C (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ApplyGameRelatedForRelatedProcess@BroadcastDVRComponent@@AEAAXKGK@Z @ 0x1803D58E4 (-ApplyGameRelatedForRelatedProcess@BroadcastDVRComponent@@AEAAXKGK@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall BroadcastDVRComponent::ApplyGameRelatedForGameModeProcess(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 *v5; // rcx
  __int64 v6; // rax
  bool v7; // bl
  void *v8; // rcx
  unsigned int v9; // r15d
  __int64 v10; // rdi
  unsigned int v11; // r14d
  __int64 v12; // rdi
  __int64 v13; // r12
  char *v14; // rbx
  PCWSTR StringRawBuffer; // rax
  BroadcastDVRComponent *v16; // rcx
  void *v17; // rcx
  void *v18; // [rsp+38h] [rbp-18h] BYREF
  char v19; // [rsp+40h] [rbp-10h]
  unsigned int v20; // [rsp+90h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+A8h] [rbp+58h]

  pv = 0LL;
  v5 = *(__int64 **)(a1 + 256);
  v6 = *v5;
  v18 = 0LL;
  v19 = 1;
  v7 = (*(int (__fastcall **)(__int64 *, _QWORD, unsigned int *, void **))(v6 + 96))(v5, a2, &v20, &v18) < 0;
  if ( v19 )
  {
    v8 = pv;
    pv = v18;
    if ( v8 )
      CoTaskMemFree(v8);
  }
  if ( !v7 )
  {
    v9 = 0;
    if ( (__int64)(a3[1] - *a3) >> 4 )
    {
      v10 = 0LL;
      do
      {
        v11 = 0;
        if ( v20 )
        {
          v12 = 2 * v10;
          while ( 1 )
          {
            v13 = 62LL * v11;
            v14 = (char *)pv;
            StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*a3 + 8 * v12 + 8), 0LL);
            if ( !(unsigned int)_o__wcsicmp(StringRawBuffer, &v14[v13 + 2]) )
              break;
            if ( ++v11 >= v20 )
              goto LABEL_13;
          }
          BroadcastDVRComponent::ApplyGameRelatedForRelatedProcess(
            v16,
            *(_DWORD *)(*a3 + 8 * v12),
            *(_WORD *)((char *)pv + v13),
            a2);
        }
LABEL_13:
        v10 = ++v9;
      }
      while ( v9 < (unsigned __int64)((__int64)(a3[1] - *a3) >> 4) );
    }
  }
  v17 = pv;
  pv = 0LL;
  if ( v17 )
    CoTaskMemFree(v17);
}
