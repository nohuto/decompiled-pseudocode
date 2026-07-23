/*
 * XREFs of sub_140A92124 @ 0x140A92124
 * Callers:
 *     sub_140A8B840 @ 0x140A8B840 (sub_140A8B840.c)
 *     sub_140A8BD60 @ 0x140A8BD60 (sub_140A8BD60.c)
 *     sub_140A91824 @ 0x140A91824 (sub_140A91824.c)
 *     sub_140A92178 @ 0x140A92178 (sub_140A92178.c)
 *     sub_140A9B888 @ 0x140A9B888 (sub_140A9B888.c)
 *     sub_140AA6270 @ 0x140AA6270 (sub_140AA6270.c)
 *     sub_140AA6400 @ 0x140AA6400 (sub_140AA6400.c)
 *     sub_140AA66E0 @ 0x140AA66E0 (sub_140AA66E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A92124(__int64 a1, int a2)
{
  unsigned int v2; // ecx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  unsigned int v8; // ecx

  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL);
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            if ( v6 != 1 )
              return 0LL;
            v8 = HIBYTE(v2);
          }
          else
          {
            v8 = v2 >> 25;
          }
        }
        else
        {
          v8 = v2 >> 27;
        }
      }
      else
      {
        v8 = v2 >> 29;
      }
    }
    else
    {
      v8 = v2 >> 28;
    }
  }
  else
  {
    v8 = v2 >> 26;
  }
  return v8 & 1;
}
