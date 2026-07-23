/*
 * XREFs of sub_140274C80 @ 0x140274C80
 * Callers:
 *     sub_140200D20 @ 0x140200D20 (sub_140200D20.c)
 *     sub_140213398 @ 0x140213398 (sub_140213398.c)
 *     sub_140274818 @ 0x140274818 (sub_140274818.c)
 *     sub_140274860 @ 0x140274860 (sub_140274860.c)
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     sub_1402CD9C0 @ 0x1402CD9C0 (sub_1402CD9C0.c)
 *     sub_1402E5D90 @ 0x1402E5D90 (sub_1402E5D90.c)
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_14031E200 @ 0x14031E200 (sub_14031E200.c)
 *     sub_1403D5614 @ 0x1403D5614 (sub_1403D5614.c)
 *     sub_1405941C0 @ 0x1405941C0 (sub_1405941C0.c)
 *     sub_1405A7D28 @ 0x1405A7D28 (sub_1405A7D28.c)
 *     sub_1405A8748 @ 0x1405A8748 (sub_1405A8748.c)
 *     sub_1405A89EC @ 0x1405A89EC (sub_1405A89EC.c)
 *     sub_1405A9744 @ 0x1405A9744 (sub_1405A9744.c)
 *     sub_1405AAA4C @ 0x1405AAA4C (sub_1405AAA4C.c)
 *     sub_1405ACB84 @ 0x1405ACB84 (sub_1405ACB84.c)
 *     sub_1405C4FB8 @ 0x1405C4FB8 (sub_1405C4FB8.c)
 * Callees:
 *     sub_14020DAE8 @ 0x14020DAE8 (sub_14020DAE8.c)
 */

__int64 __fastcall sub_140274C80(__int64 a1, unsigned __int64 a2)
{
  char v2; // r8
  char v3; // r8
  unsigned __int64 v4; // rax
  struct _KPRCB *CurrentPrcb; // rax
  char v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rcx
  char *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a1 + 184);
  v13 = 0;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = v2 & 7;
    if ( v7 )
    {
      if ( v7 == 7 )
      {
        v8 = (_QWORD *)((char *)CurrentPrcb + 38616);
      }
      else if ( v7 == 5 )
      {
        v8 = (_QWORD *)((char *)CurrentPrcb + 38592);
      }
      else
      {
        v8 = (_QWORD *)((char *)CurrentPrcb + 38664);
      }
    }
    else
    {
      v8 = (_QWORD *)((char *)CurrentPrcb + 38640);
    }
    return *v8 != 0;
  }
  v3 = v2 & 7;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL )
  {
    if ( !v3 )
    {
      if ( a2 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL) + 592LL);
        if ( v9 )
          return (*(_DWORD *)(v9 + 4 * ((a2 >> 3) & 0x1FF)) >> 30) & 1;
      }
      goto LABEL_3;
    }
    if ( a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v10 = sub_14020DAE8(a1, a2, &v13);
      return ((*(_DWORD *)v10 >> v13) & 2) != 0;
    }
  }
LABEL_3:
  v4 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    v11 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 8 * ((a2 >> 3) & 0x1FF));
      if ( (v12 & 0x20) != 0 )
        v4 |= 0x20uLL;
      if ( (v12 & 0x42) != 0 )
        v4 |= 0x42uLL;
    }
  }
  return (v4 >> 60) & 2;
}
