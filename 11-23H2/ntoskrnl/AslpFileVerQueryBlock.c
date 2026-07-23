/*
 * XREFs of AslpFileVerQueryBlock @ 0x1406D4870
 * Callers:
 *     AslpFileQueryVersionString @ 0x1406D4594 (AslpFileQueryVersionString.c)
 * Callees:
 *     AslpFileStringTokenize @ 0x14022BE80 (AslpFileStringTokenize.c)
 *     AslpFileVerBlockGetValueOffset @ 0x14022BF7C (AslpFileVerBlockGetValueOffset.c)
 *     _wcsicmp @ 0x1403D9C30 (_wcsicmp.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x1406D4A28 (AslStringDuplicate.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AslpFileVerQueryBlock(unsigned __int16 *a1, __int64 a2, unsigned __int16 **a3, _QWORD *a4)
{
  unsigned __int16 *i; // rbx
  __int64 v7; // rdx
  int v8; // edi
  __int64 v9; // rax
  _WORD *v10; // rcx
  char *v11; // rdi
  __int16 v12; // r12
  char *v13; // r14
  const wchar_t *v14; // rsi
  int v15; // ebp
  unsigned int v16; // edx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  _WORD *v22[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v23; // [rsp+80h] [rbp+8h] BYREF
  PVOID P; // [rsp+98h] [rbp+20h] BYREF

  i = a1;
  P = 0LL;
  v22[0] = 0LL;
  v23 = 0LL;
  *a4 = 0LL;
  if ( a1[2] )
    goto LABEL_23;
  v8 = AslStringDuplicate(&P);
  if ( v8 < 0 )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_18;
  }
  v9 = *i;
  if ( (unsigned __int16)v9 > 0x7FFFu || (unsigned int)v9 < 8 )
  {
LABEL_23:
    v8 = -1073741811;
    AslLogCallPrintf(1LL);
    goto LABEL_18;
  }
  v10 = P;
  v11 = (char *)i + v9;
  v12 = *(unsigned __int16 *)((char *)i + v9 - 2);
  v13 = v11 - 2;
  *((_WORD *)v11 - 1) = 0;
  v14 = AslpFileStringTokenize(v10, v7, v22);
  if ( v14 )
  {
    v15 = (int)v11;
LABEL_7:
    v16 = v15 - (_DWORD)i;
    if ( (unsigned int)(v15 - (_DWORD)i) >= 8 && *i <= v16 && AslpFileVerBlockGetValueOffset(&v23, (__int64)i, v16) >= 0 )
    {
      v17 = *i;
      v18 = v23 + ((i[1] + 3LL) & 0xFFFFFFFFFFFFFFFCuLL);
      v23 = v18;
      if ( v18 <= v17 )
      {
        v11 = (char *)i + v17;
        for ( i = (unsigned __int16 *)((char *)i + v18);
              i < (unsigned __int16 *)v11;
              i = (unsigned __int16 *)((char *)i + ((*i + 3LL) & 0xFFFFFFFFFFFFFFFCuLL)) )
        {
          v19 = *i;
          if ( (unsigned int)v19 <= 8 || v19 > v11 - (char *)i )
            break;
          if ( !wcsicmp(v14, i + 3) )
          {
            v14 = AslpFileStringTokenize(0LL, v20, v22);
            if ( v14 )
              goto LABEL_7;
            goto LABEL_22;
          }
        }
      }
    }
    v8 = -1073741275;
  }
  else
  {
LABEL_22:
    *a3 = i;
    *a4 = v11 - (char *)i;
    v8 = 0;
  }
  *(_WORD *)v13 = v12;
LABEL_18:
  if ( P )
    ExFreePoolWithTag(P, 0x74705041u);
  return (unsigned int)v8;
}
