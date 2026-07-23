/*
 * XREFs of RtlIpv4AddressToStringW @ 0x14023FEC0
 * Callers:
 *     RtlIpv4AddressToStringExW @ 0x14023FDF0 (RtlIpv4AddressToStringExW.c)
 *     sub_140A1AEE8 @ 0x140A1AEE8 (sub_140A1AEE8.c)
 * Callees:
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 */

PWSTR __stdcall RtlIpv4AddressToStringW(const struct in_addr *Addr, PWSTR S)
{
  int v3; // [rsp+20h] [rbp-28h]
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  v5 = *((unsigned __int8 *)Addr + 3);
  v4 = *((unsigned __int8 *)Addr + 2);
  v3 = *((unsigned __int8 *)Addr + 1);
  return &S[swprintf_s(S, 0x10uLL, L"%u.%u.%u.%u", (unsigned __int8)*(_DWORD *)Addr, v3, v4, v5)];
}
