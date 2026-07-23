/*
 * XREFs of sub_14050E638 @ 0x14050E638
 * Callers:
 *     sub_14050E360 @ 0x14050E360 (sub_14050E360.c)
 * Callees:
 *     sub_1403AAE50 @ 0x1403AAE50 (sub_1403AAE50.c)
 *     sub_14050E6FC @ 0x14050E6FC (sub_14050E6FC.c)
 */

char __fastcall sub_14050E638(unsigned int a1, unsigned int a2, __int64 *a3, _QWORD *a4)
{
  char v8; // bl
  unsigned int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rdi

  v8 = 0;
  if ( sub_1403AAE50() == 1 && byte_140D016E8 )
  {
    if ( a2 < 0xC0002000 )
      return v8;
    v9 = (a2 + 1073733632) >> 4;
  }
  else
  {
    if ( a2 < 0x401 )
      return v8;
    v9 = (a2 - 1025) >> 2;
  }
  v10 = v9;
  if ( v9 < dword_140C4C708 )
  {
    v11 = *a3;
    if ( *a3 )
    {
LABEL_11:
      v8 = 1;
      *a4 = *(_QWORD *)(v11 + 8LL * v10);
      return v8;
    }
    v11 = qword_140C4C718 + 8LL * a1 * dword_140C4C708;
    if ( (int)sub_14050E6FC(a1, (unsigned int)dword_140C4C708, qword_140C4C720, v11) >= 0 )
    {
      *a3 = v11;
      goto LABEL_11;
    }
  }
  return v8;
}
