/*
 * XREFs of sub_180097030 @ 0x180097030
 * Callers:
 *     sub_18004D458 @ 0x18004D458 (sub_18004D458.c)
 *     sub_18004EABC @ 0x18004EABC (sub_18004EABC.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_180097030(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  _QWORD v10[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+40h] [rbp-10h] BYREF
  char v13; // [rsp+48h] [rbp-8h]

  if ( *(_QWORD *)(a1 + 128) )
  {
    v3 = **(_QWORD **)(a1 + 120);
    v4 = *(_QWORD *)(v3 + 48);
    if ( v4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v4 = *(_QWORD *)(v3 + 48);
    }
    v5 = *(_QWORD *)(v3 + 40);
    v10[0] = v5;
    v10[1] = v4;
    v11 = 0LL;
    v6 = *(_QWORD *)(v5 + 80);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 8);
      while ( v7 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7);
        if ( v8 == v7 )
        {
          v11 = *(_OWORD *)(v5 + 72);
          break;
        }
      }
      v5 = v10[0];
    }
    sub_18002C460(v11 + 24, (__int64)&v12);
    sub_180010910((__int64)&v11);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 40LL))(v5, a2);
    if ( v13 )
      j_LanguageEnumProc(v12);
    sub_180010910((__int64)v10);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
