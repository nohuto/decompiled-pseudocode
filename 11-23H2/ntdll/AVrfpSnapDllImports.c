/*
 * XREFs of AVrfpSnapDllImports @ 0x1800E6B30
 * Callers:
 *     AVrfpDllLoadNotificationInternal @ 0x1800E5F84 (AVrfpDllLoadNotificationInternal.c)
 * Callees:
 *     LdrpPrepareImportAddressTableForSnap @ 0x18002B270 (LdrpPrepareImportAddressTableForSnap.c)
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     ZwProtectVirtualMemory @ 0x1800A18B0 (ZwProtectVirtualMemory.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x18010B7F0 (RtlGuardGrantSuppressedCallAccess.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

int __fastcall AVrfpSnapDllImports(__int64 a1)
{
  int result; // eax
  _QWORD *v3; // rbx
  ULONG_PTR v4; // rax
  __int64 v5; // r13
  __int64 *v6; // rdi
  __int64 *v7; // rax
  int v8; // r15d
  _QWORD *v9; // rbp
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // r12
  _QWORD *v13; // rsi
  __int64 v14; // rax
  __int64 *v15; // [rsp+30h] [rbp-128h]
  _QWORD *v16; // [rsp+38h] [rbp-120h]
  _BYTE v17[56]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v18; // [rsp+78h] [rbp-E0h]
  PVOID BaseAddress; // [rsp+B0h] [rbp-A8h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+B8h] [rbp-A0h] BYREF
  ULONG NewProtect; // [rsp+D0h] [rbp-88h]
  char v23; // [rsp+168h] [rbp+10h] BYREF
  ULONG OldProtect; // [rsp+170h] [rbp+18h] BYREF
  __int64 v25; // [rsp+178h] [rbp+20h]

  if ( !AVrfpEnabled )
    return -1073741790;
  memset_thunk_772440563353939046(v17, 0, 0xC8uLL);
  v18 = a1;
  result = LdrpPrepareImportAddressTableForSnap((__int64)v17);
  if ( result >= 0 )
  {
    v3 = BaseAddress;
    if ( BaseAddress )
    {
      v4 = RegionSize[0] >> 3;
      if ( (unsigned int)(RegionSize[0] >> 3) )
      {
        v5 = (unsigned int)v4;
        v25 = (unsigned int)v4;
        do
        {
          if ( *v3 )
          {
            v6 = (__int64 *)AVrfpVerifierProvidersList;
            if ( (__int64 *)AVrfpVerifierProvidersList != &AVrfpVerifierProvidersList )
            {
              do
              {
                v7 = v6;
                v8 = 0;
                v6 = (__int64 *)*v6;
                v15 = v7;
                v9 = (_QWORD *)v7[5];
                v16 = v9;
                if ( *v9 )
                {
                  v10 = (_QWORD *)v7[5];
                  do
                  {
                    v11 = (_QWORD *)v10[3];
                    LODWORD(v12) = 0;
                    if ( *v11 )
                    {
                      v13 = (_QWORD *)v10[3];
                      do
                      {
                        if ( *v3 == v13[1] )
                        {
                          RtlGuardGrantSuppressedCallAccess(*v3, 1LL, &v23);
                          v14 = v13[2];
                          if ( !v14 )
                          {
                            DbgPrint("AVRF: internal error: New thunk for %s is null. \n", (const char *)*v13);
                            __debugbreak();
                          }
                          *v3 = v14;
                          if ( (AVrfpDebug & 1) != 0 )
                            DbgPrint(
                              "AVRF: Snapped (%ws: %s) with (%ws: %p). \n",
                              *(_QWORD *)(a1 + 96),
                              *v13,
                              v15[3],
                              v13[2]);
                        }
                        v12 = (unsigned int)(v12 + 1);
                        v13 = &v11[3 * v12];
                      }
                      while ( *v13 );
                      v9 = v16;
                    }
                    v10 = &v9[4 * (unsigned int)++v8];
                  }
                  while ( *v10 );
                }
              }
              while ( v6 != &AVrfpVerifierProvidersList );
              v5 = v25;
            }
          }
          ++v3;
          v25 = --v5;
        }
        while ( v5 );
      }
      return ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, RegionSize, NewProtect, &OldProtect);
    }
    else
    {
      return 0;
    }
  }
  return result;
}
