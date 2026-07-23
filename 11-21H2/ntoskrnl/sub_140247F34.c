/*
 * XREFs of sub_140247F34 @ 0x140247F34
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140247CF0 (MmProbeAndLockSelectedPages.c)
 *     sub_140385584 @ 0x140385584 (sub_140385584.c)
 * Callees:
 *     sub_14023C9F8 @ 0x14023C9F8 (sub_14023C9F8.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031BF80 @ 0x14031BF80 (sub_14031BF80.c)
 *     sub_14031C290 @ 0x14031C290 (sub_14031C290.c)
 *     sub_14031C5D0 @ 0x14031C5D0 (sub_14031C5D0.c)
 */

__int64 __fastcall sub_140247F34(__int64 a1)
{
  _QWORD *v2; // rdi
  unsigned int v3; // ecx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  v2 = (_QWORD *)(a1 + 48);
  v3 = ((__int64 (*)(void))sub_14031BF80)();
  if ( !*v2 )
    return v3;
  while ( 1 )
  {
    result = sub_14031C290(a1, &v5);
    if ( (int)result < 0 )
      break;
    if ( !v5 )
    {
      *(_QWORD *)(a1 + 136) = ((unsigned __int64)sub_140317A10(a1 + 48) >> 12) & 0xFFFFFFFFFFLL;
      sub_14031C5D0(a1);
      return 0LL;
    }
    if ( v5 != 1 )
    {
      result = sub_14023C9F8(a1);
      if ( (int)result < 0 )
      {
        ++dword_140C52A74;
        return result;
      }
    }
    v3 = sub_14031BF80(a1);
    if ( !*v2 )
      return v3;
  }
  return result;
}
