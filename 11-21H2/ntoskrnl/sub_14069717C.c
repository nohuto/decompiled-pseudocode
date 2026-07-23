/*
 * XREFs of sub_14069717C @ 0x14069717C
 * Callers:
 *     sub_140698510 @ 0x140698510 (sub_140698510.c)
 *     sub_14094A034 @ 0x14094A034 (sub_14094A034.c)
 * Callees:
 *     sub_14069726C @ 0x14069726C (sub_14069726C.c)
 *     sub_140698AAC @ 0x140698AAC (sub_140698AAC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14069717C(int a1, int a2, int a3, __int64 a4, PVOID *a5, _DWORD *a6)
{
  unsigned __int64 v9; // rbx
  __int64 Pool2; // rax
  int v11; // r9d
  unsigned __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-48h]

  v9 = 6000LL;
  *a5 = 0LL;
  while ( 1 )
  {
    if ( *a5 )
      ExFreePoolWithTag(*a5, 0x58706E50u);
    Pool2 = ExAllocatePool2(256LL, v9, 1483763280LL);
    *a5 = (PVOID)Pool2;
    if ( !Pool2 )
    {
      v14 = -1073741670;
      goto LABEL_11;
    }
    *a6 = 0;
    v12 = v9 / 0x14;
    if ( a2 )
    {
      v13 = sub_14069726C(qword_140D00AC0, a1, a2, a3, v17, 1, Pool2, v12, (__int64)a6);
    }
    else
    {
      LOBYTE(v11) = 1;
      v13 = sub_140698AAC(qword_140D00AC0, a3, 0, v11, Pool2, v12, (__int64)a6);
    }
    v14 = v13;
    if ( v13 != -1073741789 )
      break;
    v16 = (unsigned int)*a6;
    if ( (unsigned __int64)(20 * v16) > 0xFFFFFFFF )
    {
      v14 = -1073741675;
      goto LABEL_11;
    }
    v9 = (unsigned int)(20 * v16);
  }
  if ( v13 >= 0 )
    goto LABEL_9;
LABEL_11:
  *a6 = 0;
LABEL_9:
  if ( !*a6 && *a5 )
  {
    ExFreePoolWithTag(*a5, 0x58706E50u);
    *a5 = 0LL;
  }
  return v14;
}
