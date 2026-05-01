/*
 * XREFs of AslpFileVerQueryBlock @ 0x1800A2924
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x1800A1F4C (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileQueryVersionString @ 0x1800A25A8 (AslpFileQueryVersionString.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x18009E710 (AslStringDuplicate.c)
 *     AslpFileStringTokenize @ 0x1800A27E0 (AslpFileStringTokenize.c)
 *     AslpFileVerBlockGetValueOffset @ 0x1800A28BC (AslpFileVerBlockGetValueOffset.c)
 */

__int64 __fastcall AslpFileVerQueryBlock(unsigned __int16 *a1, __int64 a2, unsigned __int16 **a3, _QWORD *a4)
{
  unsigned __int16 *i; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  _WORD *v9; // rcx
  char *v10; // rsi
  unsigned __int16 *v11; // rbx
  __int16 v12; // bp
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  const wchar_t *v16; // r15
  _WORD *v18; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  i = a1;
  P = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  *a4 = 0LL;
  if ( a1[2] )
  {
    v7 = -1073741811;
    AslLogCallPrintf(1LL);
  }
  else
  {
    v7 = AslStringDuplicate(&P, a2);
    if ( v7 >= 0 )
    {
      if ( (__int16)*i >= 8 )
      {
        v9 = P;
        v10 = (char *)i + *i;
        v11 = (unsigned __int16 *)v10;
        v12 = *((_WORD *)v10 - 1);
        *((_WORD *)v10 - 1) = 0;
LABEL_20:
        v16 = AslpFileStringTokenize(v9, v8, &v18);
        if ( v16 )
        {
          v13 = (_DWORD)v10 - (_DWORD)i;
          if ( (unsigned int)((_DWORD)v10 - (_DWORD)i) >= 8
            && *i <= v13
            && (int)AslpFileVerBlockGetValueOffset(&v20, (__int64)i, v13) >= 0 )
          {
            v14 = *i;
            v15 = v20 + ((i[1] + 3LL) & 0xFFFFFFFFFFFFFFFCuLL);
            v20 = v15;
            if ( v15 <= v14 )
            {
              v11 = (unsigned __int16 *)((char *)i + v14);
              for ( i = (unsigned __int16 *)((char *)i + v15);
                    i < v11 && *i > 8u && *i <= (unsigned __int64)((char *)v11 - (char *)i);
                    i = (unsigned __int16 *)((char *)i + ((*i + 3LL) & 0xFFFFFFFFFFFFFFFCuLL)) )
              {
                if ( !_wcsicmp(v16, i + 3) )
                {
                  v9 = 0LL;
                  goto LABEL_20;
                }
              }
            }
          }
          v7 = -1073741275;
        }
        else
        {
          *a3 = i;
          *a4 = (char *)v11 - (char *)i;
          v7 = 0;
        }
        *((_WORD *)v10 - 1) = v12;
      }
      else
      {
        v7 = -1073741811;
        AslLogCallPrintf(1LL);
      }
    }
    else
    {
      AslLogCallPrintf(1LL);
    }
    if ( P )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  return (unsigned int)v7;
}
