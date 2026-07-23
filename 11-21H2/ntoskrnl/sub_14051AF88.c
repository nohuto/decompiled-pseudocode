/*
 * XREFs of sub_14051AF88 @ 0x14051AF88
 * Callers:
 *     sub_1403BB820 @ 0x1403BB820 (sub_1403BB820.c)
 *     sub_14090AAF0 @ 0x14090AAF0 (sub_14090AAF0.c)
 * Callees:
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140529724 @ 0x140529724 (sub_140529724.c)
 */

__int64 __fastcall sub_14051AF88(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a1 )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 40);
  if ( byte_140C4BCBC )
  {
    if ( v5 )
    {
      if ( *(_BYTE *)(a1 + 52) )
      {
        result = sub_140529724();
        v2 = result;
        if ( (int)result < 0 )
          return result;
      }
    }
    if ( *(_DWORD *)(a1 + 8) != 1 )
    {
      v8 = *(unsigned int *)(a1 + 48);
      BYTE4(v8) = *(_BYTE *)(a1 + 52);
      v6 = sub_14042A5E0(&v8, a2);
LABEL_11:
      v2 = v6;
    }
  }
  else if ( v5 )
  {
    v6 = sub_140529724();
    goto LABEL_11;
  }
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
    sub_14042A5E0(v7, a2);
  sub_1403B1B5C(v7, a1);
  return v2;
}
