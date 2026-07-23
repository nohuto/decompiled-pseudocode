/*
 * XREFs of sub_140235F70 @ 0x140235F70
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_1402FEDA0 @ 0x1402FEDA0 (sub_1402FEDA0.c)
 *     sub_1402FF140 @ 0x1402FF140 (sub_1402FF140.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FFAC0 (KeCountSetBitsAffinityEx.c)
 *     sub_140345110 @ 0x140345110 (sub_140345110.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056C2C8 @ 0x14056C2C8 (sub_14056C2C8.c)
 */

char sub_140235F70()
{
  int v1; // eax
  int v2; // ebx
  int v3; // ebx
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD *v8; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v9; // [rsp+38h] [rbp-D0h]
  _WORD v10[4]; // [rsp+40h] [rbp-C8h]
  _QWORD v11[34]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v12[34]; // [rsp+158h] [rbp+50h] BYREF
  _DWORD v13[68]; // [rsp+268h] [rbp+160h] BYREF

  *(_DWORD *)&v10[1] = 0;
  v10[3] = 0;
  LODWORD(v7) = 0;
  memset(&v12[1], 0, 0x100uLL);
  memset(&v13[2], 0, 0x100uLL);
  memset(&v11[1], 0, 0x100uLL);
  if ( !dword_140C1CF20 )
    return 1;
  LODWORD(v12[0]) = 2097153;
  memset((char *)v12 + 4, 0, 0x104uLL);
  v1 = sub_1402FF140(&unk_140C0D440, &dword_140C0D000, v12, 32LL);
  v13[0] = 2097153;
  v2 = v1;
  memset(&v13[1], 0, 0x104uLL);
  sub_1402FEDA0(&dword_140C0D000, &unk_140C0D440, v13, 32LL);
  LODWORD(v11[0]) = 2097153;
  memset((char *)v11 + 4, 0, 0x104uLL);
  sub_14056C2C8(asc_140C0D220, &dword_140C0D330, v11, 32LL);
  if ( !(v2 | (unsigned int)sub_1402FF140(v11, v13, v11, WORD1(v11[0]))) )
    return 1;
  v3 = KeCountSetBitsAffinityEx(v11);
  v4 = KeCountSetBitsAffinityEx(v12);
  v10[0] = 0;
  v9 = v12[1];
  v8 = v12;
  dword_140C204B0 = v4 + v3;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v7, &v8) )
  {
    v5 = sub_140348800((unsigned int)v7);
    sub_140345110(v5, 3LL);
  }
  v9 = v11[1];
  v8 = v11;
  v10[0] = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v7, &v8) )
  {
    v6 = sub_140348800((unsigned int)v7);
    sub_140345110(v6, 4LL);
  }
  return 0;
}
