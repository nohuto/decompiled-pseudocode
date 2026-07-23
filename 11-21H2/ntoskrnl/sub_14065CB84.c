/*
 * XREFs of sub_14065CB84 @ 0x14065CB84
 * Callers:
 *     sub_14065B6A0 @ 0x14065B6A0 (sub_14065B6A0.c)
 *     sub_1409224D4 @ 0x1409224D4 (sub_1409224D4.c)
 * Callees:
 *     sub_14065CBDC @ 0x14065CBDC (sub_14065CBDC.c)
 *     sub_14069F130 @ 0x14069F130 (sub_14069F130.c)
 *     sub_14069F1CC @ 0x14069F1CC (sub_14069F1CC.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14065CB84(__int64 a1)
{
  __int64 v2; // rsi
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  ULONG_PTR v7; // rcx
  ULONG_PTR v8; // rdx

  v2 = sub_14069F130(a1);
  sub_14065CBDC(v2);
  result = sub_14069F1CC(a1 + 8);
  v4 = result;
  if ( *(_DWORD *)(result + 8) == -1 )
  {
    if ( *(_QWORD *)(result + 16) )
    {
      v5 = *(_QWORD *)result;
      v6 = result + 24;
      if ( (*(_BYTE *)(*(_QWORD *)result + 140LL) & 1) != 0 )
        sub_1406BF450(v5, v6);
      else
        sub_1407C97C0(v5, v6);
    }
    *(_OWORD *)v4 = 0LL;
    *(_OWORD *)(v4 + 16) = 0LL;
    *(_DWORD *)(v4 + 8) = -1;
    sub_1407C97FC(v4 + 24);
    v7 = *(_QWORD *)v2;
    v8 = *(unsigned int *)(v2 + 112);
    *(_QWORD *)v4 = *(_QWORD *)v2;
    *(_DWORD *)(v4 + 8) = v8;
    if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
      result = sub_1406BF400(v7, v8);
    else
      result = sub_1407C9820(v7);
    *(_QWORD *)(v4 + 16) = result;
  }
  return result;
}
