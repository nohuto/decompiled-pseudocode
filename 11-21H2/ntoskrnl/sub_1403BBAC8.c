/*
 * XREFs of sub_1403BBAC8 @ 0x1403BBAC8
 * Callers:
 *     sub_1403BB0A0 @ 0x1403BB0A0 (sub_1403BB0A0.c)
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_1403ACEFC @ 0x1403ACEFC (sub_1403ACEFC.c)
 *     sub_1403BBC5C @ 0x1403BBC5C (sub_1403BBC5C.c)
 *     sub_1403BC388 @ 0x1403BC388 (sub_1403BC388.c)
 *     sub_1403BCA0C @ 0x1403BCA0C (sub_1403BCA0C.c)
 *     sub_1403BE3D0 @ 0x1403BE3D0 (sub_1403BE3D0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14050C520 @ 0x14050C520 (sub_14050C520.c)
 */

__int64 __fastcall sub_1403BBAC8(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r9d
  ULONG_PTR *v9; // rax
  ULONG_PTR v10; // r8
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // edx
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _BYTE v24[136]; // [rsp+30h] [rbp-98h] BYREF
  int v25; // [rsp+B8h] [rbp-10h]
  int v26; // [rsp+BCh] [rbp-Ch]

  memset(v24, 0, sizeof(v24));
  qword_140C4E418 = a1;
  v2 = qword_140C4E4C0;
  qword_140C4E3F8 = qword_140C4E4C0;
  v3 = sub_140303720(qword_140C4E4C0);
  v5 = sub_14042A5E0(v3, v4);
  v8 = v5;
  if ( v5 < 0 )
  {
    *(_DWORD *)(v2 + 256) = v5;
    dword_140C4E844 = 15;
    *(_DWORD *)(v2 + 252) = 15;
    *(_QWORD *)(v2 + 264) = "minkernel\\hals\\lib\\timers\\common\\timer.c";
    *(_DWORD *)(v2 + 272) = 1552;
    goto LABEL_11;
  }
  v8 = sub_1403BCA0C(1LL, v6, v7, (unsigned int)v5);
  if ( v8 < 0 )
  {
    dword_140C4E844 = 14;
    goto LABEL_11;
  }
  v9 = sub_1403ACEFC(5, 0, 0, 0, 1);
  if ( v9 )
  {
    v10 = v9[36];
    v11 = *((_DWORD *)v9 + 57);
    v12 = *((_DWORD *)v9 + 71);
    v25 = v11;
    v13 = *(unsigned __int16 *)(v10 + 24);
    v14 = *(_QWORD *)(v10 + 32);
    v26 = v12;
    sub_1403BE3D0(v24, v13 >> 1, v14);
  }
  v15 = sub_1403BC388();
  v8 = v15;
  if ( v15 < 0 || (v19 = sub_1403BBC5C(v17, v16, v18, (unsigned int)v15), v8 = v19, v19 < 0) )
LABEL_11:
    KeBugCheckEx(0x5Cu, 0x110uLL, 0x5250631uLL, dword_140C4E844, v8);
  qword_140C4E388 = qword_140C4E390;
  qword_140C4E458 = (__int64)sub_140259DD0;
  qword_140C4E3B0 = (__int64)&qword_140C4E3A8;
  qword_140C4E3A8 = (__int64)&qword_140C4E3A8;
  off_140C01CF8[0] = sub_1403DCE20;
  qword_140C4E3A0 = 8LL;
  off_140C01CF0[0] = (__int64 (__fastcall *)())sub_140398F60;
  dword_140C4E440 = 275;
  qword_140C4E460 = 0LL;
  qword_140C4E478 = 0LL;
  qword_140C4E450 = 0LL;
  qword_140C4E3B8 = 0LL;
  dword_140C4E3DC = 0;
  word_140C4E3D8 = 0;
  if ( qword_140C4E500 )
    qword_140C4E490 = sub_14050C520(v21, v20, v22, (unsigned int)v19);
  return (unsigned int)v8;
}
