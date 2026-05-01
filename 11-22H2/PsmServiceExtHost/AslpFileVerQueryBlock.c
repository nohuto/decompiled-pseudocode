/*
 * XREFs of AslpFileVerQueryBlock @ 0x18009D334
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x18009C95C (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileQueryVersionString @ 0x18009CFB8 (AslpFileQueryVersionString.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x180099128 (AslStringDuplicate.c)
 *     AslpFileStringTokenize @ 0x18009D1F0 (AslpFileStringTokenize.c)
 *     AslpFileVerBlockGetValueOffset @ 0x18009D2CC (AslpFileVerBlockGetValueOffset.c)
 */

__int64 __fastcall AslpFileVerQueryBlock(unsigned __int16 *a1, unsigned __int16 *a2, unsigned __int16 **a3, _QWORD *a4)
{
  unsigned __int16 *i; // rdi
  const char *v6; // r9
  int v7; // r8d
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  _WORD *v11; // rcx
  char *v12; // rbx
  char *v13; // rsi
  __int16 v14; // r14
  const wchar_t *v15; // r12
  int v16; // r13d
  unsigned int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int16 **v21; // rax
  _WORD *v23[2]; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int16 **v25; // [rsp+90h] [rbp+50h]
  __int64 v26; // [rsp+98h] [rbp+58h] BYREF

  v25 = a3;
  i = a1;
  P = 0LL;
  v23[0] = 0LL;
  v26 = 0LL;
  *a4 = 0LL;
  if ( a1[2] )
  {
    v6 = "Version block invalid";
    v7 = 2010;
LABEL_3:
    v8 = -1073741811;
    AslLogCallPrintf(1LL, (unsigned int)"AslpFileVerQueryBlock", v7, (_DWORD)v6);
    goto LABEL_26;
  }
  v9 = AslStringDuplicate((unsigned __int16 **)&P, a2);
  v8 = v9;
  if ( v9 >= 0 )
  {
    if ( *i > 0x7FFFu )
    {
      v6 = "VersionBlock is too long";
      v7 = 2028;
      goto LABEL_3;
    }
    if ( *i < 8u )
    {
      v6 = "VersionBlock not long enough";
      v7 = 2033;
      goto LABEL_3;
    }
    v11 = P;
    v12 = (char *)i + *i;
    v13 = v12 - 2;
    v14 = *((_WORD *)v12 - 1);
    *((_WORD *)v12 - 1) = 0;
    v15 = AslpFileStringTokenize(v11, v10, v23);
    if ( v15 )
    {
      v16 = (int)v12;
LABEL_12:
      v17 = v16 - (_DWORD)i;
      if ( (unsigned int)(v16 - (_DWORD)i) >= 8
        && *i <= v17
        && (int)AslpFileVerBlockGetValueOffset(&v26, (__int64)i, v17) >= 0 )
      {
        v18 = *i;
        v19 = v26 + ((i[1] + 3LL) & 0xFFFFFFFFFFFFFFFCuLL);
        v26 = v19;
        if ( v19 <= v18 )
        {
          v12 = (char *)i + v18;
          for ( i = (unsigned __int16 *)((char *)i + v19);
                i < (unsigned __int16 *)v12 && *i > 8u && *i <= (unsigned __int64)(v12 - (char *)i);
                i = (unsigned __int16 *)((char *)i + ((*i + 3LL) & 0xFFFFFFFFFFFFFFFCuLL)) )
          {
            if ( !_wcsicmp(v15, i + 3) )
            {
              v15 = AslpFileStringTokenize(0LL, v20, v23);
              if ( v15 )
                goto LABEL_12;
              goto LABEL_24;
            }
          }
        }
      }
      v8 = -1073741275;
    }
    else
    {
LABEL_24:
      v21 = v25;
      *a4 = v12 - (char *)i;
      v8 = 0;
      *v21 = i;
    }
    *(_WORD *)v13 = v14;
  }
  else
  {
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileVerQueryBlock",
      2016,
      (unsigned int)"AslStringDuplicate failed [%x]",
      v9);
  }
LABEL_26:
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return v8;
}
