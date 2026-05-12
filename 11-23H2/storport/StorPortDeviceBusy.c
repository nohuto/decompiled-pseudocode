/*
 * XREFs of StorPortDeviceBusy @ 0x1C00460E0
 * Callers:
 *     sub_1C00B2190 @ 0x1C00B2190 (sub_1C00B2190.c)
 * Callees:
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C0014D10 @ 0x1C0014D10 (sub_1C0014D10.c)
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 *     sub_1C004AA7C @ 0x1C004AA7C (sub_1C004AA7C.c)
 */

char __fastcall StorPortDeviceBusy(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned int a5)
{
  __int64 v5; // rbp
  int v6; // r12d
  unsigned int v7; // r14d
  _DWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned int v14; // [rsp+40h] [rbp-28h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  HIBYTE(v14) = 0;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = sub_1C000E2EC(a1);
  v11 = (__int64)v8;
  if ( (qword_1C0093468 & 0x200) != 0 )
    sub_1C0019E4C((__int64)v8, 20, retaddr, (__int64)v8, a5, v5 | ((v6 | (v7 << 8)) << 8), 0LL);
  if ( v11 )
  {
    LOBYTE(v14) = v7;
    BYTE1(v14) = v6;
    BYTE2(v14) = v5;
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x20) != 0
      && BYTE1(off_1C0093070->Timer) >= 3u )
    {
      sub_1C004AA7C(off_1C0093070->AttachedDevice, v9, v10, v7, v6, v5, a5);
    }
    v12 = sub_1C00081BC(v11, v14);
    if ( v12 )
    {
      ++*(_DWORD *)(v12 + 2196);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 1520), 134684676, 134684677) == 134684677
        && v12 != -1504 )
      {
        *(_DWORD *)(v12 + 1536) = 9;
        *(_DWORD *)(v12 + 1540) = v14;
        *(_DWORD *)(v12 + 1544) = a5;
        sub_1C0014D10((char *)(v11 + 944), (struct _SLIST_ENTRY *)(v12 + 1504));
        return 1;
      }
      _InterlockedIncrement(&dword_1C0093C54);
      if ( (qword_1C0093468 & 0x800) != 0 )
        sub_1C0019E4C(v11, 22, retaddr, 865LL, 0LL, 0LL, 0LL);
    }
  }
  return 0;
}
