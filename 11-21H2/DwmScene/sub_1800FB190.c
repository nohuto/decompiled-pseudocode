/*
 * XREFs of sub_1800FB190 @ 0x1800FB190
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18001E060 @ 0x18001E060 (sub_18001E060.c)
 *     sub_1800FACB8 @ 0x1800FACB8 (sub_1800FACB8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800FB190(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r8
  int v5; // eax
  char v6; // di
  __int64 *v7; // rbx
  __int64 v8; // rcx
  __int64 **v9; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int128 v13; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v14; // [rsp+40h] [rbp+10h] BYREF

  v13 = 0LL;
  v14 = (__int64 *)sub_180011088(0x68uLL);
  sub_18001DE8C(v14, (__int64 *)&v14);
  sub_18001DE8C((__int64 *)(v2 + 8), (__int64 *)&v14);
  sub_18001DE8C((__int64 *)(v3 + 16), (__int64 *)&v14);
  *(_WORD *)(v4 + 24) = 257;
  *(_QWORD *)&v13 = v4;
  v5 = Mtx_lock((_Mtx_t)(a1 + 8));
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    __debugbreak();
  }
  v6 = *(_BYTE *)(a1 + 112);
  *(_BYTE *)(a1 + 112) = 1;
  sub_1800FACB8((__int64 *)&v13, (__int64 *)(a1 + 96));
  Mtx_unlock((_Mtx_t)(a1 + 8));
  if ( !v6 )
  {
    v7 = *(__int64 **)v13;
    while ( !*((_BYTE *)v7 + 25) )
    {
      v8 = v7[12];
      if ( !v8 )
      {
        std::_Xbad_function_call();
        break;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v9 = (__int64 **)v7[2];
      if ( *((_BYTE *)v9 + 25) )
      {
        for ( i = (__int64 *)v7[1]; !*((_BYTE *)i + 25) && v7 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v7 = i;
        v7 = i;
      }
      else
      {
        v7 = (__int64 *)v7[2];
        for ( j = *v9; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v7 = j;
      }
    }
  }
  sub_18001E060((__int64)&v13, (__int64)&v13, *(char **)(v13 + 8));
  return sub_180010884((char *)v13, 0x68uLL);
}
