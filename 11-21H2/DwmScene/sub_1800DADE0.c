/*
 * XREFs of sub_1800DADE0 @ 0x1800DADE0
 * Callers:
 *     sub_1800DA800 @ 0x1800DA800 (sub_1800DA800.c)
 * Callees:
 *     sub_1800D9A3C @ 0x1800D9A3C (sub_1800D9A3C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_1800DADE0(__int64 a1)
{
  _UNKNOWN **v1; // rax
  int v2; // ebx
  __int64 v4; // rax
  __int128 v6; // [rsp+28h] [rbp-29h] BYREF
  int v7; // [rsp+38h] [rbp-19h]
  int v8; // [rsp+3Ch] [rbp-15h]
  int v9; // [rsp+40h] [rbp-11h]
  int v10; // [rsp+44h] [rbp-Dh]
  __int128 v11; // [rsp+48h] [rbp-9h]
  __int128 v12; // [rsp+58h] [rbp+7h]
  __int128 v13; // [rsp+68h] [rbp+17h]
  __int64 v14; // [rsp+78h] [rbp+27h]
  __int64 v15; // [rsp+80h] [rbp+2Fh]
  int v16; // [rsp+88h] [rbp+37h]
  int v17; // [rsp+8Ch] [rbp+3Bh]
  __int64 v18; // [rsp+90h] [rbp+3Fh]
  int v19; // [rsp+98h] [rbp+47h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF

  v1 = &retaddr;
  v2 = *(_DWORD *)(a1 + 416);
  if ( v2 != 1 )
  {
    if ( !v2 )
    {
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v14 = 0LL;
      v15 = 0LL;
      v16 = 0;
      v17 = 0;
      v18 = 0LL;
      v19 = 0;
      v4 = *(_QWORD *)a1;
      v7 = 0;
      v6 = 0LL;
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      (*(void (__fastcall **)(__int64, __int128 *))(v4 + 88))(a1, &v6);
      v2 = v19 >= 1000 ? (v19 >= 2000) + 2 : 1;
      if ( *(_DWORD *)(a1 + 308) == 1 )
        v2 = 1;
    }
    LOBYTE(v1) = sub_1800D9A3C(a1);
    if ( !(_BYTE)v1 && *(_DWORD *)(a1 + 384) == 1 )
      v2 = 1;
  }
  *(_DWORD *)(a1 + 420) = v2;
  return (char)v1;
}
