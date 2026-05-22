/*
 * XREFs of ?ButtonToVKeyMapping@ButtonProcessor@@AEAAJKPEAG@Z @ 0x1801D81E4
 * Callers:
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801D8670 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ButtonProcessor::ButtonToVKeyMapping(ButtonProcessor *this, unsigned int a2, unsigned __int16 *a3)
{
  unsigned int v3; // r9d
  unsigned __int16 v4; // ax
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edx

  v3 = 0;
  v4 = 0;
  if ( a2 > 0x19 )
  {
    if ( a2 > 0x22 )
    {
      v16 = a2 - 35;
      if ( !v16 )
      {
        v4 = 167;
        goto LABEL_47;
      }
      v17 = v16 - 1;
      if ( !v17 )
      {
        v4 = 169;
        goto LABEL_47;
      }
      v18 = v17 - 1;
      if ( !v18 )
      {
        v4 = 168;
        goto LABEL_47;
      }
      if ( v18 == 1 )
      {
        v4 = 171;
        goto LABEL_47;
      }
    }
    else
    {
      if ( a2 == 34 )
      {
        v4 = 172;
        goto LABEL_47;
      }
      v12 = a2 - 26;
      if ( !v12 )
      {
        v4 = 173;
        goto LABEL_47;
      }
      v13 = v12 - 4;
      if ( !v13 )
      {
        v4 = 181;
        goto LABEL_47;
      }
      v14 = v13 - 1;
      if ( !v14 )
      {
        v4 = 180;
        goto LABEL_47;
      }
      v15 = v14 - 1;
      if ( !v15 )
      {
        v4 = 183;
        goto LABEL_47;
      }
      if ( v15 == 1 )
      {
        v4 = 182;
        goto LABEL_47;
      }
    }
    goto LABEL_42;
  }
  if ( a2 == 25 )
  {
    v4 = 179;
    goto LABEL_47;
  }
  if ( a2 > 7 )
  {
    v9 = a2 - 9;
    if ( !v9 )
    {
      v3 = *((_BYTE *)this + 121) == 0 ? 0x80004001 : 0;
      v4 = *((_BYTE *)this + 121) != 0 ? 0x5F : 0;
      goto LABEL_47;
    }
    v10 = v9 - 13;
    if ( !v10 )
    {
      v4 = 176;
      goto LABEL_47;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v4 = 177;
      goto LABEL_47;
    }
    if ( v11 == 1 )
    {
      v4 = 178;
      goto LABEL_47;
    }
    goto LABEL_42;
  }
  if ( a2 == 7 )
  {
    v3 = *((_BYTE *)this + 121) == 0 ? 0x80004001 : 0;
    v4 = *((_BYTE *)this + 121) != 0 ? 0x76 : 0;
    goto LABEL_47;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    v3 = *((_BYTE *)this + 121) == 0 ? 0x80004001 : 0;
    v4 = *((_BYTE *)this + 121) != 0 ? 0x5B : 0;
    goto LABEL_47;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v4 = 166;
    goto LABEL_47;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v4 = 170;
    goto LABEL_47;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    v4 = 175;
    goto LABEL_47;
  }
  if ( v8 != 1 )
  {
LABEL_42:
    v3 = -2147467263;
    goto LABEL_47;
  }
  v4 = 174;
LABEL_47:
  *a3 = v4;
  return v3;
}
