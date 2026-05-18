/*
 * XREFs of sub_1800DCF0C @ 0x1800DCF0C
 * Callers:
 *     sub_1800DAEE0 @ 0x1800DAEE0 (sub_1800DAEE0.c)
 * Callees:
 *     _o_log @ 0x18000C054 (_o_log.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DCF0C(__int64 *a1)
{
  __int64 v2; // rax
  int v3; // eax
  __int64 result; // rax
  __int128 v5; // [rsp+28h] [rbp-39h] BYREF
  int v6; // [rsp+38h] [rbp-29h]
  __int64 v7; // [rsp+3Ch] [rbp-25h]
  int v8; // [rsp+44h] [rbp-1Dh]
  __int128 v9; // [rsp+48h] [rbp-19h]
  __int128 v10; // [rsp+58h] [rbp-9h]
  __int128 v11; // [rsp+68h] [rbp+7h]
  __int64 v12; // [rsp+78h] [rbp+17h]
  __int64 v13; // [rsp+80h] [rbp+1Fh]
  __int64 v14; // [rsp+88h] [rbp+27h]
  __int64 v15; // [rsp+90h] [rbp+2Fh]
  int v16; // [rsp+98h] [rbp+37h]

  v5 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v2 = *a1;
  v6 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int128 *))(v2 + 88))(a1, &v5);
  v3 = *((_DWORD *)a1 + 72);
  if ( v3 == 5 )
  {
    result = 3000LL;
  }
  else if ( v3 == 4 )
  {
    result = 4000LL;
  }
  else
  {
    o_log();
    o_log();
    result = (unsigned int)(int)(o_round() * 100.0);
  }
  *((_DWORD *)a1 + 1158) = result;
  return result;
}
