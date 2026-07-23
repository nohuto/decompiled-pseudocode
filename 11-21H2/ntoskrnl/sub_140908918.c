/*
 * XREFs of sub_140908918 @ 0x140908918
 * Callers:
 *     sub_14050D048 @ 0x14050D048 (sub_14050D048.c)
 *     sub_1409088F0 @ 0x1409088F0 (sub_1409088F0.c)
 * Callees:
 *     sub_1402520D4 @ 0x1402520D4 (sub_1402520D4.c)
 *     sub_140252134 @ 0x140252134 (sub_140252134.c)
 *     sub_140252380 @ 0x140252380 (sub_140252380.c)
 *     sub_140252460 @ 0x140252460 (sub_140252460.c)
 *     sub_14036FA84 @ 0x14036FA84 (sub_14036FA84.c)
 *     PoRegisterDeviceNotify @ 0x140372920 (PoRegisterDeviceNotify.c)
 *     sub_140509178 @ 0x140509178 (sub_140509178.c)
 *     sub_14051DB28 @ 0x14051DB28 (sub_14051DB28.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 *     sub_140909FA0 @ 0x140909FA0 (sub_140909FA0.c)
 *     sub_140A61970 @ 0x140A61970 (sub_140A61970.c)
 *     sub_140A619DC @ 0x140A619DC (sub_140A619DC.c)
 */

__int64 __fastcall sub_140908918(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5, unsigned int a6)
{
  unsigned int *v6; // rdi
  _DWORD *v7; // r15
  int v8; // edx
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // ebx
  _DWORD *v15; // rsi
  __int64 v16; // r14
  unsigned int v17; // ecx
  __int64 result; // rax
  __int64 v19; // rcx
  ULONG_PTR *v20; // r14
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rsi
  unsigned int v24; // ecx
  unsigned int v25; // [rsp+20h] [rbp-50h]

  v6 = a5;
  v7 = a5 + 1;
  if ( *a5 )
  {
    if ( *a5 != 3 )
    {
      v8 = 19;
      v25 = 3239;
      v9 = 2;
      return sub_14051E038(0LL, v8, v9, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", v25);
    }
    if ( sub_140509178() )
      sub_140A619DC(v11, v10, v12, v13, (__int64)v6);
    if ( sub_140252460() )
    {
      v14 = a6;
      if ( a6 )
      {
        v15 = v6 + 10;
        v16 = a6;
        do
        {
          sub_14051DB28(1, v15);
          v15 += 22;
          v7 += 22;
          --v16;
        }
        while ( v16 );
      }
      v17 = v6[10];
      if ( (v17 & 0x40000000) == 0 )
        sub_140909FA0(v17 & 0x3FFFFFFF, v14, *v6);
    }
    return PoRegisterDeviceNotify();
  }
  else
  {
    v19 = a5[14];
    a5 = 0LL;
    if ( (int)sub_140252380(v19, &a5) < 0 )
    {
      v9 = 0;
      v25 = 3153;
      v8 = 18;
      return sub_14051E038(0LL, v8, v9, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", v25);
    }
    v20 = sub_140252134((int)a5);
    if ( !v20 )
    {
      v25 = 3185;
      v8 = 17;
      v9 = 1;
      return sub_14051E038(0LL, v8, v9, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", v25);
    }
    v21 = sub_1402520D4((unsigned int *)&a5);
    v23 = v21;
    if ( v21 )
    {
      if ( qword_140C4C4A8 )
      {
        *(_DWORD *)(v21[5] + 12LL) |= 0x10u;
        sub_140A61970(*((unsigned int *)v20 + 60), v22, v21[5]);
        *(_DWORD *)(v23[5] + 12LL) &= ~0x10u;
      }
      if ( sub_140252460() )
      {
        if ( (unsigned int)sub_14036FA84() == 1 )
        {
          sub_14051DB28(0, v6 + 10);
          v24 = v6[10];
          if ( (v24 & 0x40000000) == 0 )
            sub_140909FA0(v24 & 0x3FFFFFFF, 1LL, *v6);
        }
      }
      result = v23[6];
      *(_BYTE *)(result + 12) = 0;
    }
    else
    {
      return sub_14051E038((__int64)v20, 18, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 0xC79u);
    }
  }
  return result;
}
