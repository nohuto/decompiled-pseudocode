/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x10001E70
 * Callers:
 *     _DllMain@12 @ 0x10004C86 (_DllMain@12.c)
 *     _ReleaseExclusiveCpuSets@0 @ 0x10005C20 (_ReleaseExclusiveCpuSets@0.c)
 * Callees:
 *     __tlgWriteTransfer_EventWriteTransfer@24 @ 0x10001EBE (__tlgWriteTransfer_EventWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 */

int __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+0h] [ebp-34h] BYREF
  int v7; // [esp+20h] [ebp-14h]
  int v8; // [esp+24h] [ebp-10h]
  int v9; // [esp+28h] [ebp-Ch]
  int v10; // [esp+2Ch] [ebp-8h]

  v7 = a5;
  v8 = 0;
  v9 = 4;
  v10 = 0;
  return _tlgWriteTransfer_EventWriteTransfer((int)&dword_10008000, a2, 0, 0, 3u, &UserData);
}
