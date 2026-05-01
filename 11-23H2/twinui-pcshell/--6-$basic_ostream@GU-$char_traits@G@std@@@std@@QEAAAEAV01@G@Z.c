/*
 * XREFs of ??6?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@G@Z @ 0x180751BF4
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@@Z @ 0x1804B1D9C (--0sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@AEAV12@@Z.c)
 *     ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x1804B2230 (--1sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::basic_ostream<unsigned short>::operator<<(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r12
  unsigned __int16 v6; // ax
  bool v7; // cl
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned __int16 v11; // ax
  bool v12; // cl
  int v13; // eax
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  char v16; // [rsp+28h] [rbp-30h]
  unsigned int v18; // [rsp+68h] [rbp+10h]

  v1 = a1;
  v2 = 0;
  v18 = 0;
  std::basic_ostream<unsigned short>::sentry::sentry((__int64)&v15, a1);
  if ( v16 )
  {
    if ( std::ios_base::width((std::ios_base *)(v1 + *(int *)(*(_QWORD *)v1 + 4LL))) > 1 )
      v3 = std::ios_base::width((std::ios_base *)(v1 + *(int *)(*(_QWORD *)v1 + 4LL))) - 1;
    else
      v3 = 0LL;
    try
    {
      if ( (std::ios_base::flags((std::ios_base *)(v1 + *(int *)(*(_QWORD *)v1 + 4LL))) & 0x1C0) == 0x40 )
      {
LABEL_11:
        v9 = std::basic_ios<unsigned short>::rdbuf(v1 + *(int *)(*(_QWORD *)v1 + 4LL));
        if ( (unsigned __int16)std::basic_streambuf<unsigned short>::sputc(v9, 44LL) == 0xFFFF )
          v2 = 4;
        v18 = v2;
        while ( !v2 && v3 > 0 )
        {
          v10 = std::basic_ios<unsigned short>::rdbuf(v1 + *(int *)(*(_QWORD *)v1 + 4LL));
          v11 = std::basic_ios<unsigned short>::fill(v1 + *(int *)(*(_QWORD *)v1 + 4LL));
          v12 = (unsigned __int16)std::basic_streambuf<unsigned short>::sputc(v10, v11) == 0xFFFF;
          --v3;
          v13 = 4;
          if ( !v12 )
            v13 = 0;
          v2 = v13;
          v18 = v13;
        }
      }
      else
      {
        while ( !v2 )
        {
          if ( v3 <= 0 )
            goto LABEL_11;
          v5 = std::basic_ios<unsigned short>::rdbuf(v1 + *(int *)(*(_QWORD *)v1 + 4LL));
          v6 = std::basic_ios<unsigned short>::fill(v1 + *(int *)(*(_QWORD *)v1 + 4LL));
          v7 = (unsigned __int16)std::basic_streambuf<unsigned short>::sputc(v5, v6) == 0xFFFF;
          --v3;
          v8 = 4;
          if ( !v7 )
            v8 = 0;
          v2 = v8;
          v18 = v8;
        }
      }
    }
    catch ( ... )
    {
      LOBYTE(v4) = 1;
      std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v4);
      v1 = a1;
      v2 = v18;
    }
  }
  std::ios_base::width((std::ios_base *)(v1 + *(int *)(*(_QWORD *)v1 + 4LL)), 0LL);
  std::basic_ios<unsigned short>::setstate(v1 + *(int *)(*(_QWORD *)v1 + 4LL), v2, 0LL);
  std::basic_ostream<unsigned short>::sentry::~sentry(&v15);
  return v1;
}
