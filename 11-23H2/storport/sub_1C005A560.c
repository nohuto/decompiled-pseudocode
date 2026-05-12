/*
 * XREFs of sub_1C005A560 @ 0x1C005A560
 * Callers:
 *     sub_1C003BA8C @ 0x1C003BA8C (sub_1C003BA8C.c)
 *     sub_1C0050C54 @ 0x1C0050C54 (sub_1C0050C54.c)
 *     sub_1C0050E94 @ 0x1C0050E94 (sub_1C0050E94.c)
 *     sub_1C0051188 @ 0x1C0051188 (sub_1C0051188.c)
 *     sub_1C00513FC @ 0x1C00513FC (sub_1C00513FC.c)
 *     sub_1C00516D0 @ 0x1C00516D0 (sub_1C00516D0.c)
 *     sub_1C0051930 @ 0x1C0051930 (sub_1C0051930.c)
 *     sub_1C0051E04 @ 0x1C0051E04 (sub_1C0051E04.c)
 *     sub_1C0051FD0 @ 0x1C0051FD0 (sub_1C0051FD0.c)
 *     sub_1C0052204 @ 0x1C0052204 (sub_1C0052204.c)
 *     sub_1C00524E0 @ 0x1C00524E0 (sub_1C00524E0.c)
 *     sub_1C005276C @ 0x1C005276C (sub_1C005276C.c)
 *     sub_1C00529EC @ 0x1C00529EC (sub_1C00529EC.c)
 *     sub_1C0052C58 @ 0x1C0052C58 (sub_1C0052C58.c)
 *     sub_1C0052EB0 @ 0x1C0052EB0 (sub_1C0052EB0.c)
 *     sub_1C00531E4 @ 0x1C00531E4 (sub_1C00531E4.c)
 *     sub_1C0053468 @ 0x1C0053468 (sub_1C0053468.c)
 *     sub_1C0053744 @ 0x1C0053744 (sub_1C0053744.c)
 *     sub_1C00539B4 @ 0x1C00539B4 (sub_1C00539B4.c)
 *     sub_1C0053E90 @ 0x1C0053E90 (sub_1C0053E90.c)
 *     sub_1C0054050 @ 0x1C0054050 (sub_1C0054050.c)
 *     sub_1C0054298 @ 0x1C0054298 (sub_1C0054298.c)
 *     sub_1C005458C @ 0x1C005458C (sub_1C005458C.c)
 *     sub_1C0054830 @ 0x1C0054830 (sub_1C0054830.c)
 *     sub_1C0054AC8 @ 0x1C0054AC8 (sub_1C0054AC8.c)
 *     sub_1C0059E34 @ 0x1C0059E34 (sub_1C0059E34.c)
 *     sub_1C00606A0 @ 0x1C00606A0 (sub_1C00606A0.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0042880 @ 0x1C0042880 (sub_1C0042880.c)
 *     sub_1C0056438 @ 0x1C0056438 (sub_1C0056438.c)
 *     sub_1C0079FFC @ 0x1C0079FFC (sub_1C0079FFC.c)
 */

