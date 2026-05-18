/*
 * XREFs of sub_180096500 @ 0x180096500
 * Callers:
 *     sub_1800491C8 @ 0x1800491C8 (sub_1800491C8.c)
 *     sub_180094A54 @ 0x180094A54 (sub_180094A54.c)
 *     sub_180096660 @ 0x180096660 (sub_180096660.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_180029E58 @ 0x180029E58 (sub_180029E58.c)
 *     sub_18002B740 @ 0x18002B740 (sub_18002B740.c)
 *     sub_18002BAAC @ 0x18002BAAC (sub_18002BAAC.c)
 *     sub_1800961B0 @ 0x1800961B0 (sub_1800961B0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180096500(_QWORD *a1, __int64 *a2)
{
  __int64 result; // rax
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+28h] [rbp-28h]
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-10h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result )
  {
    v5 = sub_180028544(*a2);
    v6 = a1[16];
    result = *(_QWORD *)(v6 + 8);
    v7 = v6;
    while ( !*(_BYTE *)(result + 25) )
    {
      if ( *(_DWORD *)(result + 32) >= v5 )
      {
        v7 = result;
        result = *(_QWORD *)result;
      }
      else
      {
        result = *(_QWORD *)(result + 16);
      }
    }
    if ( *(_BYTE *)(v7 + 25) || v5 < *(_DWORD *)(v7 + 32) || v7 == v6 )
    {
      sub_18002B740((__int64)a1, a2);
      sub_1800961B0(*a2, (__int64 *)&v13);
      v8 = v13;
      v9 = *v13;
      v15 = 0LL;
      v10 = a1[15];
      if ( v10 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        v10 = a1[15];
      }
      *(_QWORD *)&v15 = a1[14];
      *((_QWORD *)&v15 + 1) = v10;
      (*(void (__fastcall **)(_QWORD *, __int128 *))(v9 + 40))(v8, &v15);
      v11 = (_QWORD *)sub_180029E58(a1 + 16, v5);
      v12 = v14;
      if ( v14 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
        v12 = v14;
      }
      v16[0] = *v11;
      *v11 = v13;
      v16[1] = v11[1];
      v11[1] = v12;
      sub_180010910((__int64)v16);
      sub_18002BAAC((__int64)a1, v5);
      return sub_180010910((__int64)&v13);
    }
  }
  return result;
}
