/*
 * XREFs of RtlpResUltimateFallbackInfo @ 0x180007A14
 * Callers:
 *     LdrResFallbackLangList @ 0x180007644 (LdrResFallbackLangList.c)
 * Callees:
 *     LdrResGetRCConfig @ 0x180007BB0 (LdrResGetRCConfig.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     LdrpTraceLoadMUIDll @ 0x1800ED41C (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall RtlpResUltimateFallbackInfo(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4, int a5)
{
  int v7; // r15d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdi
  int v15; // r9d
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _DWORD *v20; // rcx
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  int v28; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v29; // [rsp+38h] [rbp-30h]
  int v30; // [rsp+40h] [rbp-28h] BYREF
  const wchar_t *v31; // [rsp+48h] [rbp-20h]
  _DWORD *v32; // [rsp+70h] [rbp+8h] BYREF

  v32 = 0LL;
  v28 = 4456514;
  v29 = L"RtlpResUltimateFallbackInfo Enter";
  v30 = 4325440;
  v31 = L"RtlpResUltimateFallbackInfo Exit";
  v7 = a2;
  v12 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    v13 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v13 = 2147353477LL;
  v14 = 2147353476LL;
  if ( (*(_BYTE *)v13 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v13, v9, v10, v11) )
      v27 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v27 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v28, *(unsigned __int8 *)v27);
  }
  if ( !a1 || !a3 || !a4 )
    return 3221225485LL;
  v15 = a5;
  *a4 = 0;
  *a3 = 0LL;
  result = LdrResGetRCConfig(a1, v7, (unsigned int)&v32, v15, 1);
  if ( (int)result >= 0 )
  {
    v20 = v32;
    if ( (unsigned __int64)v32 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && v32[31] && v32[32] && (v21 = v32[6]) != 0 )
    {
      *a4 = v21;
      *a3 = (char *)v20 + (unsigned int)v20[31];
      v22 = 0;
    }
    else
    {
      v22 = -1073741823;
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v20, v17, v18, v19) )
      v12 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v12 & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v24, v23, v25, v26) )
        v14 = (__int64)NtCurrentPeb()->SharedData + 554;
      LdrpTraceLoadMUIDll(&v30, *(unsigned __int8 *)v14);
    }
    return v22;
  }
  return result;
}
