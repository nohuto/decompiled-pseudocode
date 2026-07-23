/*
 * XREFs of sub_1403AF2D8 @ 0x1403AF2D8
 * Callers:
 *     sub_1403AEF40 @ 0x1403AEF40 (sub_1403AEF40.c)
 * Callees:
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char *__fastcall sub_1403AF2D8(int a1, int a2)
{
  char *v2; // r9
  char *Pool2; // r10
  unsigned __int64 v6; // rcx

  v2 = (char *)&unk_140CF75D0;
  Pool2 = (char *)&unk_140CF75D0 + 288 * (unsigned int)dword_140C54C00;
  while ( v2 < Pool2 )
  {
    if ( *((_DWORD *)v2 + 24) == a1 && *((_DWORD *)v2 + 22) == a2 )
      return v2;
    v2 += 288;
  }
  v6 = qword_140C54C10;
  if ( qword_140C54C10 )
  {
    while ( v6 < qword_140C54C10 + 288 * (unsigned __int64)(unsigned int)dword_140C54C04 )
    {
      if ( *(_DWORD *)(v6 + 96) == a1 && *(_DWORD *)(v6 + 88) == a2 )
        return (char *)v6;
      v6 += 288LL;
    }
  }
  if ( (unsigned int)dword_140C54C00 < 0x10 )
  {
    ++dword_140C54C00;
  }
  else if ( dword_140C54C04 >= (unsigned int)dword_140C54C08 )
  {
    Pool2 = (char *)ExAllocatePool2(64LL, 288LL, 1265393992LL);
  }
  else
  {
    Pool2 = (char *)(qword_140C54C10 + 288LL * (unsigned int)dword_140C54C04++);
  }
  if ( !Pool2 )
    sub_14051E038(0, 30, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\kintrupt.c", 326);
  return Pool2;
}
