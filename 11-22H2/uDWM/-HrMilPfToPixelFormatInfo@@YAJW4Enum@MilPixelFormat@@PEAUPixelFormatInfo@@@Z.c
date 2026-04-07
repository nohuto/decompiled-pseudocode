/*
 * XREFs of ?HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z @ 0x18005AB64
 * Callers:
 *     ?HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z @ 0x18005A9A8 (-HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall HrMilPfToPixelFormatInfo(int a1, _DWORD *a2)
{
  int v2; // r10d
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  bool v12; // zf
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx

  v2 = 1;
  if ( a1 > 18 )
  {
    if ( a1 > 68 )
    {
      if ( a1 != 69 )
        goto LABEL_29;
      *a2 = 28;
      goto LABEL_19;
    }
    if ( a1 <= 26 )
    {
      if ( a1 == 26 )
      {
        *a2 = 2;
        goto LABEL_11;
      }
      if ( a1 != 19 )
      {
        if ( a1 == 20 )
        {
          *a2 = 24;
          goto LABEL_19;
        }
        if ( a1 == 23 )
        {
          *a2 = 11;
          goto LABEL_11;
        }
      }
    }
LABEL_29:
    *a2 = 0;
    v4 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292288, 0x328u, 0LL);
    return v4;
  }
  if ( a1 == 18 )
    goto LABEL_29;
  if ( a1 <= 9 )
  {
    if ( a1 != 8 )
      goto LABEL_29;
    *a2 = 61;
LABEL_19:
    v3 = 3;
    goto LABEL_12;
  }
  switch ( a1 )
  {
    case 10:
      goto LABEL_29;
    case 11:
      *a2 = 49;
      goto LABEL_19;
    case 12:
    case 13:
      goto LABEL_29;
    case 14:
      *a2 = 88;
      goto LABEL_19;
  }
  if ( (unsigned int)(a1 - 15) > 1 )
    goto LABEL_29;
  *a2 = 87;
  if ( a1 == 16 )
  {
LABEL_11:
    v3 = 1;
    goto LABEL_12;
  }
  v3 = 2;
LABEL_12:
  a2[1] = v3;
  if ( a1 <= 16 )
  {
    if ( a1 == 16 )
      goto LABEL_14;
    if ( a1 <= 8 )
      goto LABEL_14;
    v6 = a1 - 9;
    if ( !v6 )
      goto LABEL_14;
    v7 = v6 - 1;
    if ( !v7 )
      goto LABEL_14;
    v8 = v7 - 1;
    if ( !v8 )
      goto LABEL_14;
    v9 = v8 - 1;
    if ( !v9 )
      goto LABEL_14;
    goto LABEL_41;
  }
  if ( a1 > 68 )
  {
    v12 = a1 == 69;
LABEL_56:
    if ( !v12 )
    {
LABEL_35:
      v4 = -2003292344;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292344, 0x33Cu, 0LL);
      return v4;
    }
    goto LABEL_14;
  }
  if ( a1 > 23 )
  {
    v15 = a1 - 24;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        if ( (unsigned int)(v16 - 1) > 1 )
          goto LABEL_35;
      }
    }
    goto LABEL_54;
  }
  if ( a1 == 23 )
    goto LABEL_14;
  v13 = a1 - 17;
  if ( !v13 || (v14 = v13 - 1) == 0 || (v9 = v14 - 1) == 0 )
  {
LABEL_54:
    v4 = 0;
    goto LABEL_15;
  }
LABEL_41:
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 == 1;
      goto LABEL_56;
    }
  }
LABEL_14:
  v4 = 0;
  v2 = 0;
LABEL_15:
  a2[2] = v2;
  return v4;
}
