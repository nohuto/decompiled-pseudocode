/*
 * XREFs of sub_14036A698 @ 0x14036A698
 * Callers:
 *     PoRegisterSystemState @ 0x140201CD0 (PoRegisterSystemState.c)
 *     PoCreatePowerRequest @ 0x140369E10 (PoCreatePowerRequest.c)
 *     sub_140369ECC @ 0x140369ECC (sub_140369ECC.c)
 *     sub_1407EDD60 @ 0x1407EDD60 (sub_1407EDD60.c)
 *     sub_140B02408 @ 0x140B02408 (sub_140B02408.c)
 *     sub_140B2D588 @ 0x140B2D588 (sub_140B2D588.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_14036ABA8 @ 0x14036ABA8 (sub_14036ABA8.c)
 *     sub_14036B8CC @ 0x14036B8CC (sub_14036B8CC.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObject @ 0x14066BA00 (ObCreateObject.c)
 *     sub_14070BA00 @ 0x14070BA00 (sub_14070BA00.c)
 *     sub_140753094 @ 0x140753094 (sub_140753094.c)
 *     sub_1407EFDAC @ 0x1407EFDAC (sub_1407EFDAC.c)
 *     sub_1407EFFBC @ 0x1407EFFBC (sub_1407EFFBC.c)
 *     sub_1407F0070 @ 0x1407F0070 (sub_1407F0070.c)
 *     sub_1407F0194 @ 0x1407F0194 (sub_1407F0194.c)
 *     sub_1407F01CC @ 0x1407F01CC (sub_1407F01CC.c)
 *     sub_14098A25C @ 0x14098A25C (sub_14098A25C.c)
 */

__int64 __fastcall sub_14036A698(_DWORD *a1, char a2, _QWORD *a3)
{
  _DWORD *v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char v6; // bl
  _DWORD *v7; // rdi
  int v8; // r12d
  int v9; // r13d
  __int64 v10; // rcx
  __int64 v11; // r15
  int v12; // eax
  int v13; // r9d
  __int64 v14; // rcx
  int Object; // ebx
  int v16; // eax
  _DWORD *v17; // rbx
  int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _DWORD v23[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v24; // [rsp+58h] [rbp-28h]
  __int64 v25; // [rsp+60h] [rbp-20h]
  int v26; // [rsp+68h] [rbp-18h]
  int v27; // [rsp+6Ch] [rbp-14h]
  __int128 v28; // [rsp+70h] [rbp-10h]
  char v29; // [rsp+C0h] [rbp+40h] BYREF
  _QWORD *v30; // [rsp+D0h] [rbp+50h]
  void *v31; // [rsp+D8h] [rbp+58h] BYREF

  v30 = a3;
  v4 = a1;
  v23[1] = 0;
  v27 = 0;
  v31 = 0LL;
  v29 = 0;
  if ( *a1 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 1;
    v7 = (_DWORD *)*((_QWORD *)CurrentThread + 23);
    v8 = v7[272];
    if ( a2 )
    {
      sub_14070BA00(*((_QWORD *)CurrentThread + 23), &v29, 0LL);
      if ( v29 )
        return (unsigned int)-1073741637;
    }
  }
  else
  {
    v6 = 0;
    v7 = 0LL;
    v8 = 0;
  }
  LOBYTE(a1) = 1;
  sub_140753094(a1);
  v9 = dword_140C24520;
  v10 = (unsigned int)dword_140C24520++;
  v11 = sub_1407F0194(v10);
  sub_1407EFDAC();
  v12 = v4[6] + 32;
  v24 = 0LL;
  v25 = 0LL;
  LOBYTE(v13) = v6;
  v23[0] = 48;
  v26 = 32;
  v28 = 0LL;
  Object = ObCreateObject(0, qword_140D053C8, (unsigned int)v23, v13, 0, 168, v12, 0, (__int64)&v31);
  if ( Object < 0 )
  {
    if ( v11 )
    {
      LOBYTE(v14) = 1;
      sub_140753094(v14);
      sub_14098A25C(*(unsigned int *)(v11 + 8));
      sub_1407EFDAC();
    }
  }
  else
  {
    memset(v31, 0, 0xA8uLL);
    v16 = sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
    v17 = v31;
    v18 = 0;
    if ( v16 != -1 )
      v18 = v16;
    *((_DWORD *)v31 + 4) = v18;
    v17[26] = v8;
    if ( *v4 && !a2 )
    {
      ObfReferenceObjectWithTag(v7, 0x72506F50u);
      *((_QWORD *)v17 + 17) = v7;
    }
    *((_BYTE *)v17 + 152) = a2;
    *((_QWORD *)v17 + 12) = v4;
    v17[9] = v9;
    *((_QWORD *)v17 + 9) = v17 + 16;
    *((_QWORD *)v17 + 8) = v17 + 16;
    if ( *v4 )
    {
      v19 = sub_140287F30((__int64)v7);
      if ( a2 )
        v17[5] = 8;
      else
        v17[5] = (unsigned __int8)sub_14036B8CC(v19) != 0 ? 63 : 30;
    }
    else
    {
      v17[5] = 18;
    }
    sub_1407F0070(v17);
    LOBYTE(v20) = 1;
    sub_140753094(v20);
    v21 = (_QWORD *)qword_140C242A8;
    if ( *(PVOID **)qword_140C242A8 != &qword_140C242A0 )
      __fastfail(3u);
    ++dword_140C24290;
    *(_QWORD *)v17 = &qword_140C242A0;
    *((_QWORD *)v17 + 1) = v21;
    *v21 = v17;
    qword_140C242A8 = (__int64)v17;
    *(_QWORD *)v11 = v17;
    if ( !a2 )
      sub_14036ABA8(v17);
    if ( *v4 )
      sub_1407F01CC((unsigned int)v17[9]);
    sub_1407EFFBC(0LL, v17);
    sub_1407EFDAC();
    *v30 = v17;
    return 0;
  }
  return (unsigned int)Object;
}
