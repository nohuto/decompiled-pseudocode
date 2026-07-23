/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x14075AA20
 * Callers:
 *     RtlCustomCPToUnicodeN @ 0x14075A700 (RtlCustomCPToUnicodeN.c)
 *     RtlMultiByteToUnicodeSize @ 0x14075A850 (RtlMultiByteToUnicodeSize.c)
 *     RtlAnsiCharToUnicodeChar @ 0x1407CD880 (RtlAnsiCharToUnicodeChar.c)
 *     RtlUTF8StringToUnicodeString @ 0x1409BEC80 (RtlUTF8StringToUnicodeString.c)
 *     sub_1409F4B98 @ 0x1409F4B98 (sub_1409F4B98.c)
 * Callees:
 *     sub_1403CAFEC @ 0x1403CAFEC (sub_1403CAFEC.c)
 */

NTSTATUS __stdcall RtlUTF8ToUnicodeN(
        PWSTR UnicodeStringDestination,
        ULONG UnicodeStringMaxByteCount,
        PULONG UnicodeStringActualByteCount,
        PCCH UTF8StringSource,
        ULONG UTF8StringByteCount)
{
  NTSTATUS v5; // r11d
  const CHAR *v6; // rbp
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  PWSTR v11; // r10
  WCHAR *v12; // r14
  const CHAR *v13; // r8
  unsigned int v14; // ecx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  WCHAR *v18; // rbx
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // edx
  char v23; // dl
  int v24; // edx
  CHAR v25; // r8
  unsigned int v26; // edx
  int v27; // edx
  unsigned int v28; // edx
  WCHAR v29; // dx
  __int64 v30; // rax
  unsigned int v31; // ecx

  v5 = 0;
  v6 = &UTF8StringSource[UTF8StringByteCount];
  v7 = (unsigned __int64)UnicodeStringMaxByteCount >> 1;
  v8 = 0;
  v11 = UnicodeStringDestination;
  v12 = &UnicodeStringDestination[v7];
  if ( !UTF8StringSource )
    return -1073741582;
  if ( !UnicodeStringDestination )
  {
    if ( UnicodeStringActualByteCount )
      return sub_1403CAFEC((char *)UTF8StringSource, UTF8StringByteCount, UnicodeStringActualByteCount);
    else
      return -1073741811;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_3:
        v13 = UTF8StringSource;
        if ( UTF8StringSource >= v6 )
        {
          if ( v8 )
          {
            v5 = 263;
            if ( v11 < v12 )
              *v11++ = -3;
            else
              v5 = -1073741789;
          }
LABEL_13:
          if ( UnicodeStringActualByteCount )
            *UnicodeStringActualByteCount = 2 * (v11 - UnicodeStringDestination);
          return v5;
        }
        v14 = *UTF8StringSource++;
        if ( v8 )
          break;
        LOWORD(v8) = v14;
        if ( v14 <= 0x7F )
          goto LABEL_6;
LABEL_49:
        if ( (v8 & 0x40) == 0 )
          goto LABEL_37;
        if ( (v8 & 0x20) != 0 )
        {
          v21 = v8 & 0xF;
          if ( (v8 & 0x10) != 0 )
          {
            if ( v21 > 4 )
              goto LABEL_37;
            v8 = v21 | 0x504D0C00;
          }
          else
          {
            v8 = v21 | 0x48228000;
          }
        }
        else
        {
          v22 = v8 & 0x1F;
          if ( v22 <= 1 )
            goto LABEL_37;
          v8 = v22 | 0x800000;
        }
      }
      if ( (v14 & 0xC0) != 0x80 )
      {
        UTF8StringSource = v13;
LABEL_37:
        v5 = 263;
        LOWORD(v8) = -3;
        goto LABEL_6;
      }
      v8 = (v8 << 6) | v14 & 0x3F;
      if ( (v8 & 0x20000000) != 0 )
        break;
      if ( (v8 & 0x10000000) != 0 )
      {
        if ( (v8 & 0x800000) == 0 && (v8 & 0x1F0) - 16 > 0xF0 )
          goto LABEL_37;
      }
      else if ( (v8 & 0x3E0) == 0 || (v8 & 0x3E0) == 0x360 )
      {
        goto LABEL_37;
      }
    }
    if ( (v8 & 0x101F0000) > 0x10000000 )
      break;
