/*
 * XREFs of ??$getline@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@YAAEAV?$basic_istream@GU?$char_traits@G@std@@@0@$$QEAV10@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@G@Z @ 0x1805BBF78
 * Callers:
 *     ?GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@9@@Z @ 0x1801C836C (-GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AE.c)
 *     ??$split@V?$back_insert_iterator@V?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@std@@@stringutils@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@GV?$back_insert_iterator@V?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@2@@Z @ 0x1805DCD7C (--$split@V-$back_insert_iterator@V-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 * Callees:
 *     ??1_Sentry_base@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x1803D5528 (--1_Sentry_base@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 *     ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K@Z @ 0x180576D3C (-erase@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K@Z.c)
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180587C48 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 *     ??0sentry@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@_N@Z @ 0x1805BCAA8 (--0sentry@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA@AEAV12@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::getline<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
        __int64 a1,
        void **a2,
        __int64 a3)
{
  __int16 v3; // r15
  __int64 v5; // rdi
  unsigned int v6; // ebx
  char v7; // si
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int16 i; // ax
  unsigned int v14; // [rsp+20h] [rbp-38h]
  _BYTE v15[48]; // [rsp+28h] [rbp-30h] BYREF
  char v17; // [rsp+78h] [rbp+20h]

  v3 = a3;
  v5 = a1;
  v6 = 0;
  v14 = 0;
  v7 = 0;
  v17 = 0;
  LOBYTE(a3) = 1;
  std::basic_istream<unsigned short>::sentry::sentry(v15, a1, a3);
  if ( !v15[8] )
    goto LABEL_12;
  try
  {
    std::wstring::erase(a2, 0LL);
    v8 = std::basic_ios<unsigned short>::rdbuf(v5 + *(int *)(*(_QWORD *)v5 + 4LL));
    for ( i = std::basic_streambuf<unsigned short>::sgetc(v8); ; i = std::basic_streambuf<unsigned short>::snextc(v11) )
    {
      if ( i == 0xFFFF )
      {
        v6 = 1;
        goto LABEL_9;
      }
      if ( i == v3 )
      {
        v7 = 1;
        v17 = 1;
        v9 = std::basic_ios<unsigned short>::rdbuf(v5 + *(int *)(*(_QWORD *)v5 + 4LL));
        std::basic_streambuf<unsigned short>::sbumpc(v9);
        goto LABEL_17;
      }
      if ( (unsigned __int64)a2[2] >= 0x7FFFFFFFFFFFFFFELL )
        break;
      std::wstring::push_back(a2, i);
      v7 = 1;
      v17 = 1;
      v11 = std::basic_ios<unsigned short>::rdbuf(v5 + *(int *)(*(_QWORD *)v5 + 4LL));
    }
    v6 = 2;
LABEL_9:
    v14 = v6;
  }
  catch ( ... )
  {
    LOBYTE(v10) = 1;
    std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v10);
    v5 = a1;
    v6 = v14;
    v7 = v17;
  }
LABEL_17:
  if ( !v7 )
LABEL_12:
    v6 |= 2u;
  std::basic_ios<unsigned short>::setstate(v5 + *(int *)(*(_QWORD *)v5 + 4LL), v6, 0LL);
  std::basic_istream<unsigned short>::_Sentry_base::~_Sentry_base((__int64)v15);
  return v5;
}
