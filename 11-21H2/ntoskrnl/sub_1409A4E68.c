/*
 * XREFs of sub_1409A4E68 @ 0x1409A4E68
 * Callers:
 *     sub_1409A6C08 @ 0x1409A6C08 (sub_1409A6C08.c)
 * Callees:
 *     sub_1409A3220 @ 0x1409A3220 (sub_1409A3220.c)
 *     sub_1409A3648 @ 0x1409A3648 (sub_1409A3648.c)
 *     sub_1409A4D70 @ 0x1409A4D70 (sub_1409A4D70.c)
 *     sub_1409A556C @ 0x1409A556C (sub_1409A556C.c)
 *     sub_1409A8428 @ 0x1409A8428 (sub_1409A8428.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409A4E68(__int64 a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 i; // r10
  __int64 *v12; // r10
  unsigned int v13; // ecx
  _DWORD *Pool2; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // r11
  __int64 j; // r10
  _QWORD *v21; // r10
  __int64 v23; // rdx
  _QWORD *v24; // r8
  unsigned int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v28[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0;
  v27 = 0LL;
  v28[0] = 0LL;
  if ( a4 )
  {
    if ( !(unsigned __int8)sub_1409A556C(a1, a3, &v27) )
    {
      v9 = 818LL;
LABEL_28:
      v4 = -1073741275;
      goto LABEL_29;
    }
    v10 = v27 + 48;
    for ( i = *(_QWORD *)(v27 + 48); i != v10; i = *v12 )
    {
      if ( (int)sub_1409A3220(v28, a1, *(_DWORD *)(i - 8)) >= 0 && *(_DWORD *)(v28[0] + 28LL) == a2[7] )
      {
        v4 = -1073741270;
        v9 = 861LL;
        goto LABEL_29;
      }
    }
    if ( a2[8] == -1 )
    {
      v4 = -1073741675;
      v9 = 874LL;
      goto LABEL_29;
    }
    v13 = a2[10];
    if ( v13 - 2 > 1 )
    {
      v4 = -1073741637;
      goto LABEL_31;
    }
    if ( v13 == 2 )
      sub_1409A3648(a1, a2, 1, 8u, 0x54416455u);
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 24LL, 1381004372LL);
    if ( !Pool2 )
    {
      v4 = -1073741670;
      v15 = 0xFFFFFFFFLL;
      v16 = 3221225626LL;
      v9 = 892LL;
      goto LABEL_30;
    }
    *Pool2 = a2[7];
    v17 = Pool2 + 2;
    v18 = *(_QWORD **)(v10 + 8);
    if ( *v18 == v10 )
    {
      *v17 = v10;
      v17[1] = v18;
      *v18 = v17;
      *(_QWORD *)(v10 + 8) = v17;
      ++a2[8];
      goto LABEL_31;
    }
    goto LABEL_38;
  }
  if ( !(unsigned __int8)sub_1409A556C(a1, a3, &v27) )
  {
    v9 = 934LL;
    goto LABEL_28;
  }
  v19 = v27 + 48;
  for ( j = *(_QWORD *)(v27 + 48); ; j = *v21 )
  {
    if ( j == v19 )
    {
      v9 = 978LL;
      goto LABEL_28;
    }
    if ( (int)sub_1409A3220(v28, a1, *(_DWORD *)(j - 8)) >= 0 && *(_DWORD *)(v28[0] + 28LL) == a2[7] )
      break;
  }
  v23 = *v21;
  if ( *(_QWORD **)(*v21 + 8LL) != v21 || (v24 = (_QWORD *)v21[1], (_QWORD *)*v24 != v21) )
LABEL_38:
    __fastfail(3u);
  *v24 = v23;
  *(_QWORD *)(v23 + 8) = v24;
  ExFreePoolWithTag(v21 - 1, 0x52507454u);
  v25 = a2[8];
  if ( v25 )
  {
    v26 = v25 - 1;
    a2[8] = v26;
    if ( !v26 )
    {
      a2[9] |= 0x24u;
      sub_1409A4D70(a1, 2);
    }
  }
  else
  {
    v4 = -1073741811;
    v9 = 1005LL;
LABEL_29:
    v16 = 0xFFFFFFFFLL;
    v15 = v4;
LABEL_30:
    sub_1409A8628("TtmiSetDisplayPowerRequest", v9, v15, v16);
  }
LABEL_31:
  sub_1409A8428(a2[7], a3, a4, v4);
  return v4;
}
