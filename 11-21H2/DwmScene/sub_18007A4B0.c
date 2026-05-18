/*
 * XREFs of sub_18007A4B0 @ 0x18007A4B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002B740 @ 0x18002B740 (sub_18002B740.c)
 *     sub_18002B9EC @ 0x18002B9EC (sub_18002B9EC.c)
 *     sub_18002BAAC @ 0x18002BAAC (sub_18002BAAC.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_180079C78 @ 0x180079C78 (sub_180079C78.c)
 *     sub_18007A1F8 @ 0x18007A1F8 (sub_18007A1F8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007A4B0(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax
  unsigned int v5; // edi
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdx
  unsigned int *v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17[4]; // [rsp+40h] [rbp-28h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  v5 = 0;
  if ( !(_BYTE)result )
  {
    v6 = sub_180028544(*a2);
    v7 = a1[32];
    result = *(_QWORD *)(v7 + 8);
    v8 = v7;
    while ( !*(_BYTE *)(result + 25) )
    {
      if ( *(_DWORD *)(result + 32) >= v6 )
      {
        v8 = result;
        result = *(_QWORD *)result;
      }
      else
      {
        result = *(_QWORD *)(result + 16);
      }
    }
    if ( *(_BYTE *)(v8 + 25) || v6 < *(_DWORD *)(v8 + 32) || v8 == v7 )
    {
      sub_18002B740((__int64)a1, a2);
      sub_180079C78(*a2, v16);
      v9 = v16[0];
      v10 = sub_18002B9EC((__int64)a1, v17);
      sub_18002BC44(v9, v10);
      v11 = a1[14];
      v12 = *(unsigned int **)(v11 + 128);
      if ( v12 )
        v13 = v12[5];
      else
        v13 = 0;
      if ( v11 )
      {
        if ( v12 )
          v14 = v12[4];
        else
          v14 = 0LL;
        if ( v12 )
          v15 = v12[1];
        else
          v15 = 0LL;
        if ( v12 )
          v5 = *v12;
      }
      else
      {
        v15 = 0LL;
        v14 = 0LL;
      }
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, unsigned int))(*(_QWORD *)v16[0] + 40LL))(
        v16[0],
        v5,
        v15,
        v14,
        v13);
      sub_18007A1F8(a1, v16);
      sub_18002BAAC((__int64)a1, v6);
      return sub_180010910((__int64)v16);
    }
  }
  return result;
}
