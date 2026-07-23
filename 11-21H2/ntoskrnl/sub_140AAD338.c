/*
 * XREFs of sub_140AAD338 @ 0x140AAD338
 * Callers:
 *     sub_1403A7CAC @ 0x1403A7CAC (sub_1403A7CAC.c)
 * Callees:
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_1403AA2B8 @ 0x1403AA2B8 (sub_1403AA2B8.c)
 *     sub_140AAD3E0 @ 0x140AAD3E0 (sub_140AAD3E0.c)
 */

__int64 __fastcall sub_140AAD338(__int64 *a1, __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  unsigned int v9; // esi
  __int64 v10; // rcx
  int v11; // ecx
  __int64 **v13; // rdi
  __int64 **v14; // rax

  v8 = sub_1403AA2B8(0x38uLL);
  v9 = 0;
  if ( !v8 )
    return (unsigned int)-1073741801;
  *(_WORD *)(v8 + 16) = a2;
  *(_OWORD *)(v8 + 24) = *(_OWORD *)a3;
  *(_QWORD *)(v8 + 40) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(v8 + 48) = a4;
  v10 = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 )
LABEL_10:
    __fastfail(3u);
  *(_QWORD *)v8 = v10;
  *(_QWORD *)(v8 + 8) = a1;
  *(_QWORD *)(v10 + 8) = v8;
  *a1 = v8;
  v11 = *((_DWORD *)a1 + 4);
  if ( v11 == 125 )
  {
    v13 = (__int64 **)a1[1];
    if ( *v13 == a1 )
    {
      v14 = (__int64 **)v13[1];
      if ( *v14 == (__int64 *)v13 )
      {
        a1[1] = (__int64)v14;
        *v14 = a1;
        sub_140AAD3E0(v13[6]);
        sub_1403A8CB4((__int64)v13);
        return v9;
      }
    }
    goto LABEL_10;
  }
  *((_DWORD *)a1 + 4) = v11 + 1;
  return v9;
}
