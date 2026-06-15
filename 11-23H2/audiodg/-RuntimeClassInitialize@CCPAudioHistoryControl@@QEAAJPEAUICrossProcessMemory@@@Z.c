/*
 * XREFs of ?RuntimeClassInitialize@CCPAudioHistoryControl@@QEAAJPEAUICrossProcessMemory@@@Z @ 0x140094CC8
 * Callers:
 *     ??$MakeAndInitialize@VCCPAudioHistoryControl@@UICPAudioHistoryControl@@AEAPEAUICrossProcessMemory@@@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryControl@@AEAPEAUICrossProcessMemory@@@Z @ 0x140094468 (--$MakeAndInitialize@VCCPAudioHistoryControl@@UICPAudioHistoryControl@@AEAPEAUICrossProcessMemor.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14004DEB4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCPAudioHistoryControl::RuntimeClassInitialize(
        CCPAudioHistoryControl *this,
        struct ICrossProcessMemory *a2)
{
  int v3; // eax
  const char *v4; // r9
  unsigned int v5; // edi
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0;
  v3 = (*(__int64 (__fastcall **)(struct ICrossProcessMemory *, int *, __int64 *))(*(_QWORD *)a2 + 32LL))(
         a2,
         &v10,
         &v11);
  v5 = v3;
  if ( v3 >= 0 )
  {
    v7 = v11;
    if ( v11 )
    {
      v8 = *(unsigned int *)(v11 + 352);
      if ( (_DWORD)v8 )
      {
        *((_DWORD *)this + 9) = *(unsigned __int16 *)(v11 + 392);
        *((_DWORD *)this + 10) = *(_DWORD *)(v7 + 384);
        *((_DWORD *)this + 11) = *(_DWORD *)(v7 + 332);
        *((_QWORD *)this + 6) = *(_QWORD *)(v7 + 336);
        *((_QWORD *)this + 2) = v7 + v8;
        result = 0LL;
        *((_QWORD *)this + 3) = v7;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x25,
          (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
          (const char *)0x80070057LL);
        return 2147942487LL;
      }
    }
    else
    {
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x20,
               (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
               v4);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
      (const char *)(unsigned int)v3);
    return v5;
  }
  return result;
}
