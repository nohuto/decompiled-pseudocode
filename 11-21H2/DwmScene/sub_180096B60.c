/*
 * XREFs of sub_180096B60 @ 0x180096B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002BA14 @ 0x18002BA14 (sub_18002BA14.c)
 *     sub_18002BA30 @ 0x18002BA30 (sub_18002BA30.c)
 *     sub_180096CD8 @ 0x180096CD8 (sub_180096CD8.c)
 *     sub_18009746C @ 0x18009746C (sub_18009746C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_180096B60(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  __int64 *v6; // rcx
  unsigned int v7; // edx
  __int64 *v8; // r8
  __int64 *v9; // rax
  __int64 v10; // r11
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF

  LOBYTE(v4) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)v4 && a1[17] )
  {
    v5 = sub_180028544(*a2);
    v6 = (__int64 *)a1[15];
    v7 = v5;
    v8 = v6;
    v9 = (__int64 *)v6[1];
    while ( !*((_BYTE *)v9 + 25) )
    {
      if ( *((_DWORD *)v9 + 8) >= v7 )
      {
        v6 = v9;
        v9 = (__int64 *)*v9;
      }
      else
      {
        v9 = (__int64 *)v9[2];
      }
    }
    if ( *((_BYTE *)v6 + 25) || v7 < *((_DWORD *)v6 + 8) || v6 == v8 )
    {
      sub_180096CD8(a1, a2, v8);
    }
    else if ( !sub_18002BA30((__int64)a1, v7) )
    {
      sub_18009746C(a1, v10);
    }
    LOBYTE(v4) = sub_18002BA14((__int64)a1, 8);
    if ( (_BYTE)v4 )
    {
      v4 = a1[14];
      if ( !v4 || *(_DWORD *)(v4 + 24) != 2 )
      {
        v11 = a1[17];
        a1[17] = 0LL;
        v14[0] = v11;
        v12 = a1[18];
        a1[18] = 0LL;
        v14[1] = v12;
        v15 = 0LL;
        sub_180010910((__int64)v14);
        LOBYTE(v4) = sub_180010910((__int64)&v15);
      }
    }
  }
  return v4;
}
