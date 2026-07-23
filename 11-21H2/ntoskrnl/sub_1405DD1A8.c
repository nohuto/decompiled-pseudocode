/*
 * XREFs of sub_1405DD1A8 @ 0x1405DD1A8
 * Callers:
 *     sub_140343B00 @ 0x140343B00 (sub_140343B00.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403C1A20 (KeInterlockedSetProcessorAffinityEx.c)
 *     sub_14057C888 @ 0x14057C888 (sub_14057C888.c)
 *     sub_1405D9724 @ 0x1405D9724 (sub_1405D9724.c)
 */

char __fastcall sub_1405DD1A8(__int64 a1)
{
  int v2; // edi
  int v3; // edx
  int v4; // eax
  __int16 v6; // [rsp+20h] [rbp-8h]

  v2 = KeCheckProcessorAffinityEx((unsigned __int16 *)&dword_140C0D330, *(_DWORD *)(a1 + 36));
  sub_14057C888(a1, (v2 != 0) + 1);
  v3 = *(_DWORD *)(a1 + 36);
  *(_BYTE *)(a1 + 34060) = 1;
  KeInterlockedSetProcessorAffinityEx((__int64)asc_140C0B9F0, v3);
  _disable();
  v4 = *(_DWORD *)(a1 + 33088);
  *(_DWORD *)(a1 + 11684) = 0;
  *(_DWORD *)(a1 + 11680) = v4;
  if ( (v6 & 0x200) != 0 )
    _enable();
  if ( v2 )
  {
    KeInterlockedSetProcessorAffinityEx((__int64)asc_140C0D220, *(_DWORD *)(a1 + 36));
    *(_BYTE *)(a1 + 33659) = 1;
  }
  return sub_1405D9724(a1, v2 != 0);
}
