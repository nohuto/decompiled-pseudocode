/*
 * XREFs of RtlUnicodeStringToInteger @ 0x140698DE0
 * Callers:
 *     sub_1403C5EDC @ 0x1403C5EDC (sub_1403C5EDC.c)
 *     sub_1406974B8 @ 0x1406974B8 (sub_1406974B8.c)
 *     sub_140698AAC @ 0x140698AAC (sub_140698AAC.c)
 *     RtlQueryImageFileKeyOption @ 0x1406CC700 (RtlQueryImageFileKeyOption.c)
 *     RtlGetIntegerAtom @ 0x1407A0DF0 (RtlGetIntegerAtom.c)
 *     sub_1407F6CE0 @ 0x1407F6CE0 (sub_1407F6CE0.c)
 *     sub_140826EF0 @ 0x140826EF0 (sub_140826EF0.c)
 *     sub_140835590 @ 0x140835590 (sub_140835590.c)
 *     sub_1408386A0 @ 0x1408386A0 (sub_1408386A0.c)
 *     sub_14083F908 @ 0x14083F908 (sub_14083F908.c)
 *     sub_14084028C @ 0x14084028C (sub_14084028C.c)
 *     sub_14084A618 @ 0x14084A618 (sub_14084A618.c)
 *     sub_14085AB8C @ 0x14085AB8C (sub_14085AB8C.c)
 *     sub_140955274 @ 0x140955274 (sub_140955274.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringToInteger(PCUNICODE_STRING String, ULONG Base, PULONG Value)
{
  ULONG v5; // r9d
  NTSTATUS v6; // esi
  unsigned int Length; // eax
  wchar_t *Buffer; // r10
  int v9; // r8d
  unsigned __int16 v10; // di
  unsigned __int16 v11; // ax
  wchar_t *v12; // rcx
  int v13; // edx
  int v14; // r11d
  ULONG v15; // edx
  __int16 v17; // ax

  v5 = 0;
  v6 = 0;
  Length = String->Length;
  if ( !(_WORD)Length || (Length & 1) != 0 )
    goto LABEL_39;
  Buffer = String->Buffer;
  v9 = Length >> 1;
  v10 = 0;
  if ( Length >> 1 )
  {
    while ( 1 )
    {
      --v9;
      v10 = *Buffer++;
      if ( v10 > 0x20u )
        break;
      if ( !v9 )
      {
        v10 = 0;
        break;
      }
    }
  }
  else
  {
    v9 = -1;
  }
  v11 = v10;
  if ( ((v10 - 43) & 0xFFFD) == 0 )
  {
    if ( v9 )
    {
      --v9;
      v11 = *Buffer++;
    }
    else
    {
      v11 = 0;
    }
  }
  v12 = Buffer;
  v13 = v9;
  if ( !Base )
  {
    Base = 10;
    v14 = 0;
    if ( v11 == 48 )
    {
      if ( !v9 )
        goto LABEL_41;
      --v9;
      v17 = *Buffer++;
      switch ( v17 )
      {
        case 'x':
          Base = 16;
          v14 = 4;
          break;
        case 'o':
          Base = 8;
          v14 = 3;
          break;
        case 'b':
          Base = 2;
          v14 = 1;
          break;
        default:
          v9 = v13;
          Buffer = v12;
          break;
      }
      if ( v9 )
      {
        --v9;
        v11 = *Buffer++;
      }
      else
      {
LABEL_41:
        v11 = 0;
      }
    }
    goto LABEL_9;
  }
  if ( Base != 16 )
  {
    switch ( Base )
    {
      case 2u:
        v14 = 1;
        goto LABEL_9;
      case 8u:
        v14 = 3;
        goto LABEL_9;
      case 0xAu:
        v14 = 0;
        goto LABEL_9;
    }
LABEL_39:
    v6 = -1073741811;
    goto LABEL_21;
  }
  v14 = 4;
LABEL_9:
  while ( v11 )
  {
    if ( (unsigned __int16)(v11 - 48) > 9u )
    {
      if ( (unsigned __int16)(v11 - 65) > 5u )
      {
        if ( (unsigned __int16)(v11 - 97) > 5u )
          break;
        v15 = v11 - 87;
      }
      else
      {
        v15 = v11 - 55;
      }
    }
    else
    {
      v15 = v11 - 48;
    }
    if ( v15 >= Base )
      break;
    v5 = v14 ? v15 | (v5 << v14) : v15 + Base * v5;
    if ( !v9 )
      break;
    --v9;
    v11 = *Buffer++;
  }
  if ( v10 == 45 )
    v5 = -v5;
LABEL_21:
  *Value = v5;
  return v6;
}
