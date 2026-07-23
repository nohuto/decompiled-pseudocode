/*
 * XREFs of sub_140297AE0 @ 0x140297AE0
 * Callers:
 *     sub_140296DC0 @ 0x140296DC0 (sub_140296DC0.c)
 *     RtlLookupFunctionEntry @ 0x140298010 (RtlLookupFunctionEntry.c)
 *     RtlPcToFileHeader @ 0x1403870E0 (RtlPcToFileHeader.c)
 *     sub_140389A90 @ 0x140389A90 (sub_140389A90.c)
 *     sub_140419FB8 @ 0x140419FB8 (sub_140419FB8.c)
 *     sub_140B09D6C @ 0x140B09D6C (sub_140B09D6C.c)
 *     sub_140B19FB4 @ 0x140B19FB4 (sub_140B19FB4.c)
 * Callees:
 *     sub_1402DC05C @ 0x1402DC05C (sub_1402DC05C.c)
 *     sub_1402DC098 @ 0x1402DC098 (sub_1402DC098.c)
 */

PVOID __fastcall sub_140297AE0(unsigned __int64 a1, __int64 a2)
{
  PVOID v2; // r15
  int *v5; // rdi
  int v6; // r12d
  unsigned int v7; // esi
  int v8; // r13d
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
  char *v12; // r11
  int *v13; // r10
  char *v14; // rdx
  PVOID result; // rax
  char v16; // si
  unsigned int v17; // edx
  int v18; // r8d
  int v19; // r9d
  char *v20; // rdi
  int *v21; // r10
  char *v22; // rcx
  int v23; // eax
  int v24; // r9d
  unsigned int v25; // r8d
  PVOID *v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  int v29; // ecx
  unsigned __int8 v30; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  v5 = off_140E00000;
  v6 = off_140E00000[2];
  if ( (v6 & 1) != 0 )
  {
    v8 = 1;
    goto LABEL_20;
  }
  if ( *off_140E00000 == 1 )
  {
    v8 = 1;
  }
  else
  {
    if ( (xmmword_140D06920 & 0x20000000000LL) != 0 )
      v7 = dword_140C4F440 << 12;
    else
      v7 = 0;
    v8 = 1;
    v9 = *off_140E00000 - 1;
    v10 = 1;
    while ( v9 >= v10 )
    {
      v11 = (v10 + v9) >> 1;
      v12 = *(char **)&off_140E00000[6 * v11 + 6];
      v13 = &off_140E00000[6 * v11];
      v14 = &v12[v13[8]];
      if ( a1 < (unsigned __int64)v12 )
      {
        if ( !v11 )
          break;
        v9 = v11 - 1;
        continue;
      }
      if ( a1 > 0x7FFFFFFEFFFFLL && v7 )
      {
        if ( a1 < (unsigned __int64)v14 )
        {
LABEL_15:
          *(_OWORD *)a2 = *((_OWORD *)v13 + 1);
          *(_QWORD *)(a2 + 16) = *((_QWORD *)v13 + 4);
          result = *(PVOID *)a2;
          goto LABEL_16;
        }
        if ( a1 >= (unsigned __int64)&v14[v7] || v12 == qword_140D068F0 )
          goto LABEL_10;
        if ( v12 != qword_140D06988 )
        {
          *(_DWORD *)(a2 + 20) = dword_140E01848;
          result = &unk_140E01AD0;
          *(_QWORD *)a2 = &unk_140E01AD0;
          *(_QWORD *)(a2 + 8) = v14;
          *(_DWORD *)(a2 + 16) = v7;
          goto LABEL_16;
        }
      }
      if ( a1 < (unsigned __int64)v14 )
        goto LABEL_15;
LABEL_10:
      v10 = v11 + 1;
    }
  }
  if ( *((_BYTE *)off_140E00000 + 12) )
    goto LABEL_20;
  result = 0LL;
LABEL_16:
  if ( v5[2] != v6 )
  {
LABEL_20:
    v30 = 0;
    if ( (dword_140C31E20 & 3) != 0 )
    {
      v16 = 1;
    }
    else
    {
      v16 = 0;
      sub_1402DC098(&v30);
    }
    if ( *off_140E00000 == 1
      || ((xmmword_140D06920 & 0x20000000000LL) == 0 ? (v17 = 0) : (v17 = dword_140C4F440 << 12),
          v18 = *off_140E00000 - 1,
          v18 < 1) )
    {
LABEL_32:
      if ( *((_BYTE *)off_140E00000 + 12) )
      {
        v24 = dword_140C4F478;
        v25 = (xmmword_140D06920 & 0x20000000000LL) != 0 ? dword_140C4F440 << 12 : 0;
        v26 = (PVOID *)PsLoadedModuleList;
        if ( PsLoadedModuleList )
        {
          if ( PsLoadedModuleList != &PsLoadedModuleList )
          {
            while ( 1 )
            {
              v27 = (unsigned __int64)v26[6];
              v28 = v27 + (unsigned int)dword_140C4F478 + (unsigned __int64)*((unsigned int *)v26 + 16);
              if ( a1 >= v27 && a1 < v28 )
              {
                v2 = v26[2];
                *(_QWORD *)a2 = v2;
                *(_QWORD *)(a2 + 8) = v27;
                *(_DWORD *)(a2 + 16) = v24 + *((_DWORD *)v26 + 16);
                *(_DWORD *)(a2 + 20) = *((_DWORD *)v26 + 6);
                goto LABEL_37;
              }
              if ( v25 && a1 >= v28 && a1 < v28 + v25 )
                break;
              v26 = (PVOID *)*v26;
              if ( v26 == &PsLoadedModuleList )
                goto LABEL_37;
            }
            *(_QWORD *)(a2 + 8) = v28;
            v29 = dword_140E01848;
            v2 = &unk_140E01AD0;
            *(_QWORD *)a2 = &unk_140E01AD0;
            *(_DWORD *)(a2 + 20) = v29;
            *(_DWORD *)(a2 + 16) = v25;
          }
        }
      }
LABEL_37:
      if ( !v16 )
        sub_1402DC05C(v30);
      return v2;
    }
    while ( 1 )
    {
      v19 = (v18 + v8) >> 1;
      v20 = *(char **)&off_140E00000[6 * v19 + 6];
      v21 = &off_140E00000[6 * v19];
      v22 = &v20[v21[8]];
      if ( a1 >= (unsigned __int64)v20 )
        break;
      if ( !v19 )
        goto LABEL_32;
      v18 = v19 - 1;
LABEL_31:
      if ( v18 < v8 )
        goto LABEL_32;
    }
    if ( a1 > 0x7FFFFFFEFFFFLL && v17 )
    {
      if ( a1 < (unsigned __int64)v22 )
      {
LABEL_36:
        *(_OWORD *)a2 = *((_OWORD *)v21 + 1);
        *(_QWORD *)(a2 + 16) = *((_QWORD *)v21 + 4);
        v2 = *(PVOID *)a2;
        goto LABEL_37;
      }
      if ( a1 >= (unsigned __int64)&v22[v17] || v20 == qword_140D068F0 )
        goto LABEL_30;
      if ( v20 != qword_140D06988 )
      {
        v23 = dword_140E01848;
        v2 = &unk_140E01AD0;
        *(_QWORD *)a2 = &unk_140E01AD0;
        *(_QWORD *)(a2 + 8) = v22;
        *(_DWORD *)(a2 + 16) = v17;
        *(_DWORD *)(a2 + 20) = v23;
        goto LABEL_37;
      }
    }
    if ( a1 < (unsigned __int64)v22 )
      goto LABEL_36;
LABEL_30:
    v8 = v19 + 1;
    goto LABEL_31;
  }
  return result;
}
