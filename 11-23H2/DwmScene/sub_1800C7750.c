/*
 * XREFs of sub_1800C7750 @ 0x1800C7750
 * Callers:
 *     sub_1800CA310 @ 0x1800CA310 (sub_1800CA310.c)
 *     sub_1800CAB90 @ 0x1800CAB90 (sub_1800CAB90.c)
 *     sub_1800CAFD0 @ 0x1800CAFD0 (sub_1800CAFD0.c)
 *     sub_1800CB9B0 @ 0x1800CB9B0 (sub_1800CB9B0.c)
 *     sub_1800CBBFC @ 0x1800CBBFC (sub_1800CBBFC.c)
 *     sub_1800CD298 @ 0x1800CD298 (sub_1800CD298.c)
 *     sub_1800CD8AC @ 0x1800CD8AC (sub_1800CD8AC.c)
 *     sub_1800CDC58 @ 0x1800CDC58 (sub_1800CDC58.c)
 *     sub_1800CDE90 @ 0x1800CDE90 (sub_1800CDE90.c)
 *     sub_1800CE190 @ 0x1800CE190 (sub_1800CE190.c)
 *     sub_1800CECC0 @ 0x1800CECC0 (sub_1800CECC0.c)
 *     sub_1800CFF50 @ 0x1800CFF50 (sub_1800CFF50.c)
 *     sub_1800D0260 @ 0x1800D0260 (sub_1800D0260.c)
 *     sub_1800D06A4 @ 0x1800D06A4 (sub_1800D06A4.c)
 *     sub_1800D11F0 @ 0x1800D11F0 (sub_1800D11F0.c)
 *     sub_1800D2AA0 @ 0x1800D2AA0 (sub_1800D2AA0.c)
 *     sub_1800D2FD0 @ 0x1800D2FD0 (sub_1800D2FD0.c)
 *     sub_1800D35E0 @ 0x1800D35E0 (sub_1800D35E0.c)
 *     sub_1800D3ACC @ 0x1800D3ACC (sub_1800D3ACC.c)
 *     sub_1800D4730 @ 0x1800D4730 (sub_1800D4730.c)
 *     sub_1800D49D0 @ 0x1800D49D0 (sub_1800D49D0.c)
 *     sub_1800D4DD0 @ 0x1800D4DD0 (sub_1800D4DD0.c)
 *     sub_1800D55C0 @ 0x1800D55C0 (sub_1800D55C0.c)
 *     sub_1800D5EA0 @ 0x1800D5EA0 (sub_1800D5EA0.c)
 *     sub_1800D635C @ 0x1800D635C (sub_1800D635C.c)
 *     sub_1800D665C @ 0x1800D665C (sub_1800D665C.c)
 *     sub_1800D71F0 @ 0x1800D71F0 (sub_1800D71F0.c)
 *     sub_1800D7480 @ 0x1800D7480 (sub_1800D7480.c)
 *     sub_1800D7720 @ 0x1800D7720 (sub_1800D7720.c)
 *     sub_1800D79D0 @ 0x1800D79D0 (sub_1800D79D0.c)
 *     sub_1800D7DB0 @ 0x1800D7DB0 (sub_1800D7DB0.c)
 *     sub_1800D7F90 @ 0x1800D7F90 (sub_1800D7F90.c)
 *     sub_1800D81B0 @ 0x1800D81B0 (sub_1800D81B0.c)
 *     sub_1800D85E8 @ 0x1800D85E8 (sub_1800D85E8.c)
 *     sub_1800D875C @ 0x1800D875C (sub_1800D875C.c)
 * Callees:
 *     sub_18001070C @ 0x18001070C (sub_18001070C.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_1800C5B04 @ 0x1800C5B04 (sub_1800C5B04.c)
 *     sub_1800C5B8C @ 0x1800C5B8C (sub_1800C5B8C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_1800C7750(__int64 a1, int a2)
{
  _QWORD *v3; // rcx
  int v4; // eax

  if ( !*(_DWORD *)(a1 + 4248) )
  {
    *(_DWORD *)(a1 + 4252) = a2;
    if ( a2 )
    {
      switch ( a2 )
      {
        case -2005270523:
          if ( sub_18001070C((_QWORD *)(a1 + 4256)) )
          {
            v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 312LL))(*v3);
            switch ( v4 )
            {
              case -2005270527:
                *(_DWORD *)(a1 + 4248) = 5;
                sub_18001DB68(
                  &stru_1801C84C8,
                  3,
                  "ValidateDeviceAPICAll: Device removed because of invalid call. Likely error in our code.");
                break;
              case -2005270523:
                *(_DWORD *)(a1 + 4248) = 2;
                sub_18001DB68(
                  &stru_1801C84C8,
                  3,
                  "ValidateDeviceAPICAll: Device removed. Possibly because new drivers were installed?");
                break;
              case -2005270522:
                *(_DWORD *)(a1 + 4248) = 1;
                sub_18001DB68(&stru_1801C84C8, 3, "ValidateDeviceAPICAll: Device removed because it hung.");
                break;
              case -2005270521:
                *(_DWORD *)(a1 + 4248) = 3;
                sub_18001DB68(&stru_1801C84C8, 3, "ValidateDeviceAPICAll: Device removed because it was reset.");
                break;
              case -2005270496:
                *(_DWORD *)(a1 + 4248) = 4;
                sub_18001DB68(
                  &stru_1801C84C8,
                  3,
                  "ValidateDeviceAPICAll: Device removed because of driver internal error.");
                break;
              default:
                if ( v4 )
                {
                  *(_DWORD *)(a1 + 4248) = 2;
                }
                else
                {
                  *(_DWORD *)(a1 + 4248) = 0;
                  sub_18001DB68(
                    &stru_1801C84C8,
                    3,
                    "ValidateDeviceAPICAll: Device removed but reason was S_OK. Better device now available?");
                }
                break;
            }
          }
          else
          {
            *(_DWORD *)(a1 + 4248) = 2;
            sub_18001DB68(
              &stru_1801C84C8,
              3,
              "ValidateDeviceAPICAll: Device removed and is now null so cannot be queried. Serious error.");
          }
          break;
        case -2005270521:
          *(_DWORD *)(a1 + 4248) = 3;
          sub_18001DB68(&stru_1801C84C8, 3, "ValidateDeviceAPICAll: Device was reset.");
          break;
        case -2147024882:
          sub_18001DB68(&stru_1801C84C8, 3, "ValidateDeviceAPICAll: Device out of memory. Calling OOM callbacks.");
          sub_1800C5B8C(a1);
          break;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 4248) = 0;
    }
    if ( *(_DWORD *)(a1 + 4248) )
    {
      sub_18001DB68(&stru_1801C84C8, 3, "ValidateDeviceAPICAll: Calling Device-lost callback to notify clients.");
      sub_1800C5B04(a1);
    }
  }
}
