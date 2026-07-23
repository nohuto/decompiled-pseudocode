/*
 * XREFs of sub_140B12930 @ 0x140B12930
 * Callers:
 *     sub_140B10CAC @ 0x140B10CAC (sub_140B10CAC.c)
 *     sub_140B50ED4 @ 0x140B50ED4 (sub_140B50ED4.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_140294D28 @ 0x140294D28 (sub_140294D28.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140543410 @ 0x140543410 (sub_140543410.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B50F00 @ 0x140B50F00 (sub_140B50F00.c)
 */

__int64 __fastcall sub_140B12930(struct _MDL *BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _MDL *Pool2; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // edx
  ULONG_PTR BugCheckParameter4; // rdi
  __int64 **v16; // rbx
  __int64 v17; // r15
  unsigned int v18; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v19[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v20; // [rsp+48h] [rbp-B8h]
  int v21; // [rsp+4Ah] [rbp-B6h]
  __int16 v22; // [rsp+4Eh] [rbp-B2h]
  _QWORD v23[14]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v24[28]; // [rsp+C0h] [rbp-40h] BYREF

  v21 = 0;
  v22 = 0;
  v18 = 0;
  if ( !sub_140294D28(0LL) )
    return 3224698910LL;
  if ( BugCheckParameter3 > 0x1FA000 )
    KeBugCheckEx(0x13Du, 0xFFFFFFFFuLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, 0x1FA000uLL);
  memset(v24, 0, 0xD8uLL);
  if ( BugCheckParameter2 )
  {
    v5 = sub_1403A0F08((__int64)v24, BugCheckParameter2, BugCheckParameter3, 0, 0);
    if ( v5 < 0 )
      KeBugCheckEx(0x13Du, 0xFFFFFFFEuLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, v5);
  }
  v6 = sub_1403A0F08((__int64)&v24[9], (struct _MDL *)&qword_140D0DBD0, 0xA08u, 2, 0);
  if ( v6 < 0 )
    KeBugCheckEx(0x13Du, 0xFFFFFFFCuLL, (ULONG_PTR)&qword_140D0DBD0, 0xA08uLL, v6);
  memset(v23, 0, 0x68uLL);
  v23[1] = v24[0];
  v23[2] = v24[7];
  v23[4] = v24[9];
  v23[5] = v24[16];
  if ( (unsigned int)sub_140B50F00(v8, v7, v9, v10) )
  {
    Pool2 = (struct _MDL *)qword_140D06BC8;
    if ( qword_140D06BC8
      || (Pool2 = (struct _MDL *)ExAllocatePool2(64LL, 0x50008uLL, 0x676F4C48u),
          (qword_140D06BC8 = (ULONG_PTR)Pool2) != 0) )
    {
      v12 = sub_1403A0F08((__int64)&v24[18], Pool2, 0x50008u, 2, 2u);
      if ( v12 < 0 )
        KeBugCheckEx(0x13Du, 0xFFFFFFFBuLL, qword_140D06BC8, 0x50008uLL, v12);
      v23[6] = v24[18];
      v23[7] = v24[25];
    }
  }
  v19[1] = (unsigned __int16 *)qword_140D06E48[0];
  v19[0] = (unsigned __int16 *)dword_140D06E40;
  v20 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v18, v19) )
  {
    v13 = sub_140348800(v18);
    if ( ((*(_QWORD *)(v13 + 34912) - 1LL) & *(_QWORD *)(v13 + 34912)) != 0 )
    {
      LODWORD(v23[3]) |= 1u;
      break;
    }
  }
  if ( sub_140543410() )
    LODWORD(v23[3]) = v14 | 1;
  BugCheckParameter4 = (int)sub_140358A20(2u, 52, 0, (__int64)v23);
  v16 = (__int64 **)v24;
  v17 = 3LL;
  do
  {
    if ( *((_WORD *)v16 + 9) )
      sub_1403A0EB4(v16);
    v16 += 9;
    --v17;
  }
  while ( v17 );
  if ( (BugCheckParameter4 & 0x80000000) != 0LL )
    KeBugCheckEx(0x13Du, 0xFFFFFFFDuLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  return (unsigned int)BugCheckParameter4;
}
