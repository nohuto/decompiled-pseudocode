/*
 * XREFs of ?ValidateKGL@CQueryKnownGameList@@AEAAJK@Z @ 0x1801172B0
 * Callers:
 *     ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x1800BFEF0 (-RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CQueryKnownGameList::ValidateKGL(CQueryKnownGameList *this, unsigned int a2)
{
  unsigned int v4; // edx
  unsigned int v5; // r12d
  unsigned int v6; // eax
  unsigned int v7; // ecx
  int v8; // edx
  unsigned int v9; // r12d
  unsigned int v10; // ebp
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rax
  int v14; // edi
  __int64 v15; // rbx
  struct localeinfo_struct *locale; // r14
  int v17; // edi
  wint_t v18; // ax
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-40h]
  unsigned int v24; // [rsp+2Ch] [rbp-3Ch]
  __int64 v25; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !*((_DWORD *)this + 10) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x328,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80070057LL,
      v22);
    return 2147942487LL;
  }
  v4 = *((_DWORD *)this + 11);
  if ( v4 >= a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x329,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80070057LL,
      v22);
    return 2147942487LL;
  }
  v5 = *((_DWORD *)this + 12);
  if ( v5 >= a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32A,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80070057LL,
      v22);
    return 2147942487LL;
  }
  v6 = *((_DWORD *)this + 9);
  v7 = *((_DWORD *)this + 13);
  if ( v6 == 5 )
  {
    if ( v7 != 16 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32E,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x80070057LL,
        v22);
      return 2147942487LL;
    }
    goto LABEL_6;
  }
  if ( v7 < 0x10 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x333,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80070057LL,
      v22);
    return 2147942487LL;
  }
  if ( v6 >= 2 )
  {
LABEL_6:
    if ( *((_DWORD *)this + 15) > 2u )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x339,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x80070057LL,
        v22);
      return 2147942487LL;
    }
  }
  if ( v6 >= 3 && (unsigned __int16)(*((_WORD *)this + 33) - 1) > 8u )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33F,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80070057LL,
      v22);
    return 2147942487LL;
  }
  else if ( v4 + v5 < v5 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x342,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80070216LL,
      v22);
    return 2147942934LL;
  }
  else if ( v4 + v5 >= a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x343,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80070057LL,
      v22);
    return 2147942487LL;
  }
  else
  {
    if ( v7 == 16 )
      v8 = v5 & 0xF;
    else
      v8 = v5 % v7;
    if ( v8 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x344,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x80070057LL,
        v22);
      return 2147942487LL;
    }
    else
    {
      if ( v7 == 16 )
        v9 = v5 >> 4;
      else
        v9 = v5 / v7;
      v10 = 0;
      if ( v9 )
      {
        while ( 1 )
        {
          v11 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, __int64 *))(*(_QWORD *)this + 88LL))(
                  this,
                  v10,
                  &v22);
          v12 = v11;
          if ( v11 < 0 )
            break;
          if ( v23 >= a2 )
          {
            v20 = retaddr;
            v21 = 849LL;
            goto LABEL_44;
          }
          if ( v24 >= a2 )
          {
            v20 = retaddr;
            v21 = 850LL;
            goto LABEL_44;
          }
          if ( v24 + v23 < v23 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x353,
              (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
              (const char *)0x80070216LL,
              v22);
            return 2147942934LL;
          }
          if ( v24 + v23 > a2 )
          {
            v20 = retaddr;
            v21 = 852LL;
LABEL_44:
            wil::details::in1diag3::Return_Hr(
              v20,
              (void *)v21,
              (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
              (const char *)0x80070057LL,
              v22);
            return 2147942487LL;
          }
          if ( v10 )
          {
            v13 = v22;
            if ( (_WORD)v22 )
            {
              v14 = 0;
              v15 = 0LL;
              locale = _create_locale(0, "C");
              while ( (unsigned int)v15 < 4 )
              {
                v17 = _towlower_l(*((_WORD *)&v25 + v15), locale);
                v18 = _towlower_l(*((_WORD *)&v22 + v15), locale);
                v15 = (unsigned int)(v15 + 1);
                v14 = v17 - v18;
                if ( v14 )
                  goto LABEL_27;
              }
              if ( (_DWORD)v15 != 4 )
              {
                _free_locale(locale);
                goto LABEL_43;
              }
LABEL_27:
              _free_locale(locale);
              if ( v14 < 0 )
                goto LABEL_28;
LABEL_43:
              v20 = retaddr;
              v21 = 859LL;
              goto LABEL_44;
            }
          }
          else
          {
LABEL_28:
            v13 = v22;
          }
          ++v10;
          v25 = v13;
          if ( v10 >= v9 )
            return 0LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x34F,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)(unsigned int)v11,
          v22);
        return v12;
      }
      else
      {
        return 0LL;
      }
    }
  }
}
