/*
 * XREFs of sub_1800B0140 @ 0x1800B0140
 * Callers:
 *     sub_1800B1CA0 @ 0x1800B1CA0 (sub_1800B1CA0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122D0 @ 0x1800122D0 (sub_1800122D0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_1800B0140(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // r14
  int v6; // eax
  unsigned int v7; // ebp
  __int64 v8; // r15
  _QWORD *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v4 = 0LL;
  do
  {
    v6 = *(_DWORD *)(a1 + 4616);
    if ( _bittest(&v6, v2) )
    {
      v7 = 0;
      v8 = 0LL;
      v9 = (_QWORD *)(((unsigned __int64)v2 << 8) + a1 + 1544);
      do
      {
        if ( *(_BYTE *)(a1 + 4620) || (LOBYTE(v6) = sub_1800122D0(v9, v9 - 192), (_BYTE)v6) )
        {
          v10 = *(_QWORD *)(a1 + 16 * (v4 + v8) + 16);
          if ( v10 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
            v10 = *(_QWORD *)(a1 + 16 * (v4 + v8) + 16);
          }
          v13[0] = *(_QWORD *)(a1 + 16 * (v4 + v8) + 1544);
          *(_QWORD *)(a1 + 16 * (v4 + v8) + 1544) = *(_QWORD *)(a1 + 16 * (v4 + v8) + 8);
          v11 = *(_QWORD *)(a1 + 16 * (v4 + v8) + 1552);
          *(_QWORD *)(a1 + 16 * (v4 + v8) + 1552) = v10;
          v13[1] = v11;
          sub_180010910((__int64)v13);
          LOBYTE(v6) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *, _QWORD))(*(_QWORD *)a2 + 136LL))(
                         a2,
                         v2,
                         v9,
                         v7);
        }
        ++v7;
        v9 += 2;
        ++v8;
      }
      while ( v7 < 0x10 );
    }
    ++v2;
    v4 += 16LL;
  }
  while ( v2 < 6 );
  *(_BYTE *)(a1 + 4620) = 0;
  return v6;
}
