/*
 * XREFs of sub_1407C8130 @ 0x1407C8130
 * Callers:
 *     sub_14069A7B0 @ 0x14069A7B0 (sub_14069A7B0.c)
 *     sub_140715FA8 @ 0x140715FA8 (sub_140715FA8.c)
 *     sub_1407C4990 @ 0x1407C4990 (sub_1407C4990.c)
 *     sub_1407C6580 @ 0x1407C6580 (sub_1407C6580.c)
 * Callees:
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 *     sub_140AB451C @ 0x140AB451C (sub_140AB451C.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 */

char __fastcall sub_1407C8130(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, PRTL_BITMAP BitMapHeader)
{
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  int *v10; // rcx
  int v11; // r8d
  int v12; // ecx
  unsigned int v13; // r8d
  unsigned int v14; // edx
  __int64 v15; // r9
  bool v16; // di
  __int16 v18; // [rsp+30h] [rbp+8h] BYREF
  __int64 v19; // [rsp+48h] [rbp+20h] BYREF

  v19 = 0LL;
  v18 = 0;
  v5 = BugCheckParameter4;
  sub_1407C97FC(&v19);
  sub_140AB4534(&v18);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    return 1;
  if ( (v5 & 0x7FFFFFFF) >= *(_DWORD *)(632LL * (v5 >> 31) + BugCheckParameter3 + 280) || (v5 & 7) != 0 )
    return 0;
  if ( BitMapHeader && (v5 & 0x80000000) == 0 )
  {
    if ( _bittest64((const signed __int64 *)BitMapHeader->Buffer, v5 >> 3) )
    {
      RtlClearBits(BitMapHeader, v5 >> 3, 1u);
      goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  v6 = sub_140AB44C0(BugCheckParameter3, v5);
  v7 = v6;
  if ( !v6 || (*(_BYTE *)(v6 + 8) & 2) != 0 )
    return 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v8 = sub_1406BF400(BugCheckParameter3, v5, &v19);
  else
    v8 = sub_1407C9820(BugCheckParameter3);
  if ( !v8 || v8 == 4 )
    return 1;
  v9 = sub_140AB451C(v8 - 4, v7, &v18);
  v11 = (int)v10;
  v12 = *v10;
  v13 = v11 - v9;
  v14 = -v12;
  v16 = 0;
  if ( v12 < 0 && v14 - 8 <= 0xFFFF8 )
  {
    v15 = *(unsigned int *)(v9 + 8);
    if ( v14 <= (unsigned __int64)(v15 - 32) && v13 - v12 <= (unsigned int)v15 && v13 >= 0x20 )
      v16 = 1;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v19);
  else
    sub_1407C97C0(BugCheckParameter3, &v19);
  return v16;
}
