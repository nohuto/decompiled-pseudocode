/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x180055990
 * Callers:
 *     RtlMultiByteToUnicodeSize @ 0x180018D50 (RtlMultiByteToUnicodeSize.c)
 *     LdrpLoadDependentModuleA @ 0x180024E80 (LdrpLoadDependentModuleA.c)
 *     RtlAnsiStringToUnicodeString @ 0x180025040 (RtlAnsiStringToUnicodeString.c)
 *     RtlUTF8StringToUnicodeString @ 0x1800558B0 (RtlUTF8StringToUnicodeString.c)
 *     RtlCustomCPToUnicodeN @ 0x1800591C0 (RtlCustomCPToUnicodeN.c)
 *     RtlAnsiCharToUnicodeChar @ 0x18005A200 (RtlAnsiCharToUnicodeChar.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUTF8ToUnicodeN(
        PWSTR UnicodeStringDestination,
        ULONG UnicodeStringMaxByteCount,
        PULONG UnicodeStringActualByteCount,
        PCCH UTF8StringSource,
        ULONG UTF8StringByteCount)
{
  NTSTATUS v5; // ebp
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  PWSTR v10; // r10
  const CHAR *v11; // r11
  WCHAR *v12; // rsi
  const CHAR *v13; // r8
  unsigned int v14; // ecx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  WCHAR *v18; // r8
  unsigned int v19; // ecx
  unsigned int v20; // edx
  char v21; // dl
  int v22; // edx
  CHAR v23; // bl
  unsigned int v24; // edx
  WCHAR v25; // dx
  __int64 v26; // rax
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // edx
  CHAR v30; // cl
  int v31; // edx

  v5 = 0;
  v7 = (unsigned __int64)UnicodeStringMaxByteCount >> 1;
  v8 = 0;
  v10 = UnicodeStringDestination;
  v11 = &UTF8StringSource[UTF8StringByteCount];
  v12 = &UnicodeStringDestination[v7];
  if ( !UTF8StringSource )
    return -1073741582;
  if ( UnicodeStringDestination )
  {
LABEL_3:
    while ( 2 )
    {
      while ( 2 )
      {
        v13 = UTF8StringSource;
        if ( UTF8StringSource >= v11 )
        {
          if ( v8 )
          {
            v5 = 263;
            if ( v10 < v12 )
              *v10++ = -3;
            else
              v5 = -1073741789;
          }
LABEL_13:
          if ( UnicodeStringActualByteCount )
            *UnicodeStringActualByteCount = 2 * (v10 - UnicodeStringDestination);
          return v5;
        }
        v14 = *UTF8StringSource++;
        if ( !v8 )
        {
          LOWORD(v8) = v14;
          if ( v14 <= 0x7F )
          {
LABEL_6:
            if ( v10 >= v12 )
              goto LABEL_77;
            *v10++ = v8;
            v15 = v11 - UTF8StringSource;
            v16 = v12 - v10;
            if ( (unsigned __int64)(v11 - UTF8StringSource) <= 0xD )
            {
              if ( v16 < v15 )
                goto LABEL_29;
              while ( UTF8StringSource < v11 )
              {
                v8 = *UTF8StringSource++;
                if ( v8 > 0x7F )
                  goto LABEL_52;
                *v10++ = v8;
              }
              goto LABEL_13;
            }
            if ( v15 < v16 )
              v16 = v11 - UTF8StringSource;
            v18 = &v10[v16 - 7];
            if ( v10 >= v18 )
              goto LABEL_29;
            while ( 1 )
            {
              v19 = *UTF8StringSource++;
              if ( v19 > 0x7F )
                goto LABEL_36;
              *v10++ = v19;
              if ( ((unsigned __int8)UTF8StringSource & 1) != 0 )
              {
                v19 = *UTF8StringSource++;
                if ( v19 > 0x7F )
                  goto LABEL_36;
                *v10++ = v19;
              }
              if ( ((unsigned __int8)UTF8StringSource & 2) == 0 )
                goto LABEL_26;
              v19 = *(unsigned __int16 *)UTF8StringSource;
              if ( (v19 & 0x8080) == 0 )
              {
                UTF8StringSource += 2;
                *v10 = v19 & 0x7F;
                v10[1] = (v19 >> 8) & 0x7F;
                v10 += 2;
LABEL_26:
                while ( v10 < v18 )
                {
                  v20 = *((_DWORD *)UTF8StringSource + 1);
                  v19 = *(_DWORD *)UTF8StringSource;
                  if ( ((*(_DWORD *)UTF8StringSource | v20) & 0x80808080) != 0 )
                    goto LABEL_32;
                  UTF8StringSource += 8;
                  *v10 = v19 & 0x7F;
                  v10[1] = (v19 >> 8) & 0x7F;
                  v10[2] = BYTE2(v19) & 0x7F;
                  v10[3] = HIBYTE(v19) & 0x7F;
                  v10[4] = v20 & 0x7F;
                  v10[5] = (v20 >> 8) & 0x7F;
                  v10[6] = BYTE2(v20) & 0x7F;
                  v10[7] = HIBYTE(v20) & 0x7F;
                  v10 += 8;
                }
LABEL_29:
                v8 = 0;
                goto LABEL_3;
              }
LABEL_32:
              ++UTF8StringSource;
              if ( (unsigned __int8)v19 <= 0x7Fu )
              {
                *v10 = (unsigned __int8)v19;
                goto LABEL_34;
              }
LABEL_36:
              v21 = *UTF8StringSource++;
              if ( (v19 & 0x40) == 0 || (v21 & 0xC0) != 0x80 )
              {
LABEL_76:
                UTF8StringSource -= 2;
                v8 = 0;
                goto LABEL_3;
              }
              v22 = v21 & 0x3F;
              if ( (v19 & 0x20) != 0 )
              {
                v23 = *UTF8StringSource;
                v24 = ((v19 & 0xF) << 6) | v22;
                if ( (v19 & 0x10) != 0 )
                {
                  if ( (v24 >> 4) - 1 > 0xF )
                    goto LABEL_76;
                  if ( (v23 & 0xC0) != 0x80 )
                    goto LABEL_76;
                  v30 = UTF8StringSource[1];
                  v31 = v23 & 0x3F | (v24 << 6);
                  if ( (v30 & 0xC0) != 0x80 )
                    goto LABEL_76;
                  *v10++ = (((v30 & 0x3F | (unsigned int)(v31 << 6)) >> 10) & 0x7FF) - 10304;
                  v26 = 2LL;
                  v25 = (v30 & 0x3F | ((_WORD)v31 << 6) & 0x3FF) - 9216;
                }
                else
                {
                  if ( (v24 & 0x3E0) == 0 || (v24 & 0x3E0) == 0x360 || (v23 & 0xC0) != 0x80 )
                    goto LABEL_76;
                  v25 = v23 & 0x3F | ((_WORD)v24 << 6);
                  v26 = 1LL;
                }
                UTF8StringSource += v26;
                --v18;
              }
              else
              {
                v27 = v19 & 0x1F;
                if ( v27 <= 1 )
                  goto LABEL_76;
                v25 = ((_WORD)v27 << 6) | v22;
              }
              *v10 = v25;
              --v18;
LABEL_34:
              if ( ++v10 >= v18 )
              {
                v8 = 0;
                goto LABEL_3;
              }
            }
          }
LABEL_52:
          if ( (v8 & 0x40) != 0 )
          {
            if ( (v8 & 0x20) != 0 )
            {
              v28 = v8 & 0xF;
              if ( (v8 & 0x10) == 0 )
              {
                v8 = v28 | 0x48228000;
                continue;
              }
              if ( v28 <= 4 )
              {
                v8 = v28 | 0x504D0C00;
                continue;
              }
            }
            else
            {
              v29 = v8 & 0x1F;
              if ( v29 > 1 )
              {
                v8 = v29 | 0x800000;
                continue;
              }
            }
          }
LABEL_59:
          v5 = 263;
          LOWORD(v8) = -3;
          goto LABEL_6;
        }
        break;
      }
      if ( (v14 & 0xC0) != 0x80 )
      {
        UTF8StringSource = v13;
        goto LABEL_59;
      }
      v8 = (v8 << 6) | v14 & 0x3F;
      if ( (v8 & 0x20000000) == 0 )
      {
        if ( (v8 & 0x10000000) != 0 )
        {
          if ( (v8 & 0x800000) != 0 || (v8 & 0x1F0) - 16 <= 0xF0 )
            continue;
        }
        else if ( (v8 & 0x3E0) != 0 && (v8 & 0x3E0) != 0x360 )
        {
          continue;
        }
        goto LABEL_59;
      }
      break;
    }
    if ( (v8 & 0x101F0000) <= 0x10000000 )
      goto LABEL_6;
    if ( v10 < v12 )
    {
      *v10++ = ((v8 >> 10) & 0x7FF) - 10304;
      LOWORD(v8) = (v8 & 0x3FF) - 9216;
      goto LABEL_6;
    }
LABEL_77:
    if ( UnicodeStringActualByteCount )
      *UnicodeStringActualByteCount = 2 * (v10 - UnicodeStringDestination);
    return -1073741789;
  }
  else if ( UnicodeStringActualByteCount )
  {
    return CountUTF8ToUnicode(
             (PWSTR)UTF8StringSource,
             UTF8StringByteCount,
             UnicodeStringActualByteCount,
             UTF8StringSource,
             UTF8StringByteCount);
  }
  else
  {
    return -1073741811;
  }
}
