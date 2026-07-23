/*
 * XREFs of sub_1407FF888 @ 0x1407FF888
 * Callers:
 *     sub_1407FF440 @ 0x1407FF440 (sub_1407FF440.c)
 *     sub_140808500 @ 0x140808500 (sub_140808500.c)
 * Callees:
 *     sub_14025DC0C @ 0x14025DC0C (sub_14025DC0C.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140368E90 @ 0x140368E90 (sub_140368E90.c)
 *     sub_1403690D0 @ 0x1403690D0 (sub_1403690D0.c)
 *     sub_14038B9A0 @ 0x14038B9A0 (sub_14038B9A0.c)
 *     sub_14038BAA8 @ 0x14038BAA8 (sub_14038BAA8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14041EE20 @ 0x14041EE20 (sub_14041EE20.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407F0F98 @ 0x1407F0F98 (sub_1407F0F98.c)
 *     sub_1407FD7F8 @ 0x1407FD7F8 (sub_1407FD7F8.c)
 *     sub_1407FD8D8 @ 0x1407FD8D8 (sub_1407FD8D8.c)
 *     sub_1407FD930 @ 0x1407FD930 (sub_1407FD930.c)
 *     sub_1407FD9E0 @ 0x1407FD9E0 (sub_1407FD9E0.c)
 *     sub_1407FDA6C @ 0x1407FDA6C (sub_1407FDA6C.c)
 *     sub_1407FDC18 @ 0x1407FDC18 (sub_1407FDC18.c)
 *     sub_1407FE0BC @ 0x1407FE0BC (sub_1407FE0BC.c)
 *     sub_1407FE1F4 @ 0x1407FE1F4 (sub_1407FE1F4.c)
 *     sub_1407FE344 @ 0x1407FE344 (sub_1407FE344.c)
 *     sub_1407FE3D8 @ 0x1407FE3D8 (sub_1407FE3D8.c)
 *     sub_1407FE774 @ 0x1407FE774 (sub_1407FE774.c)
 *     sub_1407FE79C @ 0x1407FE79C (sub_1407FE79C.c)
 *     sub_1407FE7BC @ 0x1407FE7BC (sub_1407FE7BC.c)
 *     sub_1407FE7DC @ 0x1407FE7DC (sub_1407FE7DC.c)
 *     sub_1407FE8C0 @ 0x1407FE8C0 (sub_1407FE8C0.c)
 *     sub_1407FFBAC @ 0x1407FFBAC (sub_1407FFBAC.c)
 *     sub_1407FFCB0 @ 0x1407FFCB0 (sub_1407FFCB0.c)
 *     sub_1407FFD04 @ 0x1407FFD04 (sub_1407FFD04.c)
 *     sub_1407FFD64 @ 0x1407FFD64 (sub_1407FFD64.c)
 *     sub_1407FFDDC @ 0x1407FFDDC (sub_1407FFDDC.c)
 *     sub_1407FFE58 @ 0x1407FFE58 (sub_1407FFE58.c)
 *     sub_140990100 @ 0x140990100 (sub_140990100.c)
 *     sub_140997374 @ 0x140997374 (sub_140997374.c)
 *     sub_1409A4510 @ 0x1409A4510 (sub_1409A4510.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 *     sub_140A48C1C @ 0x140A48C1C (sub_140A48C1C.c)
 *     sub_140A48C5C @ 0x140A48C5C (sub_140A48C5C.c)
 *     sub_140A49250 @ 0x140A49250 (sub_140A49250.c)
 *     sub_140A4B974 @ 0x140A4B974 (sub_140A4B974.c)
 */

