/*
 * XREFs of RtlpResUltimateFallbackInfo @ 0x180007A14
 * Callers:
 *     LdrResFallbackLangList @ 0x180007644 (LdrResFallbackLangList.c)
 * Callees:
 *     LdrResGetRCConfig @ 0x180007BB0 (LdrResGetRCConfig.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     LdrpTraceLoadMUIDll @ 0x1800ED41C (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall RtlpResUltimateFallbackInfo(__int64 a1, int a2, _QWORD *a3, _DWORD *a4, int a5)
{
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // r9d
  __int64 result; // rax
  _DWORD *v14; // rcx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  int v18; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v19; // [rsp+38h] [rbp-30h]
  int v20; // [rsp+40h] [rbp-28h] BYREF
  const wchar_t *v21; // [rsp+48h] [rbp-20h]
  _DWORD *v22; // [rsp+70h] [rbp+8h] BYREF

  v22 = 0LL;
  v18 = 4456514;
  v19 = L"RtlpResUltimateFallbackInfo Enter";
  v20 = 4325440;
  v21 = L"RtlpResUltimateFallbackInfo Exit";
  v9 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v10 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v10 = 2147353477LL;
  v11 = 2147353476LL;
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v17 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v17 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v18, *(unsigned __int8 *)v17);
  }
  if ( !a1 || !a3 || !a4 )
    return 3221225485LL;
  v12 = a5;
  *a4 = 0;
  *a3 = 0LL;
  result = LdrResGetRCConfig(a1, a2, (unsigned int)&v22, v12, 1);
  if ( (int)result >= 0 )
  {
    v14 = v22;
    if ( (unsigned __int64)v22 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && v22[31] && v22[32] && (v15 = v22[6]) != 0 )
    {
      *a4 = v15;
      *a3 = (char *)v14 + (unsigned int)v14[31];
      v16 = 0;
    }
    else
    {
      v16 = -1073741823;
    }
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v9 & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v11 = (__int64)NtCurrentPeb()->SharedData + 554;
      LdrpTraceLoadMUIDll(&v20, *(unsigned __int8 *)v11);
    }
    return v16;
  }
  return result;
}
