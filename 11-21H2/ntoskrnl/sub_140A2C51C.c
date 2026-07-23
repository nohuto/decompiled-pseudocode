/*
 * XREFs of sub_140A2C51C @ 0x140A2C51C
 * Callers:
 *     sub_1406BD260 @ 0x1406BD260 (sub_1406BD260.c)
 *     sub_140A24D6C @ 0x140A24D6C (sub_140A24D6C.c)
 * Callees:
 *     sub_1407720B8 @ 0x1407720B8 (sub_1407720B8.c)
 *     sub_140A2A3F4 @ 0x140A2A3F4 (sub_140A2A3F4.c)
 *     sub_140A2A470 @ 0x140A2A470 (sub_140A2A470.c)
 *     sub_140A2C72C @ 0x140A2C72C (sub_140A2C72C.c)
 *     sub_140A2C7A8 @ 0x140A2C7A8 (sub_140A2C7A8.c)
 *     sub_140A2C910 @ 0x140A2C910 (sub_140A2C910.c)
 */

__int64 __fastcall sub_140A2C51C(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        ULONG a8)
{
  unsigned int v11; // edi
  __int64 **v12; // r9
  unsigned int v13; // r10d
  __int64 *v14; // rdx
  __int64 v15; // rcx
  __int64 (**v16)[6]; // rdx
  unsigned int v17; // r9d
  __int64 *v18; // r8
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  __int64 **v23; // r8
  unsigned int v24; // edx
  __int64 *v25; // r9
  __int64 v26; // rcx

  v11 = -1073741802;
  if ( !a4 )
  {
    v12 = &off_140A39560;
    v13 = 0;
    while ( 1 )
    {
      v14 = *v12;
      if ( *v12 && *(_DWORD *)(a5 + 16) == *((_DWORD *)v14 + 4) )
      {
        v15 = *(_QWORD *)a5 - *v14;
        if ( *(_QWORD *)a5 == *v14 )
          v15 = *(_QWORD *)(a5 + 8) - v14[1];
        if ( !v15 )
          break;
      }
      ++v13;
      v12 += 3;
      if ( v13 >= 9 )
        goto LABEL_11;
    }
    v11 = sub_140A2C7A8(a1, (_DWORD)a2, (_DWORD)a3, a5, a6, a7, a8);
    if ( v11 == -1073741802 )
    {
LABEL_11:
      v16 = &off_140A39F60;
      v17 = 0;
      while ( 1 )
      {
        v18 = (__int64 *)*v16;
        if ( *(_DWORD *)(a5 + 16) == LODWORD((**v16)[2]) )
        {
          v19 = *(_QWORD *)a5 - *v18;
          if ( *(_QWORD *)a5 == *v18 )
            v19 = *(_QWORD *)(a5 + 8) - v18[1];
          if ( !v19 )
            break;
        }
        ++v17;
        v16 += 4;
        if ( v17 >= 0xD )
          goto LABEL_23;
      }
      if ( a6 < 2 )
        v20 = sub_140A2A470(a1, (__int64)a2, a3, a5);
      else
        v20 = sub_140A2C910(a1, a2, a3, a5, a6, a7, a8);
      v11 = v20;
      if ( v20 >= 0 )
      {
LABEL_31:
        sub_1407720B8(a1, (__int64)a2, 2, (__int64)a3, 0LL, a5);
        return v11;
      }
      if ( v20 != -1073741802 )
        return v11;
LABEL_23:
      if ( *(_DWORD *)(a5 + 16) != 2 )
        goto LABEL_33;
      v21 = *(_QWORD *)a5 - 0x49F5A2E2713D1703LL;
      if ( *(_QWORD *)a5 == 0x49F5A2E2713D1703LL )
        v21 = *(_QWORD *)(a5 + 8) - 0x5CDAF32E47561492LL;
      if ( v21 )
        goto LABEL_33;
      if ( a6 < 2 )
        v22 = sub_140A2A3F4(a1, a2);
      else
        v22 = sub_140A2C72C(a1, (int)a2, (int)v18, a6, a7, a8);
      v11 = v22;
      if ( v22 >= 0 )
        goto LABEL_31;
      if ( v22 == -1073741802 )
      {
LABEL_33:
        v23 = &off_140A38810;
        v24 = 0;
        while ( 1 )
        {
          v25 = *v23;
          if ( *(_DWORD *)(a5 + 16) == *((_DWORD *)*v23 + 4) )
          {
            v26 = *(_QWORD *)a5 - *v25;
            if ( *(_QWORD *)a5 == *v25 )
              v26 = *(_QWORD *)(a5 + 8) - v25[1];
            if ( !v26 )
              break;
          }
          ++v24;
          v23 += 2;
          if ( v24 >= 4 )
            return v11;
        }
        return (unsigned int)-1073741790;
      }
    }
  }
  return v11;
}
