/*
 * XREFs of sub_1800F09B0 @ 0x1800F09B0
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
__int64 __fastcall sub_1800F09B0(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  int v10; // ecx
  __int64 v11; // rbx
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rax
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v18; // [rsp+48h] [rbp-28h] BYREF
  __int128 v19; // [rsp+50h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a1 + 136) != 1 )
    goto LABEL_24;
  v6 = *(_QWORD *)(a1 + 120);
  v19 = 0LL;
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
        v19 = *(_OWORD *)(v6 + 72);
        break;
      }
    }
  }
  sub_1800E6A0C(v17, &v19);
  sub_180010910((__int64)&v19);
  sub_1800E77D8(*(_QWORD *)(a1 + 120), &v18);
  v10 = *(_DWORD *)(a1 + 140);
  v11 = v18;
  if ( !v10 )
  {
    v19 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, __int64, bool))(*(_QWORD *)v18 + 232LL))(
            v18,
            *(_QWORD *)(a1 + 96),
            &v19,
            16LL,
            a3 != 1);
    if ( !v13 )
    {
      *(_QWORD *)(a1 + 144) = v19;
      *(_BYTE *)(a1 + 152) = DWORD2(v19) != 0;
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  v12 = v10 - 1;
  if ( !v12 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64, bool))(*(_QWORD *)v18 + 232LL))(
            v18,
            *(_QWORD *)(a1 + 96),
            &v16,
            8LL,
            a3 != 1);
    if ( !v13 )
    {
      v14 = v16;
      goto LABEL_13;
    }
LABEL_19:
    if ( v13 != 1 )
    {
      sub_1800DD668(v17[0], v13);
      *(_DWORD *)(a1 + 136) = 5;
    }
    goto LABEL_21;
  }
  if ( v12 == 2 )
  {
    LODWORD(v16) = 0;
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64, bool))(*(_QWORD *)v18 + 232LL))(
            v18,
            *(_QWORD *)(a1 + 96),
            &v16,
            4LL,
            a3 != 1);
    if ( !v13 )
    {
      v14 = (int)v16;
LABEL_13:
      *(_QWORD *)(a1 + 144) = v14;
LABEL_18:
      *(_DWORD *)(a1 + 136) = 2;
      goto LABEL_21;
    }
    goto LABEL_19;
  }
LABEL_21:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  sub_180010910((__int64)v17);
LABEL_24:
  *(_DWORD *)a2 = 4;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_BYTE *)(a2 + 16) = 1;
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 136);
  if ( *(_DWORD *)(a1 + 136) == 2 )
    *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 144);
  return a2;
}
