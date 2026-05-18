/*
 * XREFs of sub_1800E9010 @ 0x1800E9010
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800E9010(__int64 a1, int a2, __int64 *a3, unsigned int a4)
{
  __int64 v7; // rax
  unsigned int v8; // r8d
  __int64 *v9; // rdx
  __int64 *v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  _BYTE *v14; // rcx
  char v15; // bl
  __int64 v16; // rbx
  int v17; // edi
  int v18; // edi
  _BYTE v20[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h]
  _BYTE v22[8]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h]
  _QWORD v24[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+40h] BYREF

  v7 = *a3;
  if ( *a3 )
  {
    v8 = *(_DWORD *)(a1 + 88);
    v9 = *(__int64 **)(v7 + 112);
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
    v23 = 0LL;
    v14 = v22;
    v15 = 2;
    v13 = 0LL;
  }
  v24[0] = v13;
  v24[1] = *((_QWORD *)v14 + 1);
  *(_QWORD *)v14 = 0LL;
  *((_QWORD *)v14 + 1) = 0LL;
  if ( (v15 & 2) != 0 )
  {
    v15 &= ~2u;
    sub_180010910((__int64)v22);
  }
  if ( (v15 & 1) != 0 )
    sub_180010910((__int64)v20);
  if ( v13 )
  {
    v16 = *(_QWORD *)(v13 + 120);
    if ( v16 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 8LL))(*(_QWORD *)(v13 + 120));
    v25 = v16;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  else
  {
    v25 = 0LL;
  }
  v17 = a2 - 1;
  if ( v17 )
  {
    v18 = v17 - 3;
    if ( v18 )
    {
      if ( v18 == 1 )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 128LL))(
          *(_QWORD *)(a1 + 144),
          a4,
          1LL,
          &v25);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 176LL))(
        *(_QWORD *)(a1 + 144),
        a4,
        1LL,
        &v25);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 56LL))(
      *(_QWORD *)(a1 + 144),
      a4,
      1LL,
      &v25);
  }
  return sub_180010910((__int64)v24);
}
