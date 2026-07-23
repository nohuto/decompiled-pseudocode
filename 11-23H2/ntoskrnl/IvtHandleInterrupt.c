/*
 * XREFs of IvtHandleInterrupt @ 0x14052D350
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuGetNextTranslatedDevice @ 0x14040FB9C (HalpIommuGetNextTranslatedDevice.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

char __fastcall IvtHandleInterrupt(ULONG_PTR BugCheckParameter2)
{
  char v1; // r11
  __int64 v3; // r9
  ULONG_PTR v4; // rcx
  unsigned int v5; // edi
  unsigned int v6; // r10d
  __int64 v7; // r8
  __int64 v8; // rdx
  ULONG_PTR v9; // r14
  ULONG_PTR BugCheckParameter4; // rsi
  signed __int32 v12[8]; // [rsp+0h] [rbp-30h] BYREF

  v1 = 0;
  v3 = *(_QWORD *)(BugCheckParameter2 + 8);
  if ( *(_BYTE *)(BugCheckParameter2 + 316) && (*(_DWORD *)(v3 + 220) & 1) != 0 )
  {
    v1 = 1;
    *(_DWORD *)(v3 + 220) = 1;
    _InterlockedOr(v12, 0);
  }
  v4 = *(unsigned int *)(v3 + 52);
  if ( *(_BYTE *)(BugCheckParameter2 + 320) && (v4 & 0x71) != 0 )
    KeBugCheckEx(
      0x5Cu,
      0x502uLL,
      BugCheckParameter2,
      v4,
      *(_QWORD *)(v3
                + 16
                * (((*(_QWORD *)(BugCheckParameter2 + 216) >> 24) & 0x3FFLL)
                 + BYTE1(v4) % ((unsigned int)*(unsigned __int8 *)(BugCheckParameter2 + 221) + 1))));
  if ( (v4 & 2) != 0 && (_DWORD)v4 != -1 )
  {
    v5 = *(unsigned __int8 *)(BugCheckParameter2 + 221) + 1;
    v6 = 0;
    v7 = v3 + 16 * ((*(_QWORD *)(BugCheckParameter2 + 216) >> 24) & 0x3FFLL);
    if ( *(unsigned __int8 *)(BugCheckParameter2 + 221) != -1 )
    {
      do
      {
        v8 = *(_QWORD *)(v7 + 16LL * ((v6 + BYTE1(v4)) % v5) + 8);
        if ( v8 >= 0 )
          break;
        v9 = *(_QWORD *)(v7 + 16LL * ((v6 + BYTE1(v4)) % v5)) >> 12;
        BugCheckParameter4 = BYTE4(v8);
        if ( (unsigned int)BYTE4(v8) - 32 > 8 || *(_BYTE *)(BugCheckParameter2 + 320) && BYTE4(v8) != 37 )
        {
          if ( (int)HalpIommuGetNextTranslatedDevice() >= 0 )
            HalpIommuGetNextTranslatedDevice();
          KeBugCheckEx(0xE6u, 0x26uLL, 0LL, v9, BugCheckParameter4);
        }
        *(_QWORD *)(v7 + 16LL * ((v6 + BYTE1(v4)) % v5) + 8) = v8;
        _InterlockedOr(v12, 0);
        ++v6;
      }
      while ( v6 < v5 );
    }
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 52LL) = v4 | 1;
    _InterlockedOr(v12, 0);
  }
  return v1;
}
