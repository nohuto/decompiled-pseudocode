/*
 * XREFs of sub_14027CE40 @ 0x14027CE40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_14027C784 @ 0x14027C784 (sub_14027C784.c)
 *     sub_14027D03C @ 0x14027D03C (sub_14027D03C.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14036CB28 @ 0x14036CB28 (sub_14036CB28.c)
 *     sub_1403C9B90 @ 0x1403C9B90 (sub_1403C9B90.c)
 *     sub_140598DA4 @ 0x140598DA4 (sub_140598DA4.c)
 *     sub_1405AD468 @ 0x1405AD468 (sub_1405AD468.c)
 */

__int64 __fastcall sub_14027CE40(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 v7; // rax
  __int16 v8; // r14
  __int64 v9; // r13
  int v11; // edx
  _QWORD *v12; // r12
  ULONG_PTR v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v17; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v17 = 0LL;
  v5 = a3;
  v7 = sub_140317A10(a2);
  v16 = v7;
  v8 = v7;
  v9 = v7 & 1;
  if ( (v7 & 1) != 0
    && ((v7 & 0x80u) != 0LL
     || (((unsigned __int64)sub_140317A10(&v16) >> 12) & 0xFFFFFFFFFFLL) != qword_140C4F040[v5 + 2131]
     && (((unsigned __int64)sub_140317A10(&v16) >> 12) & 0xFFFFFFFFFFLL) != qword_140C4F040[v5 + 2127]
     && ((v8 & 0x800) != 0 || (v8 & 0x42) != 0))
    || (*(_DWORD *)(v3 + 128) & 0x80u) != 0 && (unsigned int)sub_140598DA4(a1, a2, (unsigned int)v5) )
  {
    return 0LL;
  }
  v11 = sub_14027D03C(v3, 1LL, (_DWORD)v5 == 0, &v17);
  if ( v11 < 0 )
  {
    if ( v11 == -1073741801
      && (*(_DWORD *)a1 & 2) != 0
      && *(_BYTE *)(a1 + 7) < 2u
      && *((char *)KeGetCurrentThread() + 195) < 16
      && (*(_DWORD *)(v3 + 128) & 0x400) == 0 )
    {
      return 3LL;
    }
    else
    {
      *(_DWORD *)(v3 + 328) = v11;
      return 5LL;
    }
  }
  else
  {
    v12 = v17;
    v13 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v17 + 0x44000000000LL) >> 4);
    if ( (*(_DWORD *)(v3 + 128) & 0x1000) == 0 || !sub_140277C50((__int64)v17) )
      ++*(_QWORD *)(v3 + 112);
    if ( (dword_140D06880 & 0x80u) != 0 && (++dword_140C52AE0 & dword_140D05040) == 0 )
      sub_1405AD468(v13);
    sub_14027C784(a1, v5, a2, v12, v3 + 144);
    v14 = 3;
    if ( (_DWORD)v5 == 3 && *(_DWORD *)(v3 + 120) != 2 )
    {
      v15 = a2;
      do
      {
        v15 = v15 << 25 >> 16;
        --v14;
      }
      while ( v14 );
      sub_14036CB28(v15, v15);
    }
    if ( (int)v5 <= ((*(unsigned __int8 *)(a1 + 4) >> 2) & 7) )
    {
      if ( (int)v5 > 1 )
        sub_1403C9B90(a1, a2, (unsigned int)v5);
      return 0LL;
    }
    if ( v9 )
      sub_14032F1B0(v3 + 144);
    return 2LL;
  }
}
