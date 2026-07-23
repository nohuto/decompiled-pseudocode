/*
 * XREFs of sub_14025592C @ 0x14025592C
 * Callers:
 *     sub_1406DDE9C @ 0x1406DDE9C (sub_1406DDE9C.c)
 *     sub_1406EB270 @ 0x1406EB270 (sub_1406EB270.c)
 * Callees:
 *     sub_14023CC50 @ 0x14023CC50 (sub_14023CC50.c)
 *     sub_14026EA80 @ 0x14026EA80 (sub_14026EA80.c)
 *     sub_1402738F0 @ 0x1402738F0 (sub_1402738F0.c)
 *     sub_140273AAC @ 0x140273AAC (sub_140273AAC.c)
 *     sub_140274E48 @ 0x140274E48 (sub_140274E48.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402C3100 @ 0x1402C3100 (sub_1402C3100.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_140313B20 @ 0x140313B20 (sub_140313B20.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_14039FDB0 @ 0x14039FDB0 (sub_14039FDB0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14025592C(char *P)
{
  __int64 v1; // r9
  __int64 v2; // rsi
  ULONG_PTR v3; // rbx
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r13
  ULONG_PTR v9; // rbp
  __int64 v10; // rax
  __int64 v12; // rax
  _QWORD v13[9]; // [rsp+20h] [rbp-48h] BYREF
  ULONG_PTR v14; // [rsp+78h] [rbp+10h]

  v1 = *((_QWORD *)P + 8);
  v2 = 0LL;
  v3 = *((_QWORD *)P + 9);
  v13[1] = 0LL;
  v5 = *(unsigned int *)(v1 + 44);
  v6 = *(_WORD *)(*(_QWORD *)v1 + 60LL) & 0x3FF;
  v7 = *(_QWORD *)P + ((__int64)(*(_QWORD *)(v1 + 8) - *(_QWORD *)(*(_QWORD *)v1 + 136LL)) >> 3 << 12);
  v13[0] = v7;
  v8 = *(_QWORD *)(qword_140C51F48 + 8 * v6);
  v14 = v3 + 8 * v5;
  if ( v3 < v14 )
  {
    do
    {
      if ( (v3 & 0xFFF) == 0 || !v2 )
      {
        if ( v2 )
        {
          LOBYTE(v6) = 17;
          sub_140334790(v2, v6);
        }
        v2 = sub_140273AAC(v3);
      }
      v9 = sub_1402738F0(v3, 0LL);
      v10 = sub_140317A10(v3);
      v6 = v10;
      if ( v9 )
      {
        if ( (dword_140D06880 & 0x8000) != 0 && (dword_140D06880 & 0x4000) != 0 && (unsigned int)sub_140313B20(v9) )
        {
          sub_140336AD8(v9);
          sub_14039FDB0(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v9 + 0x220000000000LL) >> 4), v13, 16LL);
          sub_14023CC50(v9, 4);
          v7 = v13[0];
        }
        if ( (unsigned int)sub_1402C3100(v3) == 3 )
          --v5;
      }
      else
      {
        if ( !v10 )
          break;
        if ( (v10 & 0x400) == 0 )
        {
          v12 = sub_1402CCC50(768LL, v10);
          if ( v6 != v12 )
            sub_140274E48(v8, v6, 1LL);
        }
      }
      v7 += 4096LL;
      v3 += 8LL;
      v13[0] = v7;
    }
    while ( v3 < v14 );
    if ( v2 )
    {
      LOBYTE(v6) = 17;
      sub_140334790(v2, v6);
    }
  }
  sub_14028CE10(v8, v5);
  sub_14026EA80(P + 24, 0LL);
  ExFreePoolWithTag(*((PVOID *)P + 9), 0);
  ExFreePoolWithTag(P, 0);
  return v5;
}
