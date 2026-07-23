/*
 * XREFs of sub_1405C0D40 @ 0x1405C0D40
 * Callers:
 *     sub_140589518 @ 0x140589518 (sub_140589518.c)
 *     sub_1405C14D4 @ 0x1405C14D4 (sub_1405C14D4.c)
 *     sub_1406F3A44 @ 0x1406F3A44 (sub_1406F3A44.c)
 *     sub_14096DAE0 @ 0x14096DAE0 (sub_14096DAE0.c)
 * Callees:
 *     sub_140235E10 @ 0x140235E10 (sub_140235E10.c)
 *     sub_140263558 @ 0x140263558 (sub_140263558.c)
 *     sub_14026446C @ 0x14026446C (sub_14026446C.c)
 *     sub_1402646FC @ 0x1402646FC (sub_1402646FC.c)
 *     sub_1402660E4 @ 0x1402660E4 (sub_1402660E4.c)
 *     sub_140268620 @ 0x140268620 (sub_140268620.c)
 *     sub_14026A28C @ 0x14026A28C (sub_14026A28C.c)
 *     sub_14028CF90 @ 0x14028CF90 (sub_14028CF90.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 *     sub_14033D7D0 @ 0x14033D7D0 (sub_14033D7D0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405B7574 @ 0x1405B7574 (sub_1405B7574.c)
 *     sub_1405B7E7C @ 0x1405B7E7C (sub_1405B7E7C.c)
 *     sub_1405C11C0 @ 0x1405C11C0 (sub_1405C11C0.c)
 *     sub_1405C2478 @ 0x1405C2478 (sub_1405C2478.c)
 *     sub_140982F64 @ 0x140982F64 (sub_140982F64.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405C0D40(unsigned int *a1)
{
  unsigned int v2; // r15d
  __int64 v3; // rdi
  BOOL v4; // r12d
  unsigned int v5; // ecx
  __int64 *v6; // rdx
  unsigned int v7; // r13d
  __int64 v8; // r14
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  _QWORD **v11; // r14
  _QWORD *v12; // rdx
  _QWORD *v13; // rbx
  __int64 result; // rax
  unsigned __int64 *i; // rdi
  __int64 v16; // rcx
  int v17; // eax
  _DWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned __int64 **v21; // rax
  __int64 *v22; // rbx
  unsigned __int64 *v23; // rdx
  unsigned __int64 *v24; // rcx
  unsigned __int64 *v25; // rcx
  __int64 v26; // r14
  unsigned int v27; // edx
  __int64 *v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  __int64 *v31; // [rsp+28h] [rbp-E0h] BYREF
  int v32; // [rsp+30h] [rbp-D8h]
  int v33; // [rsp+34h] [rbp-D4h]
  __int64 v34; // [rsp+38h] [rbp-D0h]
  __int64 v35; // [rsp+48h] [rbp-C0h] BYREF
  int v36; // [rsp+50h] [rbp-B8h]
  _DWORD v37[32]; // [rsp+54h] [rbp-B4h] BYREF
  _BYTE v38[96]; // [rsp+D8h] [rbp-30h] BYREF

  memset(v37, 0, sizeof(v37));
  memset(v38, 0, sizeof(v38));
  v2 = 0;
  v3 = 0LL;
  v4 = KeGetCurrentIrql() != 2 && (KeGetPcr()[36].Unused0[2] & 0x10001) == 0;
  v5 = a1[9];
  v35 = 1LL;
  v36 = 16;
  v32 = sub_14033D7D0(v5);
  if ( *((_QWORD *)a1 + 9) >= *((_QWORD *)a1 + 2) )
    goto LABEL_19;
  do
  {
    sub_1405C2478(a1, v38);
    v6 = qword_14001C780;
    v33 = 0;
    v31 = qword_14001C780;
    v7 = 0;
    v8 = 0LL;
    do
    {
      while ( 1 )
      {
        v9 = &v38[v8];
        v10 = *(_QWORD **)&v38[v8];
        if ( (_QWORD *)*v9 == v9 )
          break;
        v33 = 1;
        if ( (_QWORD *)v10[1] != v9 || (v16 = *v10, *(_QWORD **)(*v10 + 8LL) != v10) )
LABEL_44:
          __fastfail(3u);
        *v9 = v16;
        *(_QWORD *)(v16 + 8) = v9;
        --v9[2];
        if ( (*a1 & 8) == 0 && (v10[2] & 0x3E0LL) != 0 )
          v2 = 1;
        v34 = *v6;
        LOBYTE(v17) = sub_140268620((__int64)v10);
        if ( v17 && (dword_140D0689C & 0x200000) != 0 )
        {
          if ( (unsigned int)sub_1405B7574(
                               (__int64)&v35,
                               0xAAAAAAAAAAAAAAABuLL * ((__int64)(v10 + 0x44000000000LL) >> 4),
                               v7) )
            sub_1405B7E7C((unsigned int *)&v35);
          v10[2] = sub_14033B6A0(v10[2], 0LL);
        }
        if ( v2 )
        {
          v2 = 0;
          if ( v3 )
            goto LABEL_38;
          if ( v4 )
          {
            v18 = (_DWORD *)sub_140263558(a1[8], v32);
            v3 = (__int64)v18;
            if ( v18 )
            {
              *v18 = 2;
LABEL_38:
              sub_1402660E4(v3, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v10 + 0x44000000000LL) >> 4), v34);
              goto LABEL_43;
            }
          }
          sub_14026A28C((__int64)v10, v7, v32);
        }
        else
        {
          v2 = 0;
        }
        v19 = v8 + *((_QWORD *)a1 + 10);
        v20 = *(_QWORD **)(v19 + 8);
        if ( *v20 != v19 )
          goto LABEL_44;
        *v10 = v19;
        v10[1] = v20;
        *v20 = v10;
        *(_QWORD *)(v19 + 8) = v10;
        ++*(_QWORD *)(v8 + *((_QWORD *)a1 + 10) + 16);
LABEL_43:
        v6 = v31;
      }
      ++v6;
      ++v7;
      v8 += 24LL;
      v31 = v6;
    }
    while ( v7 < 4 );
  }
  while ( v33 && *((_QWORD *)a1 + 9) < *((_QWORD *)a1 + 2) );
  if ( HIDWORD(v35) )
    sub_1405B7E7C((unsigned int *)&v35);
  if ( v3 )
  {
    sub_14026446C((char *)v3);
    if ( *(_DWORD *)(v3 + 8) )
    {
      v11 = (_QWORD **)(v3 + 120);
      do
      {
        v12 = *v11;
        if ( *v11 != v11 )
        {
          do
          {
            v13 = (_QWORD *)*v12;
            sub_1405C11C0(*((_QWORD *)a1 + 10));
            v12 = v13;
          }
          while ( v13 != v11 );
        }
        v11 += 6;
        ++v2;
      }
      while ( v2 < *(_DWORD *)(v3 + 8) );
    }
    sub_1402646FC((volatile signed __int32 *)v3);
  }
LABEL_19:
  result = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 9) != result )
  {
    if ( v4 )
    {
      result = *a1;
      if ( (result & 0x10) == 0 )
      {
        v31 = 0LL;
        sub_140982F64(a1, &v31);
        result = (__int64)v31;
        i = 0LL;
        while ( result )
        {
          i = (unsigned __int64 *)result;
          result = *(_QWORD *)result;
        }
        while ( i )
        {
          v21 = (unsigned __int64 **)i[1];
          v22 = (__int64 *)(i - 3);
          v23 = i;
          v24 = i;
          if ( v21 )
          {
            v25 = *v21;
            for ( i = (unsigned __int64 *)i[1]; v25; v25 = (unsigned __int64 *)*v25 )
              i = v25;
          }
          else
          {
            while ( 1 )
            {
              i = (unsigned __int64 *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !i || (unsigned __int64 *)*i == v24 )
                break;
              v24 = i;
            }
          }
          RtlAvlRemoveNode((unsigned __int64 *)&v31, v23);
          v26 = *v22;
          if ( *((_BYTE *)v22 + 16) )
          {
            v27 = 0;
            v28 = qword_14001C780;
            do
            {
              if ( v22[1] == *v28 )
                break;
              ++v27;
              ++v28;
            }
            while ( v27 < 3 );
            sub_14028CF90(*v22, v27);
          }
          ExFreePoolWithTag(v22, 0);
          v29 = sub_140235E10(48 * v26 - 0x220000000000LL);
          v30 = *((_QWORD *)a1 + 10);
          *((_QWORD *)a1 + 9) += qword_14001C780[v29];
          result = sub_1405C11C0(v30);
        }
      }
    }
  }
  return result;
}
