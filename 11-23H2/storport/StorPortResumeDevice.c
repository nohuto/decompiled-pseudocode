/*
 * XREFs of StorPortResumeDevice @ 0x1C0047380
 * Callers:
 *     sub_1C00B26D0 @ 0x1C00B26D0 (sub_1C00B26D0.c)
 * Callees:
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C0014D10 @ 0x1C0014D10 (sub_1C0014D10.c)
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 *     sub_1C003EEB0 @ 0x1C003EEB0 (sub_1C003EEB0.c)
 *     sub_1C0044480 @ 0x1C0044480 (sub_1C0044480.c)
 */

char __fastcall StorPortResumeDevice(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  __int64 v5; // rdi
  unsigned int v6; // ebp
  int v7; // r14d
  _DWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+28h] [rbp-30h]
  __int64 v17; // [rsp+30h] [rbp-28h]
  unsigned int v18; // [rsp+40h] [rbp-18h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  HIBYTE(v18) = 0;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = sub_1C000E2EC(a1);
  v11 = (__int64)v8;
  if ( (qword_1C0093468 & 0x200) != 0 )
    sub_1C0019E4C((__int64)v8, 17, retaddr, (__int64)v8, 0LL, v5 | (((v7 << 8) | v6) << 8), 0LL);
  v12 = 255LL;
  if ( v11 )
    v12 = *(unsigned int *)(v11 + 56);
  if ( (byte_1C0093A00 & 4) != 0 )
  {
    LOBYTE(v17) = v6;
    LOBYTE(v16) = v7;
    LODWORD(v15) = v12;
    sub_1C0044480(v12, v9, v10, a1, v15, v16, v17, v5, 0);
  }
  if ( v11 )
  {
    LOBYTE(v18) = v7;
    BYTE1(v18) = v6;
    BYTE2(v18) = v5;
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x20) != 0
      && BYTE1(off_1C0093070->Timer) >= 3u )
    {
      LODWORD(v16) = v5;
      LODWORD(v15) = v6;
      sub_1C003EEB0((__int64)off_1C0093070->AttachedDevice, 0x12u, (__int64)&unk_1C0083380, v7, v15, v16);
    }
    v13 = sub_1C00081BC(v11, v18);
    if ( v13 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 1440), 134684676, 134684677) == 134684677
        && v13 != -1424 )
      {
        *(_DWORD *)(v13 + 1456) = 6;
        *(_DWORD *)(v13 + 1460) = v18;
        sub_1C0014D10((char *)(v11 + 944), (struct _SLIST_ENTRY *)(v13 + 1424));
        return 1;
      }
      _InterlockedIncrement(&dword_1C0093C54);
      if ( (qword_1C0093468 & 0x800) != 0 )
        sub_1C0019E4C(v11, 22, retaddr, 661LL, 0LL, 0LL, 0LL);
    }
  }
  return 0;
}
