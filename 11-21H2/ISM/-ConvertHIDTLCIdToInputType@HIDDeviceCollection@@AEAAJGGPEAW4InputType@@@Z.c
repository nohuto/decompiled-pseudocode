/*
 * XREFs of ?ConvertHIDTLCIdToInputType@HIDDeviceCollection@@AEAAJGGPEAW4InputType@@@Z @ 0x1800CB930
 * Callers:
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800CBCE0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HIDDeviceCollection::ConvertHIDTLCIdToInputType(
        HIDDeviceCollection *this,
        __int16 a2,
        __int16 a3,
        enum InputType *a4)
{
  int v4; // eax

  if ( a2 != 4 )
  {
    switch ( a2 )
    {
      case 5:
        if ( a3 == 13 )
        {
          v4 = 32;
          goto LABEL_12;
        }
        if ( a3 == 1 )
        {
          v4 = 64;
          goto LABEL_12;
        }
LABEL_11:
        v4 = 256;
        goto LABEL_12;
      case 238:
        if ( a3 != 1 )
          goto LABEL_11;
LABEL_15:
        v4 = 128;
        goto LABEL_12;
      case 1:
        if ( a3 == 12 )
          goto LABEL_15;
        break;
      default:
        v4 = 128;
        if ( a2 == 128 )
          goto LABEL_17;
        if ( a2 != 2 )
        {
LABEL_22:
          if ( a2 == -86 )
          {
            if ( a3 == 1 )
            {
              v4 = 1024;
              goto LABEL_12;
            }
            goto LABEL_11;
          }
          if ( a2 == 15 && a3 == 1 )
          {
LABEL_29:
            v4 = 0x2000;
            goto LABEL_12;
          }
          switch ( a2 )
          {
            case 1:
              if ( a3 == -246 )
                goto LABEL_29;
              if ( a3 == 18 )
              {
LABEL_33:
                v4 = 0x4000;
                goto LABEL_12;
              }
              break;
            case 15:
              if ( a3 == 13 )
              {
                v4 = 2048;
                goto LABEL_12;
              }
              goto LABEL_11;
            case 2:
              if ( a3 != 18 )
                goto LABEL_11;
              goto LABEL_33;
          }
          if ( a2 != 17 )
            goto LABEL_11;
          v4 = 0x100000;
LABEL_17:
          if ( a3 == 1 )
            goto LABEL_12;
          goto LABEL_11;
        }
        break;
    }
    if ( a3 == 13 )
    {
      v4 = 16;
      goto LABEL_12;
    }
    goto LABEL_22;
  }
  if ( a3 != 13 )
    goto LABEL_11;
  v4 = 8;
LABEL_12:
  *(_DWORD *)a4 = v4;
  return 0LL;
}
