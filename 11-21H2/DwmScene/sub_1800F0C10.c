/*
 * XREFs of sub_1800F0C10 @ 0x1800F0C10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800E6A0C @ 0x1800E6A0C (sub_1800E6A0C.c)
 *     sub_1800E77D8 @ 0x1800E77D8 (sub_1800E77D8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800F0C10(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  __int64 v10; // rbx
  int v11; // eax
  __int128 v13; // [rsp+30h] [rbp-59h] BYREF
  __int64 v14; // [rsp+40h] [rbp-49h] BYREF
  __int64 v15[3]; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v16[12]; // [rsp+60h] [rbp-29h] BYREF

  if ( *(_DWORD *)(a1 + 136) == 1 )
  {
    v6 = *(_QWORD *)(a1 + 120);
    v13 = 0LL;
    v7 = *(_QWORD *)(v6 + 80);
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      while ( v8 )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8);
        if ( v9 == v8 )
        {
          v13 = *(_OWORD *)(v6 + 72);
          break;
        }
      }
    }
    sub_1800E6A0C(v15, &v13);
    sub_180010910((__int64)&v13);
    sub_1800E77D8(*(_QWORD *)(a1 + 120), &v14);
    v10 = v14;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *, __int64, bool))(*(_QWORD *)v14 + 232LL))(
            v14,
            *(_QWORD *)(a1 + 96),
            v16,
            88LL,
            a3 != 1);
    if ( v11 )
    {
      if ( v11 != 1 )
        sub_1800DD668(v15[0], v11);
    }
    else
    {
      *(_QWORD *)(a1 + 208) = v16[6];
      *(_QWORD *)(a1 + 200) = v16[5];
      *(_QWORD *)(a1 + 240) = v16[10];
      *(_QWORD *)(a1 + 232) = v16[9];
      *(_QWORD *)(a1 + 184) = v16[3];
      *(_QWORD *)(a1 + 192) = v16[4];
      *(_QWORD *)(a1 + 224) = v16[8];
      *(_QWORD *)(a1 + 216) = v16[7];
      *(_QWORD *)(a1 + 168) = v16[1];
      *(_QWORD *)(a1 + 160) = v16[0];
      *(_QWORD *)(a1 + 176) = v16[2];
      *(_DWORD *)(a1 + 136) = 2;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    sub_180010910((__int64)v15);
  }
  *(_DWORD *)a2 = 4;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_QWORD *)(a2 + 80) = 0LL;
  *(_QWORD *)(a2 + 88) = 0LL;
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 136);
  if ( *(_DWORD *)(a1 + 136) == 2 )
  {
    *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 160);
    *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 176);
    *(_OWORD *)(a2 + 40) = *(_OWORD *)(a1 + 192);
    *(_OWORD *)(a2 + 56) = *(_OWORD *)(a1 + 208);
    *(_OWORD *)(a2 + 72) = *(_OWORD *)(a1 + 224);
    *(_QWORD *)(a2 + 88) = *(_QWORD *)(a1 + 240);
  }
  return a2;
}
