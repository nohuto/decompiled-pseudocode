/*
 * XREFs of sub_1800536F0 @ 0x1800536F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180049AF0 @ 0x180049AF0 (sub_180049AF0.c)
 *     sub_1800520F8 @ 0x1800520F8 (sub_1800520F8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800536F0(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  __int64 *v6; // rsi
  __int64 v7; // rdx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-10h] BYREF

  sub_1800520F8(a1, (__int64)v17);
  if ( sub_1800122C0(v17) )
  {
    v16 = 0LL;
    v3 = *(_QWORD *)(a1 + 64);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 8);
      while ( v4 )
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v4 + 1, v4);
        if ( v5 == v4 )
        {
          v16 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    v6 = *(__int64 **)(a1 + 104);
    if ( v6[9] )
    {
      v14 = 0LL;
      v7 = *(_QWORD *)(a1 + 144);
      if ( v7 )
      {
        v8 = *(_DWORD *)(v7 + 8);
        while ( v8 )
        {
          v9 = v8;
          v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8);
          if ( v9 == v8 )
          {
            v10 = *(__int64 **)(a1 + 136);
            v14 = *(_OWORD *)(a1 + 136);
            goto LABEL_14;
          }
        }
      }
      v10 = (__int64 *)v14;
LABEL_14:
      if ( v10 )
      {
        LOBYTE(v2) = 1;
        sub_180049AF0(*v6, (__int64)&qword_1801F5C58, v2);
        v11 = *v10;
        v15 = 0LL;
        v12 = v6[10];
        if ( v12 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
          v12 = v6[10];
          v10 = (__int64 *)v14;
        }
        *(_QWORD *)&v15 = v6[9];
        *((_QWORD *)&v15 + 1) = v12;
        (*(void (__fastcall **)(__int64 *, __int128 *))(v11 + 8))(v10, &v15);
      }
      sub_180010910((__int64)&v14);
    }
    sub_180010910((__int64)&v16);
  }
  return sub_180010910((__int64)v17);
}
