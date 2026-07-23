/*
 * XREFs of sub_140917930 @ 0x140917930
 * Callers:
 *     sub_140917400 @ 0x140917400 (sub_140917400.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140717624 @ 0x140717624 (sub_140717624.c)
 *     sub_14071A784 @ 0x14071A784 (sub_14071A784.c)
 *     sub_14071B284 @ 0x14071B284 (sub_14071B284.c)
 *     sub_14071F2D8 @ 0x14071F2D8 (sub_14071F2D8.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

bool __fastcall sub_140917930(__m128i *a1)
{
  volatile signed __int32 *v1; // r14
  __int64 v3; // rsi
  char v4; // al
  ULONG_PTR v5; // rbx
  bool v6; // di
  __int64 v7; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp+38h] BYREF
  __int64 v11; // [rsp+80h] [rbp+40h] BYREF
  PVOID v12; // [rsp+88h] [rbp+48h] BYREF

  v11 = 0xFFFFFFFFLL;
  v1 = (volatile signed __int32 *)qword_140D3CA28;
  BugCheckParameter3[0] = 0LL;
  LODWORD(BugCheckParameter4) = 0;
  v3 = 0LL;
  v12 = 0LL;
  if ( (int)sub_140717624((__int64)a1, (__int64)&v12) >= 0
    && (int)sub_14071B284(v1, (volatile signed __int32 *)v12, 1) >= 0 )
  {
    v4 = sub_14071F2D8(0LL, a1, 0LL, (unsigned int *)&BugCheckParameter4, BugCheckParameter3);
    v5 = BugCheckParameter3[0];
    v6 = v4;
    if ( BugCheckParameter3[0] )
    {
      if ( (*(_BYTE *)(BugCheckParameter3[0] + 140) & 1) != 0 )
        v7 = sub_1406BF400(BugCheckParameter3[0], (unsigned int)BugCheckParameter4, &v11);
      else
        v7 = sub_1407C9820(BugCheckParameter3[0], BugCheckParameter4, (unsigned int *)&v11);
      v3 = v7;
    }
    if ( v6 )
    {
      if ( v3 )
      {
        v6 = byte_140C097BD && _bittest16((const signed __int16 *)(v3 + 2), 8u);
        goto LABEL_16;
      }
      v6 = 0;
    }
    else if ( v3 )
    {
LABEL_16:
      if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
        sub_1406BF450(v5, &v11);
      else
        sub_1407C97C0(v5, (unsigned int *)&v11);
    }
    sub_14071A784(v1, (volatile signed __int32 *)v12);
    return v6;
  }
  return 0;
}
