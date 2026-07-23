/*
 * XREFs of sub_14098325C @ 0x14098325C
 * Callers:
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_140B050A8 @ 0x140B050A8 (sub_140B050A8.c)
 * Callees:
 *     sub_140213FA8 @ 0x140213FA8 (sub_140213FA8.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_14029C6C4 @ 0x14029C6C4 (sub_14029C6C4.c)
 *     sub_14029C6DC @ 0x14029C6DC (sub_14029C6DC.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_1403C7090 @ 0x1403C7090 (sub_1403C7090.c)
 *     sub_1403C736C @ 0x1403C736C (sub_1403C736C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14057F520 @ 0x14057F520 (sub_14057F520.c)
 *     sub_1405852C0 @ 0x1405852C0 (sub_1405852C0.c)
 *     sub_14059A6F4 @ 0x14059A6F4 (sub_14059A6F4.c)
 *     sub_1405C3380 @ 0x1405C3380 (sub_1405C3380.c)
 *     sub_1405EF20C @ 0x1405EF20C (sub_1405EF20C.c)
 *     sub_1406EBA70 @ 0x1406EBA70 (sub_1406EBA70.c)
 *     sub_140761C34 @ 0x140761C34 (sub_140761C34.c)
 *     sub_140761D88 @ 0x140761D88 (sub_140761D88.c)
 *     sub_1409835EC @ 0x1409835EC (sub_1409835EC.c)
 *     sub_1409BE864 @ 0x1409BE864 (sub_1409BE864.c)
 */

char *__fastcall sub_14098325C(__int64 a1, unsigned int a2, const void *a3)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // r15
  unsigned __int64 i; // rdx
  __int64 v7; // r12
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  int v11; // eax
  unsigned __int64 v12; // rax
  char *v13; // rbx
  int v14; // edx
  size_t v15; // r13
  PIMAGE_NT_HEADERS v16; // rax
  PIMAGE_NT_HEADERS v17; // rsi
  DWORD VirtualAddress; // eax
  bool v19; // al
  int v20; // eax
  unsigned __int64 v21; // rax
  unsigned int v22; // eax
  char *v23; // [rsp+70h] [rbp-88h]
  _QWORD v24[14]; // [rsp+88h] [rbp-70h] BYREF
  ULONG_PTR v26; // [rsp+118h] [rbp+20h] BYREF

  v3 = a2;
  v26 = 0LL;
  memset(v24, 0, 56);
  if ( a1 )
  {
    v5 = sub_140287970(a1);
    for ( i = v5 + 128; i; i = *(_QWORD *)(i + 16) )
    {
      if ( (*(_BYTE *)(i + 32) & 0x3E) == 0 )
        return 0LL;
    }
  }
  else
  {
    v5 = 0LL;
  }
  v7 = v3;
  v8 = (v3 + (unsigned int)dword_140C4F404 + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
  v9 = sub_1405C3380(v8);
  if ( (int)sub_140277D10(
              (__int64)&StartContext,
              0x200uLL,
              qword_140C50840,
              v9,
              0,
              v9,
              1u,
              0x80000000,
              0x80000000,
              0x100000,
              0,
              0LL,
              (__int64 *)&v26) < 0 )
    return 0LL;
  if ( v9 > v8 )
    sub_140213FA8(v8 + v26, v9 - v8);
  v11 = sub_14057F520(v26);
  v12 = sub_1403C736C(v8, 12, 1LL, v11 + 1);
  v13 = (char *)v12;
  if ( !v12 )
    goto LABEL_13;
  sub_140313C70(v12);
  if ( (int)sub_140761C34() < 0 )
  {
    sub_1409835EC(v13, v3);
LABEL_13:
    sub_140213FA8(v26, v8);
    return 0LL;
  }
  v23 = sub_14026DFC0(1);
  sub_1403C7090((__int64)v23, (unsigned __int64)v13, v26, v8, v14, 6, v14);
  v15 = (unsigned int)((_DWORD)v3 << 12);
  memmove(v13, a3, v15);
  memset(&v13[v15], 0, (unsigned int)(dword_140C4F404 << 12));
  if ( sub_14029C6C4() )
    memmove(&v13[v15], qword_140C4F420, (unsigned int)(dword_140C4F440 << 12));
  v16 = RtlImageNtHeader(v13);
  v17 = v16;
  if ( v16->OptionalHeader.NumberOfRvaAndSizes <= 5
    || (VirtualAddress = v16->OptionalHeader.DataDirectory[5].VirtualAddress) != 0
    && (VirtualAddress + v17->OptionalHeader.DataDirectory[5].Size > (unsigned int)v15
     || (int)sub_1409BE864(v13) < 0
     || (sub_14029C6C4() || sub_14029C6DC())
     && (v19 = sub_14029C6C4(),
         v20 = sub_1405EF20C(v13, (__int64)v13, (unsigned int)v15, (__int64)&v13[v15], (__int64)qword_140C4F420, v19),
         (int)(v20 + 0x80000000) >= 0)
     && v20 != -1073741637) )
  {
    sub_1406EBA70();
    sub_1409835EC(v13, v7);
    return 0LL;
  }
  v17->OptionalHeader.ImageBase = (ULONGLONG)v13;
  if ( a1 )
  {
    v21 = sub_140313C70((unsigned __int64)a3);
    sub_14027E810((__int64)v23, v5, v21, v7, 1, v24);
    sub_140761D88(a1);
  }
  if ( (BYTE4(xmmword_140D06900[0]) & 1) != 0 )
  {
    v22 = sub_14059A6F4(1, 6);
    sub_1405852C0((__int64)v13, 0LL, v22, v8);
  }
  return v13;
}
