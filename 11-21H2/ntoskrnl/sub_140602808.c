/*
 * XREFs of sub_140602808 @ 0x140602808
 * Callers:
 *     CarReportRuleViolationForTriage @ 0x140604030 (CarReportRuleViolationForTriage.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402A2094 @ 0x1402A2094 (sub_1402A2094.c)
 *     sub_1403699D0 @ 0x1403699D0 (sub_1403699D0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140602DD4 @ 0x140602DD4 (sub_140602DD4.c)
 *     sub_140603294 @ 0x140603294 (sub_140603294.c)
 *     sub_140605160 @ 0x140605160 (sub_140605160.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140602808(__int64 a1, int a2, const CHAR *a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v9; // eax
  __int64 v10; // r14
  unsigned int v11; // esi
  _QWORD *Pool2; // rax
  _QWORD *v13; // r15
  _QWORD *v14; // rdx
  void *v15; // rax
  void *v16; // r14
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // r11
  const CHAR *v21; // rbx
  __int64 v22; // r11
  char v23; // [rsp+40h] [rbp-C0h] BYREF
  const CHAR *v24; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+54h] [rbp-ACh] BYREF
  int v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  int *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  char *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  char v36[16]; // [rsp+C0h] [rbp-40h] BYREF
  char v37[16]; // [rsp+D0h] [rbp-30h] BYREF
  int *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  __int64 *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  const CHAR **v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  _QWORD *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  void *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]

  v4 = 0;
  v24 = a3;
  if ( qword_140D049B0 )
  {
    if ( !a1 || a1 == -1128 )
    {
      sub_140605160("Violation stack passed to CarEtwWriteBugCheckEvent is NULL\n");
      return 3221225485LL;
    }
    else
    {
      v9 = sub_140602DD4();
      v10 = 10LL;
      v11 = v9;
      if ( v9 < 0xA || v9 == 100 || v9 == 1000 || v9 == 10000 )
      {
        Pool2 = (_QWORD *)ExAllocatePool2(64LL, 80LL, 1316118851LL);
        v13 = Pool2;
        if ( Pool2 )
        {
          memset(Pool2, 0, 0x50uLL);
          v14 = v13;
          do
          {
            *v14 = *(_QWORD *)((char *)v14 + a1 - (_QWORD)v13 + 1128);
            ++v14;
            --v10;
          }
          while ( v10 );
          v15 = (void *)ExAllocatePool2(64LL, 80LL, 1316118851LL);
          v16 = v15;
          if ( v15 )
          {
            memset(v15, 0, 0x50uLL);
            LOBYTE(v20) = 4;
            if ( (unsigned int)dword_140C090C0 <= 5 )
            {
              v21 = v24;
            }
            else if ( sub_1402A2000((__int64)&dword_140C090C0, 0x800000000000LL) )
            {
              v25 = v11;
              v30 = &v25;
              v26 = dword_140C18FD4;
              v32 = &v26;
              v34 = &v23;
              v31 = v20;
              v33 = v20;
              v23 = a4;
              v35 = 1LL;
              sub_1402A2094((__int64)v36, (const WCHAR *)(a1 + 4));
              v21 = v24;
              sub_1403699D0((__int64)v37, v24);
              v27 = a2;
              v38 = &v27;
              v28 = *(_QWORD *)(a1 + 72);
              v39 = v22;
              v40 = &v28;
              LODWORD(v24) = *(_DWORD *)(a1 + 80);
              v42 = &v24;
              v41 = 8LL;
              v43 = v22;
              v44 = v13;
              v45 = 80LL;
              v46 = v16;
              v47 = 80LL;
              sub_14020A9C4((__int64)&dword_140C090C0, (unsigned __int8 *)&word_1400345C6, 0LL, 0LL, 0xCu, &v29);
              LOBYTE(v20) = 4;
            }
            else
            {
              v21 = v24;
            }
            if ( ((unsigned __int8)v20 & (unsigned __int8)byte_140C1A8F0) != 0 )
              v4 = sub_140603294(v18, v17, v19, a2, (__int64)v21, a1 + 4, a4);
            else
              v4 = 0;
          }
          else
          {
            v4 = -1073741801;
          }
          ExFreePoolWithTag(v13, 0x4E726143u);
          if ( v16 )
            ExFreePoolWithTag(v16, 0x4E726143u);
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
      return v4;
    }
  }
  else
  {
    if ( !dword_140C1A8D4 )
      sub_140605160("CAR ETW functionality isn't initialized yet.\n");
    ++dword_140C1A8D4;
    return 3221225871LL;
  }
}
