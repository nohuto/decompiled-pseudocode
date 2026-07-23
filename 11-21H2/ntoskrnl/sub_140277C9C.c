/*
 * XREFs of sub_140277C9C @ 0x140277C9C
 * Callers:
 *     sub_14027A818 @ 0x14027A818 (sub_14027A818.c)
 *     sub_1402E8240 @ 0x1402E8240 (sub_1402E8240.c)
 *     sub_14031C290 @ 0x14031C290 (sub_14031C290.c)
 *     sub_140327C60 @ 0x140327C60 (sub_140327C60.c)
 *     sub_1403D0BD4 @ 0x1403D0BD4 (sub_1403D0BD4.c)
 *     sub_1405B4024 @ 0x1405B4024 (sub_1405B4024.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140277C9C(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 >= 0 )
    return 1LL;
  v2 = *(_QWORD *)(a1 + 16);
  if ( (v2 & 0x400) == 0 )
    return 1LL;
  if ( (v1 & 0x20000000000000LL) != 0 )
    return 0LL;
  if ( qword_140C50780 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140C50780;
  v3 = v2 >> 16;
  v4 = *(_QWORD *)v3;
  return v3 == *(_QWORD *)v3 + 128LL || (*(_DWORD *)(v4 + 56) & 0x20) == 0 || (*(_DWORD *)(v4 + 92) & 0x20000) == 0;
}