__int64 __fastcall sub_1C005A560(int *a1, _BYTE *a2)
{
  int v2; // eax
  char v3; // r13
  int *v4; // rsi
  void *v7; // rbp
  _WORD *v8; // rbx
  int *v9; // r14
  __int64 v10; // r15
  int v11; // edi
  unsigned int v12; // ecx
  char v14; // [rsp+D0h] [rbp-88h]
  __int128 v15; // [rsp+F0h] [rbp-68h] BYREF
  __int128 v16; // [rsp+100h] [rbp-58h] BYREF

  v2 = *a1;
  v3 = 0;
  v4 = 0LL;
  v14 = 0;
  v16 = 0LL;
  v15 = 0LL;
  if ( v2 == 1431193940 )
  {
    v4 = a1;
    if ( (*((_BYTE *)a1 + 451) & 0x40) == 0 )
    {
      v7 = (void *)*((_QWORD *)a1 + 437);
      v8 = (_WORD *)*((_QWORD *)a1 + 438);
      v9 = (int *)*((_QWORD *)a1 + 3);
      goto LABEL_7;
    }
    return (unsigned int)-1073741637;
  }
  if ( v2 != 1094997074 )
    return (unsigned int)-1073741637;
  v9 = a1;
  if ( (*((_BYTE *)a1 + 111) & 0x10) != 0 )
    return (unsigned int)-1073741637;
  v7 = (void *)*((_QWORD *)a1 + 751);
  v8 = (_WORD *)*((_QWORD *)a1 + 752);
LABEL_7:
  v10 = *((_QWORD *)a1 + 1);
  if ( !v7 )
  {
    v7 = (void *)sub_1C0007CF4(256LL, 6240LL, 1129603410LL, *((_QWORD *)a1 + 1));
    if ( !v7 )
      return (unsigned int)-1073741801;
    v14 = 1;
  }
  memset_0(v7, 0, 0x1860uLL);
  if ( v8 )
    goto LABEL_15;
  v8 = (_WORD *)sub_1C0007CF4(256LL, 168LL, 1129603410LL, v10);
  if ( v8 )
  {
    v3 = 1;
LABEL_15:
    memset_0(v8, 0, 0xA8uLL);
    v11 = sub_1C0079FFC(a1, v7, v8);
    if ( v11 >= 0 )
    {
      if ( *(_DWORD *)v8 == 512
        && *((_BYTE *)v8 + 52)
        && *((_BYTE *)v8 + 64)
        && *((_BYTE *)v8 + 121)
        && (v12 = *((_DWORD *)v8 + 18), *((_DWORD *)v8 + 32) >= v12)
        && *((_BYTE *)v8 + 148)
        && !*((_BYTE *)v8 + 126)
        && !*((_BYTE *)v8 + 127)
        && !(*((_DWORD *)v8 + 35) % *((_DWORD *)v8 + 36))
        && (unsigned __int16)v8[68] >= v12 )
      {
        if ( v4 )
        {
          if ( !*((_QWORD *)v4 + 437) )
            *((_QWORD *)v4 + 437) = v7;
          if ( !*((_QWORD *)v4 + 438) )
            *((_QWORD *)v4 + 438) = v8;
        }
        else
        {
          if ( !*((_QWORD *)v9 + 751) )
            *((_QWORD *)v9 + 751) = v7;
          if ( !*((_QWORD *)v9 + 752) )
            *((_QWORD *)v9 + 752) = v8;
        }
        v7 = 0LL;
        v8 = 0LL;
      }
      else
      {
        if ( v4 )
          *((_BYTE *)v4 + 451) |= 0x40u;
        else
          *((_BYTE *)v9 + 111) |= 0x10u;
        sub_1C0010EE0(*((_QWORD *)v9 + 2), (__int64)&v15);
        if ( (byte_1C0093A07 & 4) != 0 )
        {
          if ( v4 )
            sub_1C0056438(
              *((unsigned __int8 *)v8 + 148),
              *((unsigned __int8 *)v8 + 121),
              *((unsigned __int8 *)v8 + 64),
              v9[14],
              *((_BYTE *)v4 + 96),
              *((_BYTE *)v4 + 97),
              *((_BYTE *)v4 + 98),
              (__int64)(v4 + 506),
              (__int64)(v9 + 1250),
              *((const wchar_t **)&v15 + 1),
              (const char *)v4 + 160,
              (const char *)v4 + 169,
              (const char *)v4 + 186,
              *((const wchar_t **)v9 + 627),
              *v8,
              *((_BYTE *)v8 + 52),
              *((_BYTE *)v8 + 64),
              *((_BYTE *)v8 + 121),
              *((_DWORD *)v8 + 32),
              *((_DWORD *)v8 + 18),
              *((_BYTE *)v8 + 148),
              *((_BYTE *)v8 + 126),
              *((_BYTE *)v8 + 127),
              *((_DWORD *)v8 + 35),
              *((_DWORD *)v8 + 36),
              v8[68]);
          else
            sub_1C0056438(
              *((unsigned __int8 *)v8 + 148),
              *((unsigned __int8 *)v8 + 121),
              *((unsigned __int8 *)v8 + 64),
              v9[14],
              255,
              255,
              255,
              (__int64)&v16,
              (__int64)(v9 + 1250),
              *((const wchar_t **)&v15 + 1),
              byte_1C0082FE6,
              byte_1C0082FE6,
              byte_1C0082FE6,
              *((const wchar_t **)v9 + 627),
              *v8,
              *((_BYTE *)v8 + 52),
              *((_BYTE *)v8 + 64),
              *((_BYTE *)v8 + 121),
              *((_DWORD *)v8 + 32),
              *((_DWORD *)v8 + 18),
              *((_BYTE *)v8 + 148),
              *((_BYTE *)v8 + 126),
              *((_BYTE *)v8 + 127),
              *((_DWORD *)v8 + 35),
              *((_DWORD *)v8 + 36),
              v8[68]);
        }
        v11 = -1073741637;
      }
    }
    else
    {
      sub_1C0042880(a2, 32LL, (__int64)"TcglibDiscoverDevice");
    }
    if ( v3 && v8 )
      ExFreePoolWithTag(v8, 0x43546152u);
    goto LABEL_48;
  }
  v11 = -1073741801;
LABEL_48:
  if ( v14 && v7 )
    ExFreePoolWithTag(v7, 0x43546152u);
  return (unsigned int)v11;
}
