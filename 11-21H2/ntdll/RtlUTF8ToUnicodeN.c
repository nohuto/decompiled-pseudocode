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

__int64 __fastcall RtlUTF8ToUnicodeN(_WORD *a1, unsigned int a2, _DWORD *a3, char *a4, unsigned int a5)
{
  unsigned int v5; // ebp
  _WORD *v8; // rax
  char *v9; // r10
  unsigned __int64 v10; // r14
  unsigned int v11; // edx
  char *v12; // r11
  unsigned int v13; // r8d
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  _WORD *v17; // r11
  unsigned int v18; // edx
  unsigned int v19; // r8d
  char v20; // r8
  int v21; // r8d
  unsigned int v22; // edx
  __int16 v23; // r8
  char v24; // si
  unsigned int v25; // r8d
  __int64 v26; // rcx
  unsigned int v27; // ecx
  unsigned int v28; // edx
  char v29; // dl
  int v30; // r8d

  v5 = 0;
  v8 = a1;
  v9 = &a4[a5];
  v10 = (unsigned __int64)&a1[(unsigned __int64)a2 >> 1];
  v11 = 0;
  if ( !a4 )
    return 3221225714LL;
  if ( a1 )
  {
LABEL_3:
    while ( 2 )
    {
      while ( 2 )
      {
        v12 = a4;
        if ( a4 >= v9 )
        {
          if ( v11 )
          {
            v5 = 263;
            if ( (unsigned __int64)v8 < v10 )
              *v8++ = -3;
            else
              v5 = -1073741789;
          }
LABEL_13:
          if ( a3 )
            *a3 = 2 * (v8 - a1);
          return v5;
        }
        v13 = *a4++;
        if ( !v11 )
        {
          LOWORD(v11) = v13;
          if ( v13 <= 0x7F )
          {
LABEL_6:
            if ( (unsigned __int64)v8 >= v10 )
              goto LABEL_78;
            *v8++ = v11;
            v14 = v9 - a4;
            v15 = (__int64)(v10 - (_QWORD)v8) >> 1;
            if ( (unsigned __int64)(v9 - a4) <= 0xD )
            {
              if ( v15 < v14 )
                goto LABEL_30;
              while ( a4 < v9 )
              {
                v11 = *a4++;
                if ( v11 > 0x7F )
                  goto LABEL_53;
                *v8++ = v11;
              }
              goto LABEL_13;
            }
            if ( v14 < v15 )
              v15 = v9 - a4;
            v17 = &v8[v15 - 7];
            if ( v8 >= v17 )
              goto LABEL_30;
            while ( 1 )
            {
              v18 = *a4++;
              if ( v18 > 0x7F )
                goto LABEL_33;
              *v8++ = v18;
              if ( ((unsigned __int8)a4 & 1) != 0 )
              {
                v18 = *a4++;
                if ( v18 > 0x7F )
                  goto LABEL_33;
                *v8++ = v18;
              }
              if ( ((unsigned __int8)a4 & 2) == 0 )
                goto LABEL_27;
              v18 = *(unsigned __int16 *)a4;
              if ( (v18 & 0x8080) == 0 )
              {
                a4 += 2;
                *v8 = v18 & 0x7F;
                v8[1] = (v18 >> 8) & 0x7F;
                v8 += 2;
LABEL_27:
                while ( v8 < v17 )
                {
                  v19 = *((_DWORD *)a4 + 1);
                  v18 = *(_DWORD *)a4;
                  if ( ((*(_DWORD *)a4 | v19) & 0x80808080) != 0 )
                    goto LABEL_41;
                  a4 += 8;
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
LABEL_30:
                v11 = 0;
                goto LABEL_3;
              }
LABEL_41:
              ++a4;
              if ( (unsigned __int8)v18 <= 0x7Fu )
              {
                *v8 = (unsigned __int8)v18;
                goto LABEL_39;
              }
LABEL_33:
              v20 = *a4++;
              if ( (v18 & 0x40) == 0 || (v20 & 0xC0) != 0x80 )
              {
LABEL_77:
                a4 -= 2;
                v11 = 0;
                goto LABEL_3;
              }
              v21 = v20 & 0x3F;
              if ( (v18 & 0x20) != 0 )
              {
                v24 = *a4;
                v25 = ((v18 & 0xF) << 6) | v21;
                if ( (v18 & 0x10) != 0 )
                {
                  if ( (v25 >> 4) - 1 > 0xF )
                    goto LABEL_77;
                  if ( (v24 & 0xC0) != 0x80 )
                    goto LABEL_77;
                  v29 = a4[1];
                  v30 = v24 & 0x3F | (v25 << 6);
                  if ( (v29 & 0xC0) != 0x80 )
                    goto LABEL_77;
                  *v8++ = (((v29 & 0x3F | (unsigned int)(v30 << 6)) >> 10) & 0x7FF) - 10304;
                  v26 = 2LL;
                  v23 = (v29 & 0x3F | ((_WORD)v30 << 6) & 0x3FF) - 9216;
                }
                else
                {
                  if ( (v25 & 0x3E0) == 0 || (v25 & 0x3E0) == 0x360 || (v24 & 0xC0) != 0x80 )
                    goto LABEL_77;
                  v23 = v24 & 0x3F | ((_WORD)v25 << 6);
                  v26 = 1LL;
                }
                a4 += v26;
                --v17;
              }
              else
              {
                v22 = v18 & 0x1F;
                if ( v22 <= 1 )
                  goto LABEL_77;
                v23 = ((_WORD)v22 << 6) | v21;
              }
              *v8 = v23;
              --v17;
LABEL_39:
              if ( ++v8 >= v17 )
              {
                v11 = 0;
                goto LABEL_3;
              }
            }
          }
LABEL_53:
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
LABEL_60:
          v5 = 263;
          LOWORD(v11) = -3;
          goto LABEL_6;
        }
        break;
      }
      if ( (v13 & 0xC0) != 0x80 )
      {
        a4 = v12;
        goto LABEL_60;
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
        goto LABEL_60;
      }
      break;
    }
    if ( (v11 & 0x101F0000) <= 0x10000000 )
      goto LABEL_6;
    if ( (unsigned __int64)v8 < v10 )
    {
      *v8++ = ((v11 >> 10) & 0x7FF) - 10304;
      LOWORD(v11) = (v11 & 0x3FF) - 9216;
      goto LABEL_6;
    }
LABEL_78:
    if ( a3 )
      *a3 = 2 * (v8 - a1);
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
