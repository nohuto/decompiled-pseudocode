/*
 * XREFs of sub_140865450 @ 0x140865450
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_1407969D0 @ 0x1407969D0 (sub_1407969D0.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     sub_1409E040C @ 0x1409E040C (sub_1409E040C.c)
 *     sub_1409E0504 @ 0x1409E0504 (sub_1409E0504.c)
 *     sub_1409E0734 @ 0x1409E0734 (sub_1409E0734.c)
 *     sub_1409E0AEC @ 0x1409E0AEC (sub_1409E0AEC.c)
 */

void __fastcall sub_140865450(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  __int64 v4; // rcx
  char v5; // r14
  unsigned int i; // ebx
  signed __int64 **j; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int *v10; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v12; // rcx
  unsigned int v13; // edi
  _DWORD *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  signed __int64 *v17; // rax
  signed __int64 *v18; // rbx
  signed __int64 **k; // rdx
  __int64 v20; // rax
  struct _KTHREAD *v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // edi
  _DWORD *v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // r8
  signed __int64 *m; // rdi
  __int64 v28; // rcx
  signed __int64 *v29; // rax
  signed __int64 *v30; // rbx

  if ( ControlCode == 2 )
  {
    v4 = qword_140D05008;
    v5 = 0;
    for ( i = 0; i < *(_DWORD *)(qword_140D05008 + 16); ++i )
    {
      v8 = sub_140797594(v4, i, 0);
      v10 = (unsigned int *)v8;
      if ( v8 )
      {
        sub_1409E0AEC(v9, qword_140039638, v8);
        sub_1407981E8(v10, 0);
      }
      v4 = qword_140D05008;
    }
    for ( j = 0LL; ; j = (signed __int64 **)v18 )
    {
      v17 = sub_1407969D0(v4, j, 2);
      v18 = v17;
      if ( !v17 )
        break;
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v17 + 51), 0LL);
      v18[52] = (signed __int64)KeGetCurrentThread();
      if ( EtwEventEnabled(qword_140C15FA8, &stru_140039238) )
        sub_1409E0504(v12, &stru_140039238, v18);
      v13 = 0;
      v14 = v18 + 16;
      do
      {
        if ( *v14 && EtwEventEnabled(qword_140C15FA8, &stru_1400388A8) )
        {
          LOBYTE(v16) = v13;
          sub_1409E040C(v15, v18, v16);
        }
        ++v13;
        v14 += 8;
      }
      while ( v13 < 8 );
      v18[52] = 0LL;
      ExReleasePushLockEx((ULONG_PTR)(v18 + 51), 0LL);
      sub_1402F9540((__int64)KeGetCurrentThread());
      v4 = qword_140D05008;
    }
    for ( k = 0LL; ; k = (signed __int64 **)v30 )
    {
      v29 = sub_1407969D0(qword_140D05008, k, 0);
      v30 = v29;
      if ( !v29 )
        break;
      v20 = v29[5] - 0x4648BDB6B675EC37LL;
      if ( !v20 )
        v20 = v30[6] + 0x5DC3B238020C6D44LL;
      if ( v20 )
      {
        v21 = KeGetCurrentThread();
        --*((_WORD *)v21 + 242);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v30 + 51), 0LL);
        v5 = 1;
        v30[52] = (signed __int64)KeGetCurrentThread();
      }
      if ( EtwEventEnabled(qword_140C15FA8, &stru_1400395C8) )
        sub_1409E0504(v22, &stru_1400395C8, v30);
      v23 = 0;
      v24 = v30 + 16;
      do
      {
        if ( *v24 && EtwEventEnabled(qword_140C15FA8, &stru_1400388A8) )
        {
          LOBYTE(v26) = v23;
          sub_1409E040C(v25, v30, v26);
        }
        ++v23;
        v24 += 8;
      }
      while ( v23 < 8 );
      for ( m = (signed __int64 *)v30[7]; m != v30 + 7; m = (signed __int64 *)*m )
      {
        if ( EtwEventEnabled(qword_140C15FA8, &stru_1400382C8) )
          sub_1409E0734(v28, m);
      }
      if ( v5 )
      {
        v30[52] = 0LL;
        ExReleasePushLockEx((ULONG_PTR)(v30 + 51), 0LL);
        sub_1402F9540((__int64)KeGetCurrentThread());
        v5 = 0;
      }
    }
  }
}
