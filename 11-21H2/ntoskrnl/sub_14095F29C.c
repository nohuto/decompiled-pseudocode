/*
 * XREFs of sub_14095F29C @ 0x14095F29C
 * Callers:
 *     sub_14095F204 @ 0x14095F204 (sub_14095F204.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14082045C @ 0x14082045C (sub_14082045C.c)
 *     sub_140820DCC @ 0x140820DCC (sub_140820DCC.c)
 *     sub_140821830 @ 0x140821830 (sub_140821830.c)
 *     sub_140821D18 @ 0x140821D18 (sub_140821D18.c)
 *     sub_14095ECBC @ 0x14095ECBC (sub_14095ECBC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14095F29C(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, int a5)
{
  __int64 v8; // r8
  int v9; // ebx
  int v10; // ecx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // rax
  void *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r10
  __int64 v19; // rcx
  char v20; // al
  int v21; // eax
  unsigned int v23; // [rsp+30h] [rbp-69h] BYREF
  PVOID P; // [rsp+38h] [rbp-61h] BYREF
  PVOID v25[2]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v26[8]; // [rsp+50h] [rbp-49h] BYREF
  __int128 v27; // [rsp+90h] [rbp-9h] BYREF
  __int128 v28; // [rsp+A0h] [rbp+7h]

  v23 = 0;
  P = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  memset(v26, 0, sizeof(v26));
  v25[0] = 0LL;
  a4[2] = 0;
  a4[3] = 0;
  a4[4] = 32;
  if ( !a1 || (v8 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) == 0 )
    return (unsigned int)-1073741810;
  switch ( *(_BYTE *)(a2 + 20) )
  {
    case 1:
      goto LABEL_9;
    case 2:
      goto LABEL_11;
    case 3:
LABEL_9:
      if ( !*(_DWORD *)(a2 + 32) )
        return 0;
      goto LABEL_11;
  }
  if ( *(_BYTE *)(a2 + 20) != 4 )
  {
    if ( *(_BYTE *)(a2 + 20) != 7 )
      return (unsigned int)-1073741811;
    goto LABEL_9;
  }
LABEL_11:
  v10 = *(_DWORD *)(v8 + 456);
  v11 = *(_QWORD *)(v8 + 440);
  if ( v10 == -1 )
  {
    if ( !v11 || (v10 = *(_DWORD *)(v11 + 4), v10 == -1) )
      v10 = 1;
  }
  v12 = v10;
  if ( v10 == 8 )
    v12 = 1;
  *(_DWORD *)(a2 + 4) = v12;
  v13 = *(_DWORD *)(v8 + 460);
  if ( v13 == -1 )
  {
    if ( !v11 || (v13 = *(_DWORD *)(v11 + 8), v13 == -1) )
      v13 = 0;
  }
  *(_DWORD *)(a2 + 8) = v13;
  v14 = sub_140821D18(0xFFFFFFFFLL, (_DWORD *)a2, 0);
  v15 = v14;
  if ( v14 )
  {
    HIDWORD(v26[1]) = -1;
    v26[0] = a1;
    v26[3] = v14;
    v9 = sub_140820DCC((__int64)v26, v25);
    if ( v9 >= 0 )
    {
      if ( v25[0]
        && (v16 = *((_QWORD *)v25[0] + 5), *((_QWORD *)v25[0] + 2) = (char *)v25[0] + 40, *(_DWORD *)(v16 + 20) == 1)
        && (v17 = *(_QWORD *)(v16 + 24), *(_BYTE *)(v17 + 8)) )
      {
        v18 = *(_QWORD *)(v17 + 288);
        v19 = *(_QWORD *)(*(_QWORD *)(v17 + 32) + 64LL);
        v20 = *(_BYTE *)(v19 + 1);
        if ( v20 == (char)0x80 || v20 == -16 )
          v19 += 32LL;
        *((_QWORD *)&v27 + 1) = v19;
        *(_QWORD *)&v28 = &v23;
        *(_QWORD *)&v27 = a1;
        *((_QWORD *)&v28 + 1) = &P;
        v21 = sub_140821830(v18, 6LL, &v27);
        v9 = v21;
        if ( v21 < 0 )
        {
          if ( v21 == -1073741172 )
            v9 = sub_14095ECBC(0LL, 0, 0LL, (__int64)a4, a5, 4);
        }
        else
        {
          v9 = sub_14095ECBC(a1, v23, P, (__int64)a4, a5, 0);
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
      }
      else
      {
        v9 = -1073741811;
      }
    }
    ExFreePoolWithTag(v15, 0);
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v25[0] )
    sub_14082045C((_QWORD *)v25[0]);
  return (unsigned int)v9;
}
