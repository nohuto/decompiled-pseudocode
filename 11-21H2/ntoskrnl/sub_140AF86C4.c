/*
 * XREFs of sub_140AF86C4 @ 0x140AF86C4
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     PoFxActivateComponent @ 0x140357D10 (PoFxActivateComponent.c)
 *     PoFxStartDevicePowerManagement @ 0x1403B9A30 (PoFxStartDevicePowerManagement.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PoFxRegisterCoreDevice @ 0x140823860 (PoFxRegisterCoreDevice.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void sub_140AF86C4()
{
  wchar_t *v0; // rsi
  unsigned int *Pool2; // rdi
  unsigned int v2; // r12d
  _DWORD *v3; // rbx
  unsigned int i; // r15d
  WCHAR *v5; // rdx
  ULONG_PTR v6; // r14
  int v7; // eax
  int v8; // ecx
  ULONG_PTR v9; // r14
  wchar_t *v10; // rax
  __int64 v11; // [rsp+28h] [rbp-E0h]
  __int64 v12; // [rsp+30h] [rbp-D8h]
  __int64 v13; // [rsp+38h] [rbp-D0h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B8h] BYREF
  __int64 DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v17[10]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v18; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v19; // [rsp+D8h] [rbp-30h]
  WCHAR SourceString[24]; // [rsp+E0h] [rbp-28h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  memset(v17, 0, sizeof(v17));
  BugCheckParameter2 = 0LL;
  v0 = 0LL;
  DestinationString_8 = 0LL;
  if ( (unsigned int)sub_14042A5E0(33LL, 0LL) == -2147483643 )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(64LL, 0LL, 0x4D584650u);
    if ( Pool2 )
    {
      if ( (int)sub_14042A5E0(33LL, 0LL) >= 0 )
      {
        v2 = 0;
        v3 = Pool2 + 1;
        for ( i = 0; i < *Pool2; ++i )
        {
          v3 = (_DWORD *)((char *)v3 + v2);
          v2 = v3[1];
          if ( *v3 == 1 )
          {
            v8 = v3[2];
            if ( v8 )
            {
              if ( *((_BYTE *)KeGetCurrentPrcb() + 141) == 2 )
              {
                v9 = (unsigned int)(2 * v8 + 22);
                v10 = (wchar_t *)ExAllocatePool2(64LL, v9, 0x4D584650u);
                v0 = v10;
                if ( !v10 )
                  break;
                sub_1402E1280(v10, (unsigned int)v9, L"ACPI\\DEBUG%ws", v3 + 3);
                v5 = v0;
              }
              else
              {
                v5 = (WCHAR *)(v3 + 3);
              }
              goto LABEL_8;
            }
          }
          else if ( !*v3 )
          {
            LODWORD(v13) = (v3[4] >> 5) & 7;
            LODWORD(v12) = v3[4] & 0x1F;
            LODWORD(v11) = v3[3];
            sub_1402E1280(
              SourceString,
              0x30uLL,
              L"PCI_DEBUG_%04X_%02X_%02X_%02X",
              *((unsigned __int16 *)v3 + 4),
              v11,
              v12,
              v13);
            v5 = SourceString;
LABEL_8:
            RtlInitUnicodeString(&DestinationString_8, v5);
            v19 = 0LL;
            v18 = 0LL;
            memset(v17, 0, sizeof(v17));
            v17[0] = 0x100000001LL;
            v17[9] = &v18;
            v17[3] = sub_1405D9310;
            LODWORD(v17[8]) = 1;
            if ( (int)PoFxRegisterCoreDevice((__int64)&DestinationString_8, (__int64)v17, &BugCheckParameter2) < 0 )
              break;
            v6 = BugCheckParameter2;
            v7 = *(_DWORD *)(BugCheckParameter2 + 824) | 2;
            DestinationString = 0LL;
            *(_DWORD *)(BugCheckParameter2 + 824) = v7;
            if ( *(_QWORD *)(v6 + 64) )
            {
              DestinationString = *(_QWORD *)(v6 + 72);
              sub_14042A5E0(21LL, &DestinationString);
            }
            PoFxActivateComponent(v6, 0LL, 1);
            PoFxStartDevicePowerManagement(v6);
          }
        }
      }
      ExFreePoolWithTag(Pool2, 0x4D584650u);
      if ( v0 )
        ExFreePoolWithTag(v0, 0x4D584650u);
    }
  }
}
