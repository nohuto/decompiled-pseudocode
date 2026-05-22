/*
 * XREFs of ?HIDUsageToButtonMapping@ConsumerControlDeviceCollection@@AEAAJGPEAK@Z @ 0x1800DF1E8
 * Callers:
 *     ?CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800DF150 (-CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ConsumerControlDeviceCollection::HIDUsageToButtonMapping(
        ConsumerControlDeviceCollection *this,
        unsigned __int16 a2,
        unsigned int *a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // r9d
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0;
  v4 = 0x7FFFFFFF;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x183,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( a2 > 0xE9u )
  {
    if ( a2 > 0x223u )
    {
      switch ( a2 )
      {
        case 0x224u:
          v4 = 2;
          goto LABEL_55;
        case 0x225u:
          v4 = 35;
          goto LABEL_55;
        case 0x226u:
          v4 = 36;
          goto LABEL_55;
        case 0x227u:
          v4 = 37;
          goto LABEL_55;
        case 0x22Au:
          v4 = 38;
          goto LABEL_55;
      }
    }
    else
    {
      switch ( a2 )
      {
        case 0x223u:
          v4 = 34;
          goto LABEL_55;
        case 0xEAu:
          v4 = 6;
          goto LABEL_55;
        case 0x183u:
          v4 = 30;
          goto LABEL_55;
        case 0x18Au:
          v4 = 31;
          goto LABEL_55;
        case 0x192u:
          v4 = 32;
          goto LABEL_55;
        case 0x194u:
          v4 = 33;
          goto LABEL_55;
      }
    }
    goto LABEL_49;
  }
  if ( a2 == 233 )
  {
    v4 = 5;
    goto LABEL_55;
  }
  if ( a2 > 0xB4u )
  {
    switch ( a2 )
    {
      case 0xB5u:
        v4 = 22;
        goto LABEL_55;
      case 0xB6u:
        v4 = 23;
        goto LABEL_55;
      case 0xB7u:
        v4 = 24;
        goto LABEL_55;
      case 0xCDu:
        v4 = 25;
        goto LABEL_55;
      case 0xE2u:
        v4 = 26;
        goto LABEL_55;
    }
    goto LABEL_49;
  }
  switch ( a2 )
  {
    case 0xB4u:
      v4 = 21;
      goto LABEL_55;
    case 0x9Cu:
      v4 = 15;
      goto LABEL_55;
    case 0x9Du:
      v4 = 16;
      goto LABEL_55;
    case 0xB0u:
      v4 = 17;
      goto LABEL_55;
    case 0xB1u:
      v4 = 18;
      goto LABEL_55;
    case 0xB2u:
      v4 = 19;
      goto LABEL_55;
  }
  if ( a2 != 179 )
  {
LABEL_49:
    v3 = -2147467263;
    goto LABEL_55;
  }
  v4 = 20;
LABEL_55:
  *a3 = v4;
  return v3;
}
