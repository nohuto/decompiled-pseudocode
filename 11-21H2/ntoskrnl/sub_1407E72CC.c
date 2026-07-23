/*
 * XREFs of sub_1407E72CC @ 0x1407E72CC
 * Callers:
 *     sub_140756C90 @ 0x140756C90 (sub_140756C90.c)
 *     sub_1407E66D0 @ 0x1407E66D0 (sub_1407E66D0.c)
 *     sub_14097BD88 @ 0x14097BD88 (sub_14097BD88.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1407E72CC(unsigned __int64 *Address, unsigned int a2, char a3, int a4, _QWORD *a5)
{
  unsigned __int64 v7; // rsi
  __int64 result; // rax
  unsigned __int64 v10; // r14
  SIZE_T v11; // rcx
  int v12; // esi
  char *v13; // r14
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  unsigned __int64 v17; // rcx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rcx

  v7 = a2;
  memset(a5, 0, 0x48uLL);
  if ( !(_DWORD)v7 )
    return Address != 0LL ? 0xC000000D : 0;
  if ( !Address )
    return 3221225485LL;
  v10 = v7;
  v11 = 16 * v7;
  if ( is_mul_ok(v7, 0x10uLL) )
  {
    result = 0LL;
  }
  else
  {
    v11 = -1LL;
    result = 3221225621LL;
  }
  if ( (int)result >= 0 )
  {
    v12 = 0;
    if ( a3 )
      ProbeForWrite(Address, v11, 8u);
    v13 = (char *)&Address[2 * v10];
    while ( Address < (unsigned __int64 *)v13 )
    {
      v14 = (unsigned __int8)*(_DWORD *)Address;
      if ( (unsigned int)(v14 - 1) > 5 || *Address >= 0x100 )
        return 3221225485LL;
      v15 = 1 << v14;
      if ( ((1 << v14) & a4) == 0 )
        return 3221225485LL;
      if ( (v15 & v12) != 0 )
        return 3221225485LL;
      v12 |= v15;
      v16 = v14 - 1;
      if ( v16 )
      {
        v18 = v16 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            v20 = v19 - 1;
            if ( v20 )
            {
              v21 = v20 - 1;
              if ( v21 )
              {
                if ( v21 != 1 )
                  return 3221225485LL;
                v23 = Address[1];
                if ( v23 > 0xFFFF )
                  return 3221225485LL;
                *((_WORD *)a5 + 25) = v23;
              }
              else
              {
                v22 = Address[1];
                a5[7] = v22;
                if ( (v22 & 0xFFFFFFC0) != 0 )
                  return 3221225485LL;
              }
            }
            else
            {
              a5[5] = Address[1];
              *((_BYTE *)a5 + 48) = 1;
            }
          }
          else
          {
            v24 = Address[1];
            a5[3] = v24;
            if ( !v24 )
              return 3221225485LL;
          }
        }
        else
        {
          v25 = Address[1];
          if ( (unsigned __int64)v25 > 0xFFFFFFFF )
          {
            v26 = Address[1];
            if ( v25 < 0 )
            {
              v25 &= ~0x8000000000000000uLL;
              *((_BYTE *)a5 + 49) = 1;
              v26 = v25;
            }
            if ( v26 > 0xFFFFFFFF )
              return 3221225485LL;
          }
          *((_DWORD *)a5 + 8) = v25;
          if ( (_DWORD)v25 == -1 )
            return 3221225485LL;
          *((_DWORD *)a5 + 8) = v25 + 1;
        }
      }
      else
      {
        v17 = Address[1];
        if ( a3 )
        {
          if ( (v17 & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v17 + 24 > 0x7FFFFFFF0000LL || v17 + 24 < v17 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        *a5 = *(_QWORD *)v17;
        a5[1] = *(_QWORD *)(v17 + 8);
        a5[2] = *(_QWORD *)(v17 + 16);
      }
      Address += 2;
    }
    *((_DWORD *)a5 + 13) = v12;
    return 0LL;
  }
  return result;
}
