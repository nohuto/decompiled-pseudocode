/*
 * XREFs of sub_1403B38C8 @ 0x1403B38C8
 * Callers:
 *     sub_14039E230 @ 0x14039E230 (sub_14039E230.c)
 *     sub_1403B31C0 @ 0x1403B31C0 (sub_1403B31C0.c)
 *     sub_1403B3594 @ 0x1403B3594 (sub_1403B3594.c)
 *     sub_1403BCC5C @ 0x1403BCC5C (sub_1403BCC5C.c)
 *     sub_1403BCDA0 @ 0x1403BCDA0 (sub_1403BCDA0.c)
 *     sub_1403BCF1C @ 0x1403BCF1C (sub_1403BCF1C.c)
 *     sub_1403BE694 @ 0x1403BE694 (sub_1403BE694.c)
 *     sub_1403BE95C @ 0x1403BE95C (sub_1403BE95C.c)
 *     sub_1403BEA4C @ 0x1403BEA4C (sub_1403BEA4C.c)
 *     sub_1403DD284 @ 0x1403DD284 (sub_1403DD284.c)
 *     sub_14050D760 @ 0x14050D760 (sub_14050D760.c)
 *     sub_140521D90 @ 0x140521D90 (sub_140521D90.c)
 *     sub_1405370FC @ 0x1405370FC (sub_1405370FC.c)
 *     sub_140A63CE0 @ 0x140A63CE0 (sub_140A63CE0.c)
 *     sub_140A64A00 @ 0x140A64A00 (sub_140A64A00.c)
 * Callees:
 *     sub_1403B37B0 @ 0x1403B37B0 (sub_1403B37B0.c)
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 *     sub_1403DE864 @ 0x1403DE864 (sub_1403DE864.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_1403B38C8(__int64 a1, __int64 a2, int a3, __int64 a4, void *a5)
{
  unsigned int v5; // edi
  unsigned int v6; // r11d
  __int64 *v8; // r14
  char v9; // r10
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  __int64 (__fastcall **p_Src)(); // rsi
  unsigned int v16; // ebx
  _QWORD *i; // rax
  __int64 v19; // r8
  __int64 *v20; // rax
  __int64 (__fastcall *v26)(); // [rsp+20h] [rbp-40h] BYREF
  __int128 v27; // [rsp+28h] [rbp-38h] BYREF
  __int128 Src; // [rsp+38h] [rbp-28h] BYREF
  __int128 v29; // [rsp+48h] [rbp-18h]

  v5 = 0;
  v26 = 0LL;
  v6 = a4;
  v8 = 0LL;
  v9 = 0;
  Src = 0LL;
  v27 = 0LL;
  v10 = a3 - 1;
  if ( !v10 )
  {
    p_Src = off_1400020F8;
    goto LABEL_8;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    p_Src = &off_1400020E8;
    goto LABEL_8;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( sub_1403B37B0() )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      v29 = 0LL;
      LODWORD(v29) = _RAX;
      if ( (_RAX & 2) != 0 )
      {
        p_Src = (__int64 (__fastcall **)())&qword_140D017A8;
        qword_140D017A8 = qword_140C4C488;
        v8 = (__int64 *)&unk_140D017A0;
        v16 = 8;
        v9 = 1;
        goto LABEL_9;
      }
    }
    return (unsigned int)-1073741637;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v16 = 8;
    v26 = sub_1405229B0;
    p_Src = &v26;
    goto LABEL_9;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v19 = (unsigned int)(v14 - 1);
    if ( (_DWORD)v19 )
    {
      if ( (_DWORD)v19 != 1 )
      {
        dword_140C4E844 = 27;
        return (unsigned int)-1073741811;
      }
      p_Src = (__int64 (__fastcall **)())off_140002108;
      goto LABEL_8;
    }
    if ( (unsigned __int8)sub_1403DE864(a1, a2, v19, a4, v26) )
    {
      *(_QWORD *)&v27 = sub_14050E460;
      p_Src = (__int64 (__fastcall **)())&v27;
      *((_QWORD *)&v27 + 1) = sub_14050E430;
      goto LABEL_8;
    }
    return (unsigned int)-1073741637;
  }
  p_Src = (__int64 (__fastcall **)())&Src;
  Src = xmmword_140C4C468;
  v8 = &qword_140CF87D8;
  v9 = 1;
LABEL_8:
  v16 = 16;
LABEL_9:
  if ( !a5 || v6 > v16 )
  {
    dword_140C4E844 = 28;
    return (unsigned int)-1073741811;
  }
  if ( v6 < v16 )
  {
    v5 = -1073741789;
    dword_140C4E844 = 28;
    return v5;
  }
  if ( !v9 )
    goto LABEL_13;
  if ( !a2 )
    return (unsigned int)-1073741811;
  for ( i = (_QWORD *)*v8; i; i = (_QWORD *)*i )
  {
    if ( i[1] == a2 )
      goto LABEL_13;
  }
  v20 = (__int64 *)sub_1403BF104(16LL, 1LL);
  if ( !v20 )
    return (unsigned int)-1073741801;
  v20[1] = a2;
  *v20 = *v8;
  *v8 = (__int64)v20;
LABEL_13:
  memmove(a5, p_Src, v16);
  return v5;
}
