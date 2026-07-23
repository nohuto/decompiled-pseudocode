/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x18005BF00
 * Callers:
 *     RtlMultiByteToUnicodeSize @ 0x18000DEF0 (RtlMultiByteToUnicodeSize.c)
 *     RtlCustomCPToUnicodeN @ 0x18000E210 (RtlCustomCPToUnicodeN.c)
 *     LdrpLoadDependentModuleA @ 0x18003D360 (LdrpLoadDependentModuleA.c)
 *     RtlAnsiStringToUnicodeString @ 0x18003D5E0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUTF8StringToUnicodeString @ 0x18005BE20 (RtlUTF8StringToUnicodeString.c)
 *     RtlAnsiCharToUnicodeChar @ 0x18005F8E0 (RtlAnsiCharToUnicodeChar.c)
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
  PWSTR v8; // rax
  const CHAR *v9; // r10
  WCHAR *v10; // r14
  unsigned int v11; // edx
  const CHAR *v12; // r11
  unsigned int v13; // r8d
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  WCHAR *v17; // r11
  unsigned int v18; // edx
  unsigned int v19; // r8d
  char v20; // r8
  int v21; // r8d
  unsigned int v22; // edx
  WCHAR v23; // r8
  CHAR v24; // si
  unsigned int v25; // r8d
  __int64 v26; // rcx
  unsigned int v27; // ecx
  unsigned int v28; // edx
  CHAR v29; // dl
  int v30; // r8d

  v5 = 0;
  v8 = UnicodeStringDestination;
  v9 = &UTF8StringSource[UTF8StringByteCount];
  v10 = &UnicodeStringDestination[(unsigned __int64)UnicodeStringMaxByteCount >> 1];
  v11 = 0;
  if ( !UTF8StringSource )
    return -1073741582;
  if ( UnicodeStringDestination )
  {
LABEL_3:
    while ( 2 )
    {
      while ( 2 )
      {
        v12 = UTF8StringSource;
        if ( UTF8StringSource >= v9 )
        {
          if ( v11 )
          {
            v5 = 263;
            if ( v8 < v10 )
              *v8++ = -3;
            else
              v5 = -1073741789;
          }
LABEL_13:
          if ( UnicodeStringActualByteCount )
            *UnicodeStringActualByteCount = 2 * (v8 - UnicodeStringDestination);
          return v5;
        }
        v13 = *UTF8StringSource++;
        if ( !v11 )
        {
          LOWORD(v11) = v13;
          if ( v13 <= 0x7F )
          {
LABEL_6:
            if ( v8 >= v10 )
              goto LABEL_77;
            *v8++ = v11;
            v14 = v9 - UTF8StringSource;
            v15 = v10 - v8;
            if ( (unsigned __int64)(v9 - UTF8StringSource) <= 0xD )
            {
              if ( v15 < v14 )
                goto LABEL_29;
              while ( UTF8StringSource < v9 )
              {
                v11 = *UTF8StringSource++;
                if ( v11 > 0x7F )
                  goto LABEL_52;
                *v8++ = v11;
              }
              goto LABEL_13;
            }
            if ( v14 < v15 )
              v15 = v9 - UTF8StringSource;
            v17 = &v8[v15 - 7];
            if ( v8 >= v17 )
              goto LABEL_29;
            while ( 1 )
            {
              v18 = *UTF8StringSource++;
              if ( v18 > 0x7F )
                goto LABEL_32;
              *v8++ = v18;
              if ( ((unsigned __int8)UTF8StringSource & 1) != 0 )
              {
                v18 = *UTF8StringSource++;
                if ( v18 > 0x7F )
                  goto LABEL_32;
                *v8++ = v18;
              }
              if ( ((unsigned __int8)UTF8StringSource & 2) == 0 )
                goto LABEL_26;
              v18 = *(unsigned __int16 *)UTF8StringSource;
              if ( (v18 & 0x8080) == 0 )
              {
                UTF8StringSource += 2;
                *v8 = v18 & 0x7F;
                v8[1] = (v18 >> 8) & 0x7F;
                v8 += 2;
LABEL_26:
                while ( v8 < v17 )
                {
                  v19 = *((_DWORD *)UTF8StringSource + 1);
                  v18 = *(_DWORD *)UTF8StringSource;
                  if ( ((*(_DWORD *)UTF8StringSource | v19) & 0x80808080) != 0 )
                    goto LABEL_40;
                  UTF8StringSource += 8;
                  *v8 = v18 & 0x7F;
                  v8[1] = (v18 >> 8) & 0x7F;
                  v8[2] = BYTE2(v18) & 0x7F;
                  v8[3] = HIBYTE(v18) & 0x7F;
                  v8[4] = v19 & 0x7F;
                  v8[5] = (v19 >> 8) & 0x7F;
                  v8[6] = BYTE2(v19) & 0x7F;
                  v8[7] = HIBYTE(v19) & 0x7F;
                  v8 += 8;
                }
LABEL_29:
                v11 = 0;
                goto LABEL_3;
              }
LABEL_40:
              ++UTF8StringSource;
              if ( (unsigned __int8)v18 <= 0x7Fu )
              {
                *v8 = (unsigned __int8)v18;
                goto LABEL_38;
              }
LABEL_32:
              v20 = *UTF8StringSource++;
              if ( (v18 & 0x40) == 0 || (v20 & 0xC0) != 0x80 )
              {
LABEL_76:
                UTF8StringSource -= 2;
                v11 = 0;
                goto LABEL_3;
              }
              v21 = v20 & 0x3F;
              if ( (v18 & 0x20) != 0 )
              {
                v24 = *UTF8StringSource;
                v25 = ((v18 & 0xF) << 6) | v21;
                if ( (v18 & 0x10) != 0 )
                {
                  if ( (v25 >> 4) - 1 > 0xF )
                    goto LABEL_76;
                  if ( (v24 & 0xC0) != 0x80 )
                    goto LABEL_76;
                  v29 = UTF8StringSource[1];
                  v30 = v24 & 0x3F | (v25 << 6);
                  if ( (v29 & 0xC0) != 0x80 )
                    goto LABEL_76;
                  *v8++ = (((v29 & 0x3F | (unsigned int)(v30 << 6)) >> 10) & 0x7FF) - 10304;
                  v26 = 2LL;
                  v23 = (v29 & 0x3F | ((_WORD)v30 << 6) & 0x3FF) - 9216;
                }
                else
                {
                  if ( (v25 & 0x3E0) == 0 || (v25 & 0x3E0) == 0x360 || (v24 & 0xC0) != 0x80 )
                    goto LABEL_76;
                  v23 = v24 & 0x3F | ((_WORD)v25 << 6);
                  v26 = 1LL;
                }
                UTF8StringSource += v26;
                --v17;
              }
              else
              {
                v22 = v18 & 0x1F;
                if ( v22 <= 1 )
                  goto LABEL_76;
                v23 = ((_WORD)v22 << 6) | v21;
              }
              *v8 = v23;
              --v17;
LABEL_38:
              if ( ++v8 >= v17 )
              {
                v11 = 0;
                goto LABEL_3;
              }
            }
          }
LABEL_52:
          if ( (v11 & 0x40) != 0 )
          {
            if ( (v11 & 0x20) != 0 )
            {
              v27 = v11 & 0xF;
              if ( (v11 & 0x10) == 0 )
              {
                v11 = v27 | 0x48228000;
                continue;
              }
              if ( v27 <= 4 )
              {
                v11 = v27 | 0x504D0C00;
                continue;
              }
            }
            else
            {
              v28 = v11 & 0x1F;
              if ( v28 > 1 )
              {
                v11 = v28 | 0x800000;
                continue;
              }
            }
          }
LABEL_59:
          v5 = 263;
          LOWORD(v11) = -3;
          goto LABEL_6;
        }
        break;
      }
      if ( (v13 & 0xC0) != 0x80 )
      {
        UTF8StringSource = v12;
        goto LABEL_59;
      }
      v11 = (v11 << 6) | v13 & 0x3F;
      if ( (v11 & 0x20000000) == 0 )
      {
        if ( (v11 & 0x10000000) != 0 )
        {
          if ( (v11 & 0x800000) != 0 || (v11 & 0x1F0) - 16 <= 0xF0 )
            continue;
        }
        else if ( (v11 & 0x3E0) != 0 && (v11 & 0x3E0) != 0x360 )
        {
          continue;
        }
        goto LABEL_59;
      }
      break;
    }
    if ( (v11 & 0x101F0000) <= 0x10000000 )
      goto LABEL_6;
    if ( v8 < v10 )
    {
      *v8++ = ((v11 >> 10) & 0x7FF) - 10304;
      LOWORD(v11) = (v11 & 0x3FF) - 9216;
      goto LABEL_6;
    }
LABEL_77:
    if ( UnicodeStringActualByteCount )
      *UnicodeStringActualByteCount = 2 * (v8 - UnicodeStringDestination);
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
