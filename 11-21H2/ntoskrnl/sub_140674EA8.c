/*
 * XREFs of sub_140674EA8 @ 0x140674EA8
 * Callers:
 *     sub_140674BE4 @ 0x140674BE4 (sub_140674BE4.c)
 * Callees:
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     sub_140674F54 @ 0x140674F54 (sub_140674F54.c)
 */

__int64 __fastcall sub_140674EA8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  v3 = *(_QWORD *)(a2 + 2280);
  v8 = 0LL;
  v9 = 0LL;
  v7[0] = *(_QWORD *)(v3 + 448);
  v7[1] = *(_QWORD *)(v3 + 456);
  if ( (*(_DWORD *)(a3 + 8) & 1) != 0 )
  {
    LODWORD(v9) = (unsigned int)PsGetProcessId((PEPROCESS)a2);
    v8 = *(_QWORD *)(a2 + 2296);
  }
  return sub_140674F54(a1, v7);
}
