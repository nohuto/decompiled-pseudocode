/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x180055830
 * Callers:
 *     RtlMultiByteToUnicodeSize @ 0x180018B40 (RtlMultiByteToUnicodeSize.c)
 *     LdrpLoadDependentModuleA @ 0x180024D30 (LdrpLoadDependentModuleA.c)
 *     RtlAnsiStringToUnicodeString @ 0x180024EF0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUTF8StringToUnicodeString @ 0x180055750 (RtlUTF8StringToUnicodeString.c)
 *     RtlCustomCPToUnicodeN @ 0x1800590A0 (RtlCustomCPToUnicodeN.c)
 *     RtlAnsiCharToUnicodeChar @ 0x18005F9D0 (RtlAnsiCharToUnicodeChar.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUTF8ToUnicodeN(_WORD *a1, unsigned int a2, _DWORD *a3, char *a4, unsigned int a5)
{
  unsigned int v5; // ebp
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  _WORD *v10; // r10
  char *v11; // r11
  unsigned __int64 v12; // rsi
  char *v13; // r8
  unsigned int v14; // ecx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  _WORD *v18; // r8
  unsigned int v19; // ecx
  unsigned int v20; // edx
  char v21; // dl
  int v22; // edx
  char v23; // bl
  unsigned int v24; // edx
  __int16 v25; // dx
  __int64 v26; // rax
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // edx
  char v30; // cl
  int v31; // edx

  v5 = 0;
  v7 = (unsigned __int64)a2 >> 1;
  v8 = 0;
  v10 = a1;
  v11 = &a4[a5];
  v12 = (unsigned __int64)&a1[v7];
  if ( !a4 )
    return 3221225714LL;
  if ( a1 )
  {
LABEL_3:
    while ( 2 )
    {
      while ( 2 )
      {
        v13 = a4;
        if ( a4 >= v11 )
        {
          if ( v8 )
          {
            v5 = 263;
            if ( (unsigned __int64)v10 < v12 )
              *v10++ = -3;
            else
              v5 = -1073741789;
          }
LABEL_13:
          if ( a3 )
            *a3 = 2 * (v10 - a1);
          return v5;
        }
        v14 = *a4++;
        if ( !v8 )
        {
          LOWORD(v8) = v14;
          if ( v14 <= 0x7F )
          {
LABEL_6:
            if ( (unsigned __int64)v10 >= v12 )
              goto LABEL_78;
            *v10++ = v8;
            v15 = v11 - a4;
            v16 = (__int64)(v12 - (_QWORD)v10) >> 1;
            if ( (unsigned __int64)(v11 - a4) <= 0xD )
            {
              if ( v16 < v15 )
                goto LABEL_30;
              while ( a4 < v11 )
              {
                v8 = *a4++;
                if ( v8 > 0x7F )
                  goto LABEL_53;
                *v10++ = v8;
              }
              goto LABEL_13;
            }
            if ( v15 < v16 )
              v16 = v11 - a4;
            v18 = &v10[v16 - 7];
            if ( v10 >= v18 )
              goto LABEL_30;
            while ( 1 )
            {
              v19 = *a4++;
              if ( v19 > 0x7F )
                goto LABEL_37;
              *v10++ = v19;
              if ( ((unsigned __int8)a4 & 1) != 0 )
              {
                v19 = *a4++;
                if ( v19 > 0x7F )
                  goto LABEL_37;
                *v10++ = v19;
              }
              if ( ((unsigned __int8)a4 & 2) == 0 )
                goto LABEL_27;
              v19 = *(unsigned __int16 *)a4;
              if ( (v19 & 0x8080) == 0 )
              {
                a4 += 2;
                *v10 = v19 & 0x7F;
                v10[1] = (v19 >> 8) & 0x7F;
                v10 += 2;
LABEL_27:
                while ( v10 < v18 )
                {
                  v20 = *((_DWORD *)a4 + 1);
                  v19 = *(_DWORD *)a4;
                  if ( ((*(_DWORD *)a4 | v20) & 0x80808080) != 0 )
                    goto LABEL_33;
                  a4 += 8;
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
LABEL_30:
                v8 = 0;
                goto LABEL_3;
              }
LABEL_33:
              ++a4;
              if ( (unsigned __int8)v19 <= 0x7Fu )
              {
                *v10 = (unsigned __int8)v19;
                goto LABEL_35;
              }
LABEL_37:
              v21 = *a4++;
              if ( (v19 & 0x40) == 0 || (v21 & 0xC0) != 0x80 )
              {
LABEL_77:
                a4 -= 2;
                v8 = 0;
                goto LABEL_3;
              }
              v22 = v21 & 0x3F;
              if ( (v19 & 0x20) != 0 )
              {
                v23 = *a4;
                v24 = ((v19 & 0xF) << 6) | v22;
                if ( (v19 & 0x10) != 0 )
                {
                  if ( (v24 >> 4) - 1 > 0xF )
                    goto LABEL_77;
                  if ( (v23 & 0xC0) != 0x80 )
                    goto LABEL_77;
                  v30 = a4[1];
                  v31 = v23 & 0x3F | (v24 << 6);
                  if ( (v30 & 0xC0) != 0x80 )
                    goto LABEL_77;
                  *v10++ = (((v30 & 0x3F | (unsigned int)(v31 << 6)) >> 10) & 0x7FF) - 10304;
                  v26 = 2LL;
                  v25 = (v30 & 0x3F | ((_WORD)v31 << 6) & 0x3FF) - 9216;
                }
                else
                {
                  if ( (v24 & 0x3E0) == 0 || (v24 & 0x3E0) == 0x360 || (v23 & 0xC0) != 0x80 )
                    goto LABEL_77;
                  v25 = v23 & 0x3F | ((_WORD)v24 << 6);
                  v26 = 1LL;
                }
                a4 += v26;
                --v18;
              }
              else
              {
                v27 = v19 & 0x1F;
                if ( v27 <= 1 )
                  goto LABEL_77;
                v25 = ((_WORD)v27 << 6) | v22;
              }
              *v10 = v25;
              --v18;
LABEL_35:
              if ( ++v10 >= v18 )
              {
                v8 = 0;
                goto LABEL_3;
              }
            }
          }
LABEL_53:
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
LABEL_60:
          v5 = 263;
          LOWORD(v8) = -3;
          goto LABEL_6;
        }
        break;
      }
      if ( (v14 & 0xC0) != 0x80 )
      {
        a4 = v13;
        goto LABEL_60;
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
        goto LABEL_60;
      }
      break;
    }
    if ( (v8 & 0x101F0000) <= 0x10000000 )
      goto LABEL_6;
    if ( (unsigned __int64)v10 < v12 )
    {
      *v10++ = ((v8 >> 10) & 0x7FF) - 10304;
      LOWORD(v8) = (v8 & 0x3FF) - 9216;
      goto LABEL_6;
    }
LABEL_78:
    if ( a3 )
      *a3 = 2 * (v10 - a1);
    return 3221225507LL;
  }
  else if ( a3 )
  {
    return CountUTF8ToUnicode(a4, a5, a3);
  }
  else
  {
    return 3221225485LL;
  }
}
