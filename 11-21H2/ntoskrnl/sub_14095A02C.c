/*
 * XREFs of sub_14095A02C @ 0x14095A02C
 * Callers:
 *     sub_140564C24 @ 0x140564C24 (sub_140564C24.c)
 *     sub_140747FB4 @ 0x140747FB4 (sub_140747FB4.c)
 *     sub_140958D9C @ 0x140958D9C (sub_140958D9C.c)
 * Callees:
 *     sub_1402D1EB4 @ 0x1402D1EB4 (sub_1402D1EB4.c)
 *     sub_1402D2774 @ 0x1402D2774 (sub_1402D2774.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14081FCD8 @ 0x14081FCD8 (sub_14081FCD8.c)
 *     sub_14081FECC @ 0x14081FECC (sub_14081FECC.c)
 *     sub_14081FF24 @ 0x14081FF24 (sub_14081FF24.c)
 *     sub_140854DB4 @ 0x140854DB4 (sub_140854DB4.c)
 *     sub_1409576F0 @ 0x1409576F0 (sub_1409576F0.c)
 *     sub_140959BF0 @ 0x140959BF0 (sub_140959BF0.c)
 *     sub_140959C24 @ 0x140959C24 (sub_140959C24.c)
 *     sub_14095A388 @ 0x14095A388 (sub_14095A388.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14095A02C(__int64 a1, void *a2, unsigned int a3, char a4)
{
  __int64 v5; // rsi
  void *v6; // rcx
  unsigned __int16 *v9; // r12
  _QWORD *Pool2; // rax
  _QWORD *v11; // rdi
  int v12; // ebx
  unsigned int v13; // r15d
  _DWORD *v14; // r12
  __int64 v15; // r13
  int v16; // eax
  unsigned int v17; // ecx
  unsigned __int64 v18; // r12
  _OWORD *v19; // rcx
  unsigned int v22; // [rsp+34h] [rbp-A5h] BYREF
  _QWORD *i; // [rsp+38h] [rbp-A1h]
  unsigned int v24; // [rsp+40h] [rbp-99h]
  size_t Size; // [rsp+48h] [rbp-91h]
  void *v26; // [rsp+50h] [rbp-89h]
  __int128 v27; // [rsp+58h] [rbp-81h] BYREF
  _OWORD v28[7]; // [rsp+70h] [rbp-69h] BYREF

  v5 = a3;
  v6 = *(void **)(a1 + 712);
  v26 = a2;
  v27 = 0LL;
  if ( v6 )
    memset(v6, 0, 0x58uLL);
  memset(v28, 0, sizeof(v28));
  v9 = (unsigned __int16 *)(a1 + 40);
  *((_QWORD *)&v28[2] + 1) = qword_140C46278;
  *((_QWORD *)&v28[1] + 1) = qword_140C46278;
  *((_QWORD *)&v28[3] + 1) = MEMORY[0xFFFFF78000000008];
  LOBYTE(v28[3]) = a4;
  sub_1402D2774(&stru_14003B730, (unsigned __int16 *)(a1 + 40));
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, (unsigned __int64)(unsigned int)dword_140C46010 << 6, 812674640LL);
  v11 = Pool2;
  if ( !Pool2 )
  {
    LODWORD(v28[1]) = 2;
    v12 = -1073741670;
    goto LABEL_16;
  }
  if ( (_DWORD)v5 )
    memmove(Pool2, a2, v5 << 6);
  v13 = 0;
  v14 = &v28[1];
  v22 = 0;
  v12 = 0;
  v15 = 0LL;
  Size = v5 << 6;
  v16 = (_DWORD)v11 + ((_DWORD)v5 << 6);
  for ( i = &v11[8 * v5]; ; v16 = (int)i )
  {
    DWORD1(v28[0]) = v15;
    v24 = v13;
    sub_140959C24(v15, a1, v16, &v22, a4, (__int64)v28);
    v13 = v22;
    if ( !(_DWORD)v5 && !a4 )
    {
      v17 = 0;
      if ( !v22 )
      {
LABEL_13:
        v12 = -1073741823;
        *((_DWORD *)&v28[1] + v15) = 4 - (*(_DWORD *)(a1 + 300) != 779);
LABEL_14:
        sub_140959BF0((ULONG_PTR)qword_140C46278);
        v18 = (unsigned __int64)i;
        goto LABEL_15;
      }
      while ( v11[8 * (unsigned __int64)v17] != *(_QWORD *)(a1 + 32) )
      {
        if ( ++v17 >= v22 )
          goto LABEL_13;
      }
    }
    if ( v24 != v22 )
      break;
    if ( !*v14 )
      *v14 = 5;
    if ( v12 != -1073739512 )
      v12 = -1073741823;
LABEL_29:
    v15 = (unsigned int)(v15 + 1);
    ++v14;
    if ( (unsigned int)v15 >= 2 )
      goto LABEL_14;
  }
  v12 = sub_14081FF24((__int64)v11, (unsigned int)v5 + v22, (__int64)&v27);
  if ( v12 < 0 )
  {
    if ( !*v14 )
      *v14 = 6;
    goto LABEL_29;
  }
  sub_14095A388(qword_140C46278);
  sub_140854DB4((_QWORD **)&v27);
  v18 = (unsigned __int64)i;
  if ( (_DWORD)v5 )
    sub_14081FCD8((unsigned __int64)v11, (unsigned __int64)i, 0);
  sub_14081FCD8(v18, (unsigned __int64)&v11[8 * (unsigned __int64)((unsigned int)v5 + v13)], 1);
  if ( (_DWORD)v5 )
    memmove(v26, v11, Size);
LABEL_15:
  sub_14081FECC(v18, (unsigned __int64)&v11[8 * (unsigned __int64)((unsigned int)v5 + v13)]);
  ExFreePoolWithTag(v11, 0x30706E50u);
  v9 = (unsigned __int16 *)(a1 + 40);
LABEL_16:
  sub_1409576F0(0, v12, (int *)v28);
  if ( DWORD1(v28[0]) == 1 )
    sub_1409576F0(1u, v12, (int *)v28);
  v19 = *(_OWORD **)(a1 + 712);
  if ( v12 >= 0 )
  {
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0x62655250u);
      *(_QWORD *)(a1 + 712) = 0LL;
    }
  }
  else if ( v19 )
  {
    *v19 = v28[0];
    v19[1] = v28[1];
    v19[2] = v28[2];
    v19[3] = v28[3];
    v19[4] = v28[4];
    *((_QWORD *)v19 + 10) = *(_QWORD *)&v28[5];
  }
  sub_1402D1EB4(&stru_14003B630, v9, v12);
  return (unsigned int)v12;
}
