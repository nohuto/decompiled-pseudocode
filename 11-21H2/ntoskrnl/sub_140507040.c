/*
 * XREFs of sub_140507040 @ 0x140507040
 * Callers:
 *     sub_1405071C4 @ 0x1405071C4 (sub_1405071C4.c)
 * Callees:
 *     sub_1403AAE50 @ 0x1403AAE50 (sub_1403AAE50.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140506F6C @ 0x140506F6C (sub_140506F6C.c)
 *     sub_140509F40 @ 0x140509F40 (sub_140509F40.c)
 *     sub_14050A0C4 @ 0x14050A0C4 (sub_14050A0C4.c)
 *     sub_14050EE34 @ 0x14050EE34 (sub_14050EE34.c)
 *     sub_14051BC28 @ 0x14051BC28 (sub_14051BC28.c)
 *     sub_14051BC80 @ 0x14051BC80 (sub_14051BC80.c)
 */

char __fastcall sub_140507040(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // di
  bool v15; // zf
  _OWORD v17[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+80h] [rbp+28h]

  sub_140506F6C(a5, a1);
  v18 = sub_14042A5E0(a1, 378LL);
  *(_DWORD *)(a5 + 36) = a2;
  *(_QWORD *)(a5 + 40) = a3;
  if ( (a3 & 0x400000000000000LL) != 0 )
    *(_QWORD *)(a5 + 48) = sub_14051BC28(a1, a2);
  v10 = 0LL;
  if ( (a3 & 0x800000000000000LL) != 0 && byte_140C5496A )
    *(_QWORD *)(a5 + 56) = sub_14051BC80(a1, a2);
  v11 = sub_14042A5E0(a1, 377LL);
  v13 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v13 == 1 )
  {
    LOBYTE(v11) = sub_14050A0C4(v11, v12, a1, a5);
  }
  else if ( (_DWORD)v13 == 2 )
  {
    LOBYTE(v11) = sub_140509F40(v13, a2, a1, a5);
  }
  v14 = v18;
  if ( (v18 & 4) != 0 )
  {
    v15 = byte_140C4C450 == 0;
    *(_QWORD *)(a5 + 20) = v18;
    if ( !v15 )
    {
      v17[0] = 0LL;
      if ( (int)sub_14050EE34((unsigned int)a1, v17) >= 0 && LODWORD(v17[0]) != 2 )
        v14 = v18 & 0xFD;
    }
    if ( a4 && (v14 & 2) != 0 )
      *(_QWORD *)(a5 + 28) = *(_QWORD *)(a4 + 360);
    LOBYTE(v11) = sub_1403AAE50();
    if ( (_BYTE)v11 == 2 )
    {
      v11 = sub_14042A5E0(a1, 377LL);
      v10 = v11;
    }
    *(_QWORD *)(a5 + 264) = v10;
  }
  return v11;
}
