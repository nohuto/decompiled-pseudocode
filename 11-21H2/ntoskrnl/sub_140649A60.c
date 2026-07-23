/*
 * XREFs of sub_140649A60 @ 0x140649A60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A13EC0 @ 0x140A13EC0 (sub_140A13EC0.c)
 *     sub_140A142D0 @ 0x140A142D0 (sub_140A142D0.c)
 *     sub_140A15B1C @ 0x140A15B1C (sub_140A15B1C.c)
 */

__int64 __fastcall sub_140649A60(_WORD *a1, unsigned __int64 a2, const WCHAR *a3, __int64 a4)
{
  __int64 *v9; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  const char *v12; // r9
  int v13; // r8d
  __int16 v14[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v15; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+40h] [rbp-C0h]
  __int16 v18; // [rsp+44h] [rbp-BCh]
  _OWORD v19[2]; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v20[264]; // [rsp+70h] [rbp-90h] BYREF

  v16 = 0x74007300750043LL;
  v17 = 7143535;
  v18 = 0;
  v19[0] = xmmword_1400445F8;
  v19[1] = xmmword_140044608;
  if ( a2 < 7 )
    return 3221225507LL;
  v15 = -1;
  *a1 = 0;
  v9 = &v16;
  v20[0] = 0;
  v14[0] = -1;
  v10 = sub_140A142D0(&v15, v14, a4);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( v14[0] == 9 || v14[0] == 12 )
      v9 = (__int64 *)v19;
    if ( !a3 )
      a3 = &word_140011C40;
    v10 = sub_140A15B1C(v9, a3, v20, 260LL);
    v11 = v10;
    if ( v10 >= 0 )
      return (unsigned int)sub_140A13EC0(a1, a2, v20, a4);
    v12 = "AslPathCombine failed [%x]";
    v13 = 1161;
  }
  else
  {
    v12 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
    v13 = 1147;
  }
  sub_1406E0C3C(1, (unsigned int)"SdbpGetPathCustomSdbPreRS3", v13, (_DWORD)v12, v10);
  return v11;
}
