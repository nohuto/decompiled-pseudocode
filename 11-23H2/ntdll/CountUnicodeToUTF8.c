/*
 * XREFs of CountUnicodeToUTF8 @ 0x180059EE8
 * Callers:
 *     RtlUnicodeToUTF8N @ 0x180059C10 (RtlUnicodeToUTF8N.c)
 *     RtlUnicodeStringToUTF8String @ 0x180110E80 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CountUnicodeToUTF8(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r10d
  unsigned __int64 v4; // rax
  unsigned int *v6; // r9
  unsigned int v7; // edx
  unsigned __int64 v8; // r11
  unsigned int v9; // ecx
  unsigned __int64 v10; // rax
  __int64 result; // rax
  unsigned int *v12; // r8
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // ecx
  char v22; // r8
  unsigned int *v23; // rax

  v3 = 0;
  v4 = (unsigned __int64)a2 >> 1;
  v6 = a1;
  v7 = a2 >> 1;
  v8 = (unsigned __int64)a1 + 2 * v4;
LABEL_2:
  while ( 2 )
  {
    v9 = 0;
    while ( (unsigned __int64)v6 < v8 )
    {
      if ( v9 )
      {
        ++v7;
        if ( (unsigned int)*(unsigned __int16 *)v6 - 56320 > 0x3FF )
        {
          v22 = 0;
        }
        else
        {
          v22 = 1;
          v9 = 65533;
        }
        v23 = (unsigned int *)((char *)v6 + 2);
        if ( !v22 )
          v23 = v6;
        v6 = v23;
        goto LABEL_7;
      }
      v9 = *(unsigned __int16 *)v6;
      v6 = (unsigned int *)((char *)v6 + 2);
LABEL_6:
      if ( v9 - 55296 > 0x3FF )
        goto LABEL_7;
      --v7;
    }
    if ( !v9 )
      goto LABEL_14;
    ++v7;
LABEL_7:
    if ( v9 - 55296 <= 0x7FF )
    {
      v9 = 65533;
      v3 = 263;
    }
    else if ( v9 <= 0x7F )
    {
      goto LABEL_9;
    }
    v19 = v7 + 1;
    if ( v9 <= 0x7FF )
      v19 = v7;
    v7 = v19 + 1;
LABEL_9:
    v10 = (__int64)(v8 - (_QWORD)v6) >> 1;
    if ( v10 > 0xD )
    {
      v12 = (unsigned int *)((char *)v6 + 2 * v10 - 14);
LABEL_16:
      if ( v6 >= v12 )
        continue;
      v13 = *(unsigned __int16 *)v6;
      v6 = (unsigned int *)((char *)v6 + 2);
      if ( v13 > 0x7F )
      {
        if ( v13 > 0x7FF )
        {
          if ( (v13 & 0xF800) == 0xD800 )
            goto LABEL_28;
          ++v7;
        }
        ++v7;
      }
      if ( ((unsigned __int8)v6 & 2) != 0 )
      {
        v13 = *(unsigned __int16 *)v6;
        v6 = (unsigned int *)((char *)v6 + 2);
        if ( v13 > 0x7F )
        {
          if ( v13 <= 0x7FF )
          {
LABEL_66:
            ++v7;
            goto LABEL_19;
          }
          if ( (v13 & 0xF800) != 0xD800 )
          {
            ++v7;
            goto LABEL_66;
          }
LABEL_28:
          if ( v13 - 55296 > 0x7FF )
          {
LABEL_29:
            ++v7;
            goto LABEL_30;
          }
          if ( v13 <= 0xDBFF && (unsigned int)*(unsigned __int16 *)v6 - 56320 <= 0x3FF )
          {
            v6 = (unsigned int *)((char *)v6 + 2);
            goto LABEL_29;
          }
          v6 = (unsigned int *)((char *)v6 - 2);
          continue;
        }
      }
      while ( 1 )
      {
LABEL_19:
        if ( v6 >= v12 )
          goto LABEL_2;
        v13 = *v6;
        v14 = *v6 | v6[1];
        if ( (v14 & 0xFF80FF80) != 0 )
        {
          if ( (v14 & 0xF800F800) != 0 )
            goto LABEL_26;
          v20 = v7 + 1;
          if ( (v13 & 0xFF800000) == 0 )
            v20 = v7;
          v21 = v20 + 1;
          if ( (*v6 & 0xFF80) == 0 )
            v21 = v20;
          v7 = v21 + 1;
          if ( (v6[1] & 0xFF800000) == 0 )
            v7 = v21;
          if ( (v6[1] & 0xFF80) != 0 )
            ++v7;
        }
        v15 = v6[3];
        v6 += 2;
        v13 = *v6;
        v16 = *v6 | v15;
        if ( (v16 & 0xFF80FF80) != 0 )
        {
          if ( (v16 & 0xF800F800) != 0 )
          {
LABEL_26:
            v13 = (unsigned __int16)v13;
            v6 = (unsigned int *)((char *)v6 + 2);
            if ( (unsigned __int16)v13 > 0x7Fu )
            {
              if ( (unsigned __int16)v13 > 0x7FFu )
                goto LABEL_28;
LABEL_30:
              ++v7;
            }
            goto LABEL_16;
          }
          v17 = v7 + 1;
          if ( (v13 & 0xFF800000) == 0 )
            v17 = v7;
          v18 = v17 + 1;
          if ( (*v6 & 0xFF80) == 0 )
            v18 = v17;
          v7 = v18 + 1;
          if ( (v6[1] & 0xFF800000) == 0 )
            v7 = v18;
          if ( (v6[1] & 0xFF80) != 0 )
            ++v7;
        }
        v6 += 2;
      }
    }
    break;
  }
  while ( (unsigned __int64)v6 < v8 )
  {
    v9 = *(unsigned __int16 *)v6;
    v6 = (unsigned int *)((char *)v6 + 2);
    if ( v9 > 0x7F )
      goto LABEL_6;
  }
LABEL_14:
  result = v3;
  *a3 = v7;
  return result;
}
