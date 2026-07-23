/*
 * XREFs of sub_140229BD8 @ 0x140229BD8
 * Callers:
 *     sub_14035A424 @ 0x14035A424 (sub_14035A424.c)
 * Callees:
 *     sub_14021ACBC @ 0x14021ACBC (sub_14021ACBC.c)
 *     sub_140229D30 @ 0x140229D30 (sub_140229D30.c)
 *     sub_14024E928 @ 0x14024E928 (sub_14024E928.c)
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 */

__int64 __fastcall sub_140229BD8(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v6; // edi
  __int64 v8; // rdx
  unsigned int v9; // ecx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v6 = a3;
  if ( (_DWORD)a3 )
  {
    sub_14021ACBC(a1, 0);
    v8 = 864LL;
  }
  else
  {
    sub_1402ACD80(a1, 0LL, a3, 0LL);
    v8 = 860LL;
  }
  _InterlockedOr(v11, 0);
  if ( *(_DWORD *)(a1 + v8) )
  {
    v9 = 1;
    goto LABEL_12;
  }
  if ( !a2 )
  {
    v9 = 1;
    *a4 |= (v6 != 0) + 1;
LABEL_12:
    _InterlockedAdd((volatile signed __int32 *)(a1 + v8), 1u);
    return v9;
  }
  if ( v6 )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1444));
  else
    sub_1402ACD80(a1, 1LL, 0LL, 0LL);
  if ( (unsigned int)sub_14024E928(a1, a2, a1 + 816) )
    sub_140229D30((PVOID)(a2 - 35696));
  return 0;
}
