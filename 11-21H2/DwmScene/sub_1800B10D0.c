/*
 * XREFs of sub_1800B10D0 @ 0x1800B10D0
 * Callers:
 *     sub_1800B1CA0 @ 0x1800B1CA0 (sub_1800B1CA0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122D0 @ 0x1800122D0 (sub_1800122D0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_1800B10D0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  unsigned int i; // esi
  char v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rdi
  char result; // al
  char v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = (__int64 *)(a1 + 144);
  for ( i = 0; i < 8; ++i )
  {
    if ( *(_BYTE *)(a1 + 440) || sub_1800122D0((_QWORD *)(16LL * i + a1 + 136), (_QWORD *)(16LL * i + a1 + 8)) )
    {
      v7 = *(v2 - 16);
      if ( v7 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
        v7 = *(v2 - 16);
      }
      v14[0] = *(v2 - 1);
      *(v2 - 1) = *(v2 - 17);
      v8 = *v2;
      *v2 = v7;
      v14[1] = v8;
      sub_180010910((__int64)v14);
      v6 = *(_BYTE *)(a1 + 440);
    }
    v2 += 2;
  }
  v9 = (_QWORD *)(a1 + 408);
  if ( v6 || (result = sub_1800122D0((_QWORD *)(a1 + 408), (_QWORD *)(a1 + 392))) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 400);
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v12 = *(_QWORD *)(a1 + 400);
    }
    v15[0] = *v9;
    *v9 = *(_QWORD *)(a1 + 392);
    v13 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v12;
    v15[1] = v13;
    sub_180010910((__int64)v15);
    goto LABEL_15;
  }
  if ( v11 )
LABEL_15:
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 176LL))(a2, a1 + 136, a1 + 408);
  *(_BYTE *)(a1 + 440) = 0;
  return result;
}
