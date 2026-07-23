/*
 * XREFs of sub_140A54BA0 @ 0x140A54BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14025E898 @ 0x14025E898 (sub_14025E898.c)
 *     sub_14036FA84 @ 0x14036FA84 (sub_14036FA84.c)
 *     sub_1403B043C @ 0x1403B043C (sub_1403B043C.c)
 *     sub_1403B0670 @ 0x1403B0670 (sub_1403B0670.c)
 *     sub_1403B8BF8 @ 0x1403B8BF8 (sub_1403B8BF8.c)
 *     sub_1403B8E60 @ 0x1403B8E60 (sub_1403B8E60.c)
 *     sub_1403B91D4 @ 0x1403B91D4 (sub_1403B91D4.c)
 *     sub_1403B97E8 @ 0x1403B97E8 (sub_1403B97E8.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140AF819C @ 0x140AF819C (sub_140AF819C.c)
 *     sub_140AF866C @ 0x140AF866C (sub_140AF866C.c)
 */

__int64 __fastcall sub_140A54BA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  v4 = 0;
  if ( (int)a1 <= 16 )
  {
    if ( (_DWORD)a1 == 16 )
    {
      byte_140C097A4 = 0;
    }
    else if ( (_DWORD)a1 )
    {
      switch ( (_DWORD)a1 )
      {
        case 4:
          sub_1403B8BF8(a1, a2, a3, a4);
          break;
        case 7:
          sub_14025E898();
          break;
        case 9:
          sub_140AF819C(a3);
          break;
        case 0xB:
          _enable();
          break;
      }
    }
    else
    {
      off_140C01DE0[0] = (__int64 (__fastcall *)())sub_140852B70;
      off_140C01DE8[0] = (__int64 (__fastcall *)())sub_1409088F0;
      off_140C01E18[0] = (__int64 (__fastcall *)())sub_1403D8F10;
      off_140C01E58[0] = (__int64 (__fastcall *)())sub_140372AF0;
      off_140C01EB8[0] = (__int64 (__fastcall *)())sub_140251DC0;
      off_140C01F88[0] = (__int64 (__fastcall *)())sub_14051DB60;
      off_140C01FC8[0] = (__int64 (__fastcall *)())sub_140259C50;
    }
    return v4;
  }
  if ( (_DWORD)a1 == 19 )
    goto LABEL_17;
  if ( (_DWORD)a1 != 17 )
  {
    if ( (_DWORD)a1 == 21 )
    {
      if ( dword_140C4ADB0 && dword_140C4ADB0 != 14 )
        KeBugCheckEx(0x5Cu, 0x203uLL, *(int *)(qword_140C54A88 + 224), qword_140C54A88, dword_140C4ADB0);
    }
    else if ( (_DWORD)a1 == 29 )
    {
      return (unsigned int)sub_1403B97E8();
    }
    return v4;
  }
  sub_140AF866C();
  sub_1403B91D4();
  result = sub_1403B8E60(v7, v6);
  v4 = result;
  if ( (int)result >= 0 )
  {
LABEL_17:
    if ( (unsigned int)sub_14036FA84() == 1 )
      sub_1403B043C();
    if ( (dword_140C4C44C & 1) != 0 )
      sub_1403B0670(0LL);
    return v4;
  }
  return result;
}
