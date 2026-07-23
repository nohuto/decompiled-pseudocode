/*
 * XREFs of sub_14039CEC8 @ 0x14039CEC8
 * Callers:
 *     ExDisownFastResource @ 0x14039C100 (ExDisownFastResource.c)
 *     sub_14039CBAC @ 0x14039CBAC (sub_14039CBAC.c)
 *     sub_14039D3E4 @ 0x14039D3E4 (sub_14039D3E4.c)
 *     sub_14063CF10 @ 0x14063CF10 (sub_14063CF10.c)
 * Callees:
 *     sub_14039D2A8 @ 0x14039D2A8 (sub_14039D2A8.c)
 */

__int64 __fastcall sub_14039CEC8(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // rdi
  __int64 *v5; // r11
  __int64 v7; // rax
  char v8; // al
  __int64 v9; // r11
  __int64 *v10; // rdx
  _QWORD *v11; // r10
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 result; // rax
  __int64 **v16; // rcx

  v3 = (_QWORD *)(a2 + 40);
  v5 = *(__int64 **)(a2 + 40);
  if ( v5[1] != a2 + 40 )
    goto LABEL_6;
  v7 = *v5;
  if ( *(__int64 **)(*v5 + 8) != v5 )
    goto LABEL_6;
  *v3 = v7;
  *(_QWORD *)(v7 + 8) = v3;
  *((_BYTE *)v5 + 18) = 1;
  v8 = *(_BYTE *)(a2 + 16);
  *(_BYTE *)(a2 + 18) = 0;
  *((_BYTE *)v5 + 16) = v8;
  *(_BYTE *)(a2 + 16) = 0;
  sub_14039D2A8(a2, v5);
  sub_14039D2A8(v3, v9 + 40);
  v13 = *v10;
  if ( *(__int64 **)(*v10 + 8) != v10 )
    goto LABEL_6;
  v11[1] = v10;
  *v11 = v13;
  *(_QWORD *)(v13 + 8) = v11;
  *v10 = (__int64)v11;
  v14 = (__int64 *)(v12 + 56);
  if ( a3 )
    return sub_14039D2A8(v11 + 7, v14);
  ++*(_DWORD *)(a1 + 64);
  result = a1 + 48;
  v16 = *(__int64 ***)(a1 + 56);
  if ( *v16 != (__int64 *)(a1 + 48) )
LABEL_6:
    __fastfail(3u);
  *v14 = result;
  *(_QWORD *)(v12 + 64) = v16;
  *v16 = v14;
  *(_QWORD *)(a1 + 56) = v14;
  return result;
}
