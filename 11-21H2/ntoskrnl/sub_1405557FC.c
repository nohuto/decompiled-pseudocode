/*
 * XREFs of sub_1405557FC @ 0x1405557FC
 * Callers:
 *     sub_140553244 @ 0x140553244 (sub_140553244.c)
 *     sub_1405554B0 @ 0x1405554B0 (sub_1405554B0.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140568220 @ 0x140568220 (sub_140568220.c)
 */

__int64 __fastcall sub_1405557FC(PHYSICAL_ADDRESS *BaseAddress)
{
  unsigned __int64 v3; // rsi
  PHYSICAL_ADDRESS *v4; // rdi
  char *v5; // rbp
  __int64 v6; // rax
  LONGLONG QuadPart; // rax
  PVOID BaseAddressa; // [rsp+30h] [rbp+8h] BYREF

  if ( !BaseAddress )
    return 3221225635LL;
  v3 = 262172LL;
  BaseAddressa = &BaseAddress[512];
  v4 = BaseAddress;
  BaseAddress[514].LowPart = 28;
  *(_OWORD *)BaseAddressa = xmmword_14003B7B0;
  *((_DWORD *)BaseAddressa + 5) = 458752;
  *((_DWORD *)BaseAddressa + 6) = 262172;
  v5 = (char *)BaseAddressa;
  do
  {
    v6 = 4096LL;
    if ( v3 < 0x1000 )
      v6 = v3;
    v4->QuadPart = v6;
    v4[1] = MmGetPhysicalAddress(v5);
    QuadPart = v4->QuadPart;
    v4 += 2;
    v5 += QuadPart;
    v3 -= QuadPart;
  }
  while ( v3 );
  v4->QuadPart = 0LL;
  v4[1].QuadPart = 0LL;
  MmGetPhysicalAddress(BaseAddress);
  sub_140568220();
  return sub_14042A5E0(&BaseAddressa, 1LL);
}
