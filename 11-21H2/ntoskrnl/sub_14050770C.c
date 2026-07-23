/*
 * XREFs of sub_14050770C @ 0x14050770C
 * Callers:
 *     sub_140506BF4 @ 0x140506BF4 (sub_140506BF4.c)
 *     sub_1405079C8 @ 0x1405079C8 (sub_1405079C8.c)
 * Callees:
 *     sub_140507820 @ 0x140507820 (sub_140507820.c)
 */

char __fastcall sub_14050770C(__int64 a1, __int64 a2)
{
  char v2; // di
  char v3; // bp
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rbx
  char v9; // al
  __int64 v11; // [rsp+50h] [rbp+18h]
  __int64 v12; // [rsp+50h] [rbp+18h]

  HIDWORD(v11) = 0;
  v2 = 0;
  v3 = a2;
  if ( !byte_140C4C450 || byte_140C549A0 )
  {
    v8 = *(_QWORD *)&KeGetPcr()->HalReserved[6];
    while ( v8 )
    {
      LOBYTE(a2) = v3;
      v9 = sub_140507820(a1, a2, *(_QWORD *)(v8 + 172));
      v8 = *(_QWORD *)(v8 + 184);
      if ( v9 )
        v2 = 1;
    }
  }
  else
  {
    while ( 1 )
    {
      v5 = __readmsr(0x40000030u);
      v6 = (unsigned __int64)HIDWORD(v5) << 32;
      LOBYTE(v6) = v3;
      v7 = v5;
      LODWORD(v11) = v5;
      if ( (_DWORD)v5 == -1 )
        break;
      if ( (unsigned __int8)sub_140507820(a1, v6, v11) )
        v2 = 1;
      __writemsr(0x40000031u, v7);
    }
    HIDWORD(v12) = 1;
    LODWORD(v12) = HIDWORD(KeGetPcr()[1].LockArray) & 0x7FFFFFFF;
    if ( (unsigned __int8)sub_140507820(a1, v6, v12) )
      return 1;
  }
  return v2;
}
