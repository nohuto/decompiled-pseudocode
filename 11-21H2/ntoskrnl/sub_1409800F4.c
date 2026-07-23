/*
 * XREFs of sub_1409800F4 @ 0x1409800F4
 * Callers:
 *     sub_1409806C8 @ 0x1409806C8 (sub_1409806C8.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402EE0C8 @ 0x1402EE0C8 (sub_1402EE0C8.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030FBE0 @ 0x14030FBE0 (sub_14030FBE0.c)
 *     sub_140319990 @ 0x140319990 (sub_140319990.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140595D50 @ 0x140595D50 (sub_140595D50.c)
 *     sub_1405A42BC @ 0x1405A42BC (sub_1405A42BC.c)
 *     sub_1405B9904 @ 0x1405B9904 (sub_1405B9904.c)
 *     sub_1405BC008 @ 0x1405BC008 (sub_1405BC008.c)
 *     sub_1406BF94C @ 0x1406BF94C (sub_1406BF94C.c)
 *     sub_1406EBA90 @ 0x1406EBA90 (sub_1406EBA90.c)
 *     sub_1406FC2F0 @ 0x1406FC2F0 (sub_1406FC2F0.c)
 *     sub_1406FC590 @ 0x1406FC590 (sub_1406FC590.c)
 *     sub_14096D6A8 @ 0x14096D6A8 (sub_14096D6A8.c)
 *     sub_14096D778 @ 0x14096D778 (sub_14096D778.c)
 *     sub_14096FEDC @ 0x14096FEDC (sub_14096FEDC.c)
 *     sub_140977E30 @ 0x140977E30 (sub_140977E30.c)
 *     sub_14097EE60 @ 0x14097EE60 (sub_14097EE60.c)
 *     sub_140980B94 @ 0x140980B94 (sub_140980B94.c)
 *     sub_140980DD8 @ 0x140980DD8 (sub_140980DD8.c)
 *     sub_140982DE4 @ 0x140982DE4 (sub_140982DE4.c)
 *     sub_140983978 @ 0x140983978 (sub_140983978.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409800F4(ULONG_PTR BugCheckParameter1, _QWORD *a2)
{
  _QWORD **v3; // r12
  int v4; // r15d
  _QWORD *j; // rdi
  _QWORD *i; // rax
  _QWORD **v8; // rax
  __int64 v9; // rbp
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  int v12; // r8d
  ULONG v13; // r9d
  SIZE_T v14; // rsi
  _QWORD ***v15; // rax
  __int64 v16; // r9
  _QWORD ***v17; // rbx
  int v18; // ecx
  unsigned int v19; // ecx
  int v20; // esi
  __int64 v21; // rax
  __int64 v22; // r9
  unsigned __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  _OWORD v28[3]; // [rsp+20h] [rbp-78h] BYREF

  memset(v28, 0, sizeof(v28));
  v3 = 0LL;
  v4 = 0;
  j = 0LL;
  for ( i = *(_QWORD **)(*((_QWORD *)KeGetCurrentThread() + 23) + 2008LL); i; i = (_QWORD *)*i )
    j = i;
  while ( 1 )
  {
    do
    {
      if ( !j )
        return sub_140980DD8(BugCheckParameter1, v3);
      v8 = (_QWORD **)j[1];
      v9 = (__int64)j;
      v10 = j;
      if ( v8 )
      {
        v11 = *v8;
        for ( j = (_QWORD *)j[1]; v11; v11 = (_QWORD *)*v11 )
          j = v11;
      }
      else
      {
        while ( 1 )
        {
          j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !j || (_QWORD *)*j == v10 )
            break;
          v10 = j;
        }
      }
    }
    while ( !sub_1405BC008(v9) );
    v12 = *(_DWORD *)(v9 + 48);
    v13 = 1818517846;
    v14 = (-(__int64)((v12 & 0x200000) != 0) & 0xFFFFFFFFFFFFFFB8uLL) + 136;
    if ( (v12 & 0x200000) == 0 && (v12 & 0x70) == 0x20 && (v12 & 0x400000) != 0 )
    {
      v13 = 1231315286;
      v14 = 8
          * (((unsigned __int64)*(unsigned int *)(***(_QWORD ***)(v9 + 72) + 8LL) >> 6)
           + ((*(_DWORD *)(***(_QWORD ***)(v9 + 72) + 8LL) & 0x3F) != 0)
           + 21LL);
    }
    v15 = (_QWORD ***)sub_1402828F0(64, v14, v13);
    v17 = v15;
    if ( !v15 )
    {
      v20 = -1073741670;
      goto LABEL_56;
    }
    memmove(v15, (const void *)v9, v14);
    v18 = *((_DWORD *)v17 + 12);
    if ( _bittest((const signed __int32 *)(v9 + 48), 0x15u) )
      v18 &= ~8u;
    else
      v17[14] = (_QWORD **)(BugCheckParameter1 | 1);
    v17[7] = (_QWORD **)((unsigned __int64)v17[7] & 0xF);
    v19 = v18 & 0xFFFFFFFC;
    *((_DWORD *)v17 + 9) = 0;
    v17[5] = 0LL;
    v17[1] = 0LL;
    *((_DWORD *)v17 + 12) = v19;
    if ( (v19 & 0x200000) == 0 && (v19 & 0x70) == 0x20 && (v19 & 0x1800000) != 0 )
      *((_DWORD *)v17 + 12) = v19 & 0xFE7FFFFF;
    v17[2] = (_QWORD **)-2LL;
    if ( (unsigned int)sub_140983978(v9) )
    {
      v20 = sub_1406FC590(**(_QWORD ***)(v9 + 72), BugCheckParameter1, 0);
      if ( v20 < 0 )
        goto LABEL_52;
    }
    if ( (unsigned int)sub_140319990((__int64)v17) )
    {
      v21 = *((unsigned int *)v17 + 13);
      LODWORD(v21) = v21 & 0x7FFFFFFF;
      if ( (v21 | ((unsigned __int64)*((unsigned __int8 *)v17 + 34) << 31)) < 0x7FFFFFFFDLL )
      {
        v20 = sub_1405A42BC((__int64)v17);
        if ( v20 < 0 )
          break;
      }
    }
    if ( (*(_DWORD *)(v9 + 48) & 8) != 0 )
    {
      v20 = sub_14096D6A8(v9, (__int64)v17);
      if ( v20 < 0 )
        goto LABEL_56;
    }
    if ( sub_1402EE0C8(v9, 128LL) )
    {
      sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v28, v22);
      v4 = 1;
      v20 = sub_14097EE60((__int64)v17);
      if ( v20 < 0 )
        goto LABEL_59;
    }
    if ( (*(_DWORD *)(v9 + 48) & 0x600000) == 0x600000 )
    {
      if ( !v4 )
      {
        sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v28, v22);
        v4 = 1;
      }
      v20 = sub_1406BF94C(BugCheckParameter1, (__int64)v17);
      if ( v20 < 0 )
        goto LABEL_59;
    }
    if ( sub_14030FBE0(v9) )
    {
      v23 = *(_DWORD *)(v9 + 52) & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(v9 + 34) << 31);
      v24 = (v23 ^ *((_DWORD *)v17 + 13)) & 0x7FFFFFFF;
      *((_BYTE *)v17 + 34) = v23 >> 31;
      *((_DWORD *)v17 + 13) ^= v24;
      v20 = sub_140982DE4(BugCheckParameter1, v17, 0LL, 1LL);
      if ( v20 < 0 )
        goto LABEL_56;
      ++*a2;
    }
    else
    {
      v25 = *(_DWORD *)(v9 + 48) & 0x70;
      if ( v25 == 32 )
      {
        v26 = sub_1405B9904(BugCheckParameter1, (__int64)v17, v9);
      }
      else
      {
        if ( v25 != 80 || !*(_QWORD *)(**(_QWORD **)(v9 + 72) + 64LL) )
          goto LABEL_47;
        v26 = sub_14096FEDC(v9);
      }
      v20 = v26;
      if ( v26 < 0 )
        goto LABEL_56;
    }
LABEL_47:
    if ( v4 )
    {
      sub_1402D0930((__int64)v28, 0LL);
      v4 = 0;
    }
    *v17 = v3;
    v3 = v17;
  }
  if ( (unsigned int)sub_140983978(v17) )
    sub_1406FC2F0(*v17[9], BugCheckParameter1, 0);
LABEL_52:
  ExFreePoolWithTag(v17, 0);
  v17 = 0LL;
LABEL_56:
  if ( !v4 )
    sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v28, v16);
  if ( v17 )
  {
LABEL_59:
    if ( (unsigned int)sub_140983978(v17) )
      sub_1406FC2F0(*v17[9], BugCheckParameter1, 0);
    sub_140977E30((__int64)v17);
    sub_14096D778(BugCheckParameter1, (__int64)v17, 4);
    sub_1406EBA90((__int64)v17);
    sub_140595D50((__int64)v17);
    ExFreePoolWithTag(v17, 0);
  }
  if ( v3 )
    sub_140980B94(v3);
  sub_1402D0930((__int64)v28, 0LL);
  return (unsigned int)v20;
}
