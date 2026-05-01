/*
 * XREFs of ?HampActSnapSystemStateForStart@@YAXPEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z @ 0x18001B1E0
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180018660 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     <none>
 */

void __fastcall HampActSnapSystemStateForStart(struct _HAM_ACTIVITY *a1, struct _HAM_ACT_START_SYSTEM_STATE *a2)
{
  DWORD v4; // ebp
  unsigned __int64 v5; // rsi
  _QWORD *Value; // rdi
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  __int64 *v10; // rax
  __int64 v11; // rdx
  bool v12; // zf
  DWORD v13; // esi
  __int64 v14; // r14
  _QWORD *v15; // rdi
  DWORD v16; // ecx
  __int64 *v17; // rax
  __int64 v18; // rcx
  DWORD v19; // ebp
  _QWORD *v20; // rsi
  DWORD CurrentThreadId; // eax
  DWORD v22; // ecx
  int v23; // esi
  __int64 *v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  DWORD v27; // esi
  __int64 v28; // rbp
  _QWORD *v29; // rdi
  int v30; // esi
  __int64 *v31; // rax
  __int64 v32; // rdx
  int v33; // [rsp+60h] [rbp+8h] BYREF
  char v34; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)a2 = 0LL;
  v33 = 4;
  NtQueryWnfStateData(&SystemStateChangedWnfName, 0LL, 0LL, &v34, a2, &v33);
  v4 = HampLockTrackerId;
  v5 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFFC00uLL) != 0 )
      __int2c();
    *Value |= 0x400uLL;
    ++Value[11];
  }
  RtlAcquireSRWLockShared(v5 - 216);
  v7 = 0;
  if ( *(_DWORD *)(v5 + 228) )
    v7 = 2;
  v8 = v7 | *((_DWORD *)a2 + 1) & 0xFFFFFFFD;
  v9 = 0;
  *((_DWORD *)a2 + 1) = v8;
  if ( *(_DWORD *)(v5 + 232) )
    v9 = 4;
  *((_DWORD *)a2 + 1) = v9 | v8 & 0xFFFFFFFB;
  if ( HampLockTrackerId != -1 )
  {
    v10 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v11 = *v10;
    if ( (*v10 & 0x400) == 0 )
      __int2c();
    v12 = v10[11]-- == 1;
    if ( v12 )
      *v10 = v11 & 0xFFFFFFFFFFFFFBFFuLL;
  }
  RtlReleaseSRWLockShared(v5 - 216);
  v13 = HampLockTrackerId;
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 792LL) + 88LL) + 88LL) + 160LL);
  if ( HampLockTrackerId != -1 )
  {
    v15 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v13) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
      __int2c();
    *v15 |= 0x100uLL;
    ++v15[9];
  }
  RtlAcquireSRWLockShared(v14 + 96);
  v16 = HampLockTrackerId;
  *((_DWORD *)a2 + 1) ^= (*(_DWORD *)(v14 + 144) ^ *((_DWORD *)a2 + 1)) & 1;
  if ( v16 != -1 )
  {
    v17 = (__int64 *)TlsGetValue(v16);
    v18 = *v17;
    if ( (*v17 & 0x100) == 0 )
      __int2c();
    v12 = v17[9]-- == 1;
    if ( v12 )
      *v17 = v18 & 0xFFFFFFFFFFFFFEFFuLL;
  }
  RtlReleaseSRWLockShared(v14 + 96);
  v19 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v20 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v19) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
      __int2c();
    *v20 |= 0x100uLL;
    ++v20[9];
  }
  RtlAcquireSRWLockExclusive(v14 + 96);
  CurrentThreadId = GetCurrentThreadId();
  v22 = HampLockTrackerId;
  *(_DWORD *)(v14 + 104) = CurrentThreadId;
  v23 = *(_DWORD *)(v14 + 144) >> 1;
  if ( v22 != -1 )
  {
    v24 = (__int64 *)TlsGetValue(v22);
    v25 = *v24;
    if ( (*v24 & 0x100) == 0 )
      __int2c();
    v12 = v24[9]-- == 1;
    if ( v12 )
      *v24 = v25 & 0xFFFFFFFFFFFFFEFFuLL;
  }
  *(_DWORD *)(v14 + 104) = 0;
  RtlReleaseSRWLockExclusive(v14 + 96);
  v26 = (unsigned __int8)v23;
  v27 = HampLockTrackerId;
  *((_DWORD *)a2 + 1) ^= (*((_DWORD *)a2 + 1) ^ (16 * v26)) & 0x10;
  v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 792LL) + 88LL) + 88LL);
  if ( v27 != -1 )
  {
    v29 = TlsGetValue(v27);
    if ( (*(_QWORD *)TlsGetValue(v27) & 0xFFFFFFFFFFFFFF80uLL) != 0 )
      __int2c();
    *v29 |= 0x80uLL;
    ++v29[8];
  }
  RtlAcquireSRWLockShared(v28 + 168);
  v30 = *(unsigned __int8 *)(v28 + 192);
  if ( HampLockTrackerId != -1 )
  {
    v31 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v32 = *v31;
    if ( (*v31 & 0x80u) == 0LL )
      __int2c();
    v12 = v31[8]-- == 1;
    if ( v12 )
      *v31 = v32 & 0xFFFFFFFFFFFFFF7FuLL;
  }
  RtlReleaseSRWLockShared(v28 + 168);
  *((_DWORD *)a2 + 1) ^= (*((_DWORD *)a2 + 1) ^ (8 * v30)) & 8;
}
