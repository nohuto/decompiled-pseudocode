/*
 * XREFs of AVrfpDllUnloadNotificationInternal @ 0x1800E6060
 * Callers:
 *     AVrfDllUnloadNotification @ 0x1800E5040 (AVrfDllUnloadNotification.c)
 * Callees:
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     _wcsicmp @ 0x180090EB0 (_wcsicmp.c)
 */

__int64 __fastcall AVrfpDllUnloadNotificationInternal(__int64 a1)
{
  __int64 *v2; // rdi
  _QWORD *v3; // rsi
  int v4; // r14d
  _QWORD *v5; // rbx
  _QWORD *v6; // r9
  char v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // r11
  unsigned __int64 v10; // r10
  _QWORD *v11; // rax

  if ( AVrfpEnabled )
  {
    v2 = (__int64 *)AVrfpVerifierProvidersList;
    while ( v2 != &AVrfpVerifierProvidersList )
    {
      v3 = (_QWORD *)v2[5];
      v4 = 0;
      v2 = (__int64 *)*v2;
      if ( *v3 )
      {
        v5 = v3;
        do
        {
          if ( (v5[1] & 1) != 0 && !wcsicmp(*(const wchar_t **)(a1 + 96), (const wchar_t *)*v5) )
          {
            if ( (AVrfpDebug & 4) != 0 )
              DbgPrint(
                "AVRF: pid 0x%X: found dll descriptor for `%ws' with verified exports \n",
                LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
                *(_QWORD *)(a1 + 96));
            v6 = (_QWORD *)v5[3];
            v7 = 0;
            v8 = *(_QWORD *)(a1 + 48);
            LODWORD(v9) = 0;
            v10 = v8 + *(unsigned int *)(a1 + 64);
            if ( *v6 )
            {
              v11 = (_QWORD *)v5[3];
              do
              {
                if ( v11[1] >= v8 && v11[1] < v10 )
                {
                  v11[1] = 0LL;
                  v7 = 1;
                  v8 = *(_QWORD *)(a1 + 48);
                }
                v9 = (unsigned int)(v9 + 1);
                v11 = &v6[3 * v9];
              }
              while ( *v11 );
              if ( v7 )
                *((_DWORD *)v5 + 2) &= ~1u;
            }
          }
          v5 = &v3[4 * (unsigned int)++v4];
        }
        while ( *v5 );
      }
    }
  }
  return 0LL;
}
