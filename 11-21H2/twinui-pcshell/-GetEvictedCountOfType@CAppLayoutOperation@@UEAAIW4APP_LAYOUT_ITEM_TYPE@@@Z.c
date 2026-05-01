/*
 * XREFs of ?GetEvictedCountOfType@CAppLayoutOperation@@UEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x180613550
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppLayoutOperation::GetEvictedCountOfType(__int64 a1, char a2)
{
  unsigned int v2; // esi
  __int64 v5; // rdi
  int (__fastcall *v6)(__int64, __int64 *); // rbx
  __int64 v8[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v9[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v10; // [rsp+38h] [rbp-60h]

  v2 = 0;
  if ( (a2 & 1) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    v8[0] = 0LL;
    v6 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 128LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v8);
    if ( v6(v5, v8) >= 0 )
    {
      while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v8[0] + 24LL))(v8[0], 1LL, v9) >= 0 )
      {
        if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 176LL))(
                *(_QWORD *)(a1 + 32),
                v10) )
          ++v2;
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v8);
  }
  if ( (a2 & 4) != 0
    && (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 80LL))(*(_QWORD *)(a1 + 24), 4LL)
    && !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 80LL))(*(_QWORD *)(a1 + 32), 4LL) )
  {
    ++v2;
  }
  return v2;
}
