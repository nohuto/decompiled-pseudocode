/*
 * XREFs of sub_14070A064 @ 0x14070A064
 * Callers:
 *     sub_1407D5E30 @ 0x1407D5E30 (sub_1407D5E30.c)
 * Callees:
 *     KeAcquireGuardedMutex @ 0x14029ECC0 (KeAcquireGuardedMutex.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14078D340 @ 0x14078D340 (sub_14078D340.c)
 *     sub_140944ADC @ 0x140944ADC (sub_140944ADC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 **sub_14070A064()
{
  _QWORD *v0; // rbx
  __int64 *v1; // rbx
  __int64 **result; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  struct _FAST_MUTEX *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  __int64 ***v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 **v13; // [rsp+28h] [rbp-38h]
  int v14; // [rsp+30h] [rbp-30h] BYREF
  int v15; // [rsp+34h] [rbp-2Ch] BYREF
  _OWORD v16[2]; // [rsp+38h] [rbp-28h] BYREF

  v14 = 0;
  v15 = 0;
  v13 = &v12;
  v12 = (__int64 *)&v12;
  memset(v16, 0, sizeof(v16));
  KeAcquireGuardedMutex(&stru_140C46A40);
  while ( 1 )
  {
    v0 = qword_140D3CE88;
    if ( qword_140D3CE88 == &qword_140D3CE88 )
      break;
    if ( *((PVOID **)qword_140D3CE88 + 1) != &qword_140D3CE88
      || (v3 = *(_QWORD *)qword_140D3CE88, *(PVOID *)(*(_QWORD *)qword_140D3CE88 + 8LL) != qword_140D3CE88) )
    {
LABEL_22:
      __fastfail(3u);
    }
    qword_140D3CE88 = *(PVOID *)qword_140D3CE88;
    *(_QWORD *)(v3 + 8) = &qword_140D3CE88;
    v4 = v0[2];
    v5 = v4;
    v6 = *(struct _FAST_MUTEX **)(v4 + 64);
    if ( v6 )
    {
      KeAcquireGuardedMutex(*(PKGUARDED_MUTEX *)(v4 + 64));
      v5 = v0[2];
    }
    *(_BYTE *)(v5 + 58) = 0;
    ExFreePoolWithTag(v0, 0x37706E50u);
    if ( *(_DWORD *)(v4 + 16) == 3 )
    {
      v7 = *(_QWORD *)(v4 + 88);
      if ( v7 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL);
        if ( v8 )
        {
          if ( (*(_DWORD *)(v8 + 704) & 0x4000) != 0 )
          {
            v9 = v13;
            v10 = (__int64 ***)(v4 + 96);
            if ( *v13 != (__int64 *)&v12 )
              goto LABEL_22;
            *(_QWORD *)(v4 + 104) = v13;
            *v10 = &v12;
            *v9 = v10;
            v13 = (__int64 **)(v4 + 96);
            ++*(_WORD *)(v4 + 56);
          }
        }
      }
    }
    if ( v6 )
      KeReleaseGuardedMutex(v6);
    sub_14078D340((PVOID)v4);
  }
  KeReleaseGuardedMutex(&stru_140C46A40);
  while ( 1 )
  {
    v1 = v12;
    result = &v12;
    if ( v12 == (__int64 *)&v12 )
      return result;
    if ( (__int64 **)v12[1] != &v12 )
      goto LABEL_22;
    v11 = (__int64 *)*v12;
    if ( *(__int64 **)(*v12 + 8) != v12 )
      goto LABEL_22;
    v12 = (__int64 *)*v12;
    v11[1] = (__int64)&v12;
    LODWORD(v16[0]) = 2097153;
    *(_OWORD *)((char *)v16 + 4) = xmmword_140010CF8;
    sub_140944ADC(v1 - 12, v16, &v15, &v14);
    ObfDereferenceObject((PVOID)*(v1 - 1));
    *(v1 - 1) = 0LL;
    sub_14078D340(v1 - 12);
  }
}
