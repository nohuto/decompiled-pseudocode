/*
 * XREFs of PinGetCategoryForBridgePin @ 0x1C002C1AC
 * Callers:
 *     PinBuildDescriptors @ 0x1C003BE74 (PinBuildDescriptors.c)
 * Callees:
 *     PinGetTerminalUnit @ 0x1C003C494 (PinGetTerminalUnit.c)
 */

__int64 __fastcall PinGetCategoryForBridgePin(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // r11
  __int64 v6; // r10
  __int64 i; // rdx
  int v8; // ecx
  GUID v9; // xmm0
  int v10; // eax
  GUID v11; // xmm0

  result = PinGetTerminalUnit(a1 + 80, a2, a3, a3);
  v6 = result;
  for ( i = 0LL; (unsigned int)i < 0xA; i = (unsigned int)(i + 1) )
  {
    result = *((unsigned __int16 *)&RemapTable + 4 * i);
    if ( *(_DWORD *)(v5 + 40) == (_DWORD)result )
    {
      result = *((unsigned __int16 *)&RemapTable + 4 * i + 1);
      if ( *(_DWORD *)(v5 + 44) == (_DWORD)result )
      {
        v8 = *((_DWORD *)&RemapTable + 2 * i + 1);
        goto LABEL_8;
      }
    }
  }
  LOBYTE(v8) = 0;
LABEL_8:
  *(GUID *)v4 = GUID_NULL;
  if ( !v6 )
    return result;
  if ( *(_DWORD *)(v6 + 68) == 2305 )
  {
    v9 = KSCATEGORY_AUDIO;
LABEL_30:
    *(GUID *)v4 = v9;
    return result;
  }
  v10 = *(unsigned __int16 *)(v6 + 68) - 537781792;
  *(_DWORD *)(v4 + 4) = 298907407;
  *(_DWORD *)v4 = v10;
  *(_DWORD *)(v4 + 8) = -1610606663;
  *(_DWORD *)(v4 + 12) = -1775164727;
  if ( (v8 & 1) != 0 )
  {
    if ( *(_QWORD *)v4 == *(_QWORD *)&KSNODETYPE_SPEAKER.Data1
      && *(_QWORD *)(v4 + 8) == *(_QWORD *)KSNODETYPE_SPEAKER.Data4 )
    {
      v11 = KSNODETYPE_COMMUNICATION_SPEAKER;
LABEL_24:
      *(GUID *)v4 = v11;
      goto LABEL_25;
    }
    if ( *(_QWORD *)v4 == *(_QWORD *)&KSNODETYPE_MICROPHONE.Data1
      && *(_QWORD *)(v4 + 8) == *(_QWORD *)KSNODETYPE_MICROPHONE.Data4 )
    {
      v11 = KSNODETYPE_PERSONAL_MICROPHONE;
      goto LABEL_24;
    }
  }
  else if ( (v8 & 2) != 0
         && (*(_QWORD *)v4 == *(_QWORD *)&KSNODETYPE_SPEAKER.Data1
          && *(_QWORD *)(v4 + 8) == *(_QWORD *)KSNODETYPE_SPEAKER.Data4
          || *(_QWORD *)v4 == *(_QWORD *)&KSNODETYPE_MICROPHONE.Data1
          && *(_QWORD *)(v4 + 8) == *(_QWORD *)KSNODETYPE_MICROPHONE.Data4) )
  {
    v11 = KSNODETYPE_HANDSET;
    goto LABEL_24;
  }
LABEL_25:
  result = *(_QWORD *)&KSNODETYPE_HEADSET.Data1;
  if ( *(_QWORD *)v4 == *(_QWORD *)&KSNODETYPE_HEADSET.Data1 )
  {
    result = *(_QWORD *)KSNODETYPE_HEADSET.Data4;
    if ( *(_QWORD *)(v4 + 8) == *(_QWORD *)KSNODETYPE_HEADSET.Data4 )
    {
      if ( *(_DWORD *)(v6 + 20) )
        v9 = KSNODETYPE_COMMUNICATION_SPEAKER;
      else
        v9 = KSNODETYPE_PERSONAL_MICROPHONE;
      goto LABEL_30;
    }
  }
  return result;
}
