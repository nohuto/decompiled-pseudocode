/*
 * XREFs of LdrFindResource_U @ 0x180029AC0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x180027340 (LdrpSearchResourceSection_U.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     LdrpTraceLoadMUIDll @ 0x1800EC0E8 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrFindResource_U(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned int v5; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // r10
  __int64 v14; // rbx
  unsigned int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  struct _PEB *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rcx

  v5 = a3;
  v12 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    v13 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v13 = 2147353477LL;
  v14 = 2147353476LL;
  if ( (*(_BYTE *)v13 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, v8, v10, v11) )
      v25 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v25 = 2147353476LL;
    LdrpTraceLoadMUIDll(L",.", *(unsigned __int8 *)v25);
  }
  v15 = LdrpSearchResourceSection_U(a1, a2, v5, 0, a4);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v17, v16, v18, v19) )
  {
    v21 = NtCurrentPeb();
    v12 = (__int64)v21->SharedData + 555;
  }
  if ( (*(_BYTE *)v12 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v21, v20, v22, v23) )
      v14 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(L"*,", *(unsigned __int8 *)v14);
  }
  return v15;
}
