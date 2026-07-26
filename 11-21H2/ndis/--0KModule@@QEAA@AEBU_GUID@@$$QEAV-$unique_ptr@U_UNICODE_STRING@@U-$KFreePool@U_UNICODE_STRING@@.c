/*
 * XREFs of ??0KModule@@QEAA@AEBU_GUID@@$$QEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C01362C0
 * Callers:
 *     ??$make_unique_nothrow@UKModule@@AEAU_GUID@@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA?AV?$unique_ptr@UKModule@@U?$default_delete@UKModule@@@wistd@@@wistd@@AEAU_GUID@@$$QEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@2@@Z @ 0x1C00CB3C4 (--$make_unique_nothrow@UKModule@@AEAU_GUID@@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KModule::KModule(__int64 a1, _OWORD *a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 20) = *a2;
  v3 = *a3;
  *a3 = 0LL;
  *(_QWORD *)(a1 + 40) = v3;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 112) = a1 + 104;
  *(_QWORD *)(a1 + 104) = a1 + 104;
  result = a1;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  return result;
}
