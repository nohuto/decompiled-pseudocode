/*
 * XREFs of sub_1406A0BF0 @ 0x1406A0BF0
 * Callers:
 *     sub_1406A0770 @ 0x1406A0770 (sub_1406A0770.c)
 *     NtQuerySecurityAttributesToken @ 0x1406A09D0 (NtQuerySecurityAttributesToken.c)
 *     sub_1406E88A0 @ 0x1406E88A0 (sub_1406E88A0.c)
 *     sub_140754108 @ 0x140754108 (sub_140754108.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406A0E10 @ 0x1406A0E10 (sub_1406A0E10.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406A0BF0(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  char v4; // r12
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // ecx
  unsigned __int16 *v11; // r15
  unsigned int v12; // r8d
  _QWORD *Pool2; // rax
  _QWORD *v14; // r14
  char *v15; // rsi
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  void *v18; // rcx
  void *Src; // [rsp+80h] [rbp+8h] BYREF
  char v20; // [rsp+90h] [rbp+18h]
  _QWORD *v21; // [rsp+98h] [rbp+20h]

  v21 = a4;
  v20 = a3;
  v4 = a3;
  v5 = a2;
  v6 = 0;
  Src = 0LL;
  *a4 = 0LL;
  if ( !a1 )
  {
    if ( !a2 )
      return 0LL;
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
  if ( !(_BYTE)a3 )
  {
    *a4 = a1;
    return 0LL;
  }
  result = sub_1406A0E10(a1, a2, a3, &Src);
  if ( (int)result >= 0 )
  {
    v8 = 16 * v5;
    if ( (unsigned __int64)(16 * v5) > 0xFFFFFFFF )
    {
      if ( v4 != 1 )
        return 3221225621LL;
      v18 = Src;
      if ( !Src )
        return 3221225621LL;
    }
    else
    {
      if ( (((unsigned int)v8 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) >= (unsigned int)v8 )
      {
        v9 = ((_DWORD)v8 + 1) & 0xFFFFFFFE;
        v10 = 0;
        v11 = (unsigned __int16 *)Src;
        while ( 1 )
        {
          if ( v10 >= (unsigned int)v5 )
          {
            Pool2 = (_QWORD *)ExAllocatePool2(256LL, v9, 1950442835LL);
            v14 = Pool2;
            if ( Pool2 )
            {
              memmove(Pool2, v11, 16 * v5);
              v15 = (char *)(((unsigned __int64)&v14[(unsigned __int64)v8 / 8] + 1) & 0xFFFFFFFFFFFFFFFEuLL);
              while ( v6 < (unsigned int)v5 )
              {
                v16 = v11[8 * v6];
                if ( (_WORD)v16 )
                {
                  v17 = *(_QWORD *)&v11[8 * v6 + 4];
                  if ( (v17 & 1) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( v17 + v16 > 0x7FFFFFFF0000LL || v17 + v16 < v17 )
                  {
                    MEMORY[0x7FFFFFFF0000] = 0;
                    LOWORD(v16) = v11[8 * v6];
                  }
                }
                memmove(v15, *(const void **)&v11[8 * v6 + 4], (unsigned __int16)v16);
                v14[2 * v6 + 1] = v15;
                WORD1(v14[2 * v6]) = v14[2 * v6];
                v15 += v11[8 * v6++];
              }
              if ( v4 == 1 && v11 )
                ExFreePoolWithTag(v11, 0);
              *v21 = v14;
              return 0LL;
            }
            else
            {
              if ( v4 == 1 && v11 )
                ExFreePoolWithTag(v11, 0);
              return 3221225626LL;
            }
          }
          v12 = v9 + *((unsigned __int16 *)Src + 8 * v10);
          if ( v12 < (unsigned int)v9 )
            break;
          v9 = v12;
          ++v10;
        }
        if ( v4 == 1 && Src )
        {
          v18 = Src;
          goto LABEL_42;
        }
        return 3221225621LL;
      }
      if ( v4 != 1 )
        return 3221225621LL;
      v18 = Src;
      if ( !Src )
        return 3221225621LL;
    }
LABEL_42:
    ExFreePoolWithTag(v18, 0);
    return 3221225621LL;
  }
  return result;
}
