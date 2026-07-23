/*
 * XREFs of sub_14079D5B4 @ 0x14079D5B4
 * Callers:
 *     sub_1402ECEB0 @ 0x1402ECEB0 (sub_1402ECEB0.c)
 * Callees:
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     sub_14030EB80 @ 0x14030EB80 (sub_14030EB80.c)
 *     sub_140310450 @ 0x140310450 (sub_140310450.c)
 */

__int64 __fastcall sub_14079D5B4(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rdx
  int v10; // ecx
  struct _KTHREAD *v11; // rax
  struct _KTHREAD *CurrentThread; // rcx

  v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v8 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  if ( a4 == v8 && a3 == v7 )
  {
    *a5 = 0;
    if ( *a2 )
    {
      CurrentThread = KeGetCurrentThread();
      sub_140281A58((__int64)CurrentThread, *((_QWORD *)CurrentThread + 23));
      *a2 = 0;
    }
    return 0LL;
  }
  v10 = *(_DWORD *)(a1 + 48);
  if ( (v10 & 0x600000) == 0x600000 )
    return 3221225631LL;
  if ( (v10 & 0x70) != 0 )
  {
    if ( (v10 & 0x70) == 0x40 )
      goto LABEL_11;
    return 3221225631LL;
  }
  if ( (v10 & 0x200000) != 0 && ((v10 & 0x800000) != 0 || (v10 & 0x180000u) >= 0x100000) )
    return 3221225631LL;
LABEL_11:
  if ( a3 == v7 )
    *a5 = 1;
  else
    *a5 = (a4 != v8) + 2;
  if ( *a2 )
    return 0LL;
  v11 = KeGetCurrentThread();
  *a2 = 1;
  if ( (unsigned int)sub_140310450(*((_QWORD *)v11 + 23), a1) )
    return 0LL;
  return (unsigned int)sub_14030EB80(a1) != 0 ? -1073741664 : -1073741267;
}
