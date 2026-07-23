/*
 * XREFs of sub_1407628C0 @ 0x1407628C0
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 *     sub_1405DC298 @ 0x1405DC298 (sub_1405DC298.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_14080BDD0 @ 0x14080BDD0 (sub_14080BDD0.c)
 *     sub_140819A74 @ 0x140819A74 (sub_140819A74.c)
 *     sub_140819D40 @ 0x140819D40 (sub_140819D40.c)
 *     sub_140996DE8 @ 0x140996DE8 (sub_140996DE8.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_1407627C8 @ 0x1407627C8 (sub_1407627C8.c)
 *     sub_140762A34 @ 0x140762A34 (sub_140762A34.c)
 *     sub_140762A68 @ 0x140762A68 (sub_140762A68.c)
 *     sub_140762AEC @ 0x140762AEC (sub_140762AEC.c)
 *     sub_140810E2C @ 0x140810E2C (sub_140810E2C.c)
 *     EmClientQueryRuleState @ 0x140A47D40 (EmClientQueryRuleState.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407628C0(__int128 *a1, __int64 a2)
{
  __int128 v2; // xmm0
  char v4; // di
  char v5; // r9
  char v6; // r10
  unsigned int v7; // r11d
  char v8; // cl
  __int64 v10; // r9
  char *v11; // rcx
  __int64 v12; // rax
  int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v2 = *a1;
  v13 = 0;
  v4 = 0;
  *(_OWORD *)a2 = v2;
  P = 0LL;
  *(_OWORD *)(a2 + 16) = a1[1];
  *(_OWORD *)(a2 + 32) = a1[2];
  *(_OWORD *)(a2 + 48) = a1[3];
  *(_QWORD *)(a2 + 64) = *((_QWORD *)a1 + 8);
  *(_DWORD *)(a2 + 72) = *((_DWORD *)a1 + 18);
  if ( (int)sub_140762AEC(&P, &v13) < 0 )
    goto LABEL_6;
  if ( v13 )
  {
    v4 = 1;
    v10 = 0LL;
    v11 = (char *)P;
    if ( *(_WORD *)P )
    {
      do
      {
        v12 = -1LL;
        do
          ++v12;
        while ( *(_WORD *)&v11[2 * v12] );
        v10 += 2 * v12 + 2;
        v11 = (char *)P + v10;
      }
      while ( *(_WORD *)((char *)P + v10) );
    }
    sub_140810E2C(4LL, 31LL, P, v10 + 2);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( !v4 )
LABEL_6:
    sub_140762A68(4LL);
  v14 = 1;
  EmClientQueryRuleState(qword_140010028, &v14);
  if ( v14 == 2 )
    sub_140810E2C(7LL, 16LL, 0LL, 0LL);
  else
    sub_140762A68(7LL);
  if ( byte_140C232DD )
    sub_140810E2C(14LL, 7LL, 0LL, 0LL);
  else
    sub_140762A68(14LL);
  sub_1407627C8();
  if ( (unsigned __int8)sub_140762A34(0LL) )
    *(_BYTE *)(a2 + 3) = 0;
  if ( (unsigned __int8)sub_140762A34(1LL) )
    *(_BYTE *)(a2 + 4) = 0;
  if ( (unsigned __int8)sub_140762A34(2LL) )
    *(_BYTE *)(a2 + 5) = 0;
  if ( (unsigned __int8)sub_140762A34(3LL) )
    *(_BYTE *)(a2 + 6) = 0;
  if ( (unsigned __int8)sub_140762A34(6LL) )
    *(_BYTE *)(a2 + 17) = 0;
  v8 = *(_BYTE *)(a2 + 5);
  if ( !v8 || !v5 )
  {
    if ( !v8 )
      v5 = v6;
    *(_BYTE *)(a2 + 17) = 0;
    if ( !v5 )
      *(_BYTE *)(a2 + 18) = 0;
  }
  return v7;
}
