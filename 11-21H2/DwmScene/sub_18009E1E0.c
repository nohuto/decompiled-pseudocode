/*
 * XREFs of sub_18009E1E0 @ 0x18009E1E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180012450 @ 0x180012450 (sub_180012450.c)
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     sub_180057E0C @ 0x180057E0C (sub_180057E0C.c)
 *     sub_180057E58 @ 0x180057E58 (sub_180057E58.c)
 *     sub_180064450 @ 0x180064450 (sub_180064450.c)
 *     sub_18006560C @ 0x18006560C (sub_18006560C.c)
 *     sub_180065734 @ 0x180065734 (sub_180065734.c)
 *     sub_18008E70C @ 0x18008E70C (sub_18008E70C.c)
 *     sub_18009D25C @ 0x18009D25C (sub_18009D25C.c)
 *     sub_18009D9AC @ 0x18009D9AC (sub_18009D9AC.c)
 *     sub_18009D9E8 @ 0x18009D9E8 (sub_18009D9E8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_18009E1E0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // r14
  char v12; // si
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int128 *v26; // rcx
  __int64 v27; // rax
  char v28; // di
  char v29; // di
  __int64 v30; // rdi
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int128 v34; // [rsp+28h] [rbp-99h] BYREF
  __int128 v35; // [rsp+38h] [rbp-89h] BYREF
  __int128 v36; // [rsp+48h] [rbp-79h] BYREF
  __int128 v37; // [rsp+58h] [rbp-69h] BYREF
  _QWORD v38[2]; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v39[2]; // [rsp+78h] [rbp-49h] BYREF
  _QWORD v40[2]; // [rsp+88h] [rbp-39h] BYREF
  _BYTE v41[8]; // [rsp+98h] [rbp-29h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-21h]
  _BYTE v43[8]; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-11h]
  _QWORD v45[2]; // [rsp+B8h] [rbp-9h] BYREF
  _BYTE v46[16]; // [rsp+C8h] [rbp+7h] BYREF
  _QWORD v47[2]; // [rsp+D8h] [rbp+17h] BYREF
  _QWORD v48[2]; // [rsp+E8h] [rbp+27h] BYREF

  v6 = sub_18008E70C(a1);
  v7 = sub_180037388(v6);
  v34 = 0LL;
  sub_180057E0C(v7, a1 + 1768, &v34);
  sub_180010910((__int64)&v34);
  v35 = 0LL;
  sub_180057E0C(v7, a1 + 1848, &v35);
  sub_180010910((__int64)&v35);
  v36 = 0LL;
  v8 = *(_QWORD *)(a1 + 64);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 8);
    while ( v9 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9);
      if ( v10 == v9 )
      {
        v36 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  sub_180012450(v36, v45);
  sub_180010910((__int64)&v36);
  v11 = v45[0];
  if ( !*(_BYTE *)(v45[0] + 124LL) || *(float *)(v45[0] + 104LL) <= 0.0 )
  {
    v22 = a1 + 1768;
    v30 = a1 + 1848;
    goto LABEL_48;
  }
  sub_18009D25C(a1);
  v12 = 6;
  if ( *(_DWORD *)(a1 + 1960) || !*(_DWORD *)(a1 + 1944) )
  {
    v13 = 3;
    v14 = *(_DWORD *)(a1 + 316);
    if ( *(_DWORD *)(v11 + 120) == 2 )
    {
      if ( v14 != 3 )
      {
        *(_DWORD *)(a1 + 316) = 3;
LABEL_24:
        sub_18006560C(a1, 2);
      }
    }
    else if ( v14 != 1 )
    {
      *(_DWORD *)(a1 + 316) = 1;
      goto LABEL_24;
    }
    *(_DWORD *)(a1 + 412) = v13;
    *(_DWORD *)(a1 + 312) = 1065353216;
    goto LABEL_26;
  }
  v15 = *(_DWORD *)(a1 + 316);
  if ( *(_DWORD *)(v11 + 120) == 2 )
  {
    if ( v15 != 4 )
    {
      *(_DWORD *)(a1 + 316) = 4;
LABEL_19:
      sub_18006560C(a1, 2);
    }
  }
  else if ( v15 != 2 )
  {
    *(_DWORD *)(a1 + 316) = 2;
    goto LABEL_19;
  }
  *(_DWORD *)(a1 + 412) = 6;
  *(_DWORD *)(a1 + 312) = 0;
LABEL_26:
  v16 = *(_DWORD *)(a1 + 1940) - 1;
  *(_QWORD *)&v37 = 0x100000001LL;
  DWORD2(v37) = v16;
  HIDWORD(v37) = v16;
  sub_180065734(a1, &v37);
  sub_180064450(v17, a2, a3);
  v18 = *(_QWORD *)(a1 + 160);
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    v18 = *(_QWORD *)(a1 + 160);
  }
  v38[0] = *(_QWORD *)(a1 + 152);
  v38[1] = v18;
  if ( sub_1800122C0(v38) )
  {
    v20 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v19 + 48LL))(v19, v46);
    v21 = *v20;
    v12 = 5;
  }
  else
  {
    v42 = 0LL;
    v20 = (__int64 *)v41;
    v21 = 0LL;
  }
  v39[0] = v21;
  v39[1] = v20[1];
  *v20 = 0LL;
  v20[1] = 0LL;
  if ( (v12 & 2) != 0 )
  {
    v12 &= ~2u;
    sub_180010910((__int64)v41);
  }
  if ( (v12 & 1) != 0 )
  {
    v12 &= ~1u;
    sub_180010910((__int64)v46);
  }
  sub_180010910((__int64)v38);
  v22 = a1 + 1768;
  sub_180057E0C(v7, a1 + 1768, v39);
  sub_180010910((__int64)v39);
  v23 = *(_QWORD *)(a1 + 1920);
  if ( v23 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
    v23 = *(_QWORD *)(a1 + 1920);
  }
  v40[0] = *(_QWORD *)(a1 + 1912);
  v40[1] = v23;
  if ( sub_1800122C0(v40) )
  {
    v25 = *(_QWORD *)(v24 + 144);
    if ( v25 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
      v25 = *(_QWORD *)(v24 + 144);
    }
    v44 = v25;
    v26 = (__int128 *)v43;
    v27 = *(_QWORD *)(v24 + 136);
    v28 = 8;
  }
  else
  {
    *((_QWORD *)&v35 + 1) = 0LL;
    v26 = &v35;
    v27 = 0LL;
    v28 = 16;
  }
  v29 = v12 | v28;
  *(_QWORD *)&v34 = v27;
  *((_QWORD *)&v34 + 1) = *((_QWORD *)v26 + 1);
  *(_QWORD *)v26 = 0LL;
  *((_QWORD *)v26 + 1) = 0LL;
  if ( (v29 & 0x10) != 0 )
  {
    v29 &= ~0x10u;
    sub_180010910((__int64)&v35);
  }
  if ( (v29 & 8) != 0 )
    sub_180010910((__int64)v43);
  sub_180010910((__int64)v40);
  v30 = a1 + 1848;
  sub_180057E0C(v7, a1 + 1848, &v34);
  sub_180010910((__int64)&v34);
LABEL_48:
  v31 = sub_18009D9E8(a1, v47);
  sub_180057E58(v7, v22, v31);
  sub_180010910((__int64)v47);
  v32 = sub_18009D9AC(a1, v48);
  sub_180057E58(v7, v30, v32);
  sub_180010910((__int64)v48);
  return sub_180010910((__int64)v45);
}
