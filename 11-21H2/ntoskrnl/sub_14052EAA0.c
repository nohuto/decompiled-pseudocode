/*
 * XREFs of sub_14052EAA0 @ 0x14052EAA0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402DA448 @ 0x1402DA448 (sub_1402DA448.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall sub_14052EAA0(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rdx
  char v2; // r10
  unsigned int v4; // ecx
  unsigned int v5; // r9d
  __int64 v6; // r8
  unsigned int v7; // r11d
  __int64 v8; // rdi
  ULONG_PTR v9; // r14
  __int64 v10; // r15
  ULONG_PTR BugCheckParameter4; // rbp
  char v13; // si
  __int64 *v14; // rcx
  ULONG_PTR v15; // rdi
  __int64 v16; // r8
  signed __int32 v17[8]; // [rsp+0h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 8);
  v2 = 0;
  if ( *(_BYTE *)(BugCheckParameter2 + 316) && (*(_DWORD *)(v1 + 220) & 1) != 0 )
  {
    v2 = 1;
    *(_DWORD *)(v1 + 220) = 1;
    _InterlockedOr(v17, 0);
  }
  v4 = *(_DWORD *)(v1 + 52);
  if ( *(_BYTE *)(BugCheckParameter2 + 320) && (v4 & 0x10) != 0 )
    KeBugCheckEx(0x5Cu, 0x502uLL, BugCheckParameter2, v4, 0LL);
  if ( (v4 & 2) != 0 && v4 != -1 )
  {
    v5 = 0;
    v6 = v1 + 16 * ((*(_QWORD *)(BugCheckParameter2 + 216) >> 24) & 0x3FFLL);
    v7 = *(unsigned __int8 *)(BugCheckParameter2 + 221) + 1;
    if ( *(unsigned __int8 *)(BugCheckParameter2 + 221) != -1 )
    {
      do
      {
        v8 = *(_QWORD *)(v6 + 16LL * ((v5 + BYTE1(v4)) % v7) + 8);
        if ( v8 >= 0 )
          break;
        v9 = *(_QWORD *)(v6 + 16LL * ((v5 + BYTE1(v4)) % v7)) >> 12;
        v10 = (unsigned __int16)v8;
        BugCheckParameter4 = BYTE4(v8);
        if ( *(_BYTE *)(BugCheckParameter2 + 320) || (unsigned int)BYTE4(v8) - 32 > 8 )
        {
          v13 = 0;
          v14 = 0LL;
          v15 = 0LL;
          while ( 1 )
          {
            if ( !v14 )
            {
              if ( !sub_1402DA448((volatile signed __int32 *)&qword_140C4E2F0) )
              {
                if ( v13 )
LABEL_30:
                  KeReleaseSpinLockFromDpcLevel(&qword_140C4E2F0);
                KeBugCheckEx(0xE6u, 0x26uLL, v15, v9, BugCheckParameter4);
              }
              v14 = &qword_140C4E2E0;
            }
            v14 = (__int64 *)*v14;
            if ( v14 == &qword_140C4E2E0 )
            {
              v15 = 0LL;
              goto LABEL_30;
            }
            v13 = 1;
            v16 = v14[9];
            v15 = v14[8];
            if ( !v15 )
              goto LABEL_30;
            if ( v16 && *(_DWORD *)v16 == 1 )
            {
              if ( *(unsigned __int16 *)(v16 + 12) == v10
                && *(unsigned __int16 *)(v16 + 8) == *(_DWORD *)(BugCheckParameter2 + 252) )
              {
                goto LABEL_30;
              }
              v15 = v14[8];
            }
          }
        }
        *(_QWORD *)(v6 + 16LL * ((v5 + BYTE1(v4)) % v7) + 8) = v8;
        _InterlockedOr(v17, 0);
        ++v5;
      }
      while ( v5 < v7 );
    }
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 52LL) = v4 | 1;
    _InterlockedOr(v17, 0);
  }
  return v2;
}
