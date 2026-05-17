/*
 * XREFs of RtlpIsAttributeAceInSacl @ 0x1800F54D4
 * Callers:
 *     RtlpMergeSecurityAttributeInformation @ 0x18008BA40 (RtlpMergeSecurityAttributeInformation.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x18007701C (RtlStringCbLengthW.c)
 *     memcmp @ 0x180097B10 (memcmp.c)
 */

char __fastcall RtlpIsAttributeAceInSacl(__int64 a1, __int64 a2, char a3, _BYTE *a4)
{
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int *v10; // rsi
  unsigned int v11; // r14d
  unsigned int v12; // eax
  char v13; // r11
  __int64 v14; // rbx
  unsigned int v15; // r12d
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int *v18; // rdi
  unsigned int v19; // r15d
  unsigned int v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // ebp
  _QWORD v23[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int Size; // [rsp+78h] [rbp+10h]

  v23[0] = 0LL;
  *a4 = 0;
  if ( !a2 )
    return 0;
  v8 = 4 * *(unsigned __int8 *)(a1 + 9) + 8;
  v9 = *(unsigned __int16 *)(a1 + 2) - v8;
  if ( (int)(v9 - 8) <= 20 )
    return 1;
  v10 = (unsigned int *)(v8 + a1 + 8);
  v11 = v9 - 8;
  if ( v9 - 8 < *v10 )
    return 1;
  v12 = v11 - *v10;
  if ( v12 < 4 || (int)RtlStringCbLengthW((unsigned int *)((char *)v10 + *v10), v12, v23) < 0 )
    return 1;
  v14 = a2 + 8;
  v15 = 0;
  Size = v23[0];
  if ( *(_WORD *)(a2 + 4) )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)v14 == 18 && (!a3 || (*(_BYTE *)(v14 + 1) & 0x10) != 0) )
      {
        v16 = 4 * *(unsigned __int8 *)(v14 + 9) + 8;
        v17 = *(unsigned __int16 *)(v14 + 2) - v16;
        if ( (int)(v17 - 8) > 20 )
        {
          v18 = (unsigned int *)(v16 + v14 + 8);
          v19 = v17 - 8;
          if ( v17 - 8 >= *v18 )
          {
            v20 = v19 - *v18;
            if ( v20 >= 4
              && (int)RtlStringCbLengthW((unsigned int *)((char *)v18 + *v18), v20, v23) >= 0
              && LODWORD(v23[0]) == Size
              && !memcmp((char *)v18 + *v18, (char *)v10 + *v10, Size) )
            {
              break;
            }
          }
        }
      }
      ++v15;
      v14 += *(unsigned __int16 *)(v14 + 2);
      if ( v15 >= *(unsigned __int16 *)(a2 + 4) )
        return 0;
    }
    v13 = 1;
    if ( a3 && v19 == v11 )
    {
      v21 = v10[2];
      v22 = v18[2];
      *((_BYTE *)v10 + 10) = 0;
      *((_BYTE *)v18 + 10) = 0;
      if ( !memcmp(v18, v10, v11) )
        *a4 = 1;
      v10[2] = v21;
      v13 = 1;
      v18[2] = v22;
    }
  }
  return v13;
}
