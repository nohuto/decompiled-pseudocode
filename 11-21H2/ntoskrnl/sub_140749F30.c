/*
 * XREFs of sub_140749F30 @ 0x140749F30
 * Callers:
 *     sub_14076BE08 @ 0x14076BE08 (sub_14076BE08.c)
 *     sub_14081BA8C @ 0x14081BA8C (sub_14081BA8C.c)
 * Callees:
 *     sub_1402D25CC @ 0x1402D25CC (sub_1402D25CC.c)
 *     sub_1402D2848 @ 0x1402D2848 (sub_1402D2848.c)
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     sub_140749ECC @ 0x140749ECC (sub_140749ECC.c)
 *     sub_14074A08C @ 0x14074A08C (sub_14074A08C.c)
 *     sub_14074A0F8 @ 0x14074A0F8 (sub_14074A0F8.c)
 *     sub_140765430 @ 0x140765430 (sub_140765430.c)
 *     sub_140767220 @ 0x140767220 (sub_140767220.c)
 *     sub_140777C08 @ 0x140777C08 (sub_140777C08.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_14081BAC8 @ 0x14081BAC8 (sub_14081BAC8.c)
 *     sub_14095855C @ 0x14095855C (sub_14095855C.c)
 *     sub_14095B1A4 @ 0x14095B1A4 (sub_14095B1A4.c)
 */

__int64 __fastcall sub_140749F30(_QWORD *Object)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // esi
  PVOID v7; // rcx
  __int64 v9; // r8
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h] BYREF

  v10 = 0;
  P = 0LL;
  v2 = *(_QWORD *)(Object[39] + 40LL);
  sub_140779DC4(&P);
  sub_1402D2848(*(_QWORD *)(v2 + 32));
  *(_DWORD *)(v2 + 704) |= 0x100u;
  if ( (int)sub_14074A0F8(Object, &v10) < 0 )
  {
    v6 = 0;
    goto LABEL_15;
  }
  v3 = v10;
  if ( (v10 & 2) != 0 )
    sub_140767220(v2, 2LL);
  else
    sub_14074A08C(v2, 2LL);
  if ( (v3 & 0x40) != 0 )
    sub_140767220(v2, 64LL);
  else
    sub_14074A08C(v2, 64LL);
  v4 = *(_DWORD *)(v2 + 400) & 8;
  if ( (v3 & 0x20) != 0 )
  {
    if ( !v4 )
    {
      sub_140767220(v2, 8LL);
      sub_14081BAC8(v2);
    }
  }
  else if ( v4 )
  {
    sub_14095855C(v2);
    sub_14074A08C(v2, 8LL);
  }
  v5 = v3 >> 8;
  LOBYTE(v5) = BYTE1(v3) & 1;
  v6 = sub_140749ECC(v2, v5);
  if ( (v3 & 9) == 0 )
  {
    if ( (v3 & 4) == 0 )
      goto LABEL_11;
    if ( (v3 & 0x10) != 0 )
      goto LABEL_28;
  }
  if ( (unsigned __int8)sub_140777C08(v2, 3LL) )
  {
    v9 = 51LL;
    goto LABEL_30;
  }
  if ( (v3 & 9) != 0 )
  {
    v9 = (v3 & 1) != 0 ? 29 : 24;
LABEL_30:
    sub_140765430(v2, 0LL, v9, 0LL);
    v6 = -1073741823;
    goto LABEL_15;
  }
LABEL_11:
  if ( (v3 & 0x10) != 0 )
  {
LABEL_28:
    sub_1402DCF44(Object, 13, 0, (v3 >> 2) & 1, 0LL, 0LL, 0LL);
    goto LABEL_15;
  }
  if ( (v3 & 4) != 0 )
  {
    v9 = 43LL;
    goto LABEL_30;
  }
  if ( (v3 & 0x80u) != 0 )
    v6 = sub_14095B1A4(v2);
LABEL_15:
  sub_1402D25CC(*(_QWORD *)(v2 + 32));
  v7 = P;
  *(_DWORD *)(v2 + 704) &= ~0x100u;
  if ( v7 )
    sub_140779A50(v7);
  return v6;
}
