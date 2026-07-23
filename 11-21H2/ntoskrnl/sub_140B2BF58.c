/*
 * XREFs of sub_140B2BF58 @ 0x140B2BF58
 * Callers:
 *     sub_140B2BE4C @ 0x140B2BE4C (sub_140B2BE4C.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B2C034 @ 0x140B2C034 (sub_140B2C034.c)
 *     sub_140B534DC @ 0x140B534DC (sub_140B534DC.c)
 *     sub_140B53550 @ 0x140B53550 (sub_140B53550.c)
 */

__int64 __fastcall sub_140B2BF58(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rsi
  unsigned int v4; // edx
  unsigned int v5; // ecx
  _WORD *v6; // rbx
  int v7; // ebx
  unsigned int *Pool2; // rax
  unsigned int *v10; // rbp
  ULONG_PTR v11; // rdx
  unsigned int v12; // r9d
  unsigned int *v13; // rax
  unsigned int *v14; // rbp
  unsigned int v15; // ecx
  unsigned __int64 v16; // r8
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned __int64 v19; // rax

  v2 = (unsigned int)BugCheckParameter3;
  if ( (unsigned int)BugCheckParameter3 < 0x10 )
    goto LABEL_14;
  v4 = *(_DWORD *)(BugCheckParameter2 + 8);
  v5 = *(_DWORD *)(BugCheckParameter2 + 12);
  if ( (v4 == 0) != (v5 == 0)
    || v4 >= (unsigned int)v2
    || v5 >= (unsigned int)v2
    || v5 - 1 <= 0x3E
    || v5 + v4 > (unsigned int)v2 )
  {
    goto LABEL_14;
  }
  v6 = 0LL;
  unk_140C5AFD8 = *(_OWORD *)BugCheckParameter2;
  qword_140C5AFE8 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( *(_DWORD *)(BugCheckParameter2 + 12) )
    v6 = (_WORD *)(BugCheckParameter2 + *(unsigned int *)(BugCheckParameter2 + 8));
  sub_140B2C034(v6);
  if ( (dword_140C5AFDC & 8) != 0 )
    sub_140B53550();
  if ( !v6 )
    return 0;
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, *(unsigned int *)(BugCheckParameter2 + 12), 0x62536553u);
  v10 = Pool2;
  if ( !Pool2 )
  {
LABEL_31:
    v7 = -1073741670;
    goto LABEL_32;
  }
  memmove(Pool2, v6, *(unsigned int *)(BugCheckParameter2 + 12));
  qword_140D01440 = v10;
  if ( !v6[18] && !v6[19] )
    return 0;
  qword_140D04980 = (__int64)v10 + v10[13] + 60;
  v7 = sub_140B534DC();
  if ( v7 < 0 )
  {
LABEL_32:
    if ( qword_140D01440 )
    {
      ExFreePoolWithTag(qword_140D01440, 0);
      qword_140D01440 = 0LL;
    }
    KeBugCheckEx(0x145u, v7, BugCheckParameter2, v2, 0LL);
  }
  if ( *(_DWORD *)BugCheckParameter2 >= 2u )
  {
    v11 = *(unsigned int *)(BugCheckParameter2 + 20);
    if ( (_DWORD)v11 )
    {
      if ( (unsigned int)v11 < (unsigned int)v2 )
      {
        v12 = *(_DWORD *)(BugCheckParameter2 + 16);
        if ( v12 < (unsigned int)v2 && v12 <= (int)v2 - (int)v11 )
        {
          v13 = (unsigned int *)ExAllocatePool2(64LL, v11, 0x62536553u);
          v14 = v13;
          if ( v13 )
          {
            memmove(
              v13,
              (const void *)(BugCheckParameter2 + *(unsigned int *)(BugCheckParameter2 + 16)),
              *(unsigned int *)(BugCheckParameter2 + 20));
            v15 = *(_DWORD *)(BugCheckParameter2 + 20);
            if ( v15 >= 0x18 )
            {
              v16 = 276LL * *v14;
              v17 = v15 - 24;
              *((_QWORD *)v14 + 1) = v14 + 6;
              if ( v16 <= 0xFFFFFFFF && v17 >= (unsigned int)v16 )
              {
                v18 = v17 - v16;
                v19 = 32LL * v14[1];
                if ( v19 <= 0xFFFFFFFF )
                {
                  v7 = 0;
                  if ( v18 >= (unsigned int)v19 )
                  {
                    *((_QWORD *)v14 + 2) = (char *)v14 + (unsigned int)v16 + 24;
                    LODWORD(dword_140C1B558) = *(_DWORD *)(BugCheckParameter2 + 20);
                    qword_140C1B560 = v14;
                    return (unsigned int)v7;
                  }
                }
              }
            }
            goto LABEL_14;
          }
          goto LABEL_31;
        }
      }
LABEL_14:
      v7 = -1069350909;
      goto LABEL_32;
    }
  }
  return (unsigned int)v7;
}
