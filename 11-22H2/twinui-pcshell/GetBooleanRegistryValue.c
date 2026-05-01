/*
 * XREFs of GetBooleanRegistryValue @ 0x1800A72E8
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800A7A68 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool *__fastcall GetBooleanRegistryValue(bool *a1, __int64 a2, __int64 a3)
{
  LSTATUS ValueW; // eax
  int v5; // ecx
  BOOL v6; // ebx
  bool v7; // sf
  LSTATUS v8; // eax
  int v9; // ecx
  bool v10; // sf
  bool v12; // zf
  bool v13; // zf
  DWORD pdwType; // [rsp+68h] [rbp+28h] BYREF
  int v15; // [rsp+6Ch] [rbp+2Ch]
  __int64 pvData; // [rsp+70h] [rbp+30h] BYREF
  DWORD pcbData; // [rsp+78h] [rbp+38h] BYREF

  pvData = a3;
  v15 = HIDWORD(a2);
  pdwType = 0;
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
             L"EnableDesktopModePenAutoInvoke",
             0x10000012u,
             &pdwType,
             &pvData,
             &pcbData);
  v5 = ValueW;
  if ( !ValueW )
  {
    if ( pdwType == 4 )
    {
      if ( (unsigned int)pvData <= 1 )
      {
        v5 = 0;
        v6 = 0;
        v12 = (_DWORD)pvData == 1;
LABEL_16:
        LOBYTE(v6) = v12;
LABEL_3:
        v7 = v5 < 0;
        if ( v5 <= 0 )
          goto LABEL_5;
        goto LABEL_4;
      }
    }
    else if ( pcbData == 4 && (unsigned __int16)(pvData - 48) <= 1u )
    {
      v5 = 0;
      v6 = 0;
      v12 = (_WORD)pvData == 49;
      goto LABEL_16;
    }
    v6 = pvData;
    goto LABEL_4;
  }
  v6 = pvData;
  if ( ValueW != 234 )
    goto LABEL_3;
LABEL_4:
  v7 = 1;
LABEL_5:
  if ( !v7 )
  {
    *a1 = v6;
LABEL_28:
    a1[1] = 1;
    return a1;
  }
  pdwType = 0;
  pcbData = 4;
  v8 = RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
         L"EnableDesktopModePenAutoInvoke",
         0x10000012u,
         &pdwType,
         &pvData,
         &pcbData);
  v9 = v8;
  if ( !v8 )
  {
    if ( pdwType == 4 )
    {
      if ( (unsigned int)pvData > 1 )
        goto LABEL_9;
      v9 = 0;
      v6 = 0;
      v13 = (_DWORD)pvData == 1;
    }
    else
    {
      if ( pcbData != 4 || (unsigned __int16)(pvData - 48) > 1u )
        goto LABEL_9;
      v9 = 0;
      v6 = 0;
      v13 = (_WORD)pvData == 49;
    }
    LOBYTE(v6) = v13;
LABEL_8:
    v10 = v9 < 0;
    if ( v9 <= 0 )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( v8 != 234 )
    goto LABEL_8;
LABEL_9:
  v10 = 1;
LABEL_10:
  if ( !v10 )
  {
    *a1 = v6;
    goto LABEL_28;
  }
  a1[1] = 0;
  return a1;
}
