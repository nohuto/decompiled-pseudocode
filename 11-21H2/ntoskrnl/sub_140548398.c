/*
 * XREFs of sub_140548398 @ 0x140548398
 * Callers:
 *     sub_140547F60 @ 0x140547F60 (sub_140547F60.c)
 *     sub_1405486C0 @ 0x1405486C0 (sub_1405486C0.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 */

__int64 __fastcall sub_140548398(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  __int16 v7; // bx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]

  v9 = 0LL;
  LODWORD(v10) = 0;
  v8 = 0LL;
  if ( (dword_140D0688C & 2) == 0 )
    return 3221225506LL;
  v6 = sub_14039DF90((PHYSICAL_ADDRESS *)&v8, 1, 0LL, 24LL);
  *v6 = a1;
  *((_DWORD *)v6 + 2) = 0x20000;
  v6[2] = a3;
  v7 = HvlInvokeHypercall(69);
  sub_14039D8F0((__int64)&v8);
  return v7 != 0 ? 0xC0000001 : 0;
}
