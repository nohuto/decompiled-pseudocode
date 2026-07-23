/*
 * XREFs of sub_14055EF20 @ 0x14055EF20
 * Callers:
 *     sub_14055E880 @ 0x14055E880 (sub_14055E880.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_14055E230 @ 0x14055E230 (sub_14055E230.c)
 *     sub_14055E6B0 @ 0x14055E6B0 (sub_14055E6B0.c)
 *     sub_140A32934 @ 0x140A32934 (sub_140A32934.c)
 *     sub_140A33390 @ 0x140A33390 (sub_140A33390.c)
 *     sub_140A333D0 @ 0x140A333D0 (sub_140A333D0.c)
 *     sub_140A33400 @ 0x140A33400 (sub_140A33400.c)
 */

__int64 __fastcall sub_14055EF20(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  __int128 v18; // [rsp+30h] [rbp-20h]
  __int128 v19; // [rsp+40h] [rbp-10h]

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( a1 )
  {
    if ( (_DWORD)a2 )
    {
      if ( a3 )
      {
        if ( a4 )
        {
          v6 = sub_140A32934(a1, a2, &v17);
          if ( v6 >= 0 )
          {
            if ( !(_DWORD)v17 )
              goto LABEL_26;
            if ( !(_QWORD)v18 )
              goto LABEL_26;
            if ( (DWORD2(v17) & 0xFFFF0000) != 0 )
              goto LABEL_26;
            v7 = sub_140A33400(&v17);
            v10 = sub_140A333D0(&v17, v8, v9, v7);
            v13 = v10;
            if ( !v12 || !v10 || *(_DWORD *)(v11 + 48) != 3 || *(_DWORD *)(v11 + 16) != 3 )
              goto LABEL_26;
            if ( MEMORY[0xFFFFF78000000014] < (__int64)v19 || MEMORY[0xFFFFF78000000014] > *((__int64 *)&v19 + 1) )
            {
              v6 = -1073740283;
              goto LABEL_27;
            }
            if ( *(_DWORD *)v12 != 8
              || RtlCompareMemory(*(const void **)(v12 + 8), &qword_14003B870, 8uLL) != 8
              || (v14 = *(_QWORD *)(v18 + 40), *(_WORD *)(v14 + 80) != 8)
              || RtlCompareMemory(*(const void **)(v14 + 72), &qword_14003B870, 8uLL) != 8 )
            {
LABEL_26:
              v6 = -1073740760;
              goto LABEL_27;
            }
            v6 = sub_14055E6B0(v15, (__int64)&v17, a4);
            if ( v6 >= 0 )
              v6 = sub_14055E230(v13, a3);
          }
        }
        else
        {
          v6 = -1073741582;
        }
      }
      else
      {
        v6 = -1073741583;
      }
    }
    else
    {
      v6 = -1073741584;
    }
  }
  else
  {
    v6 = -1073741585;
  }
LABEL_27:
  sub_140A33390(&v17);
  return (unsigned int)v6;
}
