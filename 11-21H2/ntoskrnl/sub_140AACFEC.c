/*
 * XREFs of sub_140AACFEC @ 0x140AACFEC
 * Callers:
 *     sub_140AAB478 @ 0x140AAB478 (sub_140AAB478.c)
 *     sub_140AAC1BC @ 0x140AAC1BC (sub_140AAC1BC.c)
 *     sub_140AACA74 @ 0x140AACA74 (sub_140AACA74.c)
 *     sub_140AACB80 @ 0x140AACB80 (sub_140AACB80.c)
 *     sub_140AACEA0 @ 0x140AACEA0 (sub_140AACEA0.c)
 *     sub_140AAD1C4 @ 0x140AAD1C4 (sub_140AAD1C4.c)
 * Callees:
 *     sub_1403A7BD8 @ 0x1403A7BD8 (sub_1403A7BD8.c)
 */

LARGE_INTEGER __fastcall sub_140AACFEC(int a1, int a2, LARGE_INTEGER *a3)
{
  __int64 v4; // rdi
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v6; // rcx
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rax
  int v9; // edi
  LARGE_INTEGER v10; // rax
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  LARGE_INTEGER v16; // rax
  LARGE_INTEGER v17; // rax
  int v18; // edi

  v4 = a2;
  result = sub_1403A7BD8(a3);
  qword_140CE1B00 = result.QuadPart;
  if ( a1 )
  {
    stru_140C5ABF0[v4] = result;
    return result;
  }
  v6 = (LARGE_INTEGER)(*(_QWORD *)&sub_1403A7BD8(0LL) - stru_140C5ABF0[v4].QuadPart);
  qword_140CE1B50 = v6.QuadPart;
  if ( !(_DWORD)v4 )
  {
    v7.QuadPart = qword_140C0B448;
    if ( v6.QuadPart < qword_140C0B448 )
      v7 = v6;
    qword_140C0B448 = v7.QuadPart;
    v8.QuadPart = qword_140CE1AE8;
    if ( v6.QuadPart > qword_140CE1AE8 )
      v8 = v6;
LABEL_8:
    qword_140CE1B30 += v6.QuadPart;
    ++dword_140CE1B20;
    qword_140CE1AE8 = v8.QuadPart;
    goto LABEL_9;
  }
  v9 = v4 - 1;
  if ( !v9 )
  {
    v10.QuadPart = qword_140C0B448;
    if ( v6.QuadPart < qword_140C0B448 )
      v10 = v6;
    qword_140C0B448 = v10.QuadPart;
    v8.QuadPart = qword_140CE1AE8;
    if ( v6.QuadPart > qword_140CE1AE8 )
      v8 = v6;
    qword_140CE1B40 += v6.QuadPart;
    goto LABEL_8;
  }
  v11 = v9 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( !v12 )
    {
      qword_140CE1B60 += v6.QuadPart;
      return (LARGE_INTEGER)qword_140CE1B00;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      qword_140CE1B58 += v6.QuadPart;
      return (LARGE_INTEGER)qword_140CE1B00;
    }
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v18 = v15 - 1;
        if ( v18 )
        {
          if ( v18 == 1 )
            qword_140D01578 += v6.QuadPart;
        }
        else
        {
          qword_140CE1B18 = v6.QuadPart;
        }
      }
      else
      {
        v16.QuadPart = qword_140C0B458;
        if ( v6.QuadPart < qword_140C0B458 )
          v16 = v6;
        qword_140C0B458 = v16.QuadPart;
        v17.QuadPart = qword_140CE1B10;
        if ( v6.QuadPart > qword_140CE1B10 )
          v17 = v6;
        qword_140CE1B38 += v6.QuadPart;
        qword_140CE1AF8 += v6.QuadPart;
        ++dword_140CE1B08;
        qword_140CE1B10 = v17.QuadPart;
      }
      return (LARGE_INTEGER)qword_140CE1B00;
    }
    qword_140CE1B38 += v6.QuadPart;
    qword_140CE1B28 = v6.QuadPart;
  }
  else
  {
    qword_140CE1B30 += v6.QuadPart;
    qword_140CE1B78 = v6.QuadPart;
  }
LABEL_9:
  qword_140CE1AF8 += v6.QuadPart;
  return (LARGE_INTEGER)qword_140CE1B00;
}
