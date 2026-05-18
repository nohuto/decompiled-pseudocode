/*
 * XREFs of sub_1800EA090 @ 0x1800EA090
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18007BD68 @ 0x18007BD68 (sub_18007BD68.c)
 *     sub_18007BD8C @ 0x18007BD8C (sub_18007BD8C.c)
 *     sub_1800EAF60 @ 0x1800EAF60 (sub_1800EAF60.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800EA090(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  void *v7; // rax
  __int64 v8; // r10
  unsigned int v9; // r8d
  __int64 *v10; // rdx
  __int64 *v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  _BYTE *v15; // rcx
  char v16; // bl
  __int64 v17; // rbx
  _BYTE v19[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+28h] [rbp-40h]
  _BYTE v21[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22; // [rsp+38h] [rbp-30h]
  _QWORD v23[2]; // [rsp+40h] [rbp-28h] BYREF

  v7 = sub_18007BD8C();
  sub_18007BD68((__int64)v7, 7, 4);
  if ( *(_QWORD *)v8 )
  {
    v9 = *(_DWORD *)(a1 + 88);
    v10 = *(__int64 **)(*(_QWORD *)v8 + 112LL);
    v11 = (__int64 *)v10[1];
    v12 = v10;
    while ( !*((_BYTE *)v11 + 25) )
    {
      if ( *((_DWORD *)v11 + 8) >= v9 )
      {
        v12 = v11;
        v11 = (__int64 *)*v11;
      }
      else
      {
        v11 = (__int64 *)v11[2];
      }
    }
    if ( *((_BYTE *)v12 + 25) || v9 < *((_DWORD *)v12 + 8) || v12 == v10 )
    {
      v20 = 0LL;
      v14 = 0LL;
    }
    else
    {
      v13 = v12[6];
      if ( v13 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
        v13 = v12[6];
      }
      v20 = v13;
      v14 = v12[5];
    }
    v15 = v19;
    v16 = 1;
  }
  else
  {
    v22 = 0LL;
    v15 = v21;
    v16 = 2;
    v14 = 0LL;
  }
  v23[0] = v14;
  v23[1] = *((_QWORD *)v15 + 1);
  *(_QWORD *)v15 = 0LL;
  *((_QWORD *)v15 + 1) = 0LL;
  if ( (v16 & 2) != 0 )
  {
    v16 &= ~2u;
    sub_180010910((__int64)v21);
  }
  if ( (v16 & 1) != 0 )
    sub_180010910((__int64)v19);
  v17 = *(_QWORD *)(v14 + 120);
  if ( v17 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 8LL))(*(_QWORD *)(v14 + 120));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  sub_1800EAF60(a1, v17, a3, a4);
  return sub_180010910((__int64)v23);
}
