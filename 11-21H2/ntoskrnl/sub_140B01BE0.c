/*
 * XREFs of sub_140B01BE0 @ 0x140B01BE0
 * Callers:
 *     sub_140B036D4 @ 0x140B036D4 (sub_140B036D4.c)
 * Callees:
 *     sub_140571FB4 @ 0x140571FB4 (sub_140571FB4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B01E40 @ 0x140B01E40 (sub_140B01E40.c)
 *     sub_140B01E7C @ 0x140B01E7C (sub_140B01E7C.c)
 *     sub_140B01F80 @ 0x140B01F80 (sub_140B01F80.c)
 */

__int64 __fastcall sub_140B01BE0(__int64 a1, char a2, __int64 a3)
{
  unsigned int v3; // r13d
  char *v5; // r12
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int8 v9; // bp
  unsigned __int8 *v10; // rbx
  unsigned int v11; // r15d
  unsigned __int8 v12; // si
  unsigned int j; // r8d
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 Pool2; // rax
  __int64 v17; // r14
  unsigned __int8 v18; // al
  _BYTE *v19; // rcx
  unsigned __int8 v20; // r9
  unsigned int v21; // ecx
  unsigned int v22; // r10d
  ULONG_PTR v23; // rbp
  unsigned __int8 v24; // si
  unsigned __int8 v25; // r15
  __int64 v26; // rax
  __int64 result; // rax
  unsigned int v28; // r8d
  unsigned int v29; // r10d
  unsigned int v30; // eax
  unsigned __int8 *v31; // rcx
  unsigned int v32; // edx
  __int64 v33; // r10
  __int64 v34; // r9
  char *v35; // rax
  __int64 i; // r8
  __int64 v37; // rcx
  __int64 v38; // [rsp+20h] [rbp-58h]
  PVOID P; // [rsp+38h] [rbp-40h]
  unsigned __int8 v40; // [rsp+80h] [rbp+8h] BYREF
  char v41; // [rsp+81h] [rbp+9h]
  unsigned int v42; // [rsp+90h] [rbp+18h] BYREF
  int v43; // [rsp+94h] [rbp+1Ch]
  int v44; // [rsp+98h] [rbp+20h]

  v43 = HIDWORD(a3);
  v41 = BYTE1(a1);
  v3 = 0;
  v42 = 0;
  v40 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = sub_140B01F80(a1, &v40);
  P = (PVOID)v7;
  if ( !v7 )
  {
    v6 = -1073741670;
LABEL_37:
    ExFreePoolWithTag(v5, 0x5049654Bu);
    v5 = 0LL;
    goto LABEL_33;
  }
  LOBYTE(v8) = v40;
  if ( (a2 & 1) != 0 || v40 <= 0x10u )
  {
    v9 = 1;
  }
  else if ( v40 > 0x18u )
  {
    if ( v40 > 0x28u )
    {
      v9 = 8;
      if ( v40 <= 0x30u )
        v9 = 6;
    }
    else
    {
      v9 = 4;
    }
  }
  else
  {
    v9 = 2;
  }
  v10 = (unsigned __int8 *)sub_140B01E7C(v7, v8, &v42);
  if ( !v10 )
    goto LABEL_35;
  v11 = v42;
  if ( v42 != 1 )
  {
    while ( 1 )
    {
      v28 = 255;
      v29 = -1;
      v30 = 0;
      if ( v11 )
      {
        v31 = v10 + 1;
        do
        {
          v32 = *v31;
          if ( (_BYTE)v32 && v32 <= v29 )
          {
            v28 = v30;
            v29 = *v31;
          }
          ++v30;
          v31 += 24;
        }
        while ( v30 < v11 );
      }
      v33 = 3LL * v28;
      if ( v9 <= v10[24 * v28 + 1] )
        break;
      if ( v28 == v11 - 1 || (v34 = v28 + 1, (unsigned int)v34 >= v11) )
      {
LABEL_57:
        LODWORD(v34) = -1;
      }
      else
      {
        v35 = (char *)&v10[24 * v34 + 1];
        while ( !*v35 )
        {
          LODWORD(v34) = v34 + 1;
          v35 += 24;
          if ( (unsigned int)v34 >= v11 )
            goto LABEL_57;
        }
      }
      if ( v28 )
      {
        for ( i = v28 - 1; !v10[24 * i + 1]; i = (unsigned int)(i - 1) )
        {
          if ( !(_DWORD)i )
            goto LABEL_64;
        }
      }
      else
      {
LABEL_64:
        LODWORD(i) = -1;
      }
      if ( (_DWORD)v34 == -1 )
      {
        if ( (_DWORD)i == -1 )
          break;
      }
      else
      {
        if ( (_DWORD)i != -1 && v10[24 * (unsigned int)i + 1] <= v10[24 * (unsigned int)v34 + 1] )
          LODWORD(v34) = i;
        LODWORD(i) = v34;
      }
      v37 = 3LL * (unsigned int)i;
      *(_QWORD *)&v10[8 * v37 + 8] |= *(_QWORD *)&v10[8 * v33 + 8];
      v10[8 * v37 + 1] += v10[8 * v33 + 1];
      *(_QWORD *)&v10[8 * v33 + 8] = 0LL;
      v10[8 * v33 + 1] = 0;
    }
  }
  v12 = 0;
  for ( j = 0; j < v11; ++j )
  {
    v14 = v10[24 * j + 1];
    if ( (_BYTE)v14 )
    {
      v15 = v14 / v9;
      v10[24 * j + 16] = v15;
      if ( !(_BYTE)v15 )
        sub_140571FB4(0x1002uLL, v10[24 * j]);
      v12 += v15;
    }
  }
  Pool2 = ExAllocatePool2(64LL, 16LL * v12 + 8, 0x5049654Bu);
  v17 = Pool2;
  v5 = (char *)Pool2;
  if ( !Pool2 || (*(_WORD *)Pool2 = 0, *(_BYTE *)(Pool2 + 2) = v12, v18 = 0, !v12) )
  {
    if ( v17 )
      goto LABEL_16;
LABEL_35:
    v6 = -1073741670;
    goto LABEL_30;
  }
  v19 = v5 + 8;
  do
  {
    *v19 = v18++;
    v19 += 16;
  }
  while ( v18 < v12 );
LABEL_16:
  v40 = 0;
  v20 = 0;
  if ( v11 )
  {
    do
    {
      v21 = v10[24 * v3 + 1];
      if ( (_BYTE)v21 )
      {
        v22 = v10[24 * v3 + 16];
        v23 = 16LL * v20 + v17 + 8;
        v44 = v21 / v22;
        v24 = v21 % v22;
        v25 = v44;
        v26 = v22;
        v38 = v22;
        do
        {
          if ( *(_BYTE *)(v23 + 1) < v25 )
          {
            do
              sub_140B01E40(v23);
            while ( *(_BYTE *)(v23 + 1) < v25 );
            v26 = v38;
          }
          if ( v24 )
          {
            sub_140B01E40(v23);
            v26 = v38;
            --v24;
          }
          v23 += 16LL;
          v38 = --v26;
        }
        while ( v26 );
        v11 = v42;
        if ( v24 )
          sub_140571FB4(0x1004uLL, v24);
        v20 = v10[24 * v3 + 16] + v40;
        v40 = v20;
      }
      ++v3;
    }
    while ( v3 < v11 );
  }
LABEL_30:
  ExFreePoolWithTag(P, 0x5049654Bu);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x5049654Bu);
  if ( v6 < 0 )
    goto LABEL_37;
LABEL_33:
  result = (unsigned int)v6;
  qword_140C2AEA0 = (__int64)v5;
  return result;
}
