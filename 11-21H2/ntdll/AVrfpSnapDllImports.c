/*
 * XREFs of AVrfpSnapDllImports @ 0x1800E6998
 * Callers:
 *     AVrfpDllLoadNotificationInternal @ 0x1800E5DC4 (AVrfpDllLoadNotificationInternal.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180034354 (LdrpPrepareImportAddressTableForSnap.c)
 *     ZwProtectVirtualMemory @ 0x1800A4A70 (ZwProtectVirtualMemory.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x18010A1C0 (RtlGuardGrantSuppressedCallAccess.c)
 */

int __fastcall AVrfpSnapDllImports(__int64 a1)
{
  __int64 v1; // r14
  int result; // eax
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 *v7; // rdi
  __int64 *v8; // rax
  int v9; // r15d
  _QWORD *v10; // rbp
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  __int64 v13; // r12
  _QWORD *v14; // rax
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 *v17; // [rsp+30h] [rbp-128h]
  _QWORD *v18; // [rsp+38h] [rbp-120h]
  _QWORD v19[35]; // [rsp+40h] [rbp-118h] BYREF
  char v21; // [rsp+168h] [rbp+10h] BYREF
  ULONG OldProtect; // [rsp+170h] [rbp+18h] BYREF
  __int64 v23; // [rsp+178h] [rbp+20h]

  v1 = 0LL;
  if ( !AVrfpEnabled )
    return -1073741790;
  memset(v19, 0, 0xC8uLL);
  v19[7] = a1;
  result = LdrpPrepareImportAddressTableForSnap((__int64)v19);
  if ( result >= 0 )
  {
    v4 = (_QWORD *)v19[14];
    if ( v19[14] )
    {
      v5 = v19[15] >> 3;
      if ( (unsigned int)(v19[15] >> 3) )
      {
        v6 = (unsigned int)v5;
        v23 = (unsigned int)v5;
        do
        {
          if ( *v4 )
          {
            v7 = (__int64 *)AVrfpVerifierProvidersList;
            if ( (__int64 *)AVrfpVerifierProvidersList != &AVrfpVerifierProvidersList )
            {
              do
              {
                v8 = v7;
                v9 = 0;
                v7 = (__int64 *)*v7;
                v17 = v8;
                v10 = (_QWORD *)v8[5];
                v18 = v10;
                if ( *v10 )
                {
                  v11 = (_QWORD *)v8[5];
                  do
                  {
                    v12 = (_QWORD *)v11[3];
                    LODWORD(v13) = 0;
                    if ( *v12 )
                    {
                      v14 = (_QWORD *)v11[3];
                      do
                      {
                        if ( *v4 == v14[1] )
                        {
                          RtlGuardGrantSuppressedCallAccess(*v4, 1LL, &v21);
                          v15 = 3 * v1;
                          v16 = v12[v15 + 2];
                          if ( !v16 )
                          {
                            DbgPrint("AVRF: internal error: New thunk for %s is null. \n", (const char *)v12[v15]);
                            __debugbreak();
                          }
                          *v4 = v16;
                          if ( (AVrfpDebug & 1) != 0 )
                            DbgPrint(
                              "AVRF: Snapped (%ws: %s) with (%ws: %p). \n",
                              *(_QWORD *)(a1 + 96),
                              v12[v15],
                              v17[3],
                              v12[v15 + 2]);
                        }
                        v13 = (unsigned int)(v13 + 1);
                        v1 = (unsigned int)v13;
                        v14 = &v12[3 * v13];
                      }
                      while ( *v14 );
                      v10 = v18;
                      v1 = 0LL;
                    }
                    v11 = &v10[4 * (unsigned int)++v9];
                  }
                  while ( *v11 );
                }
              }
              while ( v7 != &AVrfpVerifierProvidersList );
              v6 = v23;
            }
          }
          ++v4;
          v23 = --v6;
        }
        while ( v6 );
      }
      return ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&v19[14], &v19[15], v19[18], &OldProtect);
    }
    else
    {
      return 0;
    }
  }
  return result;
}
