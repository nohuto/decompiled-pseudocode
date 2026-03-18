/*
 * XREFs of xxxGetScrollBarInfo @ 0x1C0064F60
 * Callers:
 *     NtUserGetScrollBarInfo @ 0x1C0064D00 (NtUserGetScrollBarInfo.c)
 *     xxxSBWndProc @ 0x1C02420E0 (xxxSBWndProc.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     unsafe_cast_fnid_or_class_to_PSBWND @ 0x1C0065180 (unsafe_cast_fnid_or_class_to_PSBWND.c)
 *     GetWndSBDisableFlags @ 0x1C0065218 (GetWndSBDisableFlags.c)
 *     CalcSBStuff @ 0x1C0065248 (CalcSBStuff.c)
 *     CalcSBStuff2 @ 0x1C0065364 (CalcSBStuff2.c)
 *     GetRect @ 0x1C00688B4 (GetRect.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall xxxGetScrollBarInfo(unsigned __int64 *BugCheckParameter2, int a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned int v9; // r13d
  bool v10; // zf
  unsigned __int64 v11; // rcx
  int v12; // r15d
  int v13; // r9d
  int v14; // r8d
  int v15; // r10d
  int v16; // edx
  unsigned __int64 v17; // rcx
  char v18; // al
  unsigned __int64 v20; // rax
  _DWORD *v21; // rax
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // r8d
  int v26; // r8d
  __int128 v27; // [rsp+58h] [rbp-19h] BYREF
  _DWORD v28[16]; // [rsp+68h] [rbp-9h] BYREF

  memset(v28, 0, sizeof(v28));
  if ( *(_DWORD *)a3 == 60 )
  {
    v6 = unsafe_cast_fnid_or_class_to_PSBWND(BugCheckParameter2);
    v7 = v6;
    if ( a2 == -4 && !v6 )
    {
      _InterlockedAdd(&glSendMessage, 1u);
      return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0xEBu, 0LL, a3, 0, 0, 0LL, 1, 1);
    }
    *(_OWORD *)(a3 + 36) = 0LL;
    *(_QWORD *)(a3 + 52) = 0LL;
    switch ( a2 )
    {
      case -4:
        v12 = *(_DWORD *)(v6 + 12);
        v9 = *(_DWORD *)(v6 + 8);
        v27 = 0LL;
        GetRect(BugCheckParameter2, &v27, 17LL);
        CalcSBStuff2(v28, &v27, v7 + 16, *(unsigned int *)(v7 + 8));
        goto LABEL_14;
      case -5:
        v8 = BugCheckParameter2[5];
        v9 = 1;
        if ( (*(_BYTE *)(v8 + 30) & 0x20) != 0 )
        {
          v10 = (*(_BYTE *)(v8 + 16) & 2) == 0;
          goto LABEL_7;
        }
        goto LABEL_11;
      case -6:
        v9 = 0;
        v11 = BugCheckParameter2[5];
        if ( (*(_BYTE *)(v11 + 30) & 0x10) != 0 )
        {
          v10 = (*(_BYTE *)(v11 + 16) & 4) == 0;
LABEL_7:
          if ( v10 )
            *(_DWORD *)(a3 + 36) |= 0x10000u;
LABEL_12:
          if ( (*(_DWORD *)(a3 + 36) & 0x8000) != 0 )
            return 1LL;
          LOBYTE(v12) = GetWndSBDisableFlags(BugCheckParameter2, v9, 0x10000LL);
          if ( (*(_DWORD *)(a3 + 36) & 0x10000) == 0 )
          {
            CalcSBStuff(BugCheckParameter2, v28, v9);
            v20 = BugCheckParameter2[5];
            if ( (*(_BYTE *)(v20 + 26) & 0x40) != 0 )
            {
              v26 = *(_DWORD *)(v20 + 96) - *(_DWORD *)(v20 + 88);
              if ( !v9 )
              {
                v13 = v28[6];
                v16 = v26 - v28[5];
                v15 = v26 - v28[4];
                v14 = v28[7];
                goto LABEL_16;
              }
              v13 = v26 - v28[7];
              v14 = v26 - v28[6];
LABEL_15:
              v15 = v28[5];
              v16 = v28[4];
LABEL_16:
              if ( (v12 & 1) != 0 )
              {
                *(_DWORD *)(a3 + 40) |= 1u;
                *(_DWORD *)(a3 + 44) |= 1u;
              }
              if ( (v12 & 2) != 0 )
              {
                *(_DWORD *)(a3 + 56) |= 1u;
                *(_DWORD *)(a3 + 52) |= 1u;
              }
              if ( (v12 & 3) == 3 )
                *(_DWORD *)(a3 + 36) |= 1u;
              v17 = BugCheckParameter2[5];
              v18 = *(_BYTE *)(v17 + 22);
              if ( (v18 & 0x10) != 0 && (a2 != -5 || (v18 & 0x20) != 0) )
              {
                if ( (v18 & 1) != 0 )
                {
                  *(_DWORD *)(a3 + 40) |= 8u;
                  v17 = BugCheckParameter2[5];
                }
                if ( (*(_BYTE *)(v17 + 22) & 2) != 0 )
                {
                  *(_DWORD *)(a3 + 44) |= 8u;
                  v17 = BugCheckParameter2[5];
                }
                if ( (*(_BYTE *)(v17 + 22) & 4) != 0 )
                {
                  *(_DWORD *)(a3 + 52) |= 8u;
                  v17 = BugCheckParameter2[5];
                }
                if ( (*(_BYTE *)(v17 + 22) & 8) != 0 )
                  *(_DWORD *)(a3 + 56) |= 8u;
              }
              if ( (*(_DWORD *)(a3 + 36) & 0x10000) == 0 )
              {
                if ( v9 )
                {
                  *(_DWORD *)(a3 + 4) = v13;
                  *(_DWORD *)(a3 + 8) = v16;
                  *(_DWORD *)(a3 + 12) = v14;
                  *(_DWORD *)(a3 + 16) = v15;
                }
                else
                {
                  *(_DWORD *)(a3 + 4) = v16;
                  *(_DWORD *)(a3 + 8) = v13;
                  *(_DWORD *)(a3 + 12) = v15;
                  *(_DWORD *)(a3 + 16) = v14;
                }
                v21 = (_DWORD *)BugCheckParameter2[5];
                if ( a2 == -4 )
                {
                  v22 = v21[27];
                  v23 = v21[26];
                }
                else
                {
                  v22 = v21[23];
                  v23 = v21[22];
                }
                *(_DWORD *)(a3 + 4) += v23;
                *(_DWORD *)(a3 + 12) += v23;
                *(_DWORD *)(a3 + 16) += v22;
                *(_DWORD *)(a3 + 8) += v22;
                v24 = v28[9];
                v25 = v28[12];
                *(_DWORD *)(a3 + 20) = v28[9] - v16;
                *(_DWORD *)(a3 + 24) = v28[13] - v16;
                *(_DWORD *)(a3 + 28) = v25 - v16;
                if ( v28[13] == v24 )
                  *(_DWORD *)(a3 + 44) |= 0x8000u;
                if ( v25 == v28[10] )
                  *(_DWORD *)(a3 + 52) |= 0x8000u;
              }
              return 1LL;
            }
          }
LABEL_14:
          v13 = v28[6];
          v14 = v28[7];
          goto LABEL_15;
        }
LABEL_11:
        *(_DWORD *)(a3 + 36) |= 0x8000u;
        goto LABEL_12;
    }
  }
  UserSetLastError(87LL);
  return 0LL;
}
