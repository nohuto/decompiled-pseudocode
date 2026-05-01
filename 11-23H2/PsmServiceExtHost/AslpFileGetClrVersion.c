/*
 * XREFs of AslpFileGetClrVersion @ 0x18009AD0C
 * Callers:
 *     AslpFileGetClrVersionAttribute @ 0x18009AF08 (AslpFileGetClrVersionAttribute.c)
 * Callees:
 *     memcpy_0 @ 0x1800534A2 (memcpy_0.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x18009B860 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x18009D320 (AslpImageRvaToVa.c)
 */

__int64 __fastcall AslpFileGetClrVersion(_BYTE *a1, __int64 a2)
{
  unsigned int *v4; // rdi
  int ImageNtHeader; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rax
  const char *v10; // r9
  int v11; // r8d
  _DWORD *v12; // rax
  __int64 v13; // rbx
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  unsigned int *v16; // [rsp+80h] [rbp+18h]
  __int64 v17; // [rsp+88h] [rbp+20h]

  v15 = 0LL;
  v4 = 0LL;
  v16 = 0LL;
  *a1 = 0;
  ImageNtHeader = AslpFileGetImageNtHeader(&v15, a2);
  v6 = ImageNtHeader;
  if ( ImageNtHeader >= 0 )
  {
    v7 = v15;
    if ( *(_WORD *)(v15 + 24) == 267 )
    {
      v4 = (unsigned int *)(v15 + 232);
    }
    else
    {
      if ( *(_WORD *)(v15 + 24) != 523 )
      {
LABEL_8:
        if ( !v4 )
          return (unsigned int)-1073741701;
        v8 = *v4;
        if ( !(_DWORD)v8 || v4[1] < 0x48 )
          return (unsigned int)-1073741701;
        v9 = AslpImageRvaToVa(v15, a2 + 8, v8);
        v17 = v9;
        if ( v9 )
        {
          if ( *(_WORD *)(v9 + 4) != 2 )
            return (unsigned int)-1073741637;
          v12 = (_DWORD *)AslpImageRvaToVa(v7, a2 + 8, *(unsigned int *)(v9 + 8));
          if ( v12 )
          {
            if ( *v12 != 1112167234 )
            {
              v6 = -1073741637;
              v10 = "Invalid COR20 Metadata signature encountered";
              v11 = 4290;
              goto LABEL_14;
            }
            v13 = (unsigned int)v12[3];
            if ( (unsigned __int64)(v13 - 1) <= 0xFE )
            {
              memcpy_0(a1, v12 + 4, (unsigned int)v13);
              a1[v13] = 0;
              return 0;
            }
            v10 = "CLR version string null or too long";
            v11 = 4302;
          }
          else
          {
            v10 = "Invalid COR20 Metadata virtual address encountered";
            v11 = 4280;
          }
        }
        else
        {
          v10 = "Invalid COM Descriptor virtual address encountered";
          v11 = 4260;
        }
        v6 = -1073741701;
LABEL_14:
        AslLogCallPrintf(1LL, (unsigned int)"AslpFileGetClrVersion", v11, (_DWORD)v10);
        return v6;
      }
      v4 = (unsigned int *)(v15 + 248);
    }
    v16 = v4;
    goto LABEL_8;
  }
  AslLogCallPrintf(
    1LL,
    (unsigned int)"AslpFileGetClrVersion",
    4231,
    (unsigned int)"AslpFileGetImageNtHeader failed [%x]",
    ImageNtHeader);
  return v6;
}
