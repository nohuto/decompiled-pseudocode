/*
 * XREFs of UsbhValidateMsOs20RegistryProperty @ 0x1C0052E80
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 */

char __fastcall UsbhValidateMsOs20RegistryProperty(__int64 a1, _DWORD *a2, unsigned __int16 *a3)
{
  unsigned __int64 v3; // r11
  __int64 v4; // r10
  __int64 v5; // r9
  int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rdi

  v3 = *a3;
  v4 = a1;
  if ( (unsigned int)v3 >= 0xD )
  {
    v7 = a3[3];
    v5 = v7;
    if ( v3 >= v7 + 11 )
    {
      if ( !(_WORD)v7 || (v7 & 1) != 0 )
      {
        v6 = 1448235059;
      }
      else
      {
        v8 = *(unsigned __int16 *)((char *)a3 + v7 + 8);
        if ( v3 >= v8 + v7 + 10 )
        {
          if ( (_WORD)v8 )
          {
            v5 = a3[2];
            if ( (unsigned __int16)(v5 - 1) <= 6u )
            {
              *a2 |= 0x40u;
              return 1;
            }
            v6 = 1448235062;
          }
          else
          {
            v5 = v8;
            v6 = 1448235061;
          }
        }
        else
        {
          v5 = (unsigned int)v8;
          v6 = 1448235060;
        }
      }
    }
    else
    {
      v6 = 1448235058;
    }
    a1 = v4;
  }
  else
  {
    v5 = *a3;
    v6 = 1448235057;
  }
  Log(a1, 256, v6, v5, 0LL);
  return 0;
}
