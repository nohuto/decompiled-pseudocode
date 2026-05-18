/*
 * XREFs of sub_1800DD668 @ 0x1800DD668
 * Callers:
 *     sub_1800E0710 @ 0x1800E0710 (sub_1800E0710.c)
 *     sub_1800E1120 @ 0x1800E1120 (sub_1800E1120.c)
 *     sub_1800E1690 @ 0x1800E1690 (sub_1800E1690.c)
 *     sub_1800E2380 @ 0x1800E2380 (sub_1800E2380.c)
 *     sub_1800E2680 @ 0x1800E2680 (sub_1800E2680.c)
 *     sub_1800E3D8C @ 0x1800E3D8C (sub_1800E3D8C.c)
 *     sub_1800E4630 @ 0x1800E4630 (sub_1800E4630.c)
 *     sub_1800E4AE8 @ 0x1800E4AE8 (sub_1800E4AE8.c)
 *     sub_1800E4DA0 @ 0x1800E4DA0 (sub_1800E4DA0.c)
 *     sub_1800E51F0 @ 0x1800E51F0 (sub_1800E51F0.c)
 *     sub_1800E5DE4 @ 0x1800E5DE4 (sub_1800E5DE4.c)
 *     sub_1800E7220 @ 0x1800E7220 (sub_1800E7220.c)
 *     sub_1800E75E0 @ 0x1800E75E0 (sub_1800E75E0.c)
 *     sub_1800E7878 @ 0x1800E7878 (sub_1800E7878.c)
 *     sub_1800E8560 @ 0x1800E8560 (sub_1800E8560.c)
 *     sub_1800EA210 @ 0x1800EA210 (sub_1800EA210.c)
 *     sub_1800EA840 @ 0x1800EA840 (sub_1800EA840.c)
 *     sub_1800EAF60 @ 0x1800EAF60 (sub_1800EAF60.c)
 *     sub_1800EB468 @ 0x1800EB468 (sub_1800EB468.c)
 *     sub_1800EC130 @ 0x1800EC130 (sub_1800EC130.c)
 *     sub_1800EC480 @ 0x1800EC480 (sub_1800EC480.c)
 *     sub_1800EC9B0 @ 0x1800EC9B0 (sub_1800EC9B0.c)
 *     sub_1800ED330 @ 0x1800ED330 (sub_1800ED330.c)
 *     sub_1800EDBD0 @ 0x1800EDBD0 (sub_1800EDBD0.c)
 *     sub_1800EE3C8 @ 0x1800EE3C8 (sub_1800EE3C8.c)
 *     sub_1800EE7A4 @ 0x1800EE7A4 (sub_1800EE7A4.c)
 *     sub_1800EF960 @ 0x1800EF960 (sub_1800EF960.c)
 *     sub_1800EFC50 @ 0x1800EFC50 (sub_1800EFC50.c)
 *     sub_1800EFF90 @ 0x1800EFF90 (sub_1800EFF90.c)
 *     sub_1800F02D0 @ 0x1800F02D0 (sub_1800F02D0.c)
 *     sub_1800F0750 @ 0x1800F0750 (sub_1800F0750.c)
 *     sub_1800F09B0 @ 0x1800F09B0 (sub_1800F09B0.c)
 *     sub_1800F0C10 @ 0x1800F0C10 (sub_1800F0C10.c)
 *     sub_1800F110C @ 0x1800F110C (sub_1800F110C.c)
 *     sub_1800F1278 @ 0x1800F1278 (sub_1800F1278.c)
 * Callees:
 *     sub_180010D08 @ 0x180010D08 (sub_180010D08.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_1800DAC1C @ 0x1800DAC1C (sub_1800DAC1C.c)
 *     sub_1800DACF8 @ 0x1800DACF8 (sub_1800DACF8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_1800DD668(__int64 a1, int a2)
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
          if ( sub_180010D08((_QWORD *)(a1 + 4256)) )
          {
            v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 312LL))(*v3);
            switch ( v4 )
            {
              case -2005270527:
                *(_DWORD *)(a1 + 4248) = 5;
                sub_18001F2B4(
                  &stru_1801EA4C8,
                  3,
                  "ValidateDeviceAPICAll: Device removed because of invalid call. Likely error in our code.");
                break;
              case -2005270523:
                *(_DWORD *)(a1 + 4248) = 2;
                sub_18001F2B4(
                  &stru_1801EA4C8,
                  3,
                  "ValidateDeviceAPICAll: Device removed. Possibly because new drivers were installed?");
                break;
              case -2005270522:
                *(_DWORD *)(a1 + 4248) = 1;
                sub_18001F2B4(&stru_1801EA4C8, 3, "ValidateDeviceAPICAll: Device removed because it hung.");
                break;
              case -2005270521:
                *(_DWORD *)(a1 + 4248) = 3;
                sub_18001F2B4(&stru_1801EA4C8, 3, "ValidateDeviceAPICAll: Device removed because it was reset.");
                break;
              case -2005270496:
                *(_DWORD *)(a1 + 4248) = 4;
                sub_18001F2B4(
                  &stru_1801EA4C8,
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
                  sub_18001F2B4(
                    &stru_1801EA4C8,
                    3,
                    "ValidateDeviceAPICAll: Device removed but reason was S_OK. Better device now available?");
                }
                break;
            }
          }
          else
          {
            *(_DWORD *)(a1 + 4248) = 2;
            sub_18001F2B4(
              &stru_1801EA4C8,
              3,
              "ValidateDeviceAPICAll: Device removed and is now null so cannot be queried. Serious error.");
          }
          break;
        case -2005270521:
          *(_DWORD *)(a1 + 4248) = 3;
          sub_18001F2B4(&stru_1801EA4C8, 3, "ValidateDeviceAPICAll: Device was reset.");
          break;
        case -2147024882:
          sub_18001F2B4(&stru_1801EA4C8, 3, "ValidateDeviceAPICAll: Device out of memory. Calling OOM callbacks.");
          sub_1800DACF8(a1);
          break;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 4248) = 0;
    }
    if ( *(_DWORD *)(a1 + 4248) )
    {
      sub_18001F2B4(&stru_1801EA4C8, 3, "ValidateDeviceAPICAll: Calling Device-lost callback to notify clients.");
      sub_1800DAC1C(a1);
    }
  }
}
