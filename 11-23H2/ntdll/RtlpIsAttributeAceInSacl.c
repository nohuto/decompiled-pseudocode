/*
 * XREFs of RtlpIsAttributeAceInSacl @ 0x1800F664C
 * Callers:
 *     RtlpMergeSecurityAttributeInformation @ 0x1800028B0 (RtlpMergeSecurityAttributeInformation.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x18000AD54 (RtlStringCbLengthW.c)
 *     memcmp @ 0x180093310 (memcmp.c)
 */

char __fastcall RtlpIsAttributeAceInSacl(__int64 a1, __int64 a2, char a3, _BYTE *a4)
{
  char v5; // bl
  unsigned int v7; // edx
  int v8; // ebp
  int *v9; // r14
  unsigned int v10; // eax
  char v11; // r11
  __int64 v12; // rdi
  unsigned int v13; // r12d
  unsigned int v14; // ecx
  int v15; // r15d
  int *v16; // rsi
  unsigned int v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // edi
  _QWORD v20[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int Size; // [rsp+78h] [rbp+10h]

  v20[0] = 0LL;
  v5 = 0;
  *a4 = 0;
  if ( !a2 )
    return 0;
  v7 = 4 * *(unsigned __int8 *)(a1 + 9) + 8;
  v8 = *(unsigned __int16 *)(a1 + 2) - v7 - 8;
  if ( v8 <= 20 )
    return 1;
  v9 = (int *)(v7 + a1 + 8);
  if ( v8 < (unsigned int)*v9 )
    return 1;
  v10 = v8 - *v9;
  if ( v10 < 4 || (int)RtlStringCbLengthW((int *)((char *)v9 + (unsigned int)*v9), v10, v20) < 0 )
    return 1;
  v12 = a2 + 8;
  v13 = 0;
  Size = v20[0];
  if ( !*(_WORD *)(a2 + 4) )
    return v5;
  while ( 1 )
  {
    v5 = 0;
    if ( *(_BYTE *)v12 != 18 || v11 && (*(_BYTE *)(v12 + 1) & 0x10) == 0 )
      goto LABEL_18;
    v5 = 0;
    v14 = 4 * *(unsigned __int8 *)(v12 + 9) + 8;
    v15 = *(unsigned __int16 *)(v12 + 2) - v14 - 8;
    if ( v15 <= 20 )
      goto LABEL_18;
    v16 = (int *)(v14 + v12 + 8);
    if ( v15 < (unsigned int)*v16 )
      goto LABEL_18;
    v17 = v15 - *v16;
    if ( v17 < 4 )
      goto LABEL_18;
    if ( (int)RtlStringCbLengthW((int *)((char *)v16 + (unsigned int)*v16), v17, v20) < 0 )
      goto LABEL_18;
    v5 = 0;
    if ( LODWORD(v20[0]) != Size )
      goto LABEL_18;
    if ( !memcmp((char *)v16 + (unsigned int)*v16, (char *)v9 + (unsigned int)*v9, Size) )
      break;
    v11 = a3;
LABEL_18:
    ++v13;
    v12 += *(unsigned __int16 *)(v12 + 2);
    if ( v13 >= *(unsigned __int16 *)(a2 + 4) )
      return v5;
  }
  v5 = 1;
  if ( a3 && v15 == v8 )
  {
    v18 = v9[2];
    v19 = v16[2];
    *((_BYTE *)v9 + 10) = 0;
    *((_BYTE *)v16 + 10) = 0;
    if ( !memcmp(v16, v9, (unsigned int)v8) )
      *a4 = 1;
    v9[2] = v18;
    v5 = 1;
    v16[2] = v19;
  }
  return v5;
}
