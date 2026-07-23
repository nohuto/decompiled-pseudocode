/*
 * XREFs of sub_14071B3F0 @ 0x14071B3F0
 * Callers:
 *     sub_14071BC94 @ 0x14071BC94 (sub_14071BC94.c)
 *     sub_14090BC6C @ 0x14090BC6C (sub_14090BC6C.c)
 *     sub_14090D9E8 @ 0x14090D9E8 (sub_14090D9E8.c)
 *     sub_1409176B0 @ 0x1409176B0 (sub_1409176B0.c)
 *     sub_14091CBB0 @ 0x14091CBB0 (sub_14091CBB0.c)
 *     sub_14091DBC4 @ 0x14091DBC4 (sub_14091DBC4.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071B4A0 @ 0x14071B4A0 (sub_14071B4A0.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

char __fastcall sub_14071B3F0(ULONG_PTR a1)
{
  int v1; // eax
  ULONG_PTR v3; // rcx
  ULONG_PTR v4; // rdx
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  v8 = 0xFFFFFFFFLL;
  if ( (v1 & 0x10) != 0 || (*(_DWORD *)(a1 + 184) & 0x400000) != 0 )
    return 1;
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    v4 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v4 != -1 )
    {
      if ( (*(_BYTE *)(v3 + 140) & 1) != 0 ? sub_1406BF400(v3, v4, &v8) : sub_1407C9820(v3) )
      {
        ++*(_QWORD *)(a1 + 304);
        sub_14071B4A0(a1);
        v6 = *(_QWORD *)(a1 + 32);
        if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
          sub_1406BF450(v6, &v8);
        else
          sub_1407C97C0(v6, &v8);
        return 1;
      }
    }
  }
  return 0;
}
