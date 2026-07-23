/*
 * XREFs of sub_14024D09C @ 0x14024D09C
 * Callers:
 *     sub_140275670 @ 0x140275670 (sub_140275670.c)
 *     sub_1403C7DE0 @ 0x1403C7DE0 (sub_1403C7DE0.c)
 *     sub_140538E4C @ 0x140538E4C (sub_140538E4C.c)
 *     sub_14053D400 @ 0x14053D400 (sub_14053D400.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14024D09C(_BYTE *a1, int a2, char a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  v3 = a2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 2;
      if ( !v5 )
      {
LABEL_4:
        a1[68] = a3;
        return;
      }
      v6 = v5 - 4;
      if ( v6 )
      {
        v7 = v6 - 8;
        if ( v7 )
        {
          if ( v7 == 16 )
            goto LABEL_4;
        }
        else
        {
          a1[71] = a3;
        }
      }
      else
      {
        a1[67] = a3;
      }
    }
    else
    {
      a1[70] = a3;
    }
  }
  else
  {
    a1[69] = a3;
  }
}
