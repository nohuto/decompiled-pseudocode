/*
 * XREFs of sub_1406BEFA0 @ 0x1406BEFA0
 * Callers:
 *     sub_14065D114 @ 0x14065D114 (sub_14065D114.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14079BA7C @ 0x14079BA7C (sub_14079BA7C.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1406BEFA0(ULONG_PTR BugCheckParameter3, unsigned int a2, unsigned int *a3)
{
  __int64 v5; // r14
  ULONG_PTR v6; // rdx
  unsigned int v7; // esi
  __int64 v8; // rax
  _DWORD *v9; // rdx
  ULONG_PTR v10; // rdx
  __int64 result; // rax
  __int64 v12; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF
  __int64 v14; // [rsp+88h] [rbp+38h] BYREF

  LODWORD(v13) = 0;
  v5 = a2;
  v6 = a3[1];
  v7 = *a3 - 1;
  if ( *a3 == 1 )
  {
    sub_14079BD98(BugCheckParameter3, v6);
    a3[1] = -1;
  }
  else
  {
    v14 = 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v8 = sub_1406BF400(BugCheckParameter3, v6);
    else
      v8 = sub_1407C9820(BugCheckParameter3);
    if ( (unsigned int)v5 < v7 )
    {
      v9 = (_DWORD *)(v8 + 4 * v5);
      do
      {
        v5 = (unsigned int)(v5 + 1);
        *v9++ = *(_DWORD *)(v8 + 4 * v5);
      }
      while ( (unsigned int)v5 < v7 );
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v14);
    else
      sub_1407C97C0(BugCheckParameter3, &v14);
    v10 = a3[1];
    v12 = 0LL;
    sub_14079BA7C(BugCheckParameter3, v10, (__int64)&v13, (__int64)&v12, (__int64)&v14);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v14);
    else
      sub_1407C97C0(BugCheckParameter3, &v14);
    a3[1] = v13;
  }
  result = 0LL;
  *a3 = v7;
  return result;
}
