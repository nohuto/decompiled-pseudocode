/*
 * XREFs of sub_1800A34D0 @ 0x1800A34D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800A16E0 @ 0x1800A16E0 (sub_1800A16E0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800A34D0(__int64 a1, __int64 a2, double (__fastcall ***a3)(_QWORD))
{
  double v4; // xmm0_8
  __int64 v5; // r8
  char v6; // dl
  __int64 v7; // rax
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  void (__fastcall ***v10)(_QWORD, unsigned __int32 *); // rcx
  __int64 v11; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  unsigned __int32 *v14; // rcx
  __int128 v16; // [rsp+20h] [rbp-20h] BYREF
  __int128 v17; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int32 v18; // [rsp+50h] [rbp+10h] BYREF

  v4 = (**a3)(a3);
  v18 = sub_1800A16E0(*(float *)(a1 + 40), *(float *)(a1 + 44), v4).m128_u32[0];
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 0;
  if ( v5 && *(_DWORD *)(v5 + 8) || (v7 = *(_QWORD *)(a1 + 32)) != 0 && *(_DWORD *)(v7 + 8) )
  {
    v16 = 0LL;
    if ( v5 )
    {
      v8 = *(_DWORD *)(v5 + 8);
      while ( v8 )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v8 + 1, v8);
        if ( v9 == v8 )
        {
          v10 = *(void (__fastcall ****)(_QWORD, unsigned __int32 *))(a1 + 8);
          v16 = *(_OWORD *)(a1 + 8);
          goto LABEL_10;
        }
      }
    }
    v10 = (void (__fastcall ***)(_QWORD, unsigned __int32 *))v16;
LABEL_10:
    if ( v10 )
    {
      (**v10)(v10, &v18);
    }
    else
    {
      v17 = 0LL;
      v11 = *(_QWORD *)(a1 + 32);
      if ( v11 )
      {
        v12 = *(_DWORD *)(v11 + 8);
        while ( v12 )
        {
          v13 = v12;
          v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 8), v12 + 1, v12);
          if ( v13 == v12 )
          {
            v14 = *(unsigned __int32 **)(a1 + 24);
            *(_QWORD *)&v17 = v14;
            *((_QWORD *)&v17 + 1) = *(_QWORD *)(a1 + 32);
            if ( v14 )
              *v14 = v18;
            break;
          }
        }
      }
      sub_180010910((__int64)&v17);
    }
    sub_180010910((__int64)&v16);
    return 1;
  }
  return v6;
}
