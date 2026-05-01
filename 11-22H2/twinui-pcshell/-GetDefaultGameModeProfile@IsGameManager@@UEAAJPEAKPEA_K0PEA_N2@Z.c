/*
 * XREFs of ?GetDefaultGameModeProfile@IsGameManager@@UEAAJPEAKPEA_K0PEA_N2@Z @ 0x1803DE080
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z @ 0x18073E874 (-GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z.c)
 */

__int64 __fastcall IsGameManager::GetDefaultGameModeProfile(
        IsGameManager *this,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        bool *a5,
        bool *a6)
{
  __int64 v6; // rcx
  unsigned int v9; // edi
  int GameProfileFromRawData; // ebx
  __int64 v11; // rdx
  DWORD ActiveProcessorCount; // eax
  bool *v14; // [rsp+48h] [rbp-80h]
  unsigned int v15; // [rsp+50h] [rbp-78h] BYREF
  _WORD v16[2]; // [rsp+58h] [rbp-70h] BYREF
  unsigned int v17; // [rsp+5Ch] [rbp-6Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v6 = *((_QWORD *)this + 2);
  v9 = (unsigned int)a2;
  v15 = 40;
  GameProfileFromRawData = (*(__int64 (__fastcall **)(__int64, __int64, _WORD *, unsigned int *))(*(_QWORD *)v6 + 80LL))(
                             v6,
                             3LL,
                             v16,
                             &v15);
  if ( GameProfileFromRawData < 0 )
  {
    v11 = 519LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)GameProfileFromRawData);
    return (unsigned int)GameProfileFromRawData;
  }
  if ( v15 > 0x28 )
  {
    GameProfileFromRawData = -2147418113;
    v11 = 521LL;
    goto LABEL_7;
  }
  ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
  GameProfileFromRawData = AutoGameProfile::GetGameProfileFromRawData(
                             (AutoGameProfile *)v16[0],
                             v15 - 4,
                             (unsigned int)&v17,
                             (const unsigned __int8 *)ActiveProcessorCount,
                             v9,
                             a3,
                             (unsigned __int64 *)a4,
                             (unsigned int *)a5,
                             a6,
                             v14);
  if ( GameProfileFromRawData < 0 )
  {
    v11 = 531LL;
    goto LABEL_7;
  }
  return (unsigned int)GameProfileFromRawData;
}
