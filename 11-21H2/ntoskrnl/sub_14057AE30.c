/*
 * XREFs of sub_14057AE30 @ 0x14057AE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IPin *__fastcall sub_14057AE30(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx

  if ( a2 > 7 )
  {
    v8 = a2 - 8;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 5;
            if ( v12 )
            {
              if ( v12 != 1 )
                return 0LL;
              return (struct IPin *)*(unsigned int *)(a1 + 376);
            }
            else
            {
              return *(struct IPin **)(a1 + 360);
            }
          }
          else
          {
            return (struct IPin *)CBaseStreamControl::GetStreamEventHandle((CBaseStreamControl *)a1);
          }
        }
        else
        {
          return (struct IPin *)CClfsManagedLogClient::GetLogFileObject((CClfsManagedLogClient *)a1);
        }
      }
      else
      {
        return *(struct IPin **)(a1 + 80);
      }
    }
    else
    {
      return *(struct IPin **)(a1 + 72);
    }
  }
  else
  {
    if ( a2 == 7 )
      return *(struct IPin **)(a1 + 328);
    if ( a2 )
    {
      v2 = a2 - 1;
      if ( !v2 )
        return *(struct IPin **)(a1 + 56);
      v3 = v2 - 1;
      if ( !v3 )
        return *(struct IPin **)(a1 + 64);
      v4 = v3 - 1;
      if ( !v4 )
        return *(struct IPin **)(a1 + 320);
      v5 = v4 - 1;
      if ( !v5 )
        return *(struct IPin **)(a1 + 384);
      v6 = v5 - 1;
      if ( !v6 )
        return *(struct IPin **)(a1 + 344);
      if ( v6 == 1 )
        return *(struct IPin **)(a1 + 336);
      return 0LL;
    }
    return CBasePin::GetConnected((CBasePin *)a1);
  }
}
