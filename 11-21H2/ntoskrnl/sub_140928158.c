/*
 * XREFs of sub_140928158 @ 0x140928158
 * Callers:
 *     sub_140702604 @ 0x140702604 (sub_140702604.c)
 *     sub_140927C7C @ 0x140927C7C (sub_140927C7C.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_140540028 @ 0x140540028 (sub_140540028.c)
 *     sub_1405400A4 @ 0x1405400A4 (sub_1405400A4.c)
 *     sub_1405E3044 @ 0x1405E3044 (sub_1405E3044.c)
 *     sub_1405E30A0 @ 0x1405E30A0 (sub_1405E30A0.c)
 *     sub_140932BBC @ 0x140932BBC (sub_140932BBC.c)
 */

void __fastcall sub_140928158(_QWORD *Object, PVOID a2, PRKEVENT a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  unsigned int v9; // ecx
  PIMAGE_NT_HEADERS v10; // rax
  unsigned int PointerToSymbolTable; // r9d
  unsigned int NumberOfSymbols; // eax
  unsigned int v13; // r14d
  char *v14; // r15
  __int64 v15; // rcx
  __int16 v16; // ax
  unsigned int *v18; // rdx
  unsigned int *v19; // rcx
  unsigned int v20; // eax
  PIMAGE_NT_HEADERS v21; // rax
  unsigned int v22; // r9d
  unsigned int v23; // ecx
  int i; // [rsp+30h] [rbp-58h]
  int j; // [rsp+30h] [rbp-58h]
  PVOID BaseOfImage; // [rsp+38h] [rbp-50h]
  PVOID BaseOfImagea; // [rsp+38h] [rbp-50h]
  _QWORD *v28; // [rsp+40h] [rbp-48h]
  _QWORD *v29; // [rsp+48h] [rbp-40h]
  PVOID P; // [rsp+50h] [rbp-38h] BYREF
  unsigned int *v31; // [rsp+90h] [rbp+8h]
  unsigned int *v32; // [rsp+A8h] [rbp+20h] BYREF

  P = 0LL;
  LODWORD(v32) = 0;
  if ( (Object[124] & 1) != 0 )
  {
    sub_140932BBC();
  }
  else
  {
    v6 = Object[170];
    if ( v6 )
    {
      v29 = (_QWORD *)(*(_QWORD *)(v6 + 24) + 16LL);
      v7 = v29;
      v8 = (_QWORD *)*v29;
      v9 = 0;
      for ( i = 0; ; ++i )
      {
        v28 = v8;
        if ( v8 == v7 || v9 >= dword_140D05100 )
          break;
        if ( v9 > 1 )
        {
          BaseOfImage = (PVOID)v8[6];
          v10 = RtlImageNtHeader(BaseOfImage);
          if ( v10 )
          {
            PointerToSymbolTable = v10->FileHeader.PointerToSymbolTable;
            NumberOfSymbols = v10->FileHeader.NumberOfSymbols;
          }
          else
          {
            PointerToSymbolTable = 0;
            NumberOfSymbols = 0;
          }
          sub_1405400A4(Object, a2, BaseOfImage, PointerToSymbolTable, NumberOfSymbols, a3);
        }
        v8 = (_QWORD *)*v28;
        v9 = i + 1;
        v7 = v29;
      }
    }
    if ( (int)sub_1405E30A0((__int64)Object, (char **)&P, (unsigned int *)&v32) >= 0 )
    {
      v13 = 0;
      v14 = (char *)P;
      while ( v13 < (unsigned int)v32 )
      {
        sub_140540028(Object, a2, a3, *(_QWORD *)&v14[16 * v13], *(_DWORD *)&v14[16 * v13 + 8]);
        ++v13;
      }
      sub_1405E3044(v14, (int)v32);
    }
    v15 = Object[176];
    if ( v15 )
    {
      v16 = *((_WORD *)Object + 1206);
      if ( v16 == 332 || v16 == 452 )
      {
        v32 = (unsigned int *)(*(unsigned int *)(*(_QWORD *)v15 + 12LL) + 12LL);
        v18 = v32;
        v19 = (unsigned int *)*v32;
        v20 = 0;
        for ( j = 0; ; ++j )
        {
          v31 = v19;
          if ( v19 == v18 || v20 >= dword_140D05100 )
            break;
          if ( v20 > 1 )
          {
            BaseOfImagea = (PVOID)v19[6];
            v21 = RtlImageNtHeader(BaseOfImagea);
            if ( v21 )
            {
              v22 = v21->FileHeader.PointerToSymbolTable;
              v23 = v21->FileHeader.NumberOfSymbols;
            }
            else
            {
              v22 = 0;
              v23 = 0;
            }
            sub_1405400A4(Object, a2, BaseOfImagea, v22, v23, a3);
          }
          v19 = (unsigned int *)*v31;
          v20 = j + 1;
          v18 = v32;
        }
      }
    }
  }
}
