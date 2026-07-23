/*
 * XREFs of sub_140698510 @ 0x140698510
 * Callers:
 *     sub_140778100 @ 0x140778100 (sub_140778100.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14069717C @ 0x14069717C (sub_14069717C.c)
 *     sub_1406986FC @ 0x1406986FC (sub_1406986FC.c)
 *     sub_14069984C @ 0x14069984C (sub_14069984C.c)
 *     sub_14069A184 @ 0x14069A184 (sub_14069A184.c)
 *     sub_14077D784 @ 0x14077D784 (sub_14077D784.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140698510(__int64 a1, int a2, int a3, __int64 a4, _QWORD *a5, _DWORD *a6, unsigned int *a7)
{
  int v7; // r13d
  int v8; // esi
  int v9; // r12d
  char *v10; // r14
  PVOID v11; // rdi
  int v12; // ebx
  __int64 v13; // r9
  unsigned int *v14; // r15
  _DWORD *v15; // rsi
  _WORD *v16; // r12
  __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rcx
  int v26; // [rsp+50h] [rbp-20h]
  HANDLE Handle; // [rsp+58h] [rbp-18h] BYREF
  PVOID P; // [rsp+60h] [rbp-10h] BYREF
  char *v29; // [rsp+68h] [rbp-8h] BYREF
  unsigned int v31; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v32; // [rsp+C8h] [rbp+58h]

  v32 = a4;
  v7 = 0;
  Handle = 0LL;
  v8 = a4;
  v29 = 0LL;
  P = 0LL;
  v9 = 0;
  if ( a2 != 1 )
    v9 = a3;
  v31 = 0;
  v26 = v9;
  v10 = 0LL;
  v11 = 0LL;
  v12 = sub_14069984C(a2, a4, a3, 1, 0, a1, (__int64)&Handle);
  if ( v12 >= 0 )
  {
    v12 = sub_14069717C(v8, v9, (int)Handle, v13, (PVOID *)&v29, &v31);
    if ( v12 >= 0 && v31 )
    {
      v14 = a7;
      v15 = a6;
      v10 = v29;
      while ( 1 )
      {
        v29 = &v10[20 * v7];
        v12 = sub_1406986FC(v32, v9, (_DWORD)Handle, (int)v10 + 20 * v7, (__int64)&P);
        if ( v12 < 0
          || !*v14 && (v20 = (unsigned int)*v15, v21 = a5, *v14 = v31, v12 = sub_14069A184(v21, v20), v12 < 0) )
        {
          v11 = P;
          goto LABEL_13;
        }
        v11 = P;
        v16 = P;
        if ( *(_WORD *)P )
          break;
LABEL_10:
        ExFreePoolWithTag(v11, 0x58706E50u);
        v17 = (unsigned int)*v15;
        v18 = *v14;
        v11 = 0LL;
        P = 0LL;
        if ( (_DWORD)v17 != v18 || (v25 = a5, *v14 = 2 * v18, v12 = sub_14069A184(v25, v17), v12 >= 0) )
        {
          v9 = v26;
          v12 = sub_14077D784(v32, v26, (_DWORD)Handle, (_DWORD)v29, a2, 0LL, *a5 + 48LL * (unsigned int)*v15);
          if ( v12 >= 0 )
          {
            ++*v15;
            if ( ++v7 < v31 )
              continue;
          }
        }
        goto LABEL_13;
      }
      v22 = (unsigned int)*v15;
      while ( 1 )
      {
        if ( (_DWORD)v22 == *v14 )
        {
          v23 = a5;
          *v14 *= 2;
          v12 = sub_14069A184(v23, v22);
          if ( v12 < 0 )
            break;
        }
        v12 = sub_14077D784(v32, v26, (_DWORD)Handle, (_DWORD)v29, a2, (__int64)v16, *a5 + 48LL * (unsigned int)*v15);
        if ( v12 < 0 )
          break;
        v22 = (unsigned int)++*v15;
        v24 = -1LL;
        do
          ++v24;
        while ( v16[v24] );
        v16 += v24 + 1;
        if ( !*v16 )
          goto LABEL_10;
      }
    }
    else
    {
      v10 = v29;
    }
  }
LABEL_13:
  if ( Handle )
    ZwClose(Handle);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x58706E50u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x58706E50u);
  return (unsigned int)v12;
}
