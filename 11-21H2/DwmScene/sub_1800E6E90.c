/*
 * XREFs of sub_1800E6E90 @ 0x1800E6E90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180018704 @ 0x180018704 (sub_180018704.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800E6E90(__int64 a1, __int64 *a2, unsigned __int8 a3, char a4)
{
  unsigned int v5; // r12d
  __int64 v7; // rdx
  unsigned int v8; // r10d
  __int64 *v9; // rdx
  __int64 *v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  _BYTE *v14; // rax
  char v15; // di
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // r8
  _BYTE v20[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+38h] [rbp-48h]
  __int64 v22; // [rsp+40h] [rbp-40h]
  __int64 v23; // [rsp+48h] [rbp-38h]
  __int64 v24; // [rsp+50h] [rbp-30h] BYREF
  __int64 v25; // [rsp+58h] [rbp-28h]
  _BYTE v26[8]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v27; // [rsp+68h] [rbp-18h]
  _QWORD v28[2]; // [rsp+70h] [rbp-10h] BYREF

  v5 = a3;
  v7 = *a2;
  if ( v7 )
  {
    v8 = *(_DWORD *)(a1 + 88);
    v9 = *(__int64 **)(v7 + 256);
    v10 = (__int64 *)v9[1];
    v11 = v9;
    while ( !*((_BYTE *)v10 + 25) )
    {
      if ( *((_DWORD *)v10 + 8) >= v8 )
      {
        v11 = v10;
        v10 = (__int64 *)*v10;
      }
      else
      {
        v10 = (__int64 *)v10[2];
      }
    }
    if ( *((_BYTE *)v11 + 25) || v8 < *((_DWORD *)v11 + 8) || v11 == v9 )
    {
      v21 = 0LL;
      v13 = 0LL;
    }
    else
    {
      v12 = v11[6];
      if ( v12 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
        v12 = v11[6];
      }
      v21 = v12;
      v13 = v11[5];
    }
    v14 = v20;
    v15 = 1;
  }
  else
  {
    v27 = 0LL;
    v14 = v26;
    v15 = 2;
    v13 = 0LL;
  }
  v24 = v13;
  v16 = *((_QWORD *)v14 + 1);
  v25 = v16;
  *(_QWORD *)v14 = 0LL;
  *((_QWORD *)v14 + 1) = 0LL;
  if ( (v15 & 2) != 0 )
  {
    v15 &= ~2u;
    sub_180010910((__int64)v26);
  }
  if ( (v15 & 1) != 0 )
    sub_180010910((__int64)v20);
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    v16 = v25;
  }
  v22 = v13;
  v23 = v16;
  sub_180018704((__int64)v28);
  v17 = *(_QWORD *)(v28[0] + 112LL);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  v18 = v5 | 2;
  if ( !a4 )
    v18 = v5;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 144) + 424LL))(*(_QWORD *)(a1 + 144), v17, v18);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  sub_180010910((__int64)v28);
  return sub_180010910((__int64)&v24);
}
