/*
 * XREFs of RtlSetBits @ 0x180031140
 * Callers:
 *     RtlFindClearBitsAndSet @ 0x180030DF0 (RtlFindClearBitsAndSet.c)
 *     LdrpInitializeTls @ 0x18007A64C (LdrpInitializeTls.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     RtlpValidateRange @ 0x1800E4658 (RtlpValidateRange.c)
 * Callees:
 *     memset @ 0x1800AAE00 (memset.c)
 */

void __fastcall RtlSetBits(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  _BYTE *v5; // rdi
  __int64 v6; // rsi
  char v7; // al

  if ( a3 )
  {
    v3 = a2;
    v4 = a2 & 7;
    v5 = (_BYTE *)(*(_QWORD *)(a1 + 8) + (v3 >> 3));
    v6 = a3;
    if ( (unsigned int)v4 + a3 <= 8 )
    {
      v7 = RtlIsSystemAceType[a3 + 16] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + a3 - 8;
      *v5++ |= byte_18013A0B0[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = RtlIsSystemAceType[v6 + 16];
      goto LABEL_4;
    }
  }
}
