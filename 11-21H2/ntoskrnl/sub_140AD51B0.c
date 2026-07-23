/*
 * XREFs of sub_140AD51B0 @ 0x140AD51B0
 * Callers:
 *     sub_140AD4280 @ 0x140AD4280 (sub_140AD4280.c)
 * Callees:
 *     sub_140AD30B0 @ 0x140AD30B0 (sub_140AD30B0.c)
 */

__int64 __fastcall sub_140AD51B0(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int8 v2; // bl
  unsigned __int64 v3; // rax
  char v4; // di
  __int64 result; // rax
  unsigned int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // rbx

  v1 = __readmsr(0x179u);
  v2 = v1;
  if ( BYTE3(KeGetPcr()->NtTib.ExceptionList[2].Handler) != 2 || (v1 & 0x1000000) == 0 )
    sub_140AD30B0(0x12u, a1);
  v3 = __readmsr(0x17Au);
  v4 = v3;
  if ( (v3 & 1) == 0 )
    sub_140AD30B0(0x12u, a1);
  result = v2;
  if ( v2 )
  {
    v6 = 1025;
    v7 = v2;
    do
    {
      result = __readmsr(v6);
      v8 = result;
      if ( result < 0 && (result & 0x2000000000000000LL) != 0 )
      {
        result = 0x4200000000000000LL;
        if ( (v8 & 0x4200000000000000LL) != 0 )
          sub_140AD30B0(0x12u, a1);
        if ( (v4 & 8) != 0 && (v8 & 0x180000000000000LL) == 0x180000000000000LL )
          sub_140AD30B0(0x12u, a1);
      }
      v6 += 4;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
