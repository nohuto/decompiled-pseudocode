/*
 * XREFs of StorPortPauseDevice @ 0x1C0046AE0
 * Callers:
 *     sub_1C00B2670 @ 0x1C00B2670 (sub_1C00B2670.c)
 * Callees:
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C0014D10 @ 0x1C0014D10 (sub_1C0014D10.c)
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 *     sub_1C003EEB0 @ 0x1C003EEB0 (sub_1C003EEB0.c)
 *     sub_1C00442D8 @ 0x1C00442D8 (sub_1C00442D8.c)
 *     sub_1C0045080 @ 0x1C0045080 (sub_1C0045080.c)
 */

char __fastcall StorPortPauseDevice(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned int a5)
{
  __int64 v6; // rsi
  unsigned int v7; // r15d
  int v8; // r12d
  _DWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v17; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+28h] [rbp-50h]
  __int64 v19; // [rsp+30h] [rbp-48h]
  unsigned int v20; // [rsp+50h] [rbp-28h]
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  HIBYTE(v20) = 0;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = sub_1C000E2EC(a1);
  v12 = (__int64)v9;
  if ( (qword_1C0093468 & 0x200) != 0 )
    sub_1C0019E4C((__int64)v9, 16, retaddr, (__int64)v9, a5, v6 | (((v8 << 8) | v7) << 8), 0LL);
  v13 = 255LL;
  if ( v12 )
    v13 = *(unsigned int *)(v12 + 56);
  if ( (byte_1C0093A00 & 4) != 0 )
  {
    LOBYTE(v19) = v8;
    LODWORD(v18) = v13;
    LODWORD(v17) = a5;
    sub_1C00442D8(v13, v10, v11, a1, v17, v18, v19, v7, v6);
  }
  if ( v12 )
  {
    LOBYTE(v20) = v8;
    BYTE1(v20) = v7;
    BYTE2(v20) = v6;
    v14 = sub_1C00081BC(v12, v20);
    v15 = v14;
    if ( v14 )
    {
      ++*(_DWORD *)(v14 + 2192);
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 0x20) != 0
        && BYTE1(off_1C0093070->Timer) >= 3u )
      {
        LODWORD(v18) = v6;
        LODWORD(v17) = v7;
        sub_1C003EEB0((__int64)off_1C0093070->AttachedDevice, 0x11u, (__int64)&unk_1C0083380, v8, v17, v18);
      }
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 1360), 134684676, 134684677) == 134684677
        && v15 != -1344 )
      {
        *(_DWORD *)(v15 + 1376) = 5;
        *(_DWORD *)(v15 + 1380) = v20;
        *(_DWORD *)(v15 + 1384) = a5;
        sub_1C0045080(v15);
        sub_1C0014D10((char *)(v12 + 944), (struct _SLIST_ENTRY *)(v15 + 1344));
        return 1;
      }
      _InterlockedIncrement(&dword_1C0093C54);
      if ( (qword_1C0093468 & 0x800) != 0 )
        sub_1C0019E4C(v12, 22, retaddr, 549LL, 0LL, 0LL, 0LL);
    }
    else if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
           && (HIDWORD(off_1C0093070->Timer) & 0x20) != 0
           && BYTE1(off_1C0093070->Timer) >= 3u )
    {
      LODWORD(v18) = v6;
      LODWORD(v17) = v7;
      sub_1C003EEB0((__int64)off_1C0093070->AttachedDevice, 0x10u, (__int64)&unk_1C0083380, v8, v17, v18);
    }
  }
  return 0;
}
