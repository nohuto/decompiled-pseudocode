/*
 * XREFs of sub_18004F904 @ 0x18004F904
 * Callers:
 *     sub_180033400 @ 0x180033400 (sub_180033400.c)
 * Callees:
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_180060610 @ 0x180060610 (sub_180060610.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_18004F904(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 *j; // rbx
  __int64 v6; // rcx
  __int64 **v7; // rax
  __int64 *i; // rax
  __int64 *v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = **(_QWORD **)(a1 + 18560);
  v10 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    sub_180060610(*(_QWORD *)(v4 + 64), a2);
    sub_18001D3F8(&v10);
    v4 = v10;
  }
  j = **(__int64 ***)(a1 + 18576);
  while ( !*((_BYTE *)j + 25) )
  {
    v6 = j[11];
    if ( v6 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, a2);
    v7 = (__int64 **)j[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v9 = *v7;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v9 + 25); v9 = (__int64 *)*v9 )
        j = v9;
    }
  }
}
