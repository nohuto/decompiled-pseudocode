/*
 * XREFs of sub_1409207EC @ 0x1409207EC
 * Callers:
 *     sub_14091EEC4 @ 0x14091EEC4 (sub_14091EEC4.c)
 *     sub_14091FCD8 @ 0x14091FCD8 (sub_14091FCD8.c)
 * Callees:
 *     sub_1402A2104 @ 0x1402A2104 (sub_1402A2104.c)
 *     sub_140346D80 @ 0x140346D80 (sub_140346D80.c)
 *     sub_140657670 @ 0x140657670 (sub_140657670.c)
 *     sub_14065B108 @ 0x14065B108 (sub_14065B108.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406D404C @ 0x1406D404C (sub_1406D404C.c)
 *     sub_1406D407C @ 0x1406D407C (sub_1406D407C.c)
 *     sub_140715D90 @ 0x140715D90 (sub_140715D90.c)
 *     sub_14079B22C @ 0x14079B22C (sub_14079B22C.c)
 *     sub_14079B920 @ 0x14079B920 (sub_14079B920.c)
 *     sub_14079BC7C @ 0x14079BC7C (sub_14079BC7C.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14091F7C8 @ 0x14091F7C8 (sub_14091F7C8.c)
 *     sub_14091F87C @ 0x14091F87C (sub_14091F87C.c)
 */

__int64 __fastcall sub_1409207EC(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int16 a7)
{
  unsigned int v8; // r12d
  unsigned int v9; // r14d
  char v12; // r13
  unsigned int v13; // esi
  ULONG_PTR v14; // rdx
  int v15; // eax
  int v16; // esi
  int v17; // edx
  ULONG_PTR v18; // rdx
  unsigned int *v19; // rax
  unsigned int v20; // r13d
  __int64 v21; // r13
  ULONG_PTR v22; // rdx
  unsigned __int64 v23; // rax
  int v24; // eax
  unsigned int v26; // [rsp+40h] [rbp-38h]
  unsigned __int64 v27; // [rsp+48h] [rbp-30h] BYREF
  __int64 v28; // [rsp+50h] [rbp-28h] BYREF
  unsigned int *v29; // [rsp+58h] [rbp-20h]
  unsigned int *v30; // [rsp+60h] [rbp-18h]
  ULONG_PTR BugCheckParameter3a; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v32; // [rsp+C8h] [rbp+50h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v34; // [rsp+D8h] [rbp+60h] BYREF

  v28 = 0LL;
  v34 = 0;
  v8 = -1;
  LODWORD(BugCheckParameter3a) = -1;
  a7 = 0;
  v9 = -1;
  LODWORD(BugCheckParameter4) = -1;
  LODWORD(v32) = -1;
  v27 = 0xFFFFFFFF00000000uLL;
  v29 = 0LL;
  sub_1407C97FC(&v28);
  v12 = 0;
  v13 = a5 >> 31;
  v26 = a5 >> 31;
  if ( *(_WORD *)(a3 + 74) )
  {
    v14 = *(unsigned int *)(a3 + 48);
    if ( (_DWORD)v14 != -1 )
    {
      v15 = sub_14079BC7C(BugCheckParameter3, v14, a4, v13, (int *)&BugCheckParameter3a);
      v8 = BugCheckParameter3a;
      v16 = v15;
      if ( v15 < 0 )
        goto LABEL_26;
      v13 = v26;
      a7 = *(_WORD *)(a3 + 74);
    }
  }
  sub_1406D407C(a4, BugCheckParameter3);
  v17 = *(_DWORD *)(a3 + 44);
  v12 = 1;
  LODWORD(BugCheckParameter3a) = 1;
  if ( sub_140346D80(BugCheckParameter3, v17, &v34) )
  {
    v16 = sub_140657670(
            a4,
            a5,
            a6,
            v13,
            (void *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * v34 + 8) + 32LL),
            0,
            (unsigned int *)&BugCheckParameter4);
    if ( v16 >= 0 )
    {
      v34 = *(_DWORD *)(a3 + 36);
      if ( v34 )
      {
        v18 = *(unsigned int *)(a3 + 40);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v19 = (unsigned int *)sub_1406BF400(BugCheckParameter3, v18, &v28);
        else
          v19 = (unsigned int *)sub_1407C9820(BugCheckParameter3, v18, (unsigned int *)&v28);
        v29 = v19;
        v20 = 0;
        v30 = v19;
        while ( 1 )
        {
          v16 = sub_14065B108(BugCheckParameter3, *v19, a4, v26, (unsigned int *)&v32);
          if ( v16 < 0 )
            break;
          v9 = v32;
          v16 = sub_14079B920(a4, v32, v20, v26, (unsigned int *)&v27, BugCheckParameter3a);
          if ( v16 < 0 )
            goto LABEL_19;
          v9 = -1;
          v20 += BugCheckParameter3a;
          v19 = v30 + 1;
          LODWORD(v32) = -1;
          ++v30;
          if ( v20 >= v34 )
            goto LABEL_17;
        }
        v9 = v32;
      }
      else
      {
LABEL_17:
        v21 = a6;
        v16 = sub_14091F87C(a4, a5, a6);
        if ( v16 >= 0 )
        {
          v22 = a5;
          v16 = 0;
          *(_WORD *)(v21 + 74) = a7;
          v23 = v27;
          *(_DWORD *)(v21 + 48) = v8;
          v8 = -1;
          *(_QWORD *)(v21 + 36) = v23;
          *(_DWORD *)(v21 + 60) = *(_DWORD *)(a3 + 60);
          LODWORD(v23) = *(_DWORD *)(a3 + 64);
          HIDWORD(v27) = -1;
          *(_DWORD *)(v21 + 64) = v23;
          LODWORD(v27) = 0;
          sub_140715D90(a4, v22);
          v24 = BugCheckParameter4;
          LODWORD(BugCheckParameter4) = -1;
          *(_DWORD *)(v21 + 44) = v24;
        }
      }
LABEL_19:
      v12 = BugCheckParameter3a;
      if ( v29 )
      {
        if ( ((unsigned __int8)BugCheckParameter3a & *(_BYTE *)(BugCheckParameter3 + 140)) != 0 )
          sub_1406BF450(BugCheckParameter3, &v28);
        else
          sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v28);
      }
      if ( v9 != -1 )
        sub_14079B22C(a4, v9);
    }
  }
  else
  {
    v16 = -1073741492;
  }
LABEL_26:
  sub_14091F7C8(a4, &v27);
  if ( v8 != -1 )
    sub_14079BD98(a4, v8);
  if ( (_DWORD)BugCheckParameter4 != -1 )
    sub_1402A2104(a4, (unsigned int)BugCheckParameter4);
  if ( v12 )
    sub_1406D404C(a4, BugCheckParameter3);
  return (unsigned int)v16;
}
