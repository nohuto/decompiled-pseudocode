/*
 * XREFs of sub_14037E048 @ 0x14037E048
 * Callers:
 *     sub_14037AFC0 @ 0x14037AFC0 (sub_14037AFC0.c)
 * Callees:
 *     sub_14025F6B0 @ 0x14025F6B0 (sub_14025F6B0.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_14037E128 @ 0x14037E128 (sub_14037E128.c)
 *     sub_14037E3A0 @ 0x14037E3A0 (sub_14037E3A0.c)
 *     sub_140389840 @ 0x140389840 (sub_140389840.c)
 *     sub_1405E58D0 @ 0x1405E58D0 (sub_1405E58D0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

unsigned int *__fastcall sub_14037E048(__int64 a1, unsigned int *a2, unsigned int *a3, int a4)
{
  unsigned int v4; // r14d
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // r9d
  unsigned int v12; // esi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  unsigned int *result; // rax
  int v16; // r15d
  unsigned int v17; // edx
  unsigned int v18; // ecx
  _OWORD *v19; // r13
  char *v20; // rcx
  unsigned int *v21; // rax
  unsigned int v22; // eax
  bool v23; // zf
  void *v24; // rax
  __int64 v25; // [rsp+20h] [rbp-40h] BYREF
  __int64 v26; // [rsp+28h] [rbp-38h]
  _OWORD v27[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h]
  unsigned __int64 v29; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int *v30; // [rsp+B0h] [rbp+50h]
  unsigned int v31; // [rsp+B8h] [rbp+58h] BYREF

  v30 = a3;
  v4 = *a3;
  v28 = 0LL;
  v25 = 0LL;
  LODWORD(v26) = 0;
  v8 = (unsigned __int64)*a2 << 32;
  memset(v27, 0, sizeof(v27));
  v9 = sub_1402CCC50(v8);
  v10 = *(_QWORD *)(a1 + 248);
  v29 = ((unsigned __int64)(*(_WORD *)(a1 + 204) & 0xF) << 12) | v9 & 0xFFFFFFFFFFFF0FFFuLL;
  v12 = sub_14025F6B0(v10, &v29, v4, v11 != 0 ? 38 : 32);
  if ( v12 )
  {
    v13 = v29;
    if ( qword_140C50780 && (v29 & 0x10) == 0 )
      v13 = v29 & ~qword_140C50780;
    v14 = HIDWORD(v13);
  }
  else
  {
    if ( a4 )
    {
      v20 = (char *)&v25;
      v19 = *(_OWORD **)(a1 + 112);
      v16 = 0;
      LODWORD(v25) = *(_DWORD *)a1;
      v26 = *((_QWORD *)v19 + 2);
      v21 = a2;
    }
    else
    {
      v16 = *(_DWORD *)(a1 + 128);
      v17 = *(_DWORD *)(a1 + 124);
      if ( v17 < dword_140D051CC && *(_DWORD *)(a1 + 132) != v16 )
      {
        if ( v17 >= (unsigned int)dword_140D051CC >> 3 )
        {
          v18 = v17 + (v17 >> 1);
          v17 = dword_140D051CC;
          if ( v18 < dword_140D051CC )
            v17 = v18;
        }
        else
        {
          v17 *= 2;
        }
        *(_DWORD *)(a1 + 124) = v17;
      }
      v19 = v27;
      if ( v4 >= v17 )
        v4 = v17;
      if ( _bittest16((const signed __int16 *)(a1 + 204), 0xBu) )
        v4 = 1;
      sub_14037E3A0(a1, v27);
      v20 = (char *)v27 + 8;
      v21 = (unsigned int *)(a1 + 120);
    }
    v31 = *v21;
    v22 = sub_1405E58D0(v20, v4, &v31);
    v23 = a4 == 0;
    v12 = v22;
    LODWORD(v14) = v31;
    if ( v23 )
    {
      if ( v22 )
      {
        if ( v22 < v4 )
        {
          *(_DWORD *)(a1 + 124) = v22;
          *(_DWORD *)(a1 + 132) = v16;
        }
        *(_DWORD *)(a1 + 120) = v14 + v22;
      }
      v24 = (void *)sub_14037E128(a1, v19, 0LL);
      if ( v24 )
        ExFreePoolWithTag(v24, 0);
    }
    else
    {
      sub_140389840(a1, v31, v22);
    }
  }
  result = v30;
  *a2 = v14;
  *result = v12;
  return result;
}
