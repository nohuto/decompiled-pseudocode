/*
 * XREFs of StorPortDeviceReady @ 0x1C0046270
 * Callers:
 *     sub_1C00B21B0 @ 0x1C00B21B0 (sub_1C00B21B0.c)
 * Callees:
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C0014D10 @ 0x1C0014D10 (sub_1C0014D10.c)
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 *     sub_1C003EEB0 @ 0x1C003EEB0 (sub_1C003EEB0.c)
 */

char __fastcall StorPortDeviceReady(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  __int64 v4; // rbp
  int v5; // r15d
  int v6; // r14d
  _DWORD *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+28h] [rbp-30h]
  unsigned int v13; // [rsp+40h] [rbp-18h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  HIBYTE(v13) = 0;
  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = sub_1C000E2EC(a1);
  v8 = (__int64)v7;
  if ( (qword_1C0093468 & 0x200) != 0 )
    sub_1C0019E4C((__int64)v7, 21, retaddr, (__int64)v7, 0LL, v4 | ((v5 | (unsigned int)(v6 << 8)) << 8), 0LL);
  if ( v8 )
  {
    LOBYTE(v13) = v6;
    BYTE1(v13) = v5;
    BYTE2(v13) = v4;
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x20) != 0
      && BYTE1(off_1C0093070->Timer) >= 3u )
    {
      LODWORD(v12) = v4;
      LODWORD(v11) = v5;
      sub_1C003EEB0((__int64)off_1C0093070->AttachedDevice, 0x14u, (__int64)&unk_1C0083380, v6, v11, v12);
    }
    v9 = sub_1C00081BC(v8, v13);
    if ( v9 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 1600), 134684676, 134684677) == 134684677
        && v9 != -1584 )
      {
        *(_DWORD *)(v9 + 1616) = 10;
        *(_DWORD *)(v9 + 1620) = v13;
        sub_1C0014D10((char *)(v8 + 944), (struct _SLIST_ENTRY *)(v9 + 1584));
        return 1;
      }
      _InterlockedIncrement(&dword_1C0093C54);
      if ( (qword_1C0093468 & 0x800) != 0 )
        sub_1C0019E4C(v8, 22, retaddr, 954LL, 0LL, 0LL, 0LL);
    }
  }
  return 0;
}
