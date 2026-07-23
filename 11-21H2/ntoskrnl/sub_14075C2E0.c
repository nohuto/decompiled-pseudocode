/*
 * XREFs of sub_14075C2E0 @ 0x14075C2E0
 * Callers:
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_140B04F8C @ 0x140B04F8C (sub_140B04F8C.c)
 * Callees:
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     sub_14075C22C @ 0x14075C22C (sub_14075C22C.c)
 *     sub_14075C330 @ 0x14075C330 (sub_14075C330.c)
 */

__int64 __fastcall sub_14075C2E0(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // r8
  _DWORD *v6; // [rsp+20h] [rbp-18h]

  result = sub_14075C330();
  if ( (int)result >= 0 )
  {
    v3 = (unsigned __int64)(unsigned int)sub_140363220(0) << 32;
    v4 = sub_140363220(0);
    sub_14075C22C(*(void **)(a1 + 48), *(_DWORD *)(a1 + 64), v5, v3 | v4, v6);
    return 0LL;
  }
  return result;
}
