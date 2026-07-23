/*
 * XREFs of sub_1409CDCC8 @ 0x1409CDCC8
 * Callers:
 *     sub_1409CD880 @ 0x1409CD880 (sub_1409CD880.c)
 * Callees:
 *     sub_1408124A0 @ 0x1408124A0 (sub_1408124A0.c)
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 *     sub_140812D00 @ 0x140812D00 (sub_140812D00.c)
 *     sub_1408134D8 @ 0x1408134D8 (sub_1408134D8.c)
 *     sub_14081369C @ 0x14081369C (sub_14081369C.c)
 *     sub_140813744 @ 0x140813744 (sub_140813744.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_1409CE134 @ 0x1409CE134 (sub_1409CE134.c)
 *     sub_140A1CC78 @ 0x140A1CC78 (sub_140A1CC78.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_1409CDCC8()
{
  __int64 v0; // rdi
  NTSTATUS v1; // eax
  int v2; // ebx
  char *Pool2; // r14
  unsigned int v4; // r15d
  unsigned __int16 *v5; // rdx
  unsigned int v6; // r12d
  __int64 v7; // rsi
  _DWORD *v8; // r9
  __int16 v9; // r8
  __int64 v11; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+80h] [rbp+40h] BYREF
  unsigned int *v13; // [rsp+88h] [rbp+48h] BYREF
  __int64 v14; // [rsp+90h] [rbp+50h] BYREF
  __int64 v15; // [rsp+98h] [rbp+58h] BYREF

  v14 = 0LL;
  v0 = 0LL;
  v12 = 0;
  LODWORD(v13) = 0;
  v11 = 0LL;
  v1 = sub_14081369C(0);
  v2 = v1;
  if ( v1 >= 0 )
  {
    v2 = sub_140813744(&v11, 0);
    sub_1408134D8(0);
    v0 = v11;
    if ( v2 >= 0 )
    {
      v15 = 1LL;
      v2 = sub_140A1CC78(v11, (unsigned int)&v15, 0, (unsigned int)&v13, (__int64)&v12);
      if ( v2 == -1073741789 )
      {
        Pool2 = (char *)ExAllocatePool2(256LL, (unsigned int)v13, 1649632595LL);
        if ( Pool2 )
        {
          v2 = sub_140A1CC78(v0, (unsigned int)&v15, (_DWORD)Pool2, (unsigned int)&v13, (__int64)&v12);
          if ( v2 >= 0 )
          {
            v4 = 0;
            if ( v12 )
            {
              while ( 1 )
              {
                v13 = (unsigned int *)&Pool2[24 * v4];
                v2 = sub_140812B74(v0, v13, &v14);
                if ( v2 < 0 )
                  break;
                v5 = (unsigned __int16 *)qword_140D01440;
                v6 = 0;
                v7 = v14;
                if ( *((_WORD *)qword_140D01440 + 18) )
                {
                  do
                  {
                    v8 = (_DWORD *)(qword_140D04970 + 12LL * v6);
                    if ( !*v8 || *v8 == *(_DWORD *)(*((_QWORD *)v13 + 2) + 4LL) )
                    {
                      v9 = *(_WORD *)((unsigned int)v8[2] + qword_140D04980);
                      if ( ((v9 & 0x20) == 0 || (dword_140C5AFDC & 4) != 0)
                        && ((v9 & 0x40) == 0 || (dword_140C5AFDC & 0x10) != 0) )
                      {
                        v2 = sub_1409CE134(qword_140D04970 + 12LL * v6, v7);
                        if ( v2 < 0 )
                          goto LABEL_23;
                        v5 = (unsigned __int16 *)qword_140D01440;
                      }
                    }
                    ++v6;
                  }
                  while ( v6 < v5[18] );
                }
                sub_140812D00(v7);
                v7 = 0LL;
                ++v4;
                v14 = 0LL;
                if ( v4 >= v12 )
                  goto LABEL_23;
              }
              v7 = v14;
LABEL_23:
              if ( v7 )
                sub_140812D00(v7);
            }
          }
          ExFreePoolWithTag(Pool2, 0x62536553u);
        }
        else
        {
          v2 = -1073741801;
        }
      }
    }
  }
  else
  {
    sub_1408138F0(4LL, L"BcdOpenSystemStore: Failed to acquire BCD sync mutant.Status: %x", (unsigned int)v1);
  }
  if ( v0 )
    sub_1408124A0(v0);
  return (unsigned int)v2;
}
