/*
 * XREFs of sub_14021CD50 @ 0x14021CD50
 * Callers:
 *     sub_14021CA70 @ 0x14021CA70 (sub_14021CA70.c)
 *     sub_1402B1170 @ 0x1402B1170 (sub_1402B1170.c)
 *     sub_14032BD70 @ 0x14032BD70 (sub_14032BD70.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14039B280 (ExAcquireSharedWaitForExclusive.c)
 *     sub_14063D600 @ 0x14063D600 (sub_14063D600.c)
 * Callees:
 *     sub_14021CE94 @ 0x14021CE94 (sub_14021CE94.c)
 */

_QWORD *__fastcall sub_14021CD50(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, unsigned int a6)
{
  __int64 v6; // r10
  _QWORD *result; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r10
  _QWORD *v17; // r8
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rdx
  _QWORD *v20; // rax

  v6 = *(_QWORD *)(a1 + 48);
  result = (_QWORD *)(a1 + 48);
  if ( v6 != a2 )
  {
    v12 = 0LL;
    v13 = 0LL;
    if ( !v6 )
    {
      v13 = result;
      if ( a5 )
        v13 = 0LL;
    }
    v14 = v6 != 0;
    if ( !a6
      || (v15 = *(_QWORD *)(a1 + 16)) == 0
      || a6 >= *(_DWORD *)(v15 + 8)
      || (result = (_QWORD *)(v15 + 16LL * a6), *result != a2) )
    {
      v16 = *(_QWORD *)(a1 + 16);
      v17 = (_QWORD *)v16;
      if ( !v16
        || (v17 = (_QWORD *)(v16 + 16),
            v18 = *(unsigned int *)(a1 + 64) + (unsigned __int64)*(unsigned int *)(a1 + 72),
            v12 = (_QWORD *)(v16 + 16LL * *(unsigned int *)(v16 + 8)),
            v14 >= v18) )
      {
LABEL_9:
        if ( a4 )
        {
          if ( v13 || v17 < v12 && (v13 = v17) != 0LL )
          {
            v19 = v13;
            result = v13;
LABEL_14:
            *((_BYTE *)KeGetCurrentThread() + 1120) = ((__int64)v19 - v16) >> 4;
            return result;
          }
          sub_14021CE94(a1, a3, v17, v14);
        }
        return 0LL;
      }
      while ( *v17 != a2 )
      {
        if ( *v17 )
        {
          if ( ++v14 == v18 )
          {
            v17 += 2;
            goto LABEL_9;
          }
        }
        else
        {
          v20 = v17;
          if ( v13 )
            v20 = v13;
          v13 = v20;
        }
        v17 += 2;
        if ( v17 == v12 )
          goto LABEL_9;
      }
      v19 = v17;
      result = v17;
      goto LABEL_14;
    }
  }
  return result;
}
