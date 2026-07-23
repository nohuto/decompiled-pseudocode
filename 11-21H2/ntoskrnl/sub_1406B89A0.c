/*
 * XREFs of sub_1406B89A0 @ 0x1406B89A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402DCD64 @ 0x1402DCD64 (sub_1402DCD64.c)
 *     sub_1406974B8 @ 0x1406974B8 (sub_1406974B8.c)
 *     sub_1406C47D8 @ 0x1406C47D8 (sub_1406C47D8.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406B89A0(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int *a4,
        unsigned __int64 a5,
        __int64 a6,
        bool *a7)
{
  _WORD *v7; // rdi
  unsigned int *v9; // rsi
  void *Pool2; // rbx
  bool *v12; // r14
  unsigned int v13; // ebp
  unsigned int v15; // ecx
  unsigned int v16; // esi
  int v17; // eax
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = a1;
  v7 = (_WORD *)a5;
  v9 = (unsigned int *)a6;
  Pool2 = 0LL;
  if ( a5 )
    v7 = (_WORD *)(-(__int64)(*(_DWORD *)a6 != 0) & a5);
  else
    *(_DWORD *)a6 = 0;
  v12 = a7;
  if ( a7 )
    *a7 = 0;
  *a4 = 0;
  v13 = sub_14077FC64(a2, (__int64)v9);
  if ( v13 && v13 != -1073741789 || !v12 )
    return v13;
  v15 = *a4;
  if ( *a4 > 3 )
  {
    if ( v15 <= 6 )
      goto LABEL_22;
    if ( v15 != 7 )
    {
      if ( v15 - 8 > 3 )
      {
        *v12 = (_WORD)v15 == 25;
        return v13;
      }
LABEL_22:
      *v12 = 0;
      return v13;
    }
  }
  v16 = *v9;
  if ( v13 )
  {
    if ( v16 <= 0xFFFE )
    {
      while ( 1 )
      {
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        Pool2 = (void *)ExAllocatePool2(256LL, v16, 1380994640LL);
        if ( !Pool2 )
          break;
        LODWORD(v18) = v16;
        v17 = sub_14077FC64(a2, (__int64)&v18);
        if ( v17 != -1073741789 )
        {
          if ( v17 )
            goto LABEL_31;
          v7 = Pool2;
          goto LABEL_17;
        }
        if ( (unsigned int)v18 > v16 )
        {
          v16 = v18;
          if ( (unsigned int)v18 <= 0xFFFE )
            continue;
        }
        goto LABEL_31;
      }
    }
  }
  else
  {
LABEL_17:
    if ( (int)sub_1402DCD64(v7, v16, &v18) >= 0 && ((unsigned __int8)sub_1406C47D8(v7) || sub_1406974B8(v7)) )
      *v12 = 1;
    if ( Pool2 )
LABEL_31:
      ExFreePoolWithTag(Pool2, 0);
  }
  return v13;
}
