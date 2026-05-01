/*
 * XREFs of ??0REGKEYINFO@@QEAA@AEAU0@@Z @ 0x18063DA9C
 * Callers:
 *     ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x18063F3CC (-StartMonitor@StartupAppMonitor@@QEAAXXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

REGKEYINFO *__fastcall REGKEYINFO::REGKEYINFO(REGKEYINFO *this, struct REGKEYINFO *a2)
{
  _OWORD *v2; // r14
  _OWORD *v3; // rsi
  char *v4; // rbx
  _OWORD *v7; // rbx

  v2 = (_OWORD *)((char *)this + 8);
  *((_QWORD *)this + 1) = 0LL;
  v3 = (_OWORD *)((char *)this + 48);
  *((_QWORD *)this + 3) = 0LL;
  v4 = (char *)a2 + 8;
  *((_QWORD *)this + 4) = 7LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 7LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *(_QWORD *)this = *(_QWORD *)a2;
  if ( (char *)this + 8 != (char *)a2 + 8 )
  {
    std::wstring::_Tidy_deallocate((__int64)this + 8);
    *v2 = *(_OWORD *)v4;
    v2[1] = *((_OWORD *)v4 + 1);
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 3) = 7LL;
    *(_WORD *)v4 = 0;
  }
  v7 = (_OWORD *)((char *)a2 + 48);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  if ( v3 != (_OWORD *)((char *)a2 + 48) )
  {
    std::wstring::_Tidy_deallocate((__int64)v3);
    *v3 = *v7;
    v3[1] = *((_OWORD *)a2 + 4);
    *((_QWORD *)a2 + 8) = 0LL;
    *((_QWORD *)a2 + 9) = 7LL;
    *(_WORD *)v7 = 0;
  }
  return this;
}
