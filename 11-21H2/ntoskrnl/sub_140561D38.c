/*
 * XREFs of sub_140561D38 @ 0x140561D38
 * Callers:
 *     sub_14069760C @ 0x14069760C (sub_14069760C.c)
 *     sub_140697824 @ 0x140697824 (sub_140697824.c)
 * Callees:
 *     sub_1402202AC @ 0x1402202AC (sub_1402202AC.c)
 *     sub_1402D19D8 @ 0x1402D19D8 (sub_1402D19D8.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_14069A1F8 @ 0x14069A1F8 (sub_14069A1F8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140561D38(__int64 a1, void *a2, __int64 a3, _QWORD *a4)
{
  int v6; // edi
  _WORD *v7; // rcx
  __int64 v8; // r14
  _DWORD *Pool2; // rax
  _DWORD *v10; // rsi
  int v12; // [rsp+20h] [rbp-30h] BYREF
  PVOID P; // [rsp+28h] [rbp-28h]
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING v15; // [rsp+38h] [rbp-18h] BYREF

  P = 0LL;
  v12 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v6 = sub_14067B838(a2);
  if ( v6 >= 0 )
  {
    *((_WORD *)P + 3) = 0;
    if ( *(_QWORD *)(a1 + 16)
      && (unsigned int)(MEMORY[4] - 1) <= 1
      && sub_1402D19D8(MEMORY[8], MEMORY[0xC])
      && sub_1402202AC(v7, &v15, &v12) )
    {
      v6 = sub_14069A1F8(a1, v15.Buffer, &v14);
      if ( v6 >= 0 )
      {
        v8 = v14;
        Pool2 = (_DWORD *)ExAllocatePool2(
                            256LL,
                            (unsigned int)(*(_DWORD *)(v14 + 36) + 26 + MEMORY[0x10]),
                            1667526736LL);
        v10 = Pool2;
        if ( Pool2 )
        {
          *Pool2 = MEMORY[0];
          Pool2[4] = MEMORY[0x10];
          Pool2[1] = *(_DWORD *)(v8 + 32);
          Pool2[3] = *(_DWORD *)(v8 + 36);
          Pool2[2] = MEMORY[0x10] + 22;
          memmove(Pool2 + 5, (const void *)0x14, MEMORY[0x10]);
          *(_WORD *)(2 * ((unsigned __int64)MEMORY[0x10] >> 1) + 0x14) = 0;
          memmove((char *)v10 + (unsigned int)v10[2], *(const void **)(v8 + 40), *(unsigned int *)(v8 + 36));
          *a4 = v10;
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
    else
    {
      *a4 = 0LL;
    }
  }
  return (unsigned int)v6;
}
