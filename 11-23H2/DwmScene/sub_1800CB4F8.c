/*
 * XREFs of sub_1800CB4F8 @ 0x1800CB4F8
 * Callers:
 *     sub_1800CA060 @ 0x1800CA060 (sub_1800CA060.c)
 * Callees:
 *     sub_1800C88CC @ 0x1800C88CC (sub_1800C88CC.c)
 */

__int64 __fastcall sub_1800CB4F8(__int64 *a1, unsigned int *a2)
{
  _DWORD *v2; // r11
  _BYTE v4[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  sub_1800C88CC(a1, (__int64)v4, a2);
  if ( *(_BYTE *)(v5 + 25) || *v2 < *(_DWORD *)(v5 + 32) )
  {
    std::_Xout_of_range("invalid map<K, T> key");
    __debugbreak();
    JUMPOUT(0x1800CB53FLL);
  }
  return v5 + 40;
}
