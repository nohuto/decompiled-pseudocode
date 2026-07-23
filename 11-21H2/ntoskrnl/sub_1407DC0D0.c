/*
 * XREFs of sub_1407DC0D0 @ 0x1407DC0D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402633C4 @ 0x1402633C4 (sub_1402633C4.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     ?do_max_length@?$codecvt@_WDH@std@@MEBAHXZ @ 0x140360698 (-do_max_length@-$codecvt@_WDH@std@@MEBAHXZ.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406AF0D4 @ 0x1406AF0D4 (sub_1406AF0D4.c)
 *     sub_1406AF220 @ 0x1406AF220 (sub_1406AF220.c)
 *     sub_1406BEE5C @ 0x1406BEE5C (sub_1406BEE5C.c)
 *     sub_1406DED34 @ 0x1406DED34 (sub_1406DED34.c)
 *     sub_1406E18A0 @ 0x1406E18A0 (sub_1406E18A0.c)
 *     sub_1407D74C4 @ 0x1407D74C4 (sub_1407D74C4.c)
 *     sub_1407DC3D0 @ 0x1407DC3D0 (sub_1407DC3D0.c)
 *     sub_1407DDABC @ 0x1407DDABC (sub_1407DDABC.c)
 *     sub_1407DFE00 @ 0x1407DFE00 (sub_1407DFE00.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1407DC0D0(_QWORD *P)
{
  __int64 v1; // r14
  int v3; // r12d
  int v4; // r15d
  unsigned int v5; // ebx
  __int64 v6; // r9
  int v7; // eax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 Pool2; // rax
  int v11; // ebx
  unsigned int v12; // r8d
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16[4]; // [rsp+28h] [rbp-99h] BYREF
  __int64 v17[16]; // [rsp+38h] [rbp-89h] BYREF
  _OWORD v18[3]; // [rsp+B8h] [rbp-9h] BYREF

  v1 = P[26];
  v16[0] = 0;
  v3 = 0;
  memset(v18, 0, sizeof(v18));
  v4 = 0;
  memset(v17, 0, sizeof(v17));
  v5 = *((_DWORD *)P + 59);
  v17[4] = (__int64)&v17[3];
  v17[0] = v1;
  v17[3] = (__int64)&v17[3];
  v17[6] = (__int64)&v17[5];
  v17[5] = (__int64)&v17[5];
  sub_1407DC3D0(v1, qword_14000DFB0);
  if ( (P[30] & 1) != 0 )
  {
    sub_1406E18A0((PEX_RUNDOWN_REF)P + 5, 1);
    v4 = 1;
  }
  sub_14030D5C0(P[27], 0LL, (__int64)v18, v6);
  v7 = std::codecvt<wchar_t,char,int>::do_max_length();
  if ( v5 <= v7 - 1 )
  {
    LODWORD(v17[12]) = v5;
    HIDWORD(v17[12]) = v5;
  }
  else
  {
    LODWORD(v17[12]) = v7 - 1;
    HIDWORD(v17[12]) = v7;
  }
  if ( (int)sub_1406BEE5C(v17) >= 0 )
  {
    v8 = sub_1402633C4(HIDWORD(v17[12]) + 1);
    v9 = v8 < 0xF00 ? 0LL : v8 - 3840;
    v17[13] = v9;
    if ( v9 )
    {
      Pool2 = ExAllocatePool2(64LL, 144LL, 1129539152LL);
      v17[1] = Pool2;
      if ( Pool2 )
      {
        sub_1406AF220(Pool2);
        *(_QWORD *)(v17[1] + 32) = v17;
        *(_DWORD *)(v17[1] + 60) = 250;
        *(_DWORD *)(v17[1] + 56) = 15;
        if ( (int)sub_1406AF0D4(v17[1]) >= 0 && (int)sub_1407DDABC(v17, v16) >= 0 )
        {
          v11 = v16[0];
          if ( *(_DWORD *)(v1 + 80) == 1 )
          {
            v11 = v16[0] | 1;
            v16[0] |= 1u;
          }
          if ( (dword_140C544F0 & 4) != 0 )
          {
            v13 = 0;
            v11 &= ~2u;
            v16[0] = v11;
            goto LABEL_20;
          }
          v12 = 1;
          if ( (v11 & 1) != 0 )
          {
            v13 = *(_DWORD *)(v1 + 124);
            v12 = (1 << v13) - 1;
            if ( 1 << v13 == 1 )
            {
LABEL_19:
              sub_1402AD030((struct _EX_RUNDOWN_REF *)P[4]);
              v3 = 1;
              sub_1407DC3D0(v1, qword_14000DF90);
LABEL_20:
              if ( v13 < *(_DWORD *)(v1 + 124) && (v11 & 2) == 0 )
              {
                _InterlockedExchange((volatile __int32 *)(P[27] + 2272LL), 5000);
                while ( v13 < *(_DWORD *)(v1 + 124) && (int)sub_1407D74C4((__int64)P, v17, 1 << v13) >= 0 )
                  ++v13;
              }
              goto LABEL_21;
            }
          }
          else
          {
            v13 = 1;
          }
          if ( (int)sub_1407D74C4((__int64)P, v17, v12) < 0 )
            goto LABEL_21;
          goto LABEL_19;
        }
      }
    }
  }
LABEL_21:
  _InterlockedExchange((volatile __int32 *)(P[27] + 2272LL), 0);
  v14 = P[28];
  if ( v14 )
  {
    *(_QWORD *)(v14 + 472) = v17[14];
    v15 = P[28];
    v17[14] = 0LL;
    *(_DWORD *)(v15 + 480) = v17[15];
  }
  sub_1407DFE00(v17);
  _InterlockedDecrement(&dword_140C546F0);
  if ( v4 )
    sub_1406E18A0((PEX_RUNDOWN_REF)P + 5, 0);
  sub_1402D0930((__int64)v18, 0LL);
  if ( !v3 )
  {
    sub_1402AD030((struct _EX_RUNDOWN_REF *)P[4]);
    sub_1407DC3D0(v1, qword_14000DF90);
  }
  sub_1407DC3D0(v1, qword_14000DFA0);
  sub_1406DED34(P);
  ExFreePoolWithTag(P, 0);
}
