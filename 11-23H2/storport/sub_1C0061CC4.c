/*
 * XREFs of sub_1C0061CC4 @ 0x1C0061CC4
 * Callers:
 *     sub_1C003A38C @ 0x1C003A38C (sub_1C003A38C.c)
 *     sub_1C0060DE0 @ 0x1C0060DE0 (sub_1C0060DE0.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     sub_1C0037EE0 @ 0x1C0037EE0 (sub_1C0037EE0.c)
 *     sub_1C005D168 @ 0x1C005D168 (sub_1C005D168.c)
 *     sub_1C005ED40 @ 0x1C005ED40 (sub_1C005ED40.c)
 *     sub_1C0062A44 @ 0x1C0062A44 (sub_1C0062A44.c)
 *     DoScreenSave_0 @ 0x1C0062D50 (DoScreenSave_0.c)
 *     sub_1C0063D60 @ 0x1C0063D60 (sub_1C0063D60.c)
 */

__int64 __fastcall sub_1C0061CC4(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // r15
  unsigned int v4; // eax
  int v5; // edi
  char v6; // r13
  int v7; // esi
  __int64 v8; // rdi
  char *v9; // rax
  char *v10; // r12
  unsigned int i; // edx
  __int64 v12; // rcx
  char *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax

  LOBYTE(v1) = -1;
  LOBYTE(v3) = -1;
  if ( *(_BYTE *)(a1 + 3280) )
  {
    v4 = *(_DWORD *)(a1 + 3300);
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 1320);
    if ( v4 < 0x1E )
      v4 = 30;
  }
  v5 = 2 * v4;
  sub_1C005ED40(a1, 2 * v4);
  v6 = 1;
  v7 = DoScreenSave_0(a1);
  if ( v7 < 0 )
  {
    sub_1C005ED40(a1, v5);
    v6 = 2;
    v7 = sub_1C0062A44(a1);
    if ( v7 < 0 )
    {
      sub_1C005ED40(a1, 0);
      v6 = 3;
      if ( *(_BYTE *)(a1 + 3280) && (unsigned __int8)sub_1C0063D60(*(_QWORD *)(a1 + 504)) )
      {
        v7 = 0;
        v8 = a1 + 24;
      }
      else
      {
        v8 = a1 + 24;
        v7 = sub_1C0037EE0(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 96));
        if ( v7 < 0 )
          goto LABEL_26;
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 1328));
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v8 + 4624LL));
      }
    }
    else
    {
      sub_1C005ED40(a1, 0);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 1328));
      v8 = a1 + 24;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 4628LL));
    }
  }
  else
  {
    sub_1C005ED40(a1, 0);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 1328));
    v8 = a1 + 24;
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 4632LL));
  }
  if ( *(_QWORD *)(a1 + 2296) )
  {
    if ( *(_QWORD *)(a1 + 2320) )
    {
      v9 = (char *)sub_1C0007CF4(64LL, (unsigned int)Size, 1700028754LL, *(_QWORD *)(a1 + 8));
      v10 = v9;
      if ( v9 )
      {
        v1 = 0LL;
        v3 = 0LL;
        memmove(v9, *(const void **)(a1 + 2296), (unsigned int)Size);
        for ( i = 0; i < dword_1C0093BF0; ++i )
        {
          v12 = (unsigned int)qword_1C0093570;
          if ( (_DWORD)qword_1C0093570 )
          {
            v13 = &v10[(unsigned int)dword_1C0093578 * i + 8];
            do
            {
              v1 += *((_QWORD *)v13 + 1);
              v3 += *(_QWORD *)v13;
              v13 += 24;
              --v12;
            }
            while ( v12 );
          }
        }
        v14 = (unsigned int)qword_1C0093570;
        v15 = *(_QWORD **)(a1 + 2320);
        if ( (_DWORD)qword_1C0093570 )
        {
          do
          {
            v1 -= *v15;
            v3 -= v15[1];
            v15 += 3;
            --v14;
          }
          while ( v14 );
        }
        ExFreePoolWithTag(v10, 0x65546152u);
      }
    }
  }
LABEL_26:
  if ( (byte_1C0093A06 & 1) != 0 )
    sub_1C005D168(
      a1 + 169,
      a1 + 160,
      a1 + 2024,
      *(const wchar_t **)(*(_QWORD *)v8 + 4656LL),
      *(_DWORD *)(*(_QWORD *)v8 + 56LL),
      *(_QWORD *)v8 + 5000LL,
      *(_BYTE *)(a1 + 96),
      *(_BYTE *)(a1 + 97),
      *(_BYTE *)(a1 + 98),
      a1 + 2024,
      (const char *)(a1 + 160),
      (const char *)(a1 + 169),
      (const char *)(a1 + 186),
      v6,
      v7,
      v1,
      v3);
  *(_QWORD *)(a1 + 1336) = KeQueryUnbiasedInterruptTime();
  return (unsigned int)v7;
}
