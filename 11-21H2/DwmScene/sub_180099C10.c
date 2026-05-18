/*
 * XREFs of sub_180099C10 @ 0x180099C10
 * Callers:
 *     sub_1800E91F0 @ 0x1800E91F0 (sub_1800E91F0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180036A48 @ 0x180036A48 (sub_180036A48.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180099C10(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 *v6; // r8
  __int64 *v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 *v11; // rdx
  __int64 *v12; // rax
  __int64 *v13; // rcx
  __int64 v14; // rax
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = (__int64 *)a1[17];
  v7 = (__int64 *)v6[1];
  v8 = v6;
  v9 = 0LL;
  while ( !*((_BYTE *)v7 + 25) )
  {
    if ( *((_DWORD *)v7 + 8) >= a3 )
    {
      v8 = v7;
      v7 = (__int64 *)*v7;
    }
    else
    {
      v7 = (__int64 *)v7[2];
    }
  }
  if ( *((_BYTE *)v8 + 25) || a3 < *((_DWORD *)v8 + 8) || v8 == v6 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
    sub_180036A48(v10, v16, a3);
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*a1 + 16LL))(a1, v16);
    sub_180010910((__int64)v16);
  }
  v11 = (__int64 *)a1[17];
  v12 = (__int64 *)v11[1];
  v13 = v11;
  while ( !*((_BYTE *)v12 + 25) )
  {
    if ( *((_DWORD *)v12 + 8) >= a3 )
    {
      v13 = v12;
      v12 = (__int64 *)*v12;
    }
    else
    {
      v12 = (__int64 *)v12[2];
    }
  }
  if ( *((_BYTE *)v13 + 25) || a3 < *((_DWORD *)v13 + 8) || v13 == v11 )
  {
    *(_OWORD *)a2 = 0LL;
    *(_QWORD *)a2 = 0LL;
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    v14 = v13[6];
    if ( v14 )
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    *(_QWORD *)a2 = v13[5];
    v9 = v13[6];
  }
  *(_QWORD *)(a2 + 8) = v9;
  return a2;
}