LABEL_6:
    if ( v11 >= v12 )
      goto LABEL_78;
    *v11++ = v8;
    v15 = v6 - UTF8StringSource;
    v16 = v12 - v11;
    if ( (unsigned __int64)(v6 - UTF8StringSource) > 0xD )
    {
      if ( v15 < v16 )
        v16 = v6 - UTF8StringSource;
      v18 = &v11[v16 - 7];
      while ( 2 )
      {
        if ( v11 >= v18 )
        {
LABEL_30:
          v8 = 0;
          goto LABEL_3;
        }
        v19 = *UTF8StringSource++;
        if ( v19 > 0x7F )
          goto LABEL_60;
        *v11++ = v19;
        if ( ((unsigned __int8)UTF8StringSource & 1) == 0 )
          goto LABEL_24;
        v19 = *UTF8StringSource++;
        if ( v19 > 0x7F )
          goto LABEL_60;
        *v11++ = v19;
LABEL_24:
        if ( ((unsigned __int8)UTF8StringSource & 2) == 0 )
          goto LABEL_27;
        v19 = *(unsigned __int16 *)UTF8StringSource;
        if ( (v19 & 0x8080) == 0 )
        {
          UTF8StringSource += 2;
          *v11 = v19 & 0x7F;
          v11[1] = (v19 >> 8) & 0x7F;
          v11 += 2;
LABEL_27:
          while ( v11 < v18 )
          {
            v20 = *((_DWORD *)UTF8StringSource + 1);
            v19 = *(_DWORD *)UTF8StringSource;
            if ( ((*(_DWORD *)UTF8StringSource | v20) & 0x80808080) != 0 )
              goto LABEL_58;
            UTF8StringSource += 8;
            *v11 = v19 & 0x7F;
            v11[1] = (v19 >> 8) & 0x7F;
            v11[2] = BYTE2(v19) & 0x7F;
            v11[3] = HIBYTE(v19) & 0x7F;
            v11[4] = v20 & 0x7F;
            v11[5] = (v20 >> 8) & 0x7F;
            v11[6] = BYTE2(v20) & 0x7F;
            v11[7] = HIBYTE(v20) & 0x7F;
            v11 += 8;
          }
          goto LABEL_30;
        }
LABEL_58:
        ++UTF8StringSource;
        if ( (unsigned __int8)v19 > 0x7Fu )
        {
LABEL_60:
          v23 = *UTF8StringSource++;
          if ( (v19 & 0x40) == 0 || (v23 & 0xC0) != 0x80 )
          {
LABEL_77:
            UTF8StringSource -= 2;
            goto LABEL_30;
          }
          v24 = v23 & 0x3F;
          if ( (v19 & 0x20) != 0 )
          {
            v25 = *UTF8StringSource;
            v26 = ((v19 & 0xF) << 6) | v24;
            if ( (v19 & 0x10) != 0 )
            {
              if ( (v26 >> 4) - 1 > 0xF )
                goto LABEL_77;
              if ( (v25 & 0xC0) != 0x80 )
                goto LABEL_77;
              v27 = v25 & 0x3F | (v26 << 6);
              if ( (UTF8StringSource[1] & 0xC0) != 0x80 )
                goto LABEL_77;
              v28 = UTF8StringSource[1] & 0x3F | (v27 << 6);
              *v11++ = ((v28 >> 10) & 0x7FF) - 10304;
              v29 = (v28 & 0x3FF) - 9216;
              v30 = 2LL;
            }
            else
            {
              if ( (v26 & 0x3E0) == 0 || (v26 & 0x3E0) == 0x360 || (v25 & 0xC0) != 0x80 )
                goto LABEL_77;
              v29 = v25 & 0x3F | ((_WORD)v26 << 6);
              v30 = 1LL;
            }
            UTF8StringSource += v30;
            --v18;
          }
          else
          {
            v31 = v19 & 0x1F;
            if ( v31 <= 1 )
              goto LABEL_77;
            v29 = ((_WORD)v31 << 6) | v24;
          }
          *v11 = v29;
          --v18;
        }
        else
        {
          *v11 = (unsigned __int8)v19;
        }
        ++v11;
        continue;
      }
    }
    if ( v16 >= v15 )
    {
      while ( UTF8StringSource < v6 )
      {
        v8 = *UTF8StringSource++;
        if ( v8 > 0x7F )
          goto LABEL_49;
        *v11++ = v8;
      }
      goto LABEL_13;
    }
    v8 = 0;
  }
  if ( v11 < v12 )
  {
    *v11++ = ((v8 >> 10) & 0x7FF) - 10304;
    LOWORD(v8) = (v8 & 0x3FF) - 9216;
    goto LABEL_6;
  }
LABEL_78:
  if ( UnicodeStringActualByteCount )
    *UnicodeStringActualByteCount = 2 * (v11 - UnicodeStringDestination);
  return -1073741789;
}
