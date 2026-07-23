/*
 * XREFs of sub_140424090 @ 0x140424090
 * Callers:
 *     sub_140424000 @ 0x140424000 (sub_140424000.c)
 * Callees:
 *     sub_14024E3F0 @ 0x14024E3F0 (sub_14024E3F0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_140424090(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, __int64 a7)
{
  _QWORD *v7; // rsi
  _QWORD *v8; // rcx
  unsigned __int64 v9; // r10
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF
  __int64 v11; // [rsp+20h] [rbp+20h]

  _enable();
  if ( a4 )
  {
    v11 = a1;
    if ( (unsigned int)sub_14024E3F0((__int64)&retaddr, a4) )
      goto LABEL_5;
    a1 = v11;
  }
  sub_14042A5E0(a1, a2);
LABEL_5:
  v8 = (_QWORD *)v7[5];
  _disable();
  v7[7] = v8[2];
  v7[6] = v8[3];
  v9 = v8[5];
  v7[5] = v9;
  if ( (byte_140E01840 & 1) != 0 )
    __writegsqword(0xA008u, v9);
  else
    *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 4) = v9;
  __writegsqword(0x1A8u, v9);
  JUMPOUT(0x14042407CLL);
}
