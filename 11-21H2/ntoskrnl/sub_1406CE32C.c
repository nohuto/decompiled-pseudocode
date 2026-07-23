/*
 * XREFs of sub_1406CE32C @ 0x1406CE32C
 * Callers:
 *     sub_1407C5CB0 @ 0x1407C5CB0 (sub_1407C5CB0.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1406CE32C(ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // ebp
  unsigned int *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r14
  int v6; // edi
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  sub_1407C97FC(&v8);
  v2 = 0;
  if ( !*(_DWORD *)(BugCheckParameter3 + 1872) )
    return 0;
  while ( 1 )
  {
    v3 = (unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * v2);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v4 = sub_1406BF400(BugCheckParameter3, *v3, &v8);
    else
      v4 = sub_1407C9820(BugCheckParameter3);
    v5 = v4;
    if ( *(_DWORD *)(v4 + 12) == *(_DWORD *)(*((_QWORD *)v3 + 1) + 28LL) )
      goto LABEL_5;
    v6 = sub_14071F300(BugCheckParameter3, *v3);
    if ( v6 < 0 )
      break;
    *(_DWORD *)(v5 + 12) = *(_DWORD *)(*((_QWORD *)v3 + 1) + 28LL);
LABEL_5:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v8);
    else
      sub_1407C97C0(BugCheckParameter3, &v8);
    if ( ++v2 >= *(_DWORD *)(BugCheckParameter3 + 1872) )
      return 0;
  }
  if ( v5 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v8);
    else
      sub_1407C97C0(BugCheckParameter3, &v8);
  }
  return (unsigned int)v6;
}
