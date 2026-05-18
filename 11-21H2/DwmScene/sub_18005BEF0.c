/*
 * XREFs of sub_18005BEF0 @ 0x18005BEF0
 * Callers:
 *     sub_18005C210 @ 0x18005C210 (sub_18005C210.c)
 *     sub_180091F9C @ 0x180091F9C (sub_180091F9C.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002B9EC @ 0x18002B9EC (sub_18002B9EC.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_18005B914 @ 0x18005B914 (sub_18005B914.c)
 *     sub_18005C134 @ 0x18005C134 (sub_18005C134.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18005BEF0(_QWORD *a1, __int64 *a2)
{
  char result; // al
  unsigned int v5; // eax
  __int64 *v6; // r8
  __int64 *v7; // rcx
  __int64 *v8; // rdx
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16[4]; // [rsp+40h] [rbp-20h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !result )
  {
    v5 = sub_180028544(*a2);
    v6 = (__int64 *)a1[16];
    v7 = (__int64 *)v6[1];
    v8 = v6;
    while ( !*((_BYTE *)v7 + 25) )
    {
      if ( *((_DWORD *)v7 + 8) >= v5 )
      {
        v8 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        v7 = (__int64 *)v7[2];
      }
    }
    if ( *((_BYTE *)v8 + 25) || v5 < *((_DWORD *)v8 + 8) || v8 == v6 || (result = sub_1800122B0(v8 + 5)) != 0 )
    {
      sub_18005B914(*a2, v15);
      v9 = v15[0];
      v10 = sub_18002B9EC((__int64)a1, v16);
      sub_18002BC44(v9, v10);
      v11 = v15[0];
      v12 = *(_QWORD *)v15[0];
      v14 = 0LL;
      v13 = a1[15];
      if ( v13 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
        v13 = a1[15];
      }
      *(_QWORD *)&v14 = a1[14];
      *((_QWORD *)&v14 + 1) = v13;
      (*(void (__fastcall **)(__int64, __int128 *))(v12 + 48))(v11, &v14);
      sub_18005C134(a1, v15);
      return sub_180010910((__int64)v15);
    }
  }
  return result;
}
