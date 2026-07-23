/*
 * XREFs of sub_1409974E8 @ 0x1409974E8
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_140369B48 @ 0x140369B48 (sub_140369B48.c)
 *     sub_140808344 @ 0x140808344 (sub_140808344.c)
 *     sub_140989788 @ 0x140989788 (sub_140989788.c)
 *     sub_140992098 @ 0x140992098 (sub_140992098.c)
 *     sub_140997674 @ 0x140997674 (sub_140997674.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

unsigned __int8 __fastcall sub_1409974E8(int a1, int a2, _BYTE *a3)
{
  int v3; // ebx
  unsigned __int8 v4; // si
  char v8; // al
  int v9; // r9d
  int v10; // edx
  int v11; // r12d
  int v12; // eax
  int v13; // ebx
  __int64 v14; // rdi
  int v15; // ebx
  __int64 v16; // r9
  PVOID v17; // rdi
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  int v20; // [rsp+90h] [rbp+40h] BYREF
  int v21; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+58h] BYREF

  P[0] = 0LL;
  v3 = 0;
  v20 = 0;
  v21 = 0;
  v4 = 0;
  v22 = 0LL;
  v8 = sub_140989788(&xmmword_140C23400);
  v10 = v9 | 0x10;
  if ( v8 )
    v10 = v9;
  v11 = v10 | 0x20;
  if ( *((_DWORD *)qword_140C231B8 + 22) )
    v11 = v10;
  if ( sub_140808344(nullsub_3, &v20, &v21) )
  {
    v3 = v20;
    if ( !*a3 )
      v3 = v21;
  }
  v12 = v11 | 0x40;
  if ( v3 )
    v12 = v11;
  v13 = v12;
  if ( a3[3] && *a3 && v20 == 1 && !v21 )
    v13 = v12 | 0x100;
  v14 = MEMORY[0xFFFFF78000000008];
  if ( !(unsigned __int8)sub_140997674(MEMORY[0xFFFFF78000000008], a1, a2, (unsigned int)&v22, (__int64)P) )
    v13 |= 0x80u;
  v15 = ~dword_140D052C8 & v13;
  if ( !v15 )
  {
    v4 = 1;
    sub_140369B48(3LL, (__int64)"Deferring doze to S4\n");
  }
  v16 = v14;
  v17 = P[0];
  sub_140992098(v4, v15, (__int64)P[0], v16, v22, a1, a2);
  if ( v17 )
    ExFreePoolWithTag(v17, 0x53577254u);
  return v4;
}
