/*
 * XREFs of sub_140789FA0 @ 0x140789FA0
 * Callers:
 *     sub_140789E04 @ 0x140789E04 (sub_140789E04.c)
 *     sub_140844A24 @ 0x140844A24 (sub_140844A24.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14078A0E8 @ 0x14078A0E8 (sub_14078A0E8.c)
 */

__int64 __fastcall sub_140789FA0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6, __int64 a7, int a8)
{
  __int64 v8; // rsi
  __int64 v10; // rdi
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // ebx
  int v14; // ecx
  unsigned int v16; // eax
  __int64 v17[10]; // [rsp+48h] [rbp-19h] BYREF

  v8 = *(_QWORD *)&qword_140D00AC0;
  memset(v17, 0, sizeof(v17));
  v10 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 488LL);
  v17[4] = a5;
  LODWORD(v17[5]) = a6;
  v17[6] = a7;
  LODWORD(v17[7]) = a8;
  if ( v10 )
  {
    v11 = sub_14042A5E0(*(_QWORD *)&qword_140D00AC0, 0LL);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        return LODWORD(v17[0]);
      if ( v11 )
        return (unsigned int)-1073741595;
    }
  }
  v12 = sub_14078A0E8(v8, a2, v17[2], v17[3], v17[4], v17[5], v17[6], v17[7]);
  v13 = v12;
  if ( !v10 )
    return v13;
  LODWORD(v17[0]) = v12;
  v14 = sub_14042A5E0(v8, 0LL);
  if ( v14 == -1073741822 )
    return v13;
  if ( v14 == -1073741536 )
    return LODWORD(v17[0]);
  v16 = v13;
  if ( v14 )
    return (unsigned int)-1073741595;
  return v16;
}