__int64 __fastcall sub_1407FF888(char a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v5; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // si
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r14d
  int v18; // eax
  int v19; // esi
  __int64 v20; // rcx
  int v21; // ecx
  char v22; // bl
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // al
  int v26; // ecx
  int v27; // ebx
  int v28; // ecx
  int v30; // ecx
  __int64 v31; // rdx
  int v32; // ecx
  char v33; // bl
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  bool v37; // zf
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rcx
  signed __int32 v41[8]; // [rsp+0h] [rbp-58h] BYREF
  char v42; // [rsp+20h] [rbp-38h]
  bool v43; // [rsp+21h] [rbp-37h]
  ULONG v44; // [rsp+24h] [rbp-34h]
  int v45; // [rsp+28h] [rbp-30h]
  __int128 v46; // [rsp+30h] [rbp-28h] BYREF
  int v47; // [rsp+40h] [rbp-18h]
  unsigned int v48; // [rsp+44h] [rbp-14h]

  v47 = 0;
  v5 = 0;
  LOBYTE(v48) = 0;
  v46 = 0LL;
  v44 = 0;
  sub_140A48C1C();
  sub_1407FD7F8();
  v11 = 1;
  if ( !byte_140C232D0 && !byte_140C232D1
    || a2 != 2
    || (int)a3 >= 5
    || (dword_140C227D4 & 0xFFFFFFFA) != 0
    || dword_140C227D4 == 1 )
  {
    sub_140A48C5C();
    if ( dword_140C227D4 )
    {
      if ( dword_140C227D4 > 5 && (dword_140C227D4 <= 7 || dword_140C227D4 == 11) )
        v12 = 21;
      else
        v12 = 20;
    }
    else
    {
      v12 = 1;
    }
    v45 = sub_1407FD8D8(dword_140C227D4, dword_140C227D8);
    if ( a2 == 8 )
    {
      if ( !dword_140C548DC )
        return 3221266435LL;
      sub_140A47CF8(v14, v13);
      sub_140997374(v12, v31);
      sub_140A48330(v32);
      return 0LL;
    }
    sub_14038B9A0(1u);
    v43 = a2 - 4 <= 2;
    if ( byte_140C5AE3C && a2 - 4 > 2 )
      v11 = 0;
    if ( a4 >= 0 )
      v17 = a4 | 1;
    else
      v17 = a4 & 0xFFFFFFFE;
    if ( v11 )
      LOBYTE(byte_140C227C0) = byte_140C227C0 & 0xFD;
    v42 = byte_140C22870;
    sub_140A47CF8(v16, v15);
    sub_1403690D0();
    byte_140C22CA0 = 0;
    if ( !v43 )
    {
      if ( !a1 )
      {
        memset(&byte_140C22CA0, 0, 0x2E0uLL);
        sub_1407FD930(dword_140C227D4, dword_140C227D8);
        qword_140C22CA8 = KeQueryPerformanceCounter(0LL).QuadPart;
        sub_1407FE8C0();
        sub_140A4B974(1LL);
      }
      sub_1407FD9E0(1);
    }
    if ( v11 )
    {
      v19 = sub_14041EE20(a2, a3);
    }
    else
    {
      LOBYTE(v46) = a1;
      *(_QWORD *)((char *)&v46 + 4) = __PAIR64__(a3, a2);
      HIDWORD(v46) = v17;
      v48 = v12;
      v18 = sub_1407FE79C((__int64)&v46);
      v19 = v18;
      if ( !a1 )
      {
        if ( v18 >= 0 && !v42 )
          sub_14038BAA8((__int64)&v46);
        v44 = sub_1407FE7DC((__int64)&v46);
      }
      if ( v19 >= 0 && !a1 )
      {
        sub_140A49250(0LL);
        byte_140C22450 = 1;
        _InterlockedOr(v41, 0);
        if ( !v42 )
        {
          LOBYTE(v20) = 1;
          sub_1407FFBAC(v20);
          sub_1407FFCB0(&v46);
          sub_1407FFD04(&v46);
        }
        if ( (v17 & 8) != 0 )
          sub_1407FDA6C(1);
        sub_1407FFE58(v17, a3);
        v19 = sub_14041EE20(a2, a3);
        sub_140A48330(v21);
        v22 = byte_140C22870;
        sub_140A47CF8(v24, v23);
        byte_140C22450 = 0;
        _InterlockedOr(v41, 0);
        if ( !v22 )
        {
          sub_1407FFDDC(&v46);
          sub_1407FFBAC(0LL);
          sub_1407FFD64(&v46);
        }
        sub_140A49250(7LL);
      }
      sub_1407FE7BC((__int64)&v46);
      v25 = sub_1407F0F98();
      if ( a1 )
        goto LABEL_42;
      if ( v25 )
      {
        sub_140A48330(v26);
        v33 = byte_140C235CA;
        byte_140C235C9 = 0;
        sub_140A47CF8(v35, v34);
        v37 = v33 == 0;
        v27 = v44;
        if ( !v37 )
        {
          sub_1409A4510(v44, v36);
          sub_140A48330(v38);
          byte_140C235CA = 0;
          sub_140A47CF8(v40, v39);
        }
      }
      else
      {
        v27 = v44;
      }
      sub_1407FE774((__int64)&v46, v27);
    }
    if ( !a1 && !v43 )
    {
      if ( v19 >= 0 )
      {
        qword_140C22CD0 = KeQueryPerformanceCounter(0LL).QuadPart;
        sub_1407FDC18();
        sub_1407FE1F4();
        sub_1407FE0BC(v17);
        qword_140C23F10 = 0LL;
        dword_140C22F78 = a2;
        dword_140C22F7C = a3;
        byte_140C22CA0 = 1;
      }
      sub_1407FE344(v19);
      sub_1407FE3D8(v19, a3, v45);
    }
LABEL_42:
    sub_14025DC0C(2);
    sub_140A48330(v28);
    sub_14038B9A0(0);
    return (unsigned int)v19;
  }
  if ( !dword_140C232D8 )
  {
    if ( byte_140C232D1 )
    {
      if ( (dword_140C22278 & 0x4000000) != 0 )
        sub_140368E90(dword_140C232D8 + 4, dword_140C232D8 + 7);
    }
    else
    {
      sub_140A47CF8(v10, v9);
      v5 = sub_140990100(1LL);
      sub_140A48330(v30);
    }
  }
  sub_140A48C5C();
  return v5;
}
