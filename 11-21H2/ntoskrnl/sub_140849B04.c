/*
 * XREFs of sub_140849B04 @ 0x140849B04
 * Callers:
 *     sub_140849940 @ 0x140849940 (sub_140849940.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_1403CF1BC @ 0x1403CF1BC (sub_1403CF1BC.c)
 *     sub_1403CF218 @ 0x1403CF218 (sub_1403CF218.c)
 *     sub_1403CF26C @ 0x1403CF26C (sub_1403CF26C.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045DCDA @ 0x14045DCDA (sub_14045DCDA.c)
 *     sub_1406BF0AC @ 0x1406BF0AC (sub_1406BF0AC.c)
 *     sub_140849D6C @ 0x140849D6C (sub_140849D6C.c)
 *     sub_140849DF0 @ 0x140849DF0 (sub_140849DF0.c)
 *     sub_140849E68 @ 0x140849E68 (sub_140849E68.c)
 *     sub_14084A5BC @ 0x14084A5BC (sub_14084A5BC.c)
 *     sub_14084A618 @ 0x14084A618 (sub_14084A618.c)
 *     sub_14084A750 @ 0x14084A750 (sub_14084A750.c)
 *     sub_14095FD08 @ 0x14095FD08 (sub_14095FD08.c)
 */

char __fastcall sub_140849B04(char a1, __int64 a2)
{
  _DWORD *v2; // rdi
  int v3; // ebp
  char v4; // al
  char v5; // r12
  unsigned __int8 v6; // r15
  unsigned __int8 v7; // al
  unsigned int v8; // esi
  unsigned __int8 v9; // al
  unsigned __int8 v10; // al
  __int64 v11; // r13
  char v12; // r14
  __int64 v13; // rax
  SIZE_T v14; // r13
  char v15; // al
  void **v16; // rsi
  unsigned int v17; // edi
  unsigned int v18; // ebx
  bool v20; // cf
  int v22; // [rsp+68h] [rbp+10h] BYREF

  v2 = qword_140D06A70;
  v3 = 0;
  v4 = a1;
  if ( !qword_140D06A70 )
    return 0;
  v5 = 0;
  if ( qword_140C1D040 || qword_140C1D030 || qword_140C1D038 || dword_140D06D04 )
  {
    if ( byte_140D068E7 )
    {
      v20 = KeQueryActiveProcessorCountEx(0) < 2;
      v4 = a1;
      if ( !v20 )
        v5 = 1;
    }
  }
  if ( byte_140D06990 )
  {
    v5 = 1;
  }
  else if ( !v5 )
  {
LABEL_8:
    v6 = 0;
    goto LABEL_9;
  }
  v6 = 1;
  if ( dword_140D06B4C )
    goto LABEL_8;
LABEL_9:
  if ( v4 )
  {
    *((_DWORD *)qword_140D06A70 + 1) = dword_140C0C64C;
    memset(v2 + 6, 0, 3LL * (unsigned int)(*v2 * v2[1]));
    sub_14084A750();
    sub_1403CF26C();
    v7 = sub_14084A618(v2);
    v22 = v7;
    v8 = v7 != 0;
    if ( !v7 )
    {
      v9 = sub_1403CF218((__int64)v2);
      v22 = v9;
      if ( v9 )
      {
        v8 = 5;
      }
      else
      {
        v10 = sub_14084A5BC(v2);
        v22 = v10;
        if ( v10 )
        {
          v8 = 3;
        }
        else if ( v6 )
        {
          v22 = 1;
          v8 = 4;
        }
      }
    }
    if ( v8 != dword_140D0696C
      || (v11 = (unsigned int)v2[1],
          v12 = 0,
          v13 = (unsigned int)(v11 * *v2),
          v14 = 2 * v11,
          RtlCompareMemory(v2 + 6, (char *)qword_140D06998 + 24, 3 * v13) != 3 * v13)
      || RtlCompareMemory(*((const void **)v2 + 2), *((const void **)qword_140D06998 + 2), v14) != v14 )
    {
      v12 = 1;
    }
  }
  else
  {
    v8 = dword_140D0696C;
    v2 = qword_140D06998;
    v12 = 0;
    v22 = dword_140D0696C != 0;
  }
  LOBYTE(a2) = a1;
  v15 = sub_140849E68(v8, a2);
  if ( (v12 || v8 && v15 || byte_140D06A4A != v6) && (unsigned int)sub_14095FD08(v2, v6, &v22) )
    sub_1406BF0AC((__int64)sub_1408823E0, 0LL);
  if ( v22 )
  {
    dword_140D0696C = v8;
    if ( v2 != qword_140D06998 )
      memmove(qword_140D06998, v2, 3 * (*v2 * v2[1] + 8));
    if ( v6 )
      sub_14045DCDA();
  }
  else
  {
    v16 = (void **)qword_140D06998;
    dword_140D0696C = 0;
    v17 = *(_DWORD *)qword_140D06998;
    v18 = *((_DWORD *)qword_140D06998 + 1);
    memset((char *)qword_140D06998 + 24, 0, 3LL * v18 * *(_DWORD *)qword_140D06998);
    memset(v16[2], 0, 2LL * v18);
    memset(v16[1], 0, v17);
    if ( !v5 )
      goto LABEL_23;
  }
  byte_140D06A4C = 1;
LABEL_23:
  if ( ((dword_140D0696C - 1) & 0xFFFFFFFA) != 0 || dword_140D0696C == 6 )
    dword_140D05054 = 0;
  else
    dword_140D05054 = dword_140D05268;
  if ( dword_140D05158 == -1 )
  {
    LOBYTE(v3) = dword_140D0696C != 0;
    dword_140D06AB8 = v3;
  }
  byte_140D068BC = sub_1403CF1BC();
  sub_140849DF0();
  sub_140849D6C(0LL);
  byte_140D06A4A = v6;
  return v12;
}
