/*
 * XREFs of sub_140972818 @ 0x140972818
 * Callers:
 *     sub_140971DC0 @ 0x140971DC0 (sub_140971DC0.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1409C0550 @ 0x1409C0550 (sub_1409C0550.c)
 *     sub_1409C0580 @ 0x1409C0580 (sub_1409C0580.c)
 *     sub_1409C0794 @ 0x1409C0794 (sub_1409C0794.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140972818(__int64 a1, int a2, int a3, int a4, __int16 a5, _QWORD *a6, _QWORD *a7)
{
  char *v10; // rdi
  unsigned __int64 v11; // r14
  unsigned int v12; // ebx
  __int64 v13; // rax
  const void *v14; // rbx
  SIZE_T v15; // rsi
  char *v16; // rax
  _DWORD *v17; // rbx

  v10 = 0LL;
  v11 = (unsigned __int64)*(unsigned int *)(a1 + 16) << 12;
  if ( v11 > 0xFFFFFFFF )
  {
LABEL_2:
    v12 = -1073741701;
    goto LABEL_12;
  }
  v13 = sub_1409C0580(*(PVOID *)a1);
  v14 = (const void *)v13;
  if ( v13 )
  {
    v15 = *(unsigned int *)(v13 + 4);
    v16 = (char *)sub_1402828F0(64, v15, 0x4E495048u);
    v10 = v16;
    if ( v16 )
    {
      memmove(v16, v14, v15);
      v17 = (_DWORD *)sub_1409C0550(v10);
      if ( (unsigned __int8)sub_1409C0794((_DWORD)v10, (_DWORD)v17, a2, v11) )
      {
        if ( v17[3] == a3 && v17[2] == a4 )
        {
          *a7 = &v10[v17[6]];
          *a6 = v10;
          v10 = 0LL;
          v12 = 0;
        }
        else
        {
          v12 = -1073741735;
        }
        goto LABEL_12;
      }
      goto LABEL_2;
    }
    v12 = -1073741670;
  }
  else
  {
    v12 = -1073741701;
  }
LABEL_12:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v12;
}
