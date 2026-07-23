/*
 * XREFs of sub_140A92E6C @ 0x140A92E6C
 * Callers:
 *     sub_140A81780 @ 0x140A81780 (sub_140A81780.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A930EC @ 0x140A930EC (sub_140A930EC.c)
 *     sub_140A93220 @ 0x140A93220 (sub_140A93220.c)
 */

__int64 sub_140A92E6C()
{
  int v1; // eax
  __int64 v2; // rbx
  __int64 Pool2; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  PVOID *v6; // rcx
  int v7; // eax

  if ( (dword_140C29FC0 & 0x8000000) == 0 )
    return 3221225474LL;
  if ( dword_140D575B0 )
    return 3221226538LL;
  if ( !(unsigned int)sub_140A930EC() )
    return 3221226537LL;
  memset(qword_140D5A790, 0, sizeof(qword_140D5A790));
  if ( dword_140D57558 )
    v1 = 24 * dword_140D57558;
  else
    v1 = 240000;
  dword_140D57558 = v1;
  v2 = 0LL;
  if ( (_DWORD)dword_140D06884 )
  {
    while ( (unsigned int)v2 < 0x800 )
    {
      Pool2 = ExAllocatePool2(64LL, 0x58uLL, 0x6D535442u);
      qword_140D5A790[v2] = Pool2;
      if ( !Pool2 )
        goto LABEL_15;
      *(_QWORD *)qword_140D5A790[v2] = ExAllocatePool2(64LL, (unsigned int)dword_140D57558, 0x62535442u);
      v4 = (_QWORD *)qword_140D5A790[v2];
      if ( !*v4 )
        goto LABEL_15;
      v4[1] = *v4;
      *(_QWORD *)(qword_140D5A790[v2] + 24) = 0LL;
      v5 = (_QWORD *)qword_140D5A790[v2];
      v2 = (unsigned int)(v2 + 1);
      v5[2] = *v5 + (unsigned int)dword_140D57558 + 1LL;
      if ( (unsigned int)v2 >= (unsigned int)dword_140D06884 )
        goto LABEL_13;
    }
    return 3221226537LL;
  }
LABEL_13:
  if ( !(unsigned int)sub_140A93220() )
  {
    if ( (unsigned int)v2 < 0x800 )
    {
      do
      {
LABEL_15:
        v6 = (PVOID *)qword_140D5A790[v2];
        if ( v6 )
        {
          if ( *v6 )
          {
            ExFreePoolWithTag(*v6, 0x62535442u);
            *(_QWORD *)qword_140D5A790[v2] = 0LL;
            v6 = (PVOID *)qword_140D5A790[v2];
          }
          ExFreePoolWithTag(v6, 0x6D535442u);
          qword_140D5A790[v2] = 0LL;
        }
        v7 = v2;
        v2 = (unsigned int)(v2 - 1);
      }
      while ( v7 );
    }
    return 3221226537LL;
  }
  dword_140D575B0 = 1;
  return 0LL;
}
