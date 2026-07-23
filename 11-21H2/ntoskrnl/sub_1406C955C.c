/*
 * XREFs of sub_1406C955C @ 0x1406C955C
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406C9754 @ 0x1406C9754 (sub_1406C9754.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406C955C(__int64 a1)
{
  int v2; // edx
  __int64 v4; // r15
  unsigned int *PoolWithTag; // rax
  unsigned int *v6; // r14
  __int64 v7; // rdx
  unsigned int *v8; // rdx
  unsigned int *v9; // rcx
  unsigned int *i; // rax
  __int64 v11; // rax
  char *v12; // r8
  _DWORD Src[3]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v14; // [rsp+44h] [rbp-34h]

  v2 = ((unsigned __int64)qword_140D068D8 >> 34) & 4 | 1;
  if ( _bittest64(&qword_140D068D8, 0x23u) )
    v2 = ((unsigned __int64)qword_140D068D8 >> 34) & 4 | 3;
  *(_DWORD *)a1 = v2;
  *(_DWORD *)(a1 + 4) = *((_DWORD *)KeGetCurrentPrcb() + 58);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( !byte_140CE2190 )
  {
    v4 = 0LL;
    v14 = 0LL;
    Src[0] = 1094930505;
    Src[1] = 1;
    Src[2] = 1414088270;
    if ( (unsigned int)sub_1406C9754(Src) == -1073741789 )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0LL, 0x54425057u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = 1094930505;
        PoolWithTag[1] = 1;
        PoolWithTag[2] = 1414088270;
        PoolWithTag[3] = -16;
        if ( (int)sub_1406C9754(PoolWithTag) >= 0 )
        {
          v7 = v6[5];
          if ( (unsigned int)v7 >= 0xFFFFFFF0 )
          {
            v8 = (unsigned int *)((char *)v6 + v7 + 16);
            v9 = v6 + 14;
            for ( i = v6 + 15; i <= v8; i = (unsigned int *)(v12 + 4) )
            {
              v11 = *((unsigned __int16 *)v9 + 1);
              v12 = (char *)v9 + v11;
              if ( (unsigned int *)((char *)v9 + v11) > v8 || !(_WORD)v11 )
                break;
              if ( *(_WORD *)v9 == 7 && (unsigned int)v11 >= 0x10 )
              {
                if ( (v9[2] & 1) != 0 )
                  v4 = 1LL;
                break;
              }
              v9 = (unsigned int *)((char *)v9 + v11);
            }
          }
        }
        ExFreePoolWithTag(v6, 0);
      }
    }
    qword_140CE2188 = v4;
    byte_140CE2190 = 1;
  }
  *(_QWORD *)(a1 + 8) = qword_140CE2188;
  return 0LL;
}
