/*
 * XREFs of sub_1402FD2CC @ 0x1402FD2CC
 * Callers:
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1402FD2CC(unsigned __int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  int v7; // ebx
  _DWORD *Pool2; // r10
  __int64 v9; // rax
  _DWORD *v10; // r13
  unsigned int v11; // edx
  __int64 v12; // r9
  __int64 v13; // r8
  _OWORD *v14; // rdx
  unsigned int v15; // r11d
  __int64 v16; // r9
  int v18; // [rsp+24h] [rbp-74h]
  _DWORD *v19; // [rsp+28h] [rbp-70h]
  _QWORD v20[4]; // [rsp+30h] [rbp-68h]

  HIDWORD(v20[0]) = HIDWORD(a4);
  v7 = 0;
  Pool2 = 0LL;
  *a4 = 0LL;
  if ( a3 != 1 )
    return 3221225474LL;
  if ( a2 )
  {
    if ( a1 )
    {
      v9 = 16LL * a2;
      if ( v9 )
      {
        if ( (a1 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v9 + a1 > 0x7FFFFFFF0000LL || v9 + a1 < a1 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, 48LL * a2, 1951360339LL);
      v19 = Pool2;
      v10 = Pool2;
      if ( Pool2 )
      {
        v11 = 0;
        v18 = 0;
        while ( v11 < a2 )
        {
          v12 = v11;
          v13 = *(unsigned __int16 *)(a1 + 16LL * v11);
          if ( (unsigned int)v13 > 4 )
            goto LABEL_17;
          Pool2[12 * v11] = (unsigned __int16)v13;
          v14 = *(_OWORD **)(a1 + 16LL * v11 + 8);
          if ( ((unsigned __int8)v14 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(_OWORD *)&Pool2[12 * v12 + 1] = *v14;
          *(_QWORD *)&Pool2[12 * v12 + 6] = 0LL;
          Pool2[12 * v12 + 8] = 0;
          *(_QWORD *)&Pool2[12 * v12 + 10] = 0LL;
          if ( v18 )
          {
            v15 = v13;
            Pool2 = v19;
            if ( (unsigned int)v13 > (unsigned int)LOWORD(v19[12 * (v18 - 1)]) + 1 || !(_WORD)v13 )
              goto LABEL_17;
          }
          else
          {
            if ( (_WORD)v13 )
            {
              v7 = -1073741811;
              Pool2 = v19;
              break;
            }
            v15 = 0;
            Pool2 = v19;
          }
          v16 = 6 * v12;
          if ( (_WORD)v13 )
            v10[2 * v16 + 5] = *((_DWORD *)v20 + v15 + 1);
          else
            v10[2 * v16 + 5] = -1;
          *((_DWORD *)&v20[1] + v13) = v18;
          v11 = ++v18;
          v7 = 0;
        }
      }
      else
      {
        v7 = -1073741670;
      }
    }
    else
    {
LABEL_17:
      v7 = -1073741811;
    }
  }
  if ( v7 < 0 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    *a4 = Pool2;
  }
  return (unsigned int)v7;
}
