/*
 * XREFs of sub_1C0080248 @ 0x1C0080248
 * Callers:
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 * Callees:
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 *     sub_1C007A4E8 @ 0x1C007A4E8 (sub_1C007A4E8.c)
 *     sub_1C0080D3C @ 0x1C0080D3C (sub_1C0080D3C.c)
 */

__int64 __fastcall sub_1C0080248(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r10
  unsigned int v5; // ebx
  _QWORD *v8; // rdi
  __int64 v9; // r8
  int v10; // r9d
  PDEVICE_OBJECT v11; // rcx
  __int64 v12; // rdx
  __int64 Source2; // [rsp+50h] [rbp+20h] BYREF

  v4 = *(_QWORD **)(a1 + 72);
  v5 = 0;
  if ( *((_DWORD *)v4 + 2) == 4 && *((_DWORD *)v4 + 3) == 3 )
  {
    v8 = (_QWORD *)v4[2];
    Source2 = a2;
    sub_1C007A4E8((char *)&Source2, 8u);
    v9 = Source2;
    if ( v8[1] == 0x80000000FLL )
    {
      if ( RtlCompareMemory(v8 + 2, &Source2, 8uLL) == 8 )
      {
        v8 = (_QWORD *)*v8;
        Source2 = a3;
        sub_1C007A4E8((char *)&Source2, 8u);
        v9 = Source2;
        if ( v8[1] == 0x80000000FLL )
        {
          if ( RtlCompareMemory(v8 + 2, &Source2, 8uLL) == 8 )
          {
            v4 = (_QWORD *)*v8;
            goto LABEL_8;
          }
          v9 = Source2;
        }
        v11 = off_1C0093070;
        if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070 || BYTE1(off_1C0093070->Timer) < 2u )
          return (unsigned int)-1073741435;
        v12 = 26LL;
LABEL_17:
        sub_1C0080D3C(v11->AttachedDevice, v12, v9, v8[2], v9);
        return (unsigned int)-1073741435;
      }
      v9 = Source2;
    }
    v11 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070 || BYTE1(off_1C0093070->Timer) < 2u )
      return (unsigned int)-1073741435;
    v12 = 25LL;
    goto LABEL_17;
  }
LABEL_8:
  v10 = *((_DWORD *)v4 + 2);
  if ( v10 != 5 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
      sub_1C003EE60((__int64)off_1C0093070->AttachedDevice, 0x1Bu, (__int64)&unk_1C008B728, v10, *((_DWORD *)v4 + 3));
    return (unsigned int)-1073741435;
  }
  if ( a4 )
    *a4 = v4;
  return v5;
}
