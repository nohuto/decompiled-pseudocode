/*
 * XREFs of sub_18005D0C0 @ 0x18005D0C0
 * Callers:
 *     sub_180091F9C @ 0x180091F9C (sub_180091F9C.c)
 * Callees:
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002B740 @ 0x18002B740 (sub_18002B740.c)
 *     sub_18002B9E0 @ 0x18002B9E0 (sub_18002B9E0.c)
 *     sub_18002BA14 @ 0x18002BA14 (sub_18002BA14.c)
 *     sub_18002BAAC @ 0x18002BAAC (sub_18002BAAC.c)
 *     sub_1800372F4 @ 0x1800372F4 (sub_1800372F4.c)
 *     sub_18005DF04 @ 0x18005DF04 (sub_18005DF04.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall sub_18005D0C0(__int64 a1, __int64 *a2)
{
  unsigned __int8 result; // al
  unsigned int v5; // eax
  __int64 *v6; // rcx
  unsigned int v7; // edi
  __int64 *v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edx
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 (__fastcall ***v15)(_QWORD, _QWORD); // rcx

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !result )
  {
    v5 = sub_180028544(*a2);
    v6 = *(__int64 **)(a1 + 112);
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
    if ( *((_BYTE *)v6 + 25) || v7 < *((_DWORD *)v6 + 8) || v6 == v8 || (result = sub_1800122B0(v6 + 5)) != 0 )
    {
      result = (unsigned __int8)sub_18002B740(a1, a2);
      v10 = *(_QWORD *)(a1 + 136);
      if ( v10 )
      {
        sub_18005DF04(a1, v10, *a2);
        sub_18002BAAC(a1, v7);
        result = sub_18002BA14(a1, 8);
        v13 = v12 - 7;
        if ( result || (v14 = sub_18002B9E0(v11), (result = sub_1800372F4(v14, v13)) != 0) )
        {
          v15 = *(__int64 (__fastcall ****)(_QWORD, _QWORD))(a1 + 136);
          *(_QWORD *)(a1 + 136) = 0LL;
          if ( v15 )
            return (**v15)(v15, v13);
        }
      }
    }
  }
  return result;
}
